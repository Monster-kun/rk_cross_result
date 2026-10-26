import os

from ament_index_python.packages import get_package_share_directory
from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument
from launch.substitutions import LaunchConfiguration, PythonExpression
from launch_ros.actions import Node
from launch_ros.parameter_descriptions import ParameterValue


def generate_launch_description():
    package_share = get_package_share_directory('super_lio_localization')
    default_settings = os.path.join(package_share, 'config', 'super_lio_localization.yaml')
    default_input = os.path.join(package_share, 'config', 'super_lio_scan.yaml')
    default_extrinsics = os.path.join(package_share, 'config', 'super_lio_extrinsics.yaml')
    return LaunchDescription([
        DeclareLaunchArgument('settings', default_value=default_settings),
        DeclareLaunchArgument('input', default_value=default_input),
        DeclareLaunchArgument('extrinsics', default_value=default_extrinsics),
        DeclareLaunchArgument('map_name', default_value='sim_street'),
        DeclareLaunchArgument('maps_root', default_value=''),
        DeclareLaunchArgument('relocation_mode', default_value='auto', choices=['auto', 'manual']),
        DeclareLaunchArgument('relocation_auto_method', default_value='sc', choices=['sc', 'btc', 'bbs3d']),
        DeclareLaunchArgument('relocation_max_auto_attempts', default_value='5'),
        DeclareLaunchArgument('relocation_retry_interval_sec', default_value='1.0'),
        DeclareLaunchArgument('relocation_request_timeout_sec', default_value='45.0'),
        DeclareLaunchArgument('relocation_initialization_timeout_sec', default_value='30.0'),
        Node(
            package='super_lio_localization',
            executable='super_lio_localization_node',
            name='super_lio_localization_node',
            output='screen',
            parameters=[LaunchConfiguration('settings'), LaunchConfiguration('input'),
                        LaunchConfiguration('extrinsics'),
                        {'map_name': LaunchConfiguration('map_name'),
                         'maps_root': LaunchConfiguration('maps_root'),
                         'relocation_mode': LaunchConfiguration('relocation_mode'),
                         'relocation_method': ParameterValue(PythonExpression([
                             "{'sc': 0, 'btc': 1, 'bbs3d': 2}['",
                             LaunchConfiguration('relocation_auto_method'), "']"]), value_type=int),
                         'relocation_max_auto_attempts': ParameterValue(
                             LaunchConfiguration('relocation_max_auto_attempts'), value_type=int),
                         **{'relocation_' + name: ParameterValue(
                             LaunchConfiguration('relocation_' + name), value_type=float)
                            for name in ('retry_interval_sec', 'request_timeout_sec',
                                         'initialization_timeout_sec')}}],
        ),
    ])
