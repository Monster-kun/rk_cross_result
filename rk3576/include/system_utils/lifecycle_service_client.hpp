// Copyright (c) 2019 Intel Corporation
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

#ifndef SYSTEM_UTILS__LIFECYCLE_SERVICE_CLIENT_HPP_
#define SYSTEM_UTILS__LIFECYCLE_SERVICE_CLIENT_HPP_

#include <chrono>
#include <memory>
#include <string>

#include "lifecycle_msgs/srv/change_state.hpp"
#include "lifecycle_msgs/srv/get_state.hpp"
#include "system_utils/service_client.hpp"

namespace system_utils
{
/// Helper functions to interact with a lifecycle node.
class LifecycleServiceClient
{
public:
  /**
   * @brief Construct a new Lifecycle Service Client object
   * @param lifecycle_node_name The name of the lifecycle node to interact with
   * @param parent_node The node to use for the service calls
  */
  explicit LifecycleServiceClient(const std::string & lifecycle_node_name);
  LifecycleServiceClient(
    const std::string & lifecycle_node_name,
    rclcpp::Node::SharedPtr parent_node);

  /**
   * @brief Trigger a state change, returning result
   * @param transition The transition to trigger
   * @param timeout Maximum timeout to wait for, default infinite
   * @return true if the transition was successful
  */
  bool change_state(
    const uint8_t transition,
    const std::chrono::seconds timeout);

  /**
   * @brief Trigger a state change, returning result
   * @param transition The transition to trigger
   * @return true if the transition was successful
  */
  bool change_state(std::uint8_t transition);

  /**
   * @brief Get the current state as a lifecycle_msgs::msg::State id value
   * @param timeout Maximum timeout to wait for, default infinite
   * @return uint8_t The current state
  */
  uint8_t get_state(const std::chrono::seconds timeout = std::chrono::seconds::max());

protected:
  rclcpp::Node::SharedPtr node_;
  ServiceClient<lifecycle_msgs::srv::ChangeState> change_state_client_;
  ServiceClient<lifecycle_msgs::srv::GetState> get_state_client_;
};

}  // namespace system_utils

#endif  // SYSTEM_UTILS__LIFECYCLE_SERVICE_CLIENT_HPP_
