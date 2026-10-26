/**
 * @file update_global_goals_action.hpp
 * @author Junfeng Guo
 * @brief update the global goals for global planner
 * @version 0.1
 * @date 2024-06-30
 * 
 * @copyright Copyright (c) 2024
 * 
 */
#pragma once
#ifndef BEHAVIOR_TREE__PLUGINS__ACTION__UPDATE_GLOBAL_GOALS_ACTION_HPP_
#define BEHAVIOR_TREE__PLUGINS__ACTION__UPDATE_GLOBAL_GOALS_ACTION_HPP_

#include <memory>
#include <vector>

#include <geometry_msgs/msg/pose_stamped.hpp>
#include "planning_msgs/msg/global_path.hpp"
#include "localization_msgs/msg/pose_vel_acc_ang.hpp"
#include "behaviortree_cpp/action_node.h"
#include "rclcpp/rclcpp.hpp"

namespace behavior_tree
{
/**
 * @brief A behavior_tree::ActionNode class that subscribes the new waypoints 
 * and updates the global goals by distance or new goal
 */
class UpdateGlobalGoalsAction : public BT::SyncActionNode
{
public:
    /**
     * @brief A constructor for behavior_tree::UpdateGlobalGoalsAction
     * @param xml_tag_name Name for the XML tag for this node
     * @param conf BT node configuration
     */
    UpdateGlobalGoalsAction(
        const std::string & xml_tag_name,
        const BT::NodeConfiguration & conf);
    
    /**
     * @brief Creates list of BT ports
     * @return BT::PortsList Containing node-specific ports
     */
    static BT::PortsList providedPorts()
    {
        return {
            BT::InputPort<double>("distance", 5.0, "Distance to goal threshold"),
            BT::OutputPort<geometry_msgs::msg::PoseStamped>("output_goal", "Goal to plan to"),
        };
    }
private:
    /**
     * @brief Function to perform some user-defined operation on tick
     */
    BT::NodeStatus tick() override;
    /**
     * @brief Callback function for current pose
     * @param msg Shared pointer to localization_msgs::msg::PoseVelAccAng message
    */
    void CallbackMsfStatus(const localization_msgs::msg::PoseVelAccAng::SharedPtr msg);
    /**
     * @brief Callback function for final goal pose 
     * @param msg Shared pointer to geometry_msgs::msg::PoseStamped message
    */
    void CallbackGoalPose(const geometry_msgs::msg::PoseStamped::SharedPtr msg);
    /**
     * @brief Callback function for waypoint pose
     * @param msg Shared pointer to geometry_msgs::msg::PoseStamped message
    */
    void CallbackWaypointPose(const geometry_msgs::msg::PoseStamped::SharedPtr msg);

    rclcpp::Subscription<geometry_msgs::msg::PoseStamped>::SharedPtr goal_sub_;
    rclcpp::Subscription<geometry_msgs::msg::PoseStamped>::SharedPtr waypoint_sub_;
    rclcpp::Subscription<localization_msgs::msg::PoseVelAccAng>::SharedPtr pose_sub_;

    rclcpp::Node::SharedPtr node_;
    rclcpp::CallbackGroup::SharedPtr goal_cb_group_, waypoint_cb_group_, pose_cb_group_;
    rclcpp::executors::SingleThreadedExecutor callback_group_executor_;

    bool first_time_;
    bool loop_goals_, goal_updated_;
    double distance_;
    geometry_msgs::msg::Pose current_pose_;
    geometry_msgs::msg::PoseStamped current_goal_, goal_;
    planning_msgs::msg::GlobalPath current_path_;
    std::vector<geometry_msgs::msg::PoseStamped> goals_;    
};
} // namespace behavior_tree

#endif // BEHAVIOR_TREE__PLUGINS__ACTION__UPDATE_GLOBAL_GOALS_ACTION_HPP_