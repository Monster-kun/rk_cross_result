/**
 * @file topic_visualizer.hpp
 * @author Junfeng Guo
 * @brief 
 * @version 0.1
 * @date 2024-09-03
 * 
 * @copyright Copyright (c) 2024
 * 
 */
#pragma once
#ifndef TOPIC_VISUALIZER_H_
#define TOPIC_VISUALIZER_H_

#include <rclcpp/rclcpp.hpp>
#include <rclcpp_lifecycle/lifecycle_node.hpp>
#include <sensor_msgs/msg/point_cloud2.hpp>
#include <nav_msgs/msg/path.hpp>

#include <memory>
#include <pcl/point_cloud.h>
#include <pcl/point_types.h>
#include <pcl_conversions/pcl_conversions.h>

#include <tf2/convert.h>
#include <tf2_geometry_msgs/tf2_geometry_msgs.h>

#include "decomp_geometry/geometric_utils.h"
#include "decomp_geometry/polyhedron.h"
#include <unordered_map>
#include "visualization_msgs/msg/marker_array.hpp"
#include "trajectory_data/trajectory.hpp"
#include "planning_basic_data/obstacle.hpp"
#include "people_msgs/msg/people.hpp"

#include <random>
#include <functional>
#include <boost/format.hpp>

namespace topic_visualizer
{
class TopicVisualizer
{
public:
    typedef std::shared_ptr<TopicVisualizer> Ptr;

    TopicVisualizer(const rclcpp_lifecycle::LifecycleNode::WeakPtr& parent);

    ~TopicVisualizer() = default;

    void PublishPointCloud(
        const pcl::PointCloud<pcl::PointXYZI>::Ptr& cloud,
        const std::string& topic_name,
        const std::string& frame_id);
    void PublishPointCloud(
        const pcl::PointCloud<pcl::PointXYZI> &cloud,
        const std::string& topic_name,
        const std::string& frame_id);
    void PublishPath(
        const std::vector<Eigen::Vector2d>& path,
        const std::string& topic_name);
    void PublishPath(
        const trajectory_data::Trajectory& traj,
        const std::string& topic_name);
    void PublishPolyhedrons(
        const std::vector<Polyhedron3D>& polyhedrons,
        const std::string& topic_name);
    void PublishDynamicObstacles(
        const std::vector<people_msgs::msg::Person>& people,
        const std::string& topic_name);
    void PublishDynamicObstacles(
        const std::vector<planning_basic_data::Obstacle>& obs,
        const std::string& topic_name);        
private:
    geometry_msgs::msg::Point toPoint(Vec3f v) {
        geometry_msgs::msg::Point p;
        p.x = v(0);
        p.y = v(1);
        p.z = v(2);
        return p;
    }
    std_msgs::msg::ColorRGBA generateRandomColor(const int& id) {
        // 使用哈希函数生成一个哈希值
        std::hash<int> hasher;
        size_t hash_value = hasher(id);

        // 使用哈希值初始化随机数生成器
        std::mt19937 gen(hash_value);
        std::uniform_real_distribution<> dis(0.0, 1.0);  // 生成 [0.0, 1.0) 范围内的浮点数

        std_msgs::msg::ColorRGBA color;
        color.r = dis(gen);
        color.g = dis(gen);
        color.b = dis(gen);
        color.a = 0.6f;  // 可以根据需要设置透明度

        return color;
    }    
    void convertPolyhedronToMarkerArray(
        const Polyhedron3D& polyhedrons,
        const int id,
        visualization_msgs::msg::MarkerArray& marker_array);
    bool createFaceMarker(const vec_E<vec_Vec3f> & faces, const int id, visualization_msgs::msg::Marker & marker);
    bool createEdgesMarker(const vec_E<vec_Vec3f> & faces, const int id, visualization_msgs::msg::Marker & marker);

    double color_r_ = 0.0;
    double color_g_ = 1.0;
    double color_b_ = 1.0;
    double color_a_ = 0.1;
    double line_w_ = 0.01;

    std::unordered_map<std::string, rclcpp::Publisher<sensor_msgs::msg::PointCloud2>::SharedPtr> pc2_publishers_;
    std::unordered_map<std::string, rclcpp::Publisher<nav_msgs::msg::Path>::SharedPtr> path_publishers_;
    std::unordered_map<std::string, rclcpp::Publisher<visualization_msgs::msg::MarkerArray>::SharedPtr> marker_array_publishers_;
    rclcpp_lifecycle::LifecycleNode::WeakPtr parent_node_;
};
}

#endif  // TOPIC_VISUALIZER_H_