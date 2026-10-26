/**
 * @author: Junfeng Guo
 * @date: 2024/01/28
*/
#pragma once
#ifndef OTL_PLANNER_VISUALIZER_H_
#define OTL_PLANNER_VISUALIZER_H_

/* system headers */
#include <pcl/point_cloud.h>
#include <pcl/point_types.h>
#include <pcl_conversions/pcl_conversions.h>
#include <eigen3/Eigen/Core>
#include <eigen3/Eigen/Dense>

/* ros headers */
#include <rclcpp/rclcpp.hpp>
#include <rclcpp_lifecycle/lifecycle_node.hpp>
#include "sensor_msgs/msg/point_cloud2.hpp"

/* local headers */
#include "otl_planner/grid_map.h"

namespace otl_planner
{
class Visualizer
{
public:
    Visualizer(){};
    ~Visualizer() = default;
    void configure(const rclcpp_lifecycle::LifecycleNode::WeakPtr & parent);
    void activate();
    void deactivate();
    void cleanup();
    // robot_pose contains map X/Y and yaw; robot_height is map Z.
    void VisualizeInflatedGridMap(
        const rclcpp::Time& stamp,
        const Eigen::Vector3d& robot_pose, 
        const GridMap::Ptr grid_map,
        const double robot_height = 0.0);
    void VisualizeFreePaths(
        const rclcpp::Time& stamp,
        const pcl::PointCloud<pcl::PointXYZI>::Ptr free_paths);
private:
    rclcpp_lifecycle::LifecycleNode::WeakPtr parent_node_;
    // rclcpp::Node::SharedPtr node_ = std::make_shared<rclcpp::Node>("otl_planner_visualizer");
    rclcpp_lifecycle::LifecyclePublisher<sensor_msgs::msg::PointCloud2>::SharedPtr inflated_grid_map_pub_;
    rclcpp_lifecycle::LifecyclePublisher<sensor_msgs::msg::PointCloud2>::SharedPtr free_paths_pub_;
};
}

#endif //OTL_PLANNER_VISUALIZER_H_
