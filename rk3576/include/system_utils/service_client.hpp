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

#ifndef SYSTEM_UTILS__SERVICE_CLIENT_HPP_
#define SYSTEM_UTILS__SERVICE_CLIENT_HPP_

#include <chrono>
#include <string>

#include "rclcpp/rclcpp.hpp"
#include "system_utils/node_utils.hpp"

namespace system_utils
{

// A simple wrapper for a service client
template<class ServiceT>
class ServiceClient
{
public:
  explicit ServiceClient(
    const std::string & service_name,
    const rclcpp::Node::SharedPtr & provided_node)
  : service_name_(service_name), node_(provided_node)
  {
    callback_group_ = node_->create_callback_group(
      rclcpp::CallbackGroupType::MutuallyExclusive, false);
    callback_group_executor_.add_callback_group(callback_group_, node_->get_node_base_interface());
    client_ = node_->create_client<ServiceT>(
      service_name, 
      rmw_qos_profile_services_default, 
      callback_group_);
  }

  ServiceClient(const std::string & service_name, const std::string & parent_name)
  : service_name_(service_name)
  {
    node_ = generate_internal_node(parent_name + std::string("_") + service_name + "_client");
    client_ = node_->create_client<ServiceT>(service_name);
  }

  using RequestType = typename ServiceT::Request;
  using ResponseType = typename ServiceT::Response;

  /**
  * @brief Invoke the service and block until completed or timed out
  * @param request The request object to call the service using
  * @param timeout Maximum timeout to wait for, default infinite
  * @return Response A pointer to the service response from the request
  */
  typename ResponseType::SharedPtr invoke(
    typename RequestType::SharedPtr & request,
    const std::chrono::nanoseconds timeout = std::chrono::nanoseconds::max())
  {
    while (!client_->wait_for_service(timeout)) {
      if (!rclcpp::ok()) {
        throw std::runtime_error(
                service_name_ + " service client: interrupted while waiting for service");
      }
      RCLCPP_INFO(
        node_->get_logger(), "%s service client: waiting for service to appear...",
        service_name_.c_str());
    }
    RCLCPP_DEBUG(
      node_->get_logger(), "%s service client: send async request",
      service_name_.c_str());

    auto future_result = client_->async_send_request(request);
    if (callback_group_executor_.spin_until_future_complete(future_result, timeout) !=
      rclcpp::FutureReturnCode::SUCCESS)
    {
      // Pending request must be manually cleaned up if execution is interrupted or timed out
      client_->remove_pending_request(future_result);
      throw std::runtime_error(service_name_ + " service client: async_send_request failed");
    }    
    return future_result.get();
  }

  /**
  * @brief Invoke the service and block until completed
  * @param request The request object to call the service using
  * @param Response A pointer to the service response from the request
  * @return bool Whether it was successfully called
  */
  bool invoke(
    typename RequestType::SharedPtr & request,
    typename ResponseType::SharedPtr & response)
  {
    while (!client_->wait_for_service(std::chrono::seconds(1))) {
      if (!rclcpp::ok()) {
        throw std::runtime_error(
                service_name_ + " service client: interrupted while waiting for service");
      }
      RCLCPP_INFO(
        node_->get_logger(), "%s service client: waiting for service to appear...",
        service_name_.c_str());
    }
    
    RCLCPP_DEBUG(
      node_->get_logger(), "%s service client: send async request",
      service_name_.c_str());
    
    auto future_result = client_->async_send_request(request);
    if (callback_group_executor_.spin_until_future_complete(future_result) !=
      rclcpp::FutureReturnCode::SUCCESS)
    {
      client_->remove_pending_request(future_result);
      return false;
    }

    response = future_result.get();
    return response.get();
  }

  bool wait_for_service(const std::chrono::nanoseconds timeout = std::chrono::nanoseconds::max())
  {
    return client_->wait_for_service(timeout);
  }

protected:
  std::string service_name_;
  rclcpp::Node::SharedPtr node_;
  rclcpp::CallbackGroup::SharedPtr callback_group_;
  rclcpp::executors::SingleThreadedExecutor callback_group_executor_;
  typename rclcpp::Client<ServiceT>::SharedPtr client_;
};

}  // namespace system_utils

#endif  // SYSTEM_UTILS__SERVICE_CLIENT_HPP_
