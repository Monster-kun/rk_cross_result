'''
Author: Jianguo Zhao
Date: 2023-10-08 13:42:26
'''

import os
from ament_index_python.packages import get_package_share_directory
from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument
from launch.substitutions import LaunchConfiguration
from launch_ros.actions import ComposableNodeContainer
from launch_ros.descriptions import ComposableNode
from launch_ros.substitutions import FindPackageShare
from launch_ros.actions import Node


def generate_launch_description():
    pkg_relocalizer = get_package_share_directory("relocation_server")
    relocation_config = os.path.join(pkg_relocalizer, "config", "relocation_settings.yaml")
    relocalizer_node = ComposableNodeContainer(
        name='localization_container',
        namespace='',
        package='rclcpp_components',
        executable='component_container',
        composable_node_descriptions=[
            ComposableNode(
                package='relocation_server',
                plugin='localizer::RelocalizerNode',
                name='relocalizer_node',
                parameters=[relocation_config, {'maps_root': LaunchConfiguration('maps_root')}],
            )
        ],
        output='screen',
    )

    ld = LaunchDescription()
    ld.add_action(DeclareLaunchArgument('maps_root', default_value=''))
    ld.add_action(relocalizer_node)


    return ld
