import math
import os

from ament_index_python.packages import get_package_share_directory
from launch import LaunchDescription
from launch.conditions import IfCondition, UnlessCondition
from launch.actions import DeclareLaunchArgument, IncludeLaunchDescription, OpaqueFunction
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch.substitutions import LaunchConfiguration, PythonExpression, PathJoinSubstitution
from launch_ros.actions import LoadComposableNodes, Node
from launch_ros.descriptions import ComposableNode

def generate_launch_description():
    return LaunchDescription([
        DeclareLaunchArgument('container_name', default_value='robot_container'),
        DeclareLaunchArgument('simulation', default_value='True'),
        DeclareLaunchArgument('simulation_localization', default_value='fake',
                              choices=['fake', 'backend'],
                              description='Use Gazebo ground truth or the selected localization backend in simulation'),
        DeclareLaunchArgument('localization_method', default_value='msf',
                              choices=['msf', 'super_lio']),
        DeclareLaunchArgument('map_name', default_value='sim_street'),
        DeclareLaunchArgument('maps_root', default_value=''),
        DeclareLaunchArgument('super_lio_extrinsics', default_value=os.path.join(
            get_package_share_directory('super_lio_localization'),
            'config', 'super_lio_extrinsics.yaml')),
        DeclareLaunchArgument('relocation_mode', default_value='auto',
                              choices=['auto', 'manual']),
        DeclareLaunchArgument('relocation_auto_method', default_value='sc',
                              choices=['sc', 'btc', 'bbs3d']),
        DeclareLaunchArgument('relocation_max_auto_attempts', default_value='5'),
        DeclareLaunchArgument('relocation_retry_interval_sec', default_value='1.0'),
        DeclareLaunchArgument('relocation_request_timeout_sec', default_value='45.0'),
        DeclareLaunchArgument('relocation_initialization_timeout_sec', default_value='30.0'),
        OpaqueFunction(function=_slam),
    ])


def _relocation_parameters(context):
    mode = LaunchConfiguration('relocation_mode').perform(context)
    method = LaunchConfiguration('relocation_auto_method').perform(context)
    if mode not in ('auto', 'manual') or method not in ('sc', 'btc', 'bbs3d'):
        raise ValueError('Invalid relocation mode or automatic method')
    parameters = {
        'relocation_mode': mode,
        'relocation_method': {'sc': 0, 'btc': 1, 'bbs3d': 2}[method],
        'relocation_max_auto_attempts': int(
            LaunchConfiguration('relocation_max_auto_attempts').perform(context)),
    }
    if parameters['relocation_max_auto_attempts'] < 1:
        raise ValueError('relocation_max_auto_attempts must be positive')
    for name in ('retry_interval_sec', 'request_timeout_sec', 'initialization_timeout_sec'):
        key = 'relocation_' + name
        value = float(LaunchConfiguration(key).perform(context))
        if not math.isfinite(value) or value < 0 or (name != 'retry_interval_sec' and value == 0):
            raise ValueError(key + ' must be finite and ' +
                             ('nonnegative' if name == 'retry_interval_sec' else 'positive'))
        parameters[key] = value
    return parameters


