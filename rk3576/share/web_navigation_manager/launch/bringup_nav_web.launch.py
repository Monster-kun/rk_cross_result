"""Compose the existing robot/navigation stack with the independent Web entry."""
import os

from ament_index_python.packages import get_package_share_directory
from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument, IncludeLaunchDescription
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch.substitutions import LaunchConfiguration
from launch_ros.actions import Node


def generate_launch_description():
    launcher = get_package_share_directory('launcher')
    manager = get_package_share_directory('web_navigation_manager')
    chassis = get_package_share_directory('chassis_control_bringup')
    return LaunchDescription([
        DeclareLaunchArgument('container_name', default_value='robot_container'),
        DeclareLaunchArgument('simulation', default_value='False'),
        Node(
            package='rclcpp_components', executable='component_container',
            name=LaunchConfiguration('container_name'), output='screen',
        ),
        IncludeLaunchDescription(
            PythonLaunchDescriptionSource(os.path.join(chassis, 'launch', 'janseen_robot.launch.py')),
            launch_arguments={'simulation': LaunchConfiguration('simulation')}.items(),
        ),
        IncludeLaunchDescription(
            PythonLaunchDescriptionSource(os.path.join(launcher, 'launch', 'bringup_navigation.launch.py')),
            launch_arguments={
                'container_name': LaunchConfiguration('container_name'),
                'simulation': LaunchConfiguration('simulation'),
                'start_task_manager': 'False',
                'allow_legacy_goal_topic': 'False',
            }.items(),
        ),
        IncludeLaunchDescription(
            PythonLaunchDescriptionSource(os.path.join(manager, 'launch', 'web_navigation.launch.py')),
        ),
    ])
