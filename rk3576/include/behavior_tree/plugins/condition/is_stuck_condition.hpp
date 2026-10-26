// Copyright (c) 2018 Intel Corporation
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
#pragma once
#ifndef BEHAVIOR_TREE__PLUGINS__CONDITION__IS_STUCK_CONDITION_HPP_
#define BEHAVIOR_TREE__PLUGINS__CONDITION__IS_STUCK_CONDITION_HPP_

#include <string>
#include <atomic>
#include <deque>

#include "rclcpp/rclcpp.hpp"
#include "behaviortree_cpp/condition_node.h"
#include "localization_msgs/msg/pose_vel_acc_ang.hpp"
#include "tf2/utils.h"
#include "tf2_geometry_msgs/tf2_geometry_msgs.h"

namespace behavior_tree
{

/**
 * @brief A BT::ConditionNode that tracks robot odometry and returns SUCCESS
 * if robot is stuck somewhere and FAILURE otherwise
 */
class IsStuckCondition : public BT::ConditionNode
{
using MsfStatus = localization_msgs::msg::PoseVelAccAng;
public:
  /**
   * @brief A constructor for behavior_tree::IsStuckCondition
   * @param condition_name Name for the XML tag for this node
   * @param conf BT node configuration
   */
  IsStuckCondition(
    const std::string & condition_name,
    const BT::NodeConfiguration & conf);

  IsStuckCondition() = delete;

  /**
   * @brief A destructor for behavior_tree::IsStuckCondition
   */
  ~IsStuckCondition() override;

  /**
   * @brief Callback function for robot status topic
   * @param msg Shared pointer to localization_msgs::msg::PoseVelAccAng::SharedPtr message
   */
  void CallbackMSFStatus(const MsfStatus::SharedPtr msg);

  /**
   * @brief The main override required by a BT action
   * @return BT::NodeStatus Status of tick execution
   */
  BT::NodeStatus tick() override;

  /**
   * @brief Function to approximate acceleration from the odom history
   */
  void UpdateStates();

  /**
   * @brief Creates list of BT ports
   * @return BT::PortsList Containing node-specific ports
   */
  static BT::PortsList providedPorts() 
  {
    return {
      BT::InputPort<double>("stuck_threshold", 10.0, "Stuck duration threshold")
    };
  }

private:
  // The node that will be used for any ROS operations
  rclcpp::Node::SharedPtr node_;
  rclcpp::CallbackGroup::SharedPtr callback_group_;
  rclcpp::executors::SingleThreadedExecutor callback_group_executor_;
  std::thread callback_group_executor_thread;

  double stuck_duration_;
  bool first_cb_ = true;
  double current_time_, previous_time_, stuck_threshold_;
  // Listen to odometry
  rclcpp::Subscription<MsfStatus>::SharedPtr msf_status_sub_;
  // Store history of odometry measurements
  std::deque<MsfStatus> msf_status_buffer_;
  std::deque<MsfStatus>::size_type msf_buffer_size_;
};
}  // namespace behavior_tree

#endif  // BEHAVIOR_TREE__PLUGINS__CONDITION__IS_STUCK_CONDITION_HPP_
