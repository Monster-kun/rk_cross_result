/**
 * @author: Junfeng Guo
 * @date: 2024-01-02
*/
#pragma once
#ifndef GLOBAL_PLANNER_SERVER_H_
#define GLOBAL_PLANNER_SERVER_H_

/* system headers */
#include <unordered_map>
#include <iostream>
#include <vector>
#include <list>
#include <tuple>

/* ros headers */
#include <rclcpp/rclcpp.hpp>
#include <rclcpp_lifecycle/lifecycle_node.hpp>
#include "pluginlib/class_loader.hpp"
#include "pluginlib/class_list_macros.hpp"
#include "geometry_msgs/msg/pose_stamped.hpp"
#include "planning_msgs/msg/global_path.hpp"
#include "behavior_msgs/action/compute_path_to_pose.hpp"
#include "visualization_msgs/msg/marker.hpp"
#include "localization_msgs/msg/pose_vel_acc_ang.hpp"
#include "behavior_msgs/srv/is_path_valid.hpp"
#include "behavior_msgs/srv/is_path_collision.hpp"

#include <rclcpp_action/rclcpp_action.hpp>
#include "web_navigation_msgs/msg/planning_event.hpp"

/* local headers */
#include "global_planner/global_planner.h"
#include "system_utils/node_utils.hpp"
#include "system_utils/simple_action_server.hpp"

namespace global_planner_server {
class GlobalPlannerServer : public rclcpp_lifecycle::LifecycleNode 
{
using Pose = geometry_msgs::msg::Pose;
using PoseStamped = geometry_msgs::msg::PoseStamped;
using MSF_Status = localization_msgs::msg::PoseVelAccAng;
using GlobalPath = planning_msgs::msg::GlobalPath;
using ComputePathToPose = behavior_msgs::action::ComputePathToPose;
using ActionServer = system_utils::SimpleActionServer<ComputePathToPose>;
using GoalHandleComputePathToPose = rclcpp_action::ServerGoalHandle<ComputePathToPose>;
using IsPathValid = behavior_msgs::srv::IsPathValid;
using IsPathCollision = behavior_msgs::srv::IsPathCollision;

public:
    /**
     * @brief Construct a Global Planner Server object
     * @param options Node options for this node
    */
    explicit GlobalPlannerServer(const rclcpp::NodeOptions& options = rclcpp::NodeOptions());
    /**
     * @brief Destroy the Global Planner Server object
    */
    ~GlobalPlannerServer();
    /**
     * @brief Make global plan
     * @details This function is to make global plan based on the registered global planner
     * @param current_pose Current pose of the vehicle
     * @param goal_pose Goal pose of the vehicle
     * @param planner_id ID of the planner
     * @return Global path
    */
    planning_msgs::msg::GlobalPath MakeGlobalPlan(
        const MSF_Status& current_pose,
        const Pose& goal_pose,
        const std::string& planner_id);

    using GlobalPlannerMap = std::unordered_map<std::string, global_planner::GlobalPlanner::Ptr>;

protected:
    ////////////////// functions //////////////////
    /**
     * @brief Configure member variables and initializes planner
     * @param state Lifecycle node state
     * @return Callback return status
    */
    rclcpp_lifecycle::node_interfaces::LifecycleNodeInterface::CallbackReturn
    on_configure(const rclcpp_lifecycle::State& state) override;
    /**
     * @brief Activate planner
     * @param state Lifecycle node state
     * @return Callback return status
    */
    rclcpp_lifecycle::node_interfaces::LifecycleNodeInterface::CallbackReturn
    on_activate(const rclcpp_lifecycle::State& state) override;
    /**
     * @brief Deactivate planner
     * @param state Lifecycle node state
     * @return Callback return status
    */
    rclcpp_lifecycle::node_interfaces::LifecycleNodeInterface::CallbackReturn
    on_deactivate(const rclcpp_lifecycle::State& state) override;
    /**
     * @brief Cleanup planner
     * @param state Lifecycle node state
     * @return Callback return status
    */
    rclcpp_lifecycle::node_interfaces::LifecycleNodeInterface::CallbackReturn
    on_cleanup(const rclcpp_lifecycle::State& state) override;
    /**
     * @brief Shutdown planner
     * @param state Lifecycle node state
     * @return Callback return status
    */
    rclcpp_lifecycle::node_interfaces::LifecycleNodeInterface::CallbackReturn
    on_shutdown(const rclcpp_lifecycle::State& state) override;
    /**
     * @brief Publish global plan
     * @param global_path global path
    */
    void PublishGlobalPlan(const GlobalPath& global_path);
    /**
     * @brief Publish global plan in rviz
     * @param global_path global path
    */
    void PublishGlobalPlanRviz(const GlobalPath& global_path);
    //TODO: these callback functions will be removed later
    /**
     * @brief Callback function for goal pose
     * @param msg msf status message
    */
    void CallbackMSFStatus(const MSF_Status::ConstSharedPtr msg);
    /**
     * @brief action server callback to compute path to pose
    */
    void ComputePath();
    /**
     * @brief The service callback to determine if the path is still valid
     * @param request to the service
     * @param response from the service
     */
    void isPathValid(
        const std::shared_ptr<IsPathValid::Request> request,
        std::shared_ptr<IsPathValid::Response> response);

    void isPathCollision(
        const std::shared_ptr<IsPathCollision::Request> request,
        std::shared_ptr<IsPathCollision::Response> response);
    /**
     * @brief Checking if the server is active or not
     * @param action_server action server
     * @return true if the server is active, otherwise false
    */
    template<typename T>
    bool IsServerActive(std::unique_ptr<system_utils::SimpleActionServer<T>> &action_server);
    /**
     * @brief Checking if the server has a cancellation request pending
     * @param action_server action server
     * @return true if the server is preempted, otherwise false
    */
    template<typename T>
    bool IsCancelRequested(std::unique_ptr<system_utils::SimpleActionServer<T>> &action_server);

    ////////////////// variables //////////////////
    //Publisher && Subscriber && Timer
    rclcpp_lifecycle::LifecyclePublisher<GlobalPath>::SharedPtr global_plan_publisher_;
    rclcpp_lifecycle::LifecyclePublisher<visualization_msgs::msg::Marker>::SharedPtr global_plan_rviz_publisher_;
    rclcpp_lifecycle::LifecyclePublisher<web_navigation_msgs::msg::PlanningEvent>::SharedPtr planning_event_publisher_;
    uint32_t planning_path_revision_{0};
    rclcpp::Subscription<MSF_Status>::SharedPtr msf_status_subscriber_;
    rclcpp::Service<IsPathValid>::SharedPtr is_path_valid_service_;
    rclcpp::Service<IsPathCollision>::SharedPtr is_path_collision_service_;

    //action server
    std::unique_ptr<ActionServer> action_server_;

    //Planner
    pluginlib::ClassLoader<global_planner::GlobalPlanner> gp_loader_;
    GlobalPlannerMap global_planners_;
    std::vector<std::string> default_ids_; //default planner name
    std::vector<std::string> default_types_; //default planner plugin type
    std::vector<std::string> planner_ids_; //planner name
    std::vector<std::string> planner_types_; //planner plugin type

    //some temporal variables
    std::string current_planner_id_;
    bool is_msf_status_received_;
    MSF_Status current_pose_;
};
}
#endif // GLOBAL_PLANNER_SERVER_H_
