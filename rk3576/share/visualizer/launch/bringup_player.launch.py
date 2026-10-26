#!/usr/bin/env python3

import os
from ament_index_python.packages import get_package_share_directory
from launch import LaunchDescription
from launch.actions import IncludeLaunchDescription
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch.substitutions import LaunchConfiguration
from launch_ros.actions import Node

def generate_launch_description():

    rviz_file = os.path.join(get_package_share_directory('visualizer'), 'rviz', 'display.rviz')

    return LaunchDescription([
        Node(package='visualizer',
             executable='play_bag.py',
             output='screen'
        ),

        Node(package='rviz2',
            executable='rviz2',
            name='rviz2',  
            arguments=['-d', rviz_file],
            output='screen'
        ),        
    ])
