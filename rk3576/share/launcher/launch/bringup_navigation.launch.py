import os

from ament_index_python.packages import get_package_share_directory
from launch import LaunchDescription
from launch.actions import IncludeLaunchDescription, DeclareLaunchArgument, GroupAction, OpaqueFunction
from launch.substitutions import LaunchConfiguration, PythonExpression
from launch_ros.parameter_descriptions import ParameterValue
from launch_ros.actions import LoadComposableNodes
from launch_ros.descriptions import ComposableNode
from launch.launch_description_sources import PythonLaunchDescriptionSource

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
        DeclareLaunchArgument('start_task_manager', default_value='True', description='Start the legacy topic-to-action task manager'),
        DeclareLaunchArgument('allow_legacy_goal_topic', default_value='True', description='Allow BT plugins to update goals from legacy topics'),
        OpaqueFunction(function=_navigation),
    ])


def _navigation(context):
    ################## Load parameters ##################
    container_name = LaunchConfiguration('container_name', default='robot_container')
    simulation = LaunchConfiguration('simulation', default='True')
    localization_method = LaunchConfiguration('localization_method')
    map_name = LaunchConfiguration('map_name')
    maps_root = LaunchConfiguration('maps_root')
    super_lio_extrinsics = LaunchConfiguration('super_lio_extrinsics')

    # parameter files
    local_planner_settings = os.path.join(get_package_share_directory('launcher'), 'config', 'local_planner_settings.yaml')
    local_planner_sim_settings = os.path.join(get_package_share_directory('launcher'), 'config', 'local_planner_sim_settings.yaml')
    local_planner_overrides = PythonExpression([
        "'", local_planner_sim_settings, "' if '", simulation,
        "'.lower() in ('true', '1') else '", local_planner_settings, "'",
    ])
    global_planner_settings = os.path.join(get_package_share_directory('launcher'), 'config', 'global_planner_settings.yaml')
    lanelet2_map_settings = os.path.join(get_package_share_directory('launcher'), 'config', 'lanelet2_map_loader_settings.yaml')
    collision_monitor_settings = os.path.join(get_package_share_directory('launcher'), 'config', 'collision_monitor_settings.yaml')
    task_manager_settings = os.path.join(get_package_share_directory('launcher'), 'config', 'task_manager_settings.yaml')
    bt_navigator_settings = os.path.join(get_package_share_directory('launcher'), 'config', 'bt_navigator_settings.yaml')
    perception_settings = os.path.join(get_package_share_directory('launcher'), 'config', 'perception_settings.yaml')

    start_task_manager = LaunchConfiguration('start_task_manager').perform(context).lower() in ('true', '1')
    lifecycle_nodes = [
        # 'collision_monitor',
        'bt_navigator',
        'global_planner_server',
        'local_planner_server']

    if start_task_manager:
        lifecycle_nodes.insert(0, 'task_manager')

    bringup_navigation = GroupAction(
        actions=[
            # launch slam
            IncludeLaunchDescription(
                PythonLaunchDescriptionSource(
                    os.path.join(get_package_share_directory('launcher'), 'launch', 'bringup_slam.launch.py')
                ),
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
                }.items()
            ),
            
            # load navigation nodes
            LoadComposableNodes(
                target_container=container_name,
                composable_node_descriptions=[
                    ComposableNode(
                        package='lanelet2_map_loader',
                        plugin='Lanelet2MapLoaderNode',
                        name='lanelet2_map_loader',
                        parameters=[lanelet2_map_settings, {'map_name': map_name, 'maps_root': maps_root}]
                    ),
                    ComposableNode(
                        package='lanelet2_map_loader',
                        plugin='Lanelet2MapVisualizationNode',
                        name='lanelet2_map_visualizer',
                    ),
                    *([ComposableNode(
                        package='task_manager',
                        plugin='task_manager::TaskManager',
                        name='task_manager',
                        parameters=[task_manager_settings],
                    )] if start_task_manager else []),
                    ComposableNode(
                        package='collision_monitor',
                        plugin='collision_monitor::CollisionMonitor',
                        name='collision_monitor',
                        parameters=[collision_monitor_settings],
                    ),
                    ComposableNode(
                        package='bt_navigator',
                        plugin='bt_navigator::BtNavigator',
                        name='bt_navigator',
                        parameters=[bt_navigator_settings, {
                            'allow_legacy_goal_topic': ParameterValue(LaunchConfiguration('allow_legacy_goal_topic'), value_type=bool),
                        }],
                    ),
                    ComposableNode(
                        package='global_planner_server',
                        plugin='global_planner_server::GlobalPlannerServer',
                        name='global_planner_server',
                        parameters=[global_planner_settings],
                    ),                           
                    ComposableNode(
                        package='local_planner_server',
                        plugin='local_planner_server::LocalPlannerServer',
                        name='local_planner_server',
                        parameters=[local_planner_settings, local_planner_overrides],
                    ),                        
                    ComposableNode(
                        package='lifecycle_manager',
                        plugin='lifecycle_manager::LifecycleManager',
                        name='lifecycle_manager',
                        parameters=[{
                            'autostart': LaunchConfiguration('autostart', default='True'),
                            'node_names': lifecycle_nodes,
                        }],
                    ),
                    # ComposableNode(
                    #     package='rog_map',
                    #     plugin='rog_map::ROGMap',
                    #     name='rog_map'
                    # ),
                    # ComposableNode(
                    #     package='yolov8_bytetrack',
                    #     plugin='yolov8_bytetrack::YoloByteTrack',
                    #     name='yolov8_bytetrack',
                    #     parameters=[perception_settings],
                    # ),
                    # ComposableNode(
                    #     package='hdl_people_tracking',
                    #     plugin='hdl_people_tracking::HdlPeopleTracking',
                    #     name='hdl_people_tracking',
                    #     parameters=[perception_settings],
                    # ),
                    # ComposableNode(
                    #     package='ekf_tracker',
                    #     plugin='ekf_tracker::TargetEKF',
                    #     name='ekf_tracker',
                    # ),
                    ComposableNode(
                        package='classic_cluster',
                        plugin='classic_cluster::ClassicCluster',
                        name='classic_cluster',
                        parameters=[perception_settings],
                    ),
                ],                    
            )
        ]
    )

    return [bringup_navigation]
