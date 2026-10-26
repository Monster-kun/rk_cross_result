import os
import yaml

from ament_index_python.packages import get_package_share_directory
from launch import LaunchDescription
from launch.conditions import IfCondition, UnlessCondition
from launch.actions import IncludeLaunchDescription,DeclareLaunchArgument,GroupAction
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch.substitutions import LaunchConfiguration, PathJoinSubstitution, EnvironmentVariable,PythonExpression
from launch_ros.actions import Node,LoadComposableNodes
from launch_ros.descriptions import ComposableNode
from launch_ros.substitutions import FindPackageShare
from launch_xml.launch_description_sources import XMLLaunchDescriptionSource

sim = os.environ.get('SIMULATION')

def generate_launch_description():
    #get the environment variable
    simulation = EnvironmentVariable("SIMULATION", default_value="True")

    localization_defaults_path = os.path.join(
        get_package_share_directory('launcher'), 'config', 'localization_settings.yaml')
    with open(localization_defaults_path, 'r', encoding='utf-8') as config_file:
        localization_defaults = yaml.safe_load(config_file) or {}
    localization_defaults = localization_defaults.get('localization', {})
    if not isinstance(localization_defaults, dict):
        raise ValueError('localization must be a YAML mapping')
    relocation_defaults = localization_defaults.get('relocation', {})
    if not isinstance(relocation_defaults, dict):
        raise ValueError('localization.relocation must be a YAML mapping')
    relocation_arguments = [
        DeclareLaunchArgument(
            'relocation_' + name,
            default_value=str(relocation_defaults.get(name, default)),
            **({'choices': ['auto', 'manual']} if name == 'mode' else
               {'choices': ['sc', 'btc', 'bbs3d']} if name == 'auto_method' else {}),
        )
        for name, default in (
            ('mode', 'auto'), ('auto_method', 'sc'), ('max_auto_attempts', 5),
            ('retry_interval_sec', 1.0), ('request_timeout_sec', 45.0),
            ('initialization_timeout_sec', 30.0),
        )
    ]
    relocation_launch_arguments = {
        'relocation_' + name: LaunchConfiguration('relocation_' + name)
        for name in (
            'mode', 'auto_method', 'max_auto_attempts', 'retry_interval_sec',
            'request_timeout_sec', 'initialization_timeout_sec',
        )
    }
    default_localization_method = localization_defaults.get('method', 'msf')
    default_map_name = localization_defaults.get('map_name', 'sim_street')
    default_maps_root = localization_defaults.get('maps_root') or os.path.join(
        get_package_share_directory('maps_folder'), 'maps')
    if default_localization_method not in ('msf', 'super_lio'):
        raise ValueError("localization.method in localization_settings.yaml must be msf or super_lio")

    # Initialize Arguments
    world = LaunchConfiguration("world")
    container_name = LaunchConfiguration("container_name")
    robot_name = LaunchConfiguration("robot_name")
    simulator = LaunchConfiguration("simulator")
    log_level = LaunchConfiguration("log_level")
    debug = LaunchConfiguration("debug")
    start_web_navigation = LaunchConfiguration("start_web_navigation")
    simulation_localization = LaunchConfiguration("simulation_localization")
    localization_method = LaunchConfiguration("localization_method")
    map_name = LaunchConfiguration("map_name")
    maps_root = LaunchConfiguration("maps_root")
    super_lio_extrinsics = LaunchConfiguration("super_lio_extrinsics")

    declared_world = DeclareLaunchArgument(
        "world", default_value="openstreet_gz.sdf", description="World file")
    declared_container_name = DeclareLaunchArgument(
        "container_name", default_value="robot_container", description="Container name")
    declared_robot_name = DeclareLaunchArgument(
        "robot_name" , default_value="swerve", description="Robot name")
    declared_simulator = DeclareLaunchArgument(
        "simulator", default_value="'simple'", description="Simulator to use. (hunav, simple)")
    declared_log_level = DeclareLaunchArgument(
        "log_level", default_value="info", description="Log level")
    declared_debug = DeclareLaunchArgument(
        "debug", default_value="False", description="Debug mode")
    declared_start_web_navigation = DeclareLaunchArgument(
        "start_web_navigation",
        default_value="True",
        description="Start the Web navigation manager and gateway",
    )
    declared_simulation_localization = DeclareLaunchArgument(
        "simulation_localization", default_value="fake", choices=['fake', 'backend'],
        description="Use Gazebo ground truth or the selected localization backend in simulation",
    )
    declared_web_host = DeclareLaunchArgument("web_host", default_value="0.0.0.0")
    declared_web_port = DeclareLaunchArgument("web_port", default_value="8080")
    declared_task_db = DeclareLaunchArgument(
        "task_db", default_value="/var/lib/nav_web/tasks.sqlite")
    declared_annotation_db = DeclareLaunchArgument(
        "annotation_db", default_value="/var/lib/nav_web/annotations.sqlite")

    # Keep the original navigation entry points enabled by default. Web mode
    # switches off both the legacy TaskManager and BT goal-topic input.
    legacy_navigation_enabled = PythonExpression([
        "'False' if '", start_web_navigation,
        "'.lower() in ('true', '1') else 'True'",
    ])
    declared_localization_method = DeclareLaunchArgument(
        "localization_method", default_value=default_localization_method, description="msf or super_lio",
        choices=['msf', 'super_lio'])
    declared_map_name = DeclareLaunchArgument('map_name', default_value=default_map_name)
    declared_maps_root = DeclareLaunchArgument('maps_root', default_value=default_maps_root)
    declared_super_lio_extrinsics = DeclareLaunchArgument(
        "super_lio_extrinsics", default_value=os.path.join(
            get_package_share_directory('super_lio_localization'), 'config', 'super_lio_extrinsics.yaml'),
        description="Super-LIO calibration YAML")

    bringup_simulation = IncludeLaunchDescription(
        condition=IfCondition(simulation),
        launch_description_source=PythonLaunchDescriptionSource(
            os.path.join(get_package_share_directory('launcher'), 'launch', 'bringup_simulation.launch.py')
        ),
        launch_arguments={
            'world': world,
            'robot_name': robot_name,
            'simulator': simulator,
        }.items(),
    )

    # bringup simulation
    bringup_navigation = GroupAction(
        actions = [
            # launch container
            Node(
                package='rclcpp_components',
                executable='component_container',
                name=container_name,
                arguments=['--ros-args', '--log-level', log_level, '--log-level','rcl:=INFO'],
                output='screen',
            ),
            # launch robot
            IncludeLaunchDescription(
                PythonLaunchDescriptionSource(
                    os.path.join(get_package_share_directory('chassis_control_bringup'), 'launch', 'janseen_robot.launch.py')
                ),
                launch_arguments={
                    'simulation': simulation,
                    'localization_method': localization_method,
                    'map_name': map_name,
                    'super_lio_extrinsics': super_lio_extrinsics,
                }.items(),
            ),
            # launch navigation
            IncludeLaunchDescription(
                condition=UnlessCondition(debug),
                launch_description_source=PythonLaunchDescriptionSource(
                    os.path.join(get_package_share_directory('launcher'), 'launch', 'bringup_navigation.launch.py')
                ),
                launch_arguments={
                    'container_name': container_name,
                    'simulation': simulation,
                    'start_task_manager': legacy_navigation_enabled,
                    'simulation_localization': simulation_localization,
                    'allow_legacy_goal_topic': legacy_navigation_enabled,
                    'localization_method': localization_method,
                    'map_name': map_name,
                    'maps_root': maps_root,
                    'super_lio_extrinsics': super_lio_extrinsics,
                    **relocation_launch_arguments,
                }.items(),
            ),
            # launch navigation debug
            IncludeLaunchDescription(
                condition=IfCondition(debug),
                launch_description_source=PythonLaunchDescriptionSource(
                    os.path.join(get_package_share_directory('launcher'), 'launch', 'bringup_navigation_debug.launch.py')
                ),
                launch_arguments={
                    'container_name': container_name,
                    'simulation': simulation,
                    'start_task_manager': legacy_navigation_enabled,
                    'simulation_localization': simulation_localization,
                    'allow_legacy_goal_topic': legacy_navigation_enabled,
                    'localization_method': localization_method,
                    'map_name': map_name,
                    'maps_root': maps_root,
                    'super_lio_extrinsics': super_lio_extrinsics,
                    **relocation_launch_arguments,
                }.items(),
            ),            
        ],
    )

    bringup_web_navigation = IncludeLaunchDescription(
        condition=IfCondition(start_web_navigation),
        launch_description_source=PythonLaunchDescriptionSource(
            PathJoinSubstitution([
                FindPackageShare('web_navigation_manager'),
                'launch',
                'web_navigation.launch.py',
            ])
        ),
        launch_arguments={
            'web_host': LaunchConfiguration('web_host'),
            'web_port': LaunchConfiguration('web_port'),
            'task_db': LaunchConfiguration('task_db'),
            'annotation_db': LaunchConfiguration('annotation_db'),
        }.items(),
    )
       
    ld = LaunchDescription()
    ld.add_action(declared_world)
    ld.add_action(declared_container_name)
    ld.add_action(declared_robot_name)
    ld.add_action(declared_simulator)
    ld.add_action(declared_log_level)
    ld.add_action(declared_debug)
    ld.add_action(declared_start_web_navigation)
    ld.add_action(declared_simulation_localization)
    ld.add_action(declared_web_host)
    ld.add_action(declared_web_port)
    ld.add_action(declared_task_db)
    ld.add_action(declared_annotation_db)
    for argument in relocation_arguments:
        ld.add_action(argument)
    ld.add_action(declared_localization_method)
    ld.add_action(declared_map_name)
    ld.add_action(declared_maps_root)
    ld.add_action(declared_super_lio_extrinsics)
    # ld.add_action(bringup_simulation)
    ld.add_action(bringup_navigation)
    ld.add_action(bringup_web_navigation)
    return ld
