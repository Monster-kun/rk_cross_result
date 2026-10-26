#!/usr/bin/python3
import os
from ament_index_python.packages import get_package_share_directory
from launch import LaunchDescription
from launch.actions import GroupAction, DeclareLaunchArgument
from launch.substitutions import LaunchConfiguration
from launch_ros.actions import LoadComposableNodes,Node
from launch_ros.descriptions import ComposableNode

def generate_launch_description():
    container_name = LaunchConfiguration('container_name')
    package_dir = get_package_share_directory('task_manager')
    # config_file_path = os.path.join(package_dir, 'config', 'collision_monitor_settings.yaml')

    declare_container_name = DeclareLaunchArgument(
        'container_name',
        default_value='my_container',
        description='Name of the container'
    )
    container_node = Node(
        package='rclcpp_components',
        executable='component_container',
        name=container_name,
        arguments=['--ros-args', '--log-level', 'debug', '--log-level','rcl:=INFO'],
        output='screen',
    )
    task_manager = LoadComposableNodes(
        target_container = container_name,
        composable_node_descriptions = [
            ComposableNode(
                package='task_manager',
                plugin='task_manager::TaskManager',
                name='task_manager',
            )
        ],
    )

    ld = LaunchDescription()
    ld.add_action(declare_container_name)
    ld.add_action(container_node)
    ld.add_action(task_manager)
    return ld