"""Build one Super-LIO PCD map and all three relocation databases."""

import os
import re
from pathlib import Path

import yaml

from ament_index_python.packages import get_package_share_directory
from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument, OpaqueFunction, TimerAction
from launch.substitutions import LaunchConfiguration
from launch_ros.actions import Node
from launch_ros.parameter_descriptions import ParameterValue


def _parameters(path, node_name):
    with open(path, encoding='utf-8') as stream:
        document = yaml.safe_load(stream) or {}
    return document['/' + node_name]['ros__parameters']


def _default_maps_root():
    share = Path(get_package_share_directory('maps_folder'))
    for ancestor in (share, *share.parents):
        source = ancestor / 'src/bt_ws/mapping/maps_folder/maps'
        if source.is_dir():
            return str(source.resolve())
    return str((share / 'maps').resolve())


def _start_mapping(context):
    map_name = LaunchConfiguration('map_name').perform(context)
    if not re.fullmatch(r'[A-Za-z0-9_-]+', map_name):
        raise ValueError('map_name must contain only letters, digits, _ or -')
    root = Path(LaunchConfiguration('maps_root').perform(context)).expanduser()
    if not root.is_absolute() or not root.is_dir():
        raise ValueError('maps_root must be an existing absolute directory')
    root = root.resolve()
    stage = root / (map_name + '.building')
    if (root / map_name).exists() or stage.exists():
        raise ValueError('Map or unfinished staging directory already exists for ' + map_name)

    share = Path(get_package_share_directory('super_lio_localization'))
    relocation_share = Path(get_package_share_directory('relocation_server'))
    localization = _parameters(share / 'config/super_lio_localization.yaml',
                               'super_lio_localization_node')
    scan_input = _parameters(LaunchConfiguration('input').perform(context),
                             'super_lio_localization_node')
    mapping = _parameters(share / 'config/super_lio_mapping.yaml', 'super_lio_mapping_node')
    extrinsics = _parameters(LaunchConfiguration('extrinsics').perform(context),
                             'super_lio_localization_node')
    effective = {**localization, **scan_input, **extrinsics, **mapping}
    if not effective.get('extrinsics_confirmed') or not effective.get('imu_frame_id'):
        raise ValueError('Set calibrated extrinsics_confirmed and imu_frame_id before mapping')
    if not effective.get('lio.ros.lidar_topic') or not effective.get('lio.ros.imu_topic'):
        raise ValueError('PointCloud2 and IMU topic names must not be empty')
    if effective.get('lio.sensor.lidar_type') != 8:
        raise ValueError('Super-LIO mapping requires normalized PointCloud2 lidar_type=8')
    if effective.get('scan_frame_id') == effective.get('base_frame_id'):
        lidar_to_imu = effective.get('lio.extrinsic.lidar_imu', [])
        base_to_imu = effective.get('T_imu_base', [])
        if len(lidar_to_imu) != 12 or len(base_to_imu) != 16:
            raise ValueError('Mapping requires scan-to-IMU and base-to-IMU transforms')
        base_as_lidar = [base_to_imu[3], base_to_imu[7], base_to_imu[11]] + [
            base_to_imu[row * 4 + col] for row in range(3) for col in range(3)]
        if any(abs(float(a) - float(b)) > 1e-3
               for a, b in zip(lidar_to_imu, base_as_lidar)):
            raise ValueError('scan_frame_id equals base_frame_id, so both IMU transforms must match')
    relocation = _parameters(relocation_share / 'config/relocation_settings.yaml',
                             'relocalizer_node')
    sc = _parameters(relocation_share / 'config/sc_builder.yaml', 'sc_map_builder')
    btc = _parameters(relocation_share / 'config/btc_builder.yaml', 'btc_map_builder')
    common = {'cloud_topic': '/mapping/keyframe_scan',
              'odom_topic': '/mapping/keyframe_odom', 'map_frame': 'map'}
    sc.update(common)
    sc.update({key: relocation['sc_params'][key]
               for key in ('num_rings', 'num_sectors', 'max_radius', 'lidar_height')})
    sc['output_dir'] = str(stage / 'scancontext')
    btc.update(common)
    btc.update({key: relocation['btc_params'][key]
                for key in ('is_high_fly', 'parallel_stl_enable', 'parallel_stl_min_size')})
    btc['output_dir'] = str(stage / 'btc')
    (stage / 'PCD').mkdir(parents=True)
    mapper = Node(
        package='super_lio_localization', executable='super_lio_mapping_node',
        name='super_lio_mapping_node', output='screen',
        parameters=[localization, scan_input, extrinsics, mapping,
                    {'map_name': map_name, 'maps_root': str(root),
                     'use_sim_time': ParameterValue(
                         LaunchConfiguration('use_sim_time'), value_type=bool)}])
    return [
        Node(package='relocation_server', executable='sc_map_builder',
             name='sc_map_builder', output='screen', parameters=[sc]),
        Node(package='relocation_server', executable='btc_map_builder',
             name='btc_map_builder', output='screen', parameters=[btc]),
        TimerAction(period=2.0, actions=[mapper]),
    ]


def generate_launch_description():
    share = Path(get_package_share_directory('super_lio_localization'))
    return LaunchDescription([
        DeclareLaunchArgument('map_name'),
        DeclareLaunchArgument('maps_root', default_value=_default_maps_root()),
        DeclareLaunchArgument(
            'input', default_value=str(share / 'config/super_lio_scan.yaml')),
        DeclareLaunchArgument('extrinsics',
                              default_value=str(share / 'config/super_lio_extrinsics.yaml')),
        DeclareLaunchArgument('use_sim_time', default_value='false'),
        OpaqueFunction(function=_start_mapping),
    ])
