'''
Author: Jianguo Zhao
Date: 2023-10-08 13:42:26
'''

import os
from ament_index_python.packages import get_package_share_directory
from launch import LaunchDescription
from launch_ros.actions import ComposableNodeContainer
from launch_ros.descriptions import ComposableNode
from launch_ros.substitutions import FindPackageShare
from launch_ros.actions import Node


def generate_launch_description():
    pkg_multi_localizer = get_package_share_directory("multi_localizer")
    rviz2_config = os.path.join(pkg_multi_localizer, "launch", "multi_localizer.rviz")
    msf_localizer_config = os.path.join(pkg_multi_localizer, "config", "msf_localizer_settings.yaml")
    scan_convert_config = os.path.join(pkg_multi_localizer, "config", "scan_convert_settings.yaml")
    localizer_node = ComposableNodeContainer(
            name='localization_container',
            namespace='',
            package='rclcpp_components',
            executable='component_container',
            composable_node_descriptions=[
                ComposableNode(
                    package='multi_localizer',
                    plugin='localizer::LogWrapperNode',
                    name='log_wrapper_node',
                ),
                ComposableNode(
                    package='multi_localizer',
                    plugin='localizer::MSFLocalizerNode',
                    name='msf_localizer_node',
                    parameters=[msf_localizer_config],
                ),
                ComposableNode(
                    package='multi_localizer',
                    plugin='localizer::ScanConvertNode',
                    name='scan_convert_node',
                    parameters=[scan_convert_config],
                )
            ],
            output='screen',
    )
    rviz2 = Node(
        package="rviz2",
        executable="rviz2",
        name="rviz2",
        arguments=["-d", rviz2_config],
        output="screen",
    )
    ld = LaunchDescription()
    ld.add_action(localizer_node)
    # ld.add_action(rviz2)
    return ld
