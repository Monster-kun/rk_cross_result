/**
 * @author: Junfeng Guo
 * @date: 2024-03-08
*/
#pragma once
#ifndef BEHAVIOR_TREE__PLUGINS__ACTION__SWITCH_CONTROLLER_ACTION_HPP_
#define BEHAVIOR_TREE__PLUGINS__ACTION__SWITCH_CONTROLLER_ACTION_HPP_

#include <string>
#include <rclcpp/rclcpp.hpp>
#include "behaviortree_cpp/action_node.h"
#include "controller_manager_msgs/srv/switch_controller.hpp"
#include "controller_manager_msgs/srv/list_controllers.hpp"

namespace behavior_tree
{
/**
 * @brief A behavior_tree::BtActionNode class that wraps the action SwitchController
*/
class SwitchControllerAction : public BT::SyncActionNode
{
public:
    /**
     * @brief A constructor for nav2_behavior_tree::UpdateGoal
     * @param xml_tag_name Name for the XML tag for this node
     * @param conf BT node configuration
     */
    SwitchControllerAction(
        const std::string & xml_tag_name,
        const BT::NodeConfiguration & conf);
    
    /**
     * @brief Creates list of BT ports
     * @return BT::PortsList Containing node-specific ports
     */
    static BT::PortsList providedPorts()
    {
        return {
            BT::InputPort<std::string>("controller_id", "controller name"),
        };
    }
private:
    /**
     * @brief The main override required by a BT action
     * @return BT::NodeStatus Status of tick execution
     */
    BT::NodeStatus tick() override;

    rclcpp::Node::SharedPtr node_;
    rclcpp::Client<controller_manager_msgs::srv::ListControllers>::SharedPtr list_controllers_client_;
    rclcpp::Client<controller_manager_msgs::srv::SwitchController>::SharedPtr switch_controller_client_;
    
    std::string controller_id_;
    std::vector<controller_manager_msgs::msg::ControllerState> controllers_;
};

}  // namespace behavior_tree
#endif // BEHAVIOR_TREE__PLUGINS__ACTION__SWITCH_CONTROLLER_ACTION_HPP_