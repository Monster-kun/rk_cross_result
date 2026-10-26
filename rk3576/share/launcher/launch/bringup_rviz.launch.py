import os

from ament_index_python.packages import get_package_share_directory
from launch import LaunchDescription
from launch.substitutions import PathJoinSubstitution
from launch_ros.actions import Node

def generate_launch_description():
    rviz_file = PathJoinSubstitution([get_package_share_directory('launcher'), 'rviz', 'janseen_world.rviz'])

    bringup_rviz = Node(
        package="rviz2",
        executable="rviz2",
        name="rviz2",
        arguments=["-d", rviz_file, "--ros-args"],
    )

    ld = LaunchDescription()
    ld.add_action(bringup_rviz)
    return ld
