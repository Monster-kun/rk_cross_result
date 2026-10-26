/**
 * @file path_validation_checker.hpp
 * @author Junfeng Guo
 * @brief A decorator node that checks the path validation
 * @version 0.1
 * @date 2024-07-01
 * 
 * @copyright Copyright (c) 2024
 * 
 */
#pragma once
#ifndef BEHAVIOR_TREE_PLUGINS_DECORATOR_PATH_VALIDATION_CHECKER_HPP
#define BEHAVIOR_TREE_PLUGINS_DECORATOR_PATH_VALIDATION_CHECKER_HPP

#include "rclcpp/rclcpp.hpp"
#include "behaviortree_cpp/decorator_node.h"
#include "behavior_msgs/srv/is_path_valid.hpp"

namespace behavior_tree
{
/**
 * @brief A BT::DecoratorNode that returns SUCCESS when the valid
 */
class PathValidationChecker : public BT::DecoratorNode
{
public:
  /**
   * @brief A constructor for behavior_tree::PathValidationChecker
   * @param condition_name Name for the XML tag for this node
   * @param conf BT node configuration
   */
  PathValidationChecker(
    const std::string & condition_name,
    const BT::NodeConfiguration & conf);

  PathValidationChecker() = delete;

  /**
   * @brief The main override required by a BT action
   * @return BT::NodeStatus Status of tick execution
   */
  BT::NodeStatus tick() override;

  /**
   * @brief Function to read parameters and initialize class variables
   */
  void initialize();

  /**
   * @brief Creates list of BT ports
   * @return BT::PortsList Containing node-specific ports
   */
  static BT::PortsList providedPorts()
  {
    return {
      BT::InputPort<double>("check_duration"),
      BT::InputPort<std::chrono::milliseconds>("server_timeout")
    };
  }

private:
  rclcpp::Node::SharedPtr node_;
  rclcpp::Client<behavior_msgs::srv::IsPathValid>::SharedPtr client_;
  // The timeout value while waiting for a responce from the
  // is path valid service
  std::chrono::milliseconds server_timeout_;
  double check_duration_;
  bool initialized_;
  rclcpp::Time start_;
};
}
#endif // BEHAVIOR_TREE_PLUGINS_DECORATOR_PATH_VALIDATION_CHECKER_HPP