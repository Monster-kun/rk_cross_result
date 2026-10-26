/**
 * @file wait_action.hpp
 * @author Junfeng Guo
 * @brief 
 * @version 0.1
 * @date 2024-07-02
 * 
 * @copyright Copyright (c) 2024
 * 
 */
#pragma once
#ifndef BEHAVIOR_TREE_PLUGINS_ACTION_WAIT_ACTION_HPP_
#define BEHAVIOR_TREE_PLUGINS_ACTION_WAIT_ACTION_HPP_

#include <string>
#include <rclcpp/rclcpp.hpp>
#include <behaviortree_cpp/action_node.h>

namespace behavior_tree
{
/**
 * @brief A behavior_tree::BtActionNode class that wraps the action Wait
*/
class WaitAction : public BT::SyncActionNode
{
public:
    /**
     * @brief A constructor for nav2_behavior_tree::UpdateGoal
     * @param xml_tag_name Name for the XML tag for this node
     * @param conf BT node configuration
     */
    WaitAction(
        const std::string & xml_tag_name,
        const BT::NodeConfiguration & conf);
    
    /**
     * @brief Creates list of BT ports
     * @return BT::PortsList Containing node-specific ports
     */
    static BT::PortsList providedPorts()
    {
        return {
            BT::InputPort<double>("wait_duration", "wait duration"),
        };
    }
private:
    /**
     * @brief The main override required by a BT action
     * @return BT::NodeStatus Status of tick execution
     */
    BT::NodeStatus tick() override;

    rclcpp::Node::SharedPtr node_;
    rclcpp::Time start_;
    double wait_duration_;
    bool initialized_;
};
}
#endif // BEHAVIOR_TREE_PLUGINS_ACTION_WAIT_ACTION_HPP_