def _slam(context):
    simulation_enabled = LaunchConfiguration('simulation').perform(context).lower() in ('true', '1')
    simulation_localization = LaunchConfiguration(
        'simulation_localization', default='fake').perform(context)
    if simulation_localization not in ('fake', 'backend'):
        raise ValueError('simulation_localization must be fake or backend')
    use_fake_localization = simulation_enabled and simulation_localization == 'fake'
    relocation_parameters = _relocation_parameters(context)

    ################## Load parameters ##################
    container_name = LaunchConfiguration('container_name', default='robot_container')
    simulation = LaunchConfiguration('simulation', default='False')
    localization_method = LaunchConfiguration('localization_method')
    map_name = LaunchConfiguration('map_name')
    maps_root = LaunchConfiguration('maps_root')

    # parameter files
    points_map_loader_settings = os.path.join(get_package_share_directory('launcher'), 'config', 'points_map_loader_settings.yaml')
    legacy_scan_settings = os.path.join(get_package_share_directory('launcher'), 'config', 'scan_convert_settings.yaml')
    msf_localizer_settings = os.path.join(get_package_share_directory('launcher'), 'config', 'msf_localizer_settings.yaml')
    super_lio_share = get_package_share_directory('super_lio_localization')
    super_lio_settings = os.path.join(super_lio_share, 'config', 'super_lio_localization.yaml')
    super_lio_input_config = PathJoinSubstitution([
        super_lio_share, 'config',
        PythonExpression(["'super_lio_simulation.yaml' if '", simulation,
                          "' in ('True', 'true', '1') else 'super_lio_scan.yaml'"])
    ])
    super_lio_extrinsics = LaunchConfiguration('super_lio_extrinsics')

    bringup_real_slam = LoadComposableNodes(
        condition=UnlessCondition(simulation),
        # condition=IfCondition(simulation),

        target_container=container_name,
        composable_node_descriptions=[
            ComposableNode(
                package='multi_localizer',
                plugin='localizer::LogWrapperNode',
                name='log_wrapper_node',
            ),
            ComposableNode(
                package='points_map_loader',
                plugin='mapping::PointsMapLoaderNode',
                name='points_map_loader_node',
                parameters=[points_map_loader_settings, {'points_map_name': map_name, 'maps_root': maps_root}],
            ),
        ],
    )          

    bringup_sim_slam = LoadComposableNodes(
        condition=IfCondition(simulation),
        target_container=container_name,
        composable_node_descriptions=[
            # Ground truth and a localization backend must not publish
            # map -> base_link at the same time.
            *([ComposableNode(
                package='fake_localization',
                plugin='localizer::FakeLocalization',
                name='fake_localization_node',
            )] if use_fake_localization else []),
            ComposableNode(
                package='points_map_loader',
                plugin='mapping::PointsMapLoaderNode',
                name='points_map_loader_node',
                parameters=[points_map_loader_settings, {'points_map_name': map_name, 'maps_root': maps_root}],
            ),

            ComposableNode(
                package='multi_localizer',
                plugin='localizer::LogWrapperNode',
                name='log_wrapper_node',
            ),

        ],
    )

    actions = [bringup_real_slam, bringup_sim_slam]
    if use_fake_localization:
        return actions

    bringup_msf = LoadComposableNodes(
        condition=IfCondition(PythonExpression(["'", localization_method, "' == 'msf'"])),
        target_container=container_name,
        composable_node_descriptions=[ComposableNode(
            package='multi_localizer',
            plugin='localizer::MSFLocalizerNode',
            name='msf_localizer_node',
            parameters=[msf_localizer_settings,
                        {'relocation_map_name': map_name, **relocation_parameters}],
        )],
    )

    bringup_scan_converter = LoadComposableNodes(
        condition=IfCondition(PythonExpression([
            "'", localization_method, "' == 'msf' or '", simulation,
            "' in ('True', 'true', '1')"])),
        target_container=container_name,
        composable_node_descriptions=[ComposableNode(
            package='multi_localizer',
            plugin='localizer::ScanConvertNode',
            name='scan_convert_node',
            parameters=[legacy_scan_settings],
        )],
    )

    bringup_super_lio = Node(
        condition=IfCondition(PythonExpression(["'", localization_method, "' == 'super_lio'"])),
        package='super_lio_localization',
        executable='super_lio_localization_node',
        name='super_lio_localization_node',
        output='screen',
        parameters=[super_lio_settings, super_lio_input_config, super_lio_extrinsics,
                    {'map_name': map_name, 'maps_root': maps_root, **relocation_parameters}],
    )

    actions.append(bringup_scan_converter)
    if relocation_parameters['relocation_mode'] == 'auto':
        # Global search must not block the MSF sensor, timeout or RViz callbacks
        # in the navigation container. The existing service launch owns a
        # separate process and is also available to both simulation backends.
        actions.append(IncludeLaunchDescription(
            PythonLaunchDescriptionSource(os.path.join(
                get_package_share_directory('relocation_server'),
                'launch', 'relocalizer_server.launch.py')),
            launch_arguments={'maps_root': maps_root}.items(),
        ))
    actions.extend([bringup_msf, bringup_super_lio])
    return actions
