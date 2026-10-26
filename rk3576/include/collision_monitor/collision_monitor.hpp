/**
 * @author: Junfeng Guo
 * @date: 2023-11-23
*/
#ifndef COLLISION_MONITOR_HPP_
#define COLLISION_MONITOR_HPP_

/* system headers */
#include <iostream>
#include <vector>
#include <eigen3/Eigen/Core>
#include <eigen3/Eigen/Dense>
#include <pcl/point_cloud.h>
#include <pcl/point_types.h>
#include <pcl_conversions/pcl_conversions.h>

/* ros headers */
#include <rclcpp/rclcpp.hpp>
#include <rclcpp_lifecycle/lifecycle_node.hpp>
#include <sensor_msgs/msg/point_cloud2.h>

/* local headers */
#include "system_msgs/srv/is_emergency_stop.hpp"
#include "system_msgs/srv/need_slow_down.hpp"
#include "collision_monitor_parameters.hpp"
#include "system_utils/node_utils.hpp"

namespace collision_monitor
{
using PointCloud2 = sensor_msgs::msg::PointCloud2;
using ParamListener = collision_monitor_params::ParamListener;
using Params = collision_monitor_params::Params;

class CollisionMonitor : public rclcpp_lifecycle::LifecycleNode
{
public:
    //////////////// functions ////////////////
    /**
     * @brief Construct a new Collision Monitor object
     * @param node the node to be used
    */
    CollisionMonitor(const rclcpp::NodeOptions& options = rclcpp::NodeOptions());

    /**
     * @brief Destroy the Collision Monitor object
    */
    ~CollisionMonitor() = default;

private:
    //////////////// functions ////////////////    
    /**
     * @brief configure the collision monitor
     * @param state the state of the collision monitor
     * @return state of the lifecycle node
    */
    rclcpp_lifecycle::node_interfaces::LifecycleNodeInterface::CallbackReturn 
    on_configure(const rclcpp_lifecycle::State & state) override;

    /**
     * @brief activate the collision monitor
     * @param state the state of the collision monitor
     * @return state of the lifecycle node
    */
    rclcpp_lifecycle::node_interfaces::LifecycleNodeInterface::CallbackReturn
    on_activate(const rclcpp_lifecycle::State & state) override;

    /**
     * @brief deactivate the collision monitor
     * @param state the state of the collision monitor
     * @return state of the lifecycle node
    */
    rclcpp_lifecycle::node_interfaces::LifecycleNodeInterface::CallbackReturn
    on_deactivate(const rclcpp_lifecycle::State & state) override;

    /**
     * @brief cleanup the collision monitor
     * @param state the state of the collision monitor
     * @return state of the lifecycle node
    */
    rclcpp_lifecycle::node_interfaces::LifecycleNodeInterface::CallbackReturn
    on_cleanup(const rclcpp_lifecycle::State & state) override;

    /**
     * @brief shutdown the collision monitor
     * @param state the state of the collision monitor
     * @return state of the lifecycle node
    */
    rclcpp_lifecycle::node_interfaces::LifecycleNodeInterface::CallbackReturn
    on_shutdown(const rclcpp_lifecycle::State & state) override;

private:
    //////////////// functions ////////////////
    /**
     * @brief Callback function for subscriber
     * @param msg pointcloud2 message
    */
    void CallbackLidarPointCloud(const sensor_msgs::msg::PointCloud2::ConstSharedPtr msg);

    /**
     * @brief Check if robot is emergency stop
     * @param request request message - pose of robot
     * @param response response message - true if robot is in collision
    */
    void IsEmergencyStop(
        const std::shared_ptr<system_msgs::srv::IsEmergencyStop::Request> request,
        std::shared_ptr<system_msgs::srv::IsEmergencyStop::Response> response);

    /**
     * @brief Check if robot needs to slow down
     * @param robot_pose robot pose
     * @return true if robot needs to slow down and the slow down ratio
    */
    void NeedSlowDown(
        const std::shared_ptr<system_msgs::srv::NeedSlowDown::Request> request,
        std::shared_ptr<system_msgs::srv::NeedSlowDown::Response> response);

    //////////////// variables ////////////////
    rclcpp::Subscription<PointCloud2>::SharedPtr pointcloud_subscriber_;
    rclcpp::Service<system_msgs::srv::IsEmergencyStop>::SharedPtr is_collision_free_service_;
    rclcpp::Service<system_msgs::srv::NeedSlowDown>::SharedPtr need_slow_down_service_;
    
    std::string lidar_topic_;
    std::shared_ptr<ParamListener> params_listener_;
    Params params_;
    double x_clearance_, y_clearance_;
    std::vector<double> z_clearance_;
    pcl::PointCloud<pcl::PointXYZI>::Ptr lidar_pointcloud_;
};
}
#endif // COLLISION_MONITOR_HPP_