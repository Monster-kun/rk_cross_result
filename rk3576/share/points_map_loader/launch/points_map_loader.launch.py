'''
Author: Jianguo Zhao
Date: 2023-12-05 21:05:53
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
    pkg_points_map_loader = get_package_share_directory("points_map_loader")
    points_map_loader_config = os.path.join(pkg_points_map_loader, "config", "points_map_loader.yaml")

    points_map_loader_node = ComposableNodeContainer(
        name='localization_container',
        namespace='',
        package='rclcpp_components',
        executable='component_container',
        composable_node_descriptions=[
            ComposableNode(
                package='points_map_loader',
                plugin='mapping::PointsMapLoaderNode',
                name='points_map_loader_node',
                parameters=[points_map_loader_config,
                            {'points_map_name': LaunchConfiguration('map_name'),
                             'maps_root': LaunchConfiguration('maps_root')}],
            )
        ],
        output='screen',
    )

    ld = LaunchDescription()
    ld.add_action(DeclareLaunchArgument('map_name', default_value='sim_street'))
    ld.add_action(DeclareLaunchArgument('maps_root', default_value=''))
    ld.add_action(points_map_loader_node)

    return ld
