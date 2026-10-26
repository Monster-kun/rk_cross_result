import os
from os import environ
from os import pathsep
from ament_index_python.packages import get_package_share_directory
from launch import LaunchDescription
from launch.actions import GroupAction,DeclareLaunchArgument, SetEnvironmentVariable
from launch.conditions import IfCondition, UnlessCondition
from launch.substitutions import Command, FindExecutable, LaunchConfiguration, PathJoinSubstitution, EnvironmentVariable
from launch_ros.actions import Node
from launch_ros.substitutions import FindPackageShare
import yaml

use_sim = os.environ.get('SIMULATION')

def generate_launch_description():
    # Initialize Arguments
    simulation = LaunchConfiguration("simulation")

    # Declare arguments
    declared_arguments = [DeclareLaunchArgument('controller', default_value='pure_pursuit_controller'),
                          DeclareLaunchArgument('command_type', default_value='velocity'),
                          DeclareLaunchArgument('simulation', default_value='False')]

    # Get URDF via xacro
    fake_controller_settings = os.path.join(get_package_share_directory('chassis_control_bringup'), 'config', 'swerve_part_controller.yaml')
    real_controller_settings = os.path.join(get_package_share_directory('chassis_control_bringup'), 'config', 'chassis_controller.yaml')

    robot_description_content = Command(
        [
            PathJoinSubstitution([FindExecutable(name="xacro")]),
            " ",
            PathJoinSubstitution(
                [
                    FindPackageShare("chassis_control_description"),
                    "urdf",
                    "janseen_robot.xacro",
                ]
            ),
            ' command:=', 'velocity',
            ' settings:=', fake_controller_settings,
            " simulation:=", simulation,
        ]
    )

    robot_description = {"robot_description": robot_description_content}
    
    spawn_entity = GroupAction(
        actions = [
            Node(
                condition = IfCondition(simulation),
                package="gazebo_ros",
                executable="spawn_entity.py",
                # arguments=["-topic", "robot_description", "-entity", "swerve","-x","10.0","-z", "1.5","-Y", "0.0"],
                arguments=["-topic", "robot_description", "-entity", "swerve", "-x","-20.0", "-z", "0.5","-Y", "0.0"],
                output="screen",
            ),
            Node(
                condition = UnlessCondition(simulation),
                package="controller_manager",
                executable="ros2_control_node",
                parameters=[robot_description,real_controller_settings],
                output={
                    "stdout":"screen",
                    "stderr":"screen",
                },
            ),
        ]
    )

    camera_tf = GroupAction(
        actions = [
            Node(
                condition = IfCondition(simulation),
                package="tf2_ros",
                executable="static_transform_publisher",
                arguments=["0.43", "0", "0.188", "-1.57", "0", "-1.57", "base_chassis_link", "camera"],
                output="screen",
            ),
            Node(
                condition = UnlessCondition(simulation),
                package="tf2_ros",
                executable="static_transform_publisher",
                arguments=["0.43", "0", "0.155", "0", "0", "0", "base_link", "camera_color_optical_frame"],
            )
        ]
    )

    robot_state_publisher_node = Node(
        package="robot_state_publisher",
        executable="robot_state_publisher",
        output="both",
        parameters=[robot_description],
    )

    load_joint_state_controller = Node(
        package="controller_manager",
        executable="spawner",
        arguments=["joint_state_broadcaster", "--controller-manager", "/controller_manager"],
    )

    nodes = [
        spawn_entity,
        camera_tf,
        robot_state_publisher_node,
        load_joint_state_controller,
    ]
    
    # load all other controllers with inactive state
    if use_sim == "True":
        controller_settings = fake_controller_settings
    else:
        controller_settings = real_controller_settings     
    with open(controller_settings, 'r') as f:
        controllers = yaml.safe_load(f)

    for key, val in controllers['controller_manager']['ros__parameters'].items():
        if type(val) is dict and type(val['type']) is str:
            if key != "joint_state_broadcaster":
                nodes.append(
                    Node(
                        package="controller_manager",
                        executable="spawner",
                        arguments=[key, "-c", "/controller_manager","--inactive"],
                        output="log",
                    )
                )    

    return LaunchDescription(declared_arguments + nodes)


