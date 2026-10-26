// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from web_navigation_msgs:msg/NavigationExecution.idl
// generated code does not contain a copyright notice

#ifndef WEB_NAVIGATION_MSGS__MSG__DETAIL__NAVIGATION_EXECUTION__BUILDER_HPP_
#define WEB_NAVIGATION_MSGS__MSG__DETAIL__NAVIGATION_EXECUTION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "web_navigation_msgs/msg/detail/navigation_execution__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace web_navigation_msgs
{

namespace msg
{

namespace builder
{

class Init_NavigationExecution_endpoint
{
public:
  explicit Init_NavigationExecution_endpoint(::web_navigation_msgs::msg::NavigationExecution & msg)
  : msg_(msg)
  {}
  ::web_navigation_msgs::msg::NavigationExecution endpoint(::web_navigation_msgs::msg::NavigationExecution::_endpoint_type arg)
  {
    msg_.endpoint = std::move(arg);
    return std::move(msg_);
  }

private:
  ::web_navigation_msgs::msg::NavigationExecution msg_;
};

class Init_NavigationExecution_goals
{
public:
  explicit Init_NavigationExecution_goals(::web_navigation_msgs::msg::NavigationExecution & msg)
  : msg_(msg)
  {}
  Init_NavigationExecution_endpoint goals(::web_navigation_msgs::msg::NavigationExecution::_goals_type arg)
  {
    msg_.goals = std::move(arg);
    return Init_NavigationExecution_endpoint(msg_);
  }

private:
  ::web_navigation_msgs::msg::NavigationExecution msg_;
};

class Init_NavigationExecution_status
{
public:
  explicit Init_NavigationExecution_status(::web_navigation_msgs::msg::NavigationExecution & msg)
  : msg_(msg)
  {}
  Init_NavigationExecution_goals status(::web_navigation_msgs::msg::NavigationExecution::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_NavigationExecution_goals(msg_);
  }

private:
  ::web_navigation_msgs::msg::NavigationExecution msg_;
};

class Init_NavigationExecution_map_version
{
public:
  explicit Init_NavigationExecution_map_version(::web_navigation_msgs::msg::NavigationExecution & msg)
  : msg_(msg)
  {}
  Init_NavigationExecution_status map_version(::web_navigation_msgs::msg::NavigationExecution::_map_version_type arg)
  {
    msg_.map_version = std::move(arg);
    return Init_NavigationExecution_status(msg_);
  }

private:
  ::web_navigation_msgs::msg::NavigationExecution msg_;
};

class Init_NavigationExecution_task_id
{
public:
  explicit Init_NavigationExecution_task_id(::web_navigation_msgs::msg::NavigationExecution & msg)
  : msg_(msg)
  {}
  Init_NavigationExecution_map_version task_id(::web_navigation_msgs::msg::NavigationExecution::_task_id_type arg)
  {
    msg_.task_id = std::move(arg);
    return Init_NavigationExecution_map_version(msg_);
  }

private:
  ::web_navigation_msgs::msg::NavigationExecution msg_;
};

class Init_NavigationExecution_ros_goal_uuid
{
public:
  Init_NavigationExecution_ros_goal_uuid()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_NavigationExecution_task_id ros_goal_uuid(::web_navigation_msgs::msg::NavigationExecution::_ros_goal_uuid_type arg)
  {
    msg_.ros_goal_uuid = std::move(arg);
    return Init_NavigationExecution_task_id(msg_);
  }

private:
  ::web_navigation_msgs::msg::NavigationExecution msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::web_navigation_msgs::msg::NavigationExecution>()
{
  return web_navigation_msgs::msg::builder::Init_NavigationExecution_ros_goal_uuid();
}

}  // namespace web_navigation_msgs

#endif  // WEB_NAVIGATION_MSGS__MSG__DETAIL__NAVIGATION_EXECUTION__BUILDER_HPP_
