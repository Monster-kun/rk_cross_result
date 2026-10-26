import os

from ament_index_python.packages import get_package_share_directory
from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument, GroupAction, IncludeLaunchDescription, OpaqueFunction
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch.substitutions import LaunchConfiguration, PythonExpression
from launch_ros.actions import LoadComposableNodes, Node
from launch_ros.descriptions import ComposableNode
from launch_ros.parameter_descriptions import ParameterValue


def generate_launch_description():
    return LaunchDescription([
        DeclareLaunchArgument('container_name', default_value='robot_container'),
        DeclareLaunchArgument('simulation', default_value='True'),
        DeclareLaunchArgument('simulation_localization', default_value='fake', choices=['fake', 'backend']),
        DeclareLaunchArgument('localization_method', default_value='msf', choices=['msf', 'super_lio']),
        DeclareLaunchArgument('map_name', default_value='sim_street'),
        DeclareLaunchArgument('maps_root', default_value=''),
        DeclareLaunchArgument('relocation_mode', default_value='auto', choices=['auto', 'manual']),
        DeclareLaunchArgument('relocation_auto_method', default_value='sc', choices=['sc', 'btc', 'bbs3d']),
        DeclareLaunchArgument('relocation_max_auto_attempts', default_value='5'),
        DeclareLaunchArgument('relocation_retry_interval_sec', default_value='1.0'),
        DeclareLaunchArgument('relocation_request_timeout_sec', default_value='45.0'),
        DeclareLaunchArgument('relocation_initialization_timeout_sec', default_value='30.0'),
        DeclareLaunchArgument(
            'super_lio_extrinsics', default_value=os.path.join(
                get_package_share_directory('super_lio_localization'), 'config', 'super_lio_extrinsics.yaml')),
        DeclareLaunchArgument(
            'start_task_manager', default_value='True',
            description='Start the legacy topic-to-action task manager'),
        DeclareLaunchArgument(
            'allow_legacy_goal_topic', default_value='True',
            description='Allow BT plugins to update goals from legacy topics'),
        OpaqueFunction(function=_navigation),
    ])


def _navigation(context):
    container_name = LaunchConfiguration('container_name')
    simulation = LaunchConfiguration('simulation')
    localization_method = LaunchConfiguration('localization_method')
    map_name = LaunchConfiguration('map_name')
    maps_root = LaunchConfiguration('maps_root')
    super_lio_extrinsics = LaunchConfiguration('super_lio_extrinsics')
    allow_legacy_goal_topic = LaunchConfiguration('allow_legacy_goal_topic')
    start_task_manager = LaunchConfiguration('start_task_manager').perform(context).lower() in ('true', '1')

    launcher = get_package_share_directory('launcher')
    local_planner_settings = os.path.join(launcher, 'config', 'local_planner_settings.yaml')
    local_planner_sim_settings = os.path.join(get_package_share_directory('launcher'), 'config', 'local_planner_sim_settings.yaml')
    local_planner_overrides = PythonExpression([
        "'", local_planner_sim_settings, "' if '", simulation,
        "'.lower() in ('true', '1') else '", local_planner_settings, "'",
    ])
    global_planner_settings = os.path.join(launcher, 'config', 'global_planner_settings.yaml')
    lanelet2_map_settings = os.path.join(launcher, 'config', 'lanelet2_map_loader_settings.yaml')
    collision_monitor_settings = os.path.join(launcher, 'config', 'collision_monitor_settings.yaml')
    task_manager_settings = os.path.join(launcher, 'config', 'task_manager_settings.yaml')
    bt_navigator_settings = os.path.join(launcher, 'config', 'bt_navigator_settings.yaml')
    perception_settings = os.path.join(launcher, 'config', 'perception_settings.yaml')

    lifecycle_nodes = [
        'collision_monitor',
        'bt_navigator',
        'global_planner_server',
        'local_planner_server',
    ]
    if start_task_manager:
        lifecycle_nodes.insert(0, 'task_manager')

    actions = [
        IncludeLaunchDescription(
            PythonLaunchDescriptionSource(
                os.path.join(launcher, 'launch', 'bringup_slam.launch.py')),
            launch_arguments={
                'container_name': container_name,
                'simulation': simulation,
                'simulation_localization': LaunchConfiguration('simulation_localization'),
                'localization_method': localization_method,
                'map_name': map_name,
                'maps_root': maps_root,
                'super_lio_extrinsics': super_lio_extrinsics,
                **{'relocation_' + name: LaunchConfiguration('relocation_' + name)
                   for name in (
                       'mode', 'auto_method', 'max_auto_attempts', 'retry_interval_sec',
                       'request_timeout_sec', 'initialization_timeout_sec',
                   )},
            }.items(),
        ),
        LoadComposableNodes(
            target_container=container_name,
            composable_node_descriptions=[
                ComposableNode(
                    package='lanelet2_map_loader',
                    plugin='Lanelet2MapLoaderNode',
                    name='lanelet2_map_loader',
                    parameters=[lanelet2_map_settings, {'map_name': map_name, 'maps_root': maps_root}],
                ),
                ComposableNode(
                    package='lanelet2_map_loader',
                    plugin='Lanelet2MapVisualizationNode',
                    name='lanelet2_map_visualizer',
                ),
                ComposableNode(
                    package='classic_cluster',
                    plugin='classic_cluster::ClassicCluster',
                    name='classic_cluster',
                    parameters=[perception_settings],
                ),
            ],
        ),
    ]

    if start_task_manager:
        actions.append(Node(
            package='task_manager',
            executable='tm_node',
            name='task_manager',
            parameters=[task_manager_settings],
        ))

    actions.extend([
        Node(
            package='collision_monitor',
            executable='cm_node',
            name='collision_monitor',
            parameters=[collision_monitor_settings],
        ),
        Node(
            package='bt_navigator',
            executable='btn_node',
            name='bt_navigator',
            parameters=[bt_navigator_settings, {
                'allow_legacy_goal_topic': ParameterValue(
                    allow_legacy_goal_topic, value_type=bool),
            }],
        ),
        Node(
            package='global_planner_server',
            executable='gp_server',
            name='global_planner_server',
            parameters=[global_planner_settings],
        ),
        Node(
            package='local_planner_server',
            executable='lp_server',
            name='local_planner_server',
            prefix=['xterm -e gdb -ex run --args'],
            parameters=[local_planner_settings, local_planner_overrides],
            output='screen',
        ),
        Node(
            package='lifecycle_manager',
            executable='lm_node',
            name='lifecycle_manager',
            parameters=[{
                'autostart': LaunchConfiguration('autostart', default='True'),
                'node_names': lifecycle_nodes,
            }],
        ),
    ])

    return [GroupAction(actions=actions)]
