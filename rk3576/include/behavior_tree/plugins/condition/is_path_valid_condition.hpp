// Copyright (c) 2021 Joshua Wallace
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#ifndef BEHAVIOR_TREE__PLUGINS__CONDITION__IS_PATH_VALID_CONDITION_HPP_
#define BEHAVIOR_TREE__PLUGINS__CONDITION__IS_PATH_VALID_CONDITION_HPP_

#include <string>
#include <memory>

#include "rclcpp/rclcpp.hpp"
#include "behaviortree_cpp/condition_node.h"
#include "behavior_msgs/srv/is_path_valid.hpp"

namespace behavior_tree
{

/**
 * @brief A BT::ConditionNode that returns SUCCESS when the IsPathValid
 * service returns true and FAILURE otherwise
 */
class IsPathValidCondition : public BT::ConditionNode
{
public:
  /**
   * @brief A constructor for behavior_tree::IsPathValidCondition
   * @param condition_name Name for the XML tag for this node
   * @param conf BT node configuration
   */
  IsPathValidCondition(
    const std::string & condition_name,
    const BT::NodeConfiguration & conf);

  IsPathValidCondition() = delete;

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
      BT::InputPort<double>("check_distance"),
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
  double check_distance_;
  bool initialized_;
  rclcpp::Time start_;
};

}  // namespace behavior_tree

#endif  // BEHAVIOR_TREE__PLUGINS__CONDITION__IS_PATH_VALID_CONDITION_HPP_
