'''
Author: Junfeng guo
Date: 2024-11-27
'''

from launch import LaunchDescription
from launch.actions import IncludeLaunchDescription
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch_ros.actions import Node
import os
from ament_index_python.packages import get_package_share_directory


def generate_launch_description():
    # Include launch file from other_package_1
    
    livox_launch = IncludeLaunchDescription(
        PythonLaunchDescriptionSource([
            '/root/dev/livox_ws/src/livox_ros_driver2/launch_ROS2/msg_MID360s_launch.py'
        ])
    )

    lidar_fusion_launch = IncludeLaunchDescription(
        PythonLaunchDescriptionSource([
            '/root/lidar_fusion_ws/src/lidar_fusion/launch/dual_lidar.launch.py'
        ])
    )

    # imu_launch = IncludeLaunchDescription(
    #     PythonLaunchDescriptionSource([
    #         '/opt/ros2_sensor_drivers/alubi/src/ros2_example/launch/lpms_nav3_launch.py'
    #     ])
    # )


    ld = LaunchDescription()
    ld.add_action(livox_launch)
    ld.add_action(lidar_fusion_launch)
    # ld.add_action(imu_launch)
    # ld.add_action(realsense_launch)
    return ld

