/**
 * @author Junfeng Guo
 * @date 2024-02-22
*/
#pragma once
#ifndef BEHAVIOR_TREE__PLUGINS__DECORATOR__GOAL_HANDLER_HPP_
#define BEHAVIOR_TREE__PLUGINS__DECORATOR__GOAL_HANDLER_HPP_

#include <memory>
#include <vector>

#include <geometry_msgs/msg/pose_stamped.hpp>
#include "planning_msgs/msg/global_path.hpp"
#include "localization_msgs/msg/pose_vel_acc_ang.hpp"
#include "behaviortree_cpp/decorator_node.h"
#include "rclcpp/rclcpp.hpp"

namespace behavior_tree
{
/**
 * @brief A behavior_tree::DecoratorNode class that subscribe the new waypoints 
 * and updates the goals
 * and output the first goal in the list to the child node
 */
class GoalHandler : public BT::DecoratorNode
{
public:
    /**
     * @brief A constructor for behavior_tree::GoalHandler
     * @param xml_tag_name Name for the XML tag for this node
     * @param conf BT node configuration
     */
    GoalHandler(
        const std::string & xml_tag_name, 
        const BT::NodeConfiguration & conf);
    /**
     * @brief Creates list of BT ports
     * @return BT::PortsList Containing basic ports along with node-specific ports
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

    bool goal_updated_, start_callback_, loop_goals_, allow_legacy_goal_topic_;
    double distance_;
    geometry_msgs::msg::Pose current_pose_;
    geometry_msgs::msg::PoseStamped current_goal_;
    planning_msgs::msg::GlobalPath current_path_;
    std::vector<geometry_msgs::msg::PoseStamped> goals_;
};
} // namespace behavior_tree

#endif // BEHAVIOR_TREE__PLUGINS__GOAL_UPDATER_HPP_
