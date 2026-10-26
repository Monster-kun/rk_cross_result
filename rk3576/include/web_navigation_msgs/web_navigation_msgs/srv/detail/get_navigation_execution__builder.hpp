// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from web_navigation_msgs:srv/GetNavigationExecution.idl
// generated code does not contain a copyright notice

#ifndef WEB_NAVIGATION_MSGS__SRV__DETAIL__GET_NAVIGATION_EXECUTION__BUILDER_HPP_
#define WEB_NAVIGATION_MSGS__SRV__DETAIL__GET_NAVIGATION_EXECUTION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "web_navigation_msgs/srv/detail/get_navigation_execution__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace web_navigation_msgs
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::web_navigation_msgs::srv::GetNavigationExecution_Request>()
{
  return ::web_navigation_msgs::srv::GetNavigationExecution_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace web_navigation_msgs


namespace web_navigation_msgs
{

namespace srv
{

namespace builder
{

class Init_GetNavigationExecution_Response_goals
{
public:
  explicit Init_GetNavigationExecution_Response_goals(::web_navigation_msgs::srv::GetNavigationExecution_Response & msg)
  : msg_(msg)
  {}
  ::web_navigation_msgs::srv::GetNavigationExecution_Response goals(::web_navigation_msgs::srv::GetNavigationExecution_Response::_goals_type arg)
  {
    msg_.goals = std::move(arg);
    return std::move(msg_);
  }

private:
  ::web_navigation_msgs::srv::GetNavigationExecution_Response msg_;
};

class Init_GetNavigationExecution_Response_execution_running
{
public:
  explicit Init_GetNavigationExecution_Response_execution_running(::web_navigation_msgs::srv::GetNavigationExecution_Response & msg)
  : msg_(msg)
  {}
  Init_GetNavigationExecution_Response_goals execution_running(::web_navigation_msgs::srv::GetNavigationExecution_Response::_execution_running_type arg)
  {
    msg_.execution_running = std::move(arg);
    return Init_GetNavigationExecution_Response_goals(msg_);
  }

private:
  ::web_navigation_msgs::srv::GetNavigationExecution_Response msg_;
};

class Init_GetNavigationExecution_Response_active
{
public:
  explicit Init_GetNavigationExecution_Response_active(::web_navigation_msgs::srv::GetNavigationExecution_Response & msg)
  : msg_(msg)
  {}
  Init_GetNavigationExecution_Response_execution_running active(::web_navigation_msgs::srv::GetNavigationExecution_Response::_active_type arg)
  {
    msg_.active = std::move(arg);
    return Init_GetNavigationExecution_Response_execution_running(msg_);
  }

private:
  ::web_navigation_msgs::srv::GetNavigationExecution_Response msg_;
};

class Init_GetNavigationExecution_Response_instance_id
{
public:
  Init_GetNavigationExecution_Response_instance_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetNavigationExecution_Response_active instance_id(::web_navigation_msgs::srv::GetNavigationExecution_Response::_instance_id_type arg)
  {
    msg_.instance_id = std::move(arg);
    return Init_GetNavigationExecution_Response_active(msg_);
  }

private:
  ::web_navigation_msgs::srv::GetNavigationExecution_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::web_navigation_msgs::srv::GetNavigationExecution_Response>()
{
  return web_navigation_msgs::srv::builder::Init_GetNavigationExecution_Response_instance_id();
}

}  // namespace web_navigation_msgs

#endif  // WEB_NAVIGATION_MSGS__SRV__DETAIL__GET_NAVIGATION_EXECUTION__BUILDER_HPP_
