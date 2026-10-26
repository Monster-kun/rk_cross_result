/**
 * @author Junfeng Guo
 * @date 2024-02-28
*/
#pragma once
#ifndef BEHAVIOR_TREE__PLUGINS__ACTION__UPDATE_GOAL_ACTION_HPP_
#define BEHAVIOR_TREE__PLUGINS__ACTION__UPDATE_GOAL_ACTION_HPP_

#include <memory>
#include <string>

#include <rclcpp/rclcpp.hpp>
#include "geometry_msgs/msg/pose_stamped.hpp"

#include "behaviortree_cpp/action_node.h"

namespace behavior_tree
{
/**
 * @brief A BT::ActionNode that subscribes to a goal topic and updates
 * the current goal on the blackboard
 */
class UpdateGoalAction : public BT::SyncActionNode
{
public:
    /**
     * @brief A constructor for behavior_tree::UpdateGoal
     * @param xml_tag_name Name for the XML tag for this node
     * @param conf BT node configuration
     */
    UpdateGoalAction(
        const std::string & xml_tag_name,
        const BT::NodeConfiguration & conf);
    
    /**
     * @brief Creates list of BT ports
     * @return BT::PortsList Containing node-specific ports
     */
    static BT::PortsList providedPorts()
    {
        return {
        BT::InputPort<geometry_msgs::msg::PoseStamped>("input_goal", "Original Goal"),
        BT::OutputPort<geometry_msgs::msg::PoseStamped>(
            "output_goal",
            "Received Goal by subscription"),
        };
    }
private:
    /**
     * @brief The main override required by a BT action
     * @return BT::NodeStatus Status of tick execution
     */
    BT::NodeStatus tick() override;

    /**
     * @brief Callback function for goal update topic
     * @param msg Shared pointer to geometry_msgs::msg::PoseStamped message
     */
    void CallbackGoal(const geometry_msgs::msg::PoseStamped::SharedPtr msg);

    rclcpp::Node::SharedPtr node_;
    rclcpp::CallbackGroup::SharedPtr callback_group_;
    rclcpp::executors::SingleThreadedExecutor callback_group_executor_;
    rclcpp::Subscription<geometry_msgs::msg::PoseStamped>::SharedPtr goal_sub_;

    bool goal_was_updated_, start_callback_;
    geometry_msgs::msg::PoseStamped goal_, new_goal_;
};
} // namespace behavior_tree

#endif // BEHAVIOR_TREE__PLUGINS__ACTION__UPDATE_GOAL_ACTION_HPP_