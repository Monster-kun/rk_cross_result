/**
 * @author: Junfeng Guo
 * @date: 2024-01-20
*/
#pragma once
#ifndef TASK_MANAGER_HPP_
#define TASK_MANAGER_HPP_

/* system headers*/
#include <iostream>
#include <vector>
#include <mutex>

/* ros headers */
#include <rclcpp/rclcpp.hpp>
#include <rclcpp_lifecycle/lifecycle_node.hpp>
#include "rclcpp_action/rclcpp_action.hpp"
#include <geometry_msgs/msg/pose_stamped.hpp>
#include "behavior_msgs/action/navigate_through_poses.hpp"

namespace task_manager
{
class TaskManager : public rclcpp_lifecycle::LifecycleNode
{
using NavigateThroughPoses = behavior_msgs::action::NavigateThroughPoses;
using NavigationGoalHandle = rclcpp_action::ClientGoalHandle<NavigateThroughPoses>;
public:
    //////////////// functions ////////////////
    /**
     * @brief Construct a new Task Manager object
     * @param options Node options for this node
    */
    explicit TaskManager(const rclcpp::NodeOptions& options = rclcpp::NodeOptions());

    /**
     * @brief Destroy the Task Manager object
    */
    ~TaskManager() = default;

private:
    //////////////// functions ////////////////
    /**
     * @brief configure the task manager
     * @param state the state of the task manager
     * @return state of the lifecycle node
    */
    rclcpp_lifecycle::node_interfaces::LifecycleNodeInterface::CallbackReturn 
    on_configure(const rclcpp_lifecycle::State & state) override;
    /**
     * @brief activate the task manager
     * @param state the state of the task manager
     * @return state of the lifecycle node
    */
    rclcpp_lifecycle::node_interfaces::LifecycleNodeInterface::CallbackReturn 
    on_activate(const rclcpp_lifecycle::State & state) override;
    /**
     * @brief deactivate the task manager
     * @param state the state of the task manager
     * @return state of the lifecycle node
    */
    rclcpp_lifecycle::node_interfaces::LifecycleNodeInterface::CallbackReturn 
    on_deactivate(const rclcpp_lifecycle::State & state) override;
    /**
     * @brief cleanup the task manager
     * @param state the state of the task manager
     * @return state of the lifecycle node
    */
    rclcpp_lifecycle::node_interfaces::LifecycleNodeInterface::CallbackReturn 
    on_cleanup(const rclcpp_lifecycle::State & state) override;
    /**
     * @brief shutdown the task manager
     * @param state the state of the task manager
     * @return state of the lifecycle node
    */
    rclcpp_lifecycle::node_interfaces::LifecycleNodeInterface::CallbackReturn 
    on_shutdown(const rclcpp_lifecycle::State & state) override;
    /**
     * @brief Callback goal pose
     * @param msg the goal pose
    */
    void CallbackGoalPose(const geometry_msgs::msg::PoseStamped::SharedPtr msg);
    /**
     * @brief Callback waypoint pose
     * @param msg the waypoint pose
    */
    void CallbackWaypointPose(const geometry_msgs::msg::PoseStamped::SharedPtr msg);
    /**
     * @brief Timer to periodically annonce the task to lower level nodes
    */
    void CallbackTimer();
    /**
     * @brief Result callback from action server
     * @param result result
    */
    void ResultCallback(const NavigationGoalHandle::WrappedResult & result);
    /**
     * @brief Goal response callback from action server
     * @param future the goal handle
    */
    void GoalResponseCallback(const NavigationGoalHandle::SharedPtr future);

    //////////////// variables ////////////////
    rclcpp::Subscription<geometry_msgs::msg::PoseStamped>::SharedPtr goal_subscriber_;
    rclcpp::Subscription<geometry_msgs::msg::PoseStamped>::SharedPtr waypoint_subscriber_;
    rclcpp_action::Client<NavigateThroughPoses>::SharedPtr navigation_client_;
    rclcpp::TimerBase::SharedPtr timer_;

    //action client related
    NavigationGoalHandle::SharedPtr navigation_goal_handle_;

    //goal lock
    std::mutex mutex_goal_;

    bool new_goal_;
    bool restart_;
    bool has_final_goal_ = false;
    bool loop_goals_ = false;

    std::string behavior_tree_file_;
    std::vector<geometry_msgs::msg::PoseStamped> goals_list_;
    geometry_msgs::msg::PoseStamped goal_;
};
}
#endif /* TASK_MANAGER_HPP_ */