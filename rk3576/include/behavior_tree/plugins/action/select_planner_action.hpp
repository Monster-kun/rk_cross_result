/**
 * @file select_planner_action.hpp
 * @author Junfeng Guo
 * @brief select the planner
 * @version 0.1
 * @date 2024-07-10
 * 
 * @copyright Copyright (c) 2024
 * 
 */
#pragma once
#include <string>
#include <memory>

#include "behaviortree_cpp/action_node.h"
#include "rclcpp/rclcpp.hpp"
#include "behavior_msgs/srv/select_planner.hpp"

namespace behavior_tree
{
class SelectPlannerAction : public BT::SyncActionNode
{
public:
  /**
   * @brief A constructor for behavior_tree::SelectPlannerAction
   *
   * @param xml_tag_name Name for the XML tag for this node
   * @param conf  BT node configuration
   */
  SelectPlannerAction(
    const std::string & xml_tag_name,
    const BT::NodeConfiguration & conf);

  /**
   * @brief Creates list of BT ports
   * @return BT::PortsList Containing basic ports along with node-specific ports
   */
  static BT::PortsList providedPorts()
  {
    return {
      BT::InputPort<std::chrono::milliseconds>("server_timeout"),
      BT::InputPort<std::string>(
        "default_planner",
        "the default planner to use if there is not any external topic message received."),
      BT::InputPort<std::string>(
        "planner_selector",
        "the planner selector to select the planner."),
      BT::OutputPort<std::string>(
        "selected_planner",
        "Selected planner by subscription"),
    };
  }

private:
  /**
   * @brief Function to perform some user-defined operation on tick
   */
  BT::NodeStatus tick() override;
  rclcpp::Node::SharedPtr node_;
  rclcpp::Client<behavior_msgs::srv::SelectPlanner>::SharedPtr client_;
  std::chrono::milliseconds server_timeout_;
  int count_=0;
  std::string last_selected_planner_;
  std::string default_planner_;
};
}
