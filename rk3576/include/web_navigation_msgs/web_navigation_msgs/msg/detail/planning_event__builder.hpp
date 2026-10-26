// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from web_navigation_msgs:msg/PlanningEvent.idl
// generated code does not contain a copyright notice

#ifndef WEB_NAVIGATION_MSGS__MSG__DETAIL__PLANNING_EVENT__BUILDER_HPP_
#define WEB_NAVIGATION_MSGS__MSG__DETAIL__PLANNING_EVENT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "web_navigation_msgs/msg/detail/planning_event__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace web_navigation_msgs
{

namespace msg
{

namespace builder
{

class Init_PlanningEvent_path
{
public:
  explicit Init_PlanningEvent_path(::web_navigation_msgs::msg::PlanningEvent & msg)
  : msg_(msg)
  {}
  ::web_navigation_msgs::msg::PlanningEvent path(::web_navigation_msgs::msg::PlanningEvent::_path_type arg)
  {
    msg_.path = std::move(arg);
    return std::move(msg_);
  }

private:
  ::web_navigation_msgs::msg::PlanningEvent msg_;
};

class Init_PlanningEvent_error_message
{
public:
  explicit Init_PlanningEvent_error_message(::web_navigation_msgs::msg::PlanningEvent & msg)
  : msg_(msg)
  {}
  Init_PlanningEvent_path error_message(::web_navigation_msgs::msg::PlanningEvent::_error_message_type arg)
  {
    msg_.error_message = std::move(arg);
    return Init_PlanningEvent_path(msg_);
  }

private:
  ::web_navigation_msgs::msg::PlanningEvent msg_;
};

class Init_PlanningEvent_error_code
{
public:
  explicit Init_PlanningEvent_error_code(::web_navigation_msgs::msg::PlanningEvent & msg)
  : msg_(msg)
  {}
  Init_PlanningEvent_error_message error_code(::web_navigation_msgs::msg::PlanningEvent::_error_code_type arg)
  {
    msg_.error_code = std::move(arg);
    return Init_PlanningEvent_error_message(msg_);
  }

private:
  ::web_navigation_msgs::msg::PlanningEvent msg_;
};

class Init_PlanningEvent_effective_endpoint
{
public:
  explicit Init_PlanningEvent_effective_endpoint(::web_navigation_msgs::msg::PlanningEvent & msg)
  : msg_(msg)
  {}
  Init_PlanningEvent_error_code effective_endpoint(::web_navigation_msgs::msg::PlanningEvent::_effective_endpoint_type arg)
  {
    msg_.effective_endpoint = std::move(arg);
    return Init_PlanningEvent_error_code(msg_);
  }

private:
  ::web_navigation_msgs::msg::PlanningEvent msg_;
};

class Init_PlanningEvent_path_revision
{
public:
  explicit Init_PlanningEvent_path_revision(::web_navigation_msgs::msg::PlanningEvent & msg)
  : msg_(msg)
  {}
  Init_PlanningEvent_effective_endpoint path_revision(::web_navigation_msgs::msg::PlanningEvent::_path_revision_type arg)
  {
    msg_.path_revision = std::move(arg);
    return Init_PlanningEvent_effective_endpoint(msg_);
  }

private:
  ::web_navigation_msgs::msg::PlanningEvent msg_;
};

class Init_PlanningEvent_status
{
public:
  explicit Init_PlanningEvent_status(::web_navigation_msgs::msg::PlanningEvent & msg)
  : msg_(msg)
  {}
  Init_PlanningEvent_path_revision status(::web_navigation_msgs::msg::PlanningEvent::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_PlanningEvent_path_revision(msg_);
  }

private:
  ::web_navigation_msgs::msg::PlanningEvent msg_;
};

class Init_PlanningEvent_planning_attempt_id
{
public:
  explicit Init_PlanningEvent_planning_attempt_id(::web_navigation_msgs::msg::PlanningEvent & msg)
  : msg_(msg)
  {}
  Init_PlanningEvent_status planning_attempt_id(::web_navigation_msgs::msg::PlanningEvent::_planning_attempt_id_type arg)
  {
    msg_.planning_attempt_id = std::move(arg);
    return Init_PlanningEvent_status(msg_);
  }

private:
  ::web_navigation_msgs::msg::PlanningEvent msg_;
};

class Init_PlanningEvent_map_version
{
public:
  explicit Init_PlanningEvent_map_version(::web_navigation_msgs::msg::PlanningEvent & msg)
  : msg_(msg)
  {}
  Init_PlanningEvent_planning_attempt_id map_version(::web_navigation_msgs::msg::PlanningEvent::_map_version_type arg)
  {
    msg_.map_version = std::move(arg);
    return Init_PlanningEvent_planning_attempt_id(msg_);
  }

private:
  ::web_navigation_msgs::msg::PlanningEvent msg_;
};

class Init_PlanningEvent_ros_goal_uuid
{
public:
  explicit Init_PlanningEvent_ros_goal_uuid(::web_navigation_msgs::msg::PlanningEvent & msg)
  : msg_(msg)
  {}
  Init_PlanningEvent_map_version ros_goal_uuid(::web_navigation_msgs::msg::PlanningEvent::_ros_goal_uuid_type arg)
  {
    msg_.ros_goal_uuid = std::move(arg);
    return Init_PlanningEvent_map_version(msg_);
  }

private:
  ::web_navigation_msgs::msg::PlanningEvent msg_;
};

class Init_PlanningEvent_task_id
{
public:
  explicit Init_PlanningEvent_task_id(::web_navigation_msgs::msg::PlanningEvent & msg)
  : msg_(msg)
  {}
  Init_PlanningEvent_ros_goal_uuid task_id(::web_navigation_msgs::msg::PlanningEvent::_task_id_type arg)
  {
    msg_.task_id = std::move(arg);
    return Init_PlanningEvent_ros_goal_uuid(msg_);
  }

private:
  ::web_navigation_msgs::msg::PlanningEvent msg_;
};

class Init_PlanningEvent_header
{
public:
  Init_PlanningEvent_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PlanningEvent_task_id header(::web_navigation_msgs::msg::PlanningEvent::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_PlanningEvent_task_id(msg_);
  }

private:
  ::web_navigation_msgs::msg::PlanningEvent msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::web_navigation_msgs::msg::PlanningEvent>()
{
  return web_navigation_msgs::msg::builder::Init_PlanningEvent_header();
}

}  // namespace web_navigation_msgs

#endif  // WEB_NAVIGATION_MSGS__MSG__DETAIL__PLANNING_EVENT__BUILDER_HPP_
