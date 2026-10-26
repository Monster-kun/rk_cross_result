#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from localization_msgs.msg import PoseVelAccAng
from sensor_msgs.msg import PointCloud2
from nav_msgs.msg import Path
from geometry_msgs.msg import PoseStamped
from sensor_msgs_py import point_cloud2
import numpy as np
from collections import deque
from scipy.spatial.transform import Rotation as R

class PointCloudTransformer(Node):
    def __init__(self):
        super().__init__('play_bag_node')  # 节点名称

        # 创建一个订阅者，订阅 `/odom` 话题
        self.status_sub = self.create_subscription(
            PoseVelAccAng,  # 消息类型
            '/localization/msf_status',  # 话题名称
            self.status_callback,  # 回调函数
            10  # 队列大小
        )

        # 创建一个订阅者，订阅 `/pointcloud2` 话题
        self.pc_sub = self.create_subscription(
            PointCloud2,  # 消息类型
            '/localization/const_scan',  # 话题名称
            self.pointcloud_callback,  # 回调函数
            10  # 队列大小
        )

        # 创建一个订阅者，订阅 `/pointcloud2` 话题
        self.pc_sub = self.create_subscription(
            PointCloud2,  # 消息类型
            '/psso_planner/occ_map',  # 话题名称
            self.occ_callback,  # 回调函数
            10  # 队列大小
        )

        # 创建一个发布者，发布转换后的点云
        self.pc_pub = self.create_publisher(PointCloud2, '/localization/global_scan', 10)
        self.path_pub = self.create_publisher(Path, "/localization/self_path", 10)
        self.occ_pub = self.create_publisher(PointCloud2, '/concatenated_pointcloud', 10)

        # 存储最新的 odom 位姿
        self.status = None
        self.path = deque(maxlen=5000)  # 限制路径点的最大数量
        self.point_clouds = deque(maxlen=1000)  # 限制存储的点云数量


    def status_callback(self, msg):
        self.status = msg
        # self.status.pose.position.z = 0.0

        pose_stamped = PoseStamped()
        pose_stamped.header.stamp = self.get_clock().now().to_msg()
        pose_stamped.header.frame_id = 'map'  # 设置坐标系
        pose_stamped.pose = self.status.pose

        # 将位姿添加到路径中
        self.path.append(pose_stamped)

        # 创建 Path 消息
        path_msg = Path()
        path_msg.header.stamp = self.get_clock().now().to_msg()
        path_msg.header.frame_id = 'map'  # 设置坐标系
        path_msg.poses = list(self.path)  # 将 deque 转换为列表

        # 发布路径
        self.path_pub.publish(path_msg)        


    def pointcloud_callback(self, msg):
        if self.status is None:
            return

        try:
            # 从 odom 中提取位姿信息
            position = self.status.pose.position
            orientation = self.status.pose.orientation

            # 将四元数转换为旋转矩阵
            rotation = R.from_quat([
                orientation.x,
                orientation.y,
                orientation.z,
                orientation.w
            ])
            rotation_matrix = rotation.as_matrix()

            # 获取点云数据
            points = point_cloud2.read_points(msg, field_names=("x", "y", "z"), skip_nans=True)

            # 将点云从局部坐标系转换到世界坐标系
            transformed_points = []
            for point in points:
                # 局部坐标系下的点
                point_local = np.array([point[0], point[1], point[2]])

                # 旋转和平移变换
                point_world = np.dot(rotation_matrix, point_local) + np.array([position.x, position.y, position.z])

                # 添加到转换后的点云中
                transformed_points.append(point_world)

            # 创建新的 PointCloud2 消息
            header = msg.header
            header.frame_id = 'map'  # 更新坐标系为世界坐标系
            fields = [
                point_cloud2.PointField(name='x', offset=0, datatype=point_cloud2.PointField.FLOAT32, count=1),
                point_cloud2.PointField(name='y', offset=4, datatype=point_cloud2.PointField.FLOAT32, count=1),
                point_cloud2.PointField(name='z', offset=8, datatype=point_cloud2.PointField.FLOAT32, count=1)
            ]
            transformed_cloud = point_cloud2.create_cloud(header, fields, transformed_points)

            # 发布转换后的点云
            self.pc_pub.publish(transformed_cloud)
            self.get_logger().info('Published transformed point cloud!')

        except Exception as e:
            self.get_logger().error(f'Failed to transform point cloud: {e}')
    
    def occ_callback(self, msg):
        try:
            # 读取点云数据
            points = point_cloud2.read_points(msg, field_names=("x", "y", "z"), skip_nans=True)
            points = np.array(list(points), dtype=[('x', np.float32), ('y', np.float32), ('z', np.float32)])  # 定义字段名称和类型

            # 将点云添加到存储中
            self.point_clouds.append(points)

            # 拼接所有点云
            concatenated_points = np.concatenate(self.point_clouds, axis=0)

            # 创建新的 PointCloud2 消息
            header = msg.header
            header.frame_id = 'map'  # 设置坐标系
            fields = [
                point_cloud2.PointField(name='x', offset=0, datatype=point_cloud2.PointField.FLOAT32, count=1),
                point_cloud2.PointField(name='y', offset=4, datatype=point_cloud2.PointField.FLOAT32, count=1),
                point_cloud2.PointField(name='z', offset=8, datatype=point_cloud2.PointField.FLOAT32, count=1)
            ]
            concatenated_cloud = point_cloud2.create_cloud(header, fields, concatenated_points)

            # 发布拼接后的点云
            self.occ_pub.publish(concatenated_cloud)

        except Exception as e:
            self.get_logger().error(f'Failed to process point cloud: {e}')

        
def main(args=None):
    # 初始化 ROS 2
    rclpy.init(args=args)

    # 创建节点实例
    pointcloud_transformer_node = PointCloudTransformer()

    # 运行节点，等待消息
    rclpy.spin(pointcloud_transformer_node)

    # 销毁节点并关闭 ROS 2
    pointcloud_transformer_node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
