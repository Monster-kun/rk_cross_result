"""Web task manager and gateway for an already configured navigation stack.

The existing stack must disable its legacy TaskManager and BT goal topics.
Use bringup_nav_web.launch.py to compose that stack automatically.
"""
import os

import yaml
from ament_index_python.packages import get_package_share_directory
from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument, OpaqueFunction
from launch.substitutions import LaunchConfiguration
from launch_ros.actions import Node
from launch_ros.parameter_descriptions import ParameterValue


def _nodes(context):
    def value(name):
        return LaunchConfiguration(name).perform(context)

    with open(value('planner_config'), encoding='utf-8') as stream:
        planner = yaml.safe_load(stream)['global_planner_server']['ros__parameters'].get('Lanelet2Planner', {})
    manager_share = get_package_share_directory('web_navigation_manager')
    return [
        Node(
            package='web_navigation_manager', executable='web_navigation_manager_node',
            name='web_navigation_manager', output='screen',
            parameters=[os.path.join(manager_share, 'config', 'web_navigation_manager.yaml'), {
                'task_db_path': value('task_db'),
                'behavior_tree_file': value('behavior_tree'),
                'goal_resolution_allow_lane_change': planner.get('allow_lane_change', True),
                'goal_resolution_allow_lane_invert': planner.get('allow_lane_invert', True),
            }],
        ),
        Node(
            package='lifecycle_manager', executable='lm_node',
            name='web_navigation_lifecycle_manager', output='screen',
            parameters=[{
                'autostart': ParameterValue(LaunchConfiguration('autostart'), value_type=bool),
                'node_names': ['web_navigation_manager'],
            }],
        ),
        Node(
            package='nav_web_gateway', executable='nav_web_gateway', name='nav_web_gateway',
            output='screen', additional_env={
                'NAV_WEB_HOST': value('web_host'),
                'NAV_WEB_PORT': value('web_port'),
                'NAV_WEB_ANNOTATION_DB': value('annotation_db'),
                'NAV_WEB_POINTCLOUD_TOPIC': value('pointcloud_topic'),
                'NAV_WEB_ENV_CACHE': value('environment_cache'),
            },
        ),
    ]


def generate_launch_description():
    launcher = get_package_share_directory('launcher')
    return LaunchDescription([
        DeclareLaunchArgument('web_host', default_value='0.0.0.0'),
        DeclareLaunchArgument('web_port', default_value='8080'),
        DeclareLaunchArgument('task_db', default_value='/var/lib/nav_web/tasks.sqlite'),
        DeclareLaunchArgument('annotation_db', default_value='/var/lib/nav_web/annotations.sqlite'),
        DeclareLaunchArgument('pointcloud_topic', default_value='/points_map'),
        DeclareLaunchArgument('environment_cache', default_value=os.path.expanduser('~/.cache/nav_web/environment')),
        DeclareLaunchArgument('behavior_tree', default_value='web_navigate_through_poses.xml'),
        DeclareLaunchArgument('planner_config', default_value=os.path.join(launcher, 'config', 'global_planner_settings.yaml')),
        DeclareLaunchArgument('autostart', default_value='True'),
        OpaqueFunction(function=_nodes),
    ])
