#!/usr/bin/python3
import os
from ament_index_python.packages import get_package_share_directory
from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument
from launch_ros.descriptions import ComposableNode
from launch.substitutions import LaunchConfiguration
from launch_ros.actions import LoadComposableNodes,Node

def generate_launch_description():
    this_directory = get_package_share_directory('opl_planner')
    config_file_path = os.path.join(this_directory, 'config', 'opl_planner_settings.yaml')
    container_name =  LaunchConfiguration('container_name')
    file_folder = get_package_share_directory('opl_planner') + '/paths/'

    declare_container_name = DeclareLaunchArgument(
        'container_name',
        default_value='robot_container',
        description='Name of the container'
    )

    bringup_oplplanner = LoadComposableNodes(
        target_container = container_name,
        composable_node_descriptions = [
            ComposableNode(
                package='opl_planner',
                plugin='planning::opl_planner::OplPlanner',
                name='opl_planner_node',
                parameters=[config_file_path,
                            {'file_folder': file_folder}],                
            ),

        ],
    )
    ld = LaunchDescription()
    ld.add_action(declare_container_name)
    ld.add_action(bringup_oplplanner)

    return ld