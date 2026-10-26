// Copyright (c) 2019 Intel Corporation
// Copyright 2021 Open Source Robotics Foundation, Inc.
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

#ifndef LIFECYCLE_MANAGER__LIFECYCLE_MANAGER_CLIENT_HPP_
#define LIFECYCLE_MANAGER__LIFECYCLE_MANAGER_CLIENT_HPP_

#include <memory>
#include <string>

#include "rclcpp/rclcpp.hpp"
#include "system_msgs/srv/manage_lifecycle_nodes.hpp"
#include "system_utils/service_client.hpp"

namespace lifecycle_manager
{
class LifecycleManagerClient
{
public:
  explicit LifecycleManagerClient(
    const std::string & managed_node_name,
    std::shared_ptr<rclcpp::Node> parent_node);  // The node that executes the service calls


  // Client interface to the lifecycle manager
  bool startup(const std::chrono::nanoseconds timeout = std::chrono::nanoseconds(-1));
  bool shutdown(const std::chrono::nanoseconds timeout = std::chrono::nanoseconds(-1));
  bool pause(const std::chrono::nanoseconds timeout = std::chrono::nanoseconds(-1));
  bool resume(const std::chrono::nanoseconds timeout = std::chrono::nanoseconds(-1));
  bool reset(const std::chrono::nanoseconds timeout = std::chrono::nanoseconds(-1));

protected:
  using ManageLifecycleNodes = system_msgs::srv::ManageLifecycleNodes;

  // A generic method used by startup, shutdown, etc.
  bool call_service(
    uint8_t command,
    const std::chrono::nanoseconds timeout = std::chrono::nanoseconds(-1));

  // The node to use for the service call
  rclcpp::Node::SharedPtr node_;

  std::shared_ptr<system_utils::ServiceClient<ManageLifecycleNodes>> lifecycle_manager_client_;

  std::string manage_service_name_;
};

}  // namespace lifecycle_manager

#endif  // LIFECYCLE_MANAGER__LIFECYCLE_MANAGER_CLIENT_HPP_
