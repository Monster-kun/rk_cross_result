// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from web_navigation_msgs:msg/RvizGoalFeedback.idl
// generated code does not contain a copyright notice

#ifndef WEB_NAVIGATION_MSGS__MSG__DETAIL__RVIZ_GOAL_FEEDBACK__BUILDER_HPP_
#define WEB_NAVIGATION_MSGS__MSG__DETAIL__RVIZ_GOAL_FEEDBACK__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "web_navigation_msgs/msg/detail/rviz_goal_feedback__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace web_navigation_msgs
{

namespace msg
{

namespace builder
{

class Init_RvizGoalFeedback_staged_waypoints
{
public:
  explicit Init_RvizGoalFeedback_staged_waypoints(::web_navigation_msgs::msg::RvizGoalFeedback & msg)
  : msg_(msg)
  {}
  ::web_navigation_msgs::msg::RvizGoalFeedback staged_waypoints(::web_navigation_msgs::msg::RvizGoalFeedback::_staged_waypoints_type arg)
  {
    msg_.staged_waypoints = std::move(arg);
    return std::move(msg_);
  }

private:
  ::web_navigation_msgs::msg::RvizGoalFeedback msg_;
};

class Init_RvizGoalFeedback_message
{
public:
  explicit Init_RvizGoalFeedback_message(::web_navigation_msgs::msg::RvizGoalFeedback & msg)
  : msg_(msg)
  {}
  Init_RvizGoalFeedback_staged_waypoints message(::web_navigation_msgs::msg::RvizGoalFeedback::_message_type arg)
  {
    msg_.message = std::move(arg);
    return Init_RvizGoalFeedback_staged_waypoints(msg_);
  }

private:
  ::web_navigation_msgs::msg::RvizGoalFeedback msg_;
};

class Init_RvizGoalFeedback_code
{
public:
  explicit Init_RvizGoalFeedback_code(::web_navigation_msgs::msg::RvizGoalFeedback & msg)
  : msg_(msg)
  {}
  Init_RvizGoalFeedback_message code(::web_navigation_msgs::msg::RvizGoalFeedback::_code_type arg)
  {
    msg_.code = std::move(arg);
    return Init_RvizGoalFeedback_message(msg_);
  }

private:
  ::web_navigation_msgs::msg::RvizGoalFeedback msg_;
};

class Init_RvizGoalFeedback_task_id
{
public:
  explicit Init_RvizGoalFeedback_task_id(::web_navigation_msgs::msg::RvizGoalFeedback & msg)
  : msg_(msg)
  {}
  Init_RvizGoalFeedback_code task_id(::web_navigation_msgs::msg::RvizGoalFeedback::_task_id_type arg)
  {
    msg_.task_id = std::move(arg);
    return Init_RvizGoalFeedback_code(msg_);
  }

private:
  ::web_navigation_msgs::msg::RvizGoalFeedback msg_;
};

class Init_RvizGoalFeedback_request_id
{
public:
  explicit Init_RvizGoalFeedback_request_id(::web_navigation_msgs::msg::RvizGoalFeedback & msg)
  : msg_(msg)
  {}
  Init_RvizGoalFeedback_task_id request_id(::web_navigation_msgs::msg::RvizGoalFeedback::_request_id_type arg)
  {
    msg_.request_id = std::move(arg);
    return Init_RvizGoalFeedback_task_id(msg_);
  }

private:
  ::web_navigation_msgs::msg::RvizGoalFeedback msg_;
};

class Init_RvizGoalFeedback_status
{
public:
  explicit Init_RvizGoalFeedback_status(::web_navigation_msgs::msg::RvizGoalFeedback & msg)
  : msg_(msg)
  {}
  Init_RvizGoalFeedback_request_id status(::web_navigation_msgs::msg::RvizGoalFeedback::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_RvizGoalFeedback_request_id(msg_);
  }

private:
  ::web_navigation_msgs::msg::RvizGoalFeedback msg_;
};

class Init_RvizGoalFeedback_manager_boot_id
{
public:
  explicit Init_RvizGoalFeedback_manager_boot_id(::web_navigation_msgs::msg::RvizGoalFeedback & msg)
  : msg_(msg)
  {}
  Init_RvizGoalFeedback_status manager_boot_id(::web_navigation_msgs::msg::RvizGoalFeedback::_manager_boot_id_type arg)
  {
    msg_.manager_boot_id = std::move(arg);
    return Init_RvizGoalFeedback_status(msg_);
  }

private:
  ::web_navigation_msgs::msg::RvizGoalFeedback msg_;
};

class Init_RvizGoalFeedback_header
{
public:
  Init_RvizGoalFeedback_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RvizGoalFeedback_manager_boot_id header(::web_navigation_msgs::msg::RvizGoalFeedback::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_RvizGoalFeedback_manager_boot_id(msg_);
  }

private:
  ::web_navigation_msgs::msg::RvizGoalFeedback msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::web_navigation_msgs::msg::RvizGoalFeedback>()
{
  return web_navigation_msgs::msg::builder::Init_RvizGoalFeedback_header();
}

}  // namespace web_navigation_msgs

#endif  // WEB_NAVIGATION_MSGS__MSG__DETAIL__RVIZ_GOAL_FEEDBACK__BUILDER_HPP_
