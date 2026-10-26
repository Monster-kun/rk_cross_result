// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from web_navigation_msgs:srv/GetTask.idl
// generated code does not contain a copyright notice

#ifndef WEB_NAVIGATION_MSGS__SRV__DETAIL__GET_TASK__BUILDER_HPP_
#define WEB_NAVIGATION_MSGS__SRV__DETAIL__GET_TASK__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "web_navigation_msgs/srv/detail/get_task__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace web_navigation_msgs
{

namespace srv
{

namespace builder
{

class Init_GetTask_Request_task_id
{
public:
  Init_GetTask_Request_task_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::web_navigation_msgs::srv::GetTask_Request task_id(::web_navigation_msgs::srv::GetTask_Request::_task_id_type arg)
  {
    msg_.task_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::web_navigation_msgs::srv::GetTask_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::web_navigation_msgs::srv::GetTask_Request>()
{
  return web_navigation_msgs::srv::builder::Init_GetTask_Request_task_id();
}

}  // namespace web_navigation_msgs


namespace web_navigation_msgs
{

namespace srv
{

namespace builder
{

class Init_GetTask_Response_updated_at
{
public:
  explicit Init_GetTask_Response_updated_at(::web_navigation_msgs::srv::GetTask_Response & msg)
  : msg_(msg)
  {}
  ::web_navigation_msgs::srv::GetTask_Response updated_at(::web_navigation_msgs::srv::GetTask_Response::_updated_at_type arg)
  {
    msg_.updated_at = std::move(arg);
    return std::move(msg_);
  }

private:
  ::web_navigation_msgs::srv::GetTask_Response msg_;
};

class Init_GetTask_Response_error_message
{
public:
  explicit Init_GetTask_Response_error_message(::web_navigation_msgs::srv::GetTask_Response & msg)
  : msg_(msg)
  {}
  Init_GetTask_Response_updated_at error_message(::web_navigation_msgs::srv::GetTask_Response::_error_message_type arg)
  {
    msg_.error_message = std::move(arg);
    return Init_GetTask_Response_updated_at(msg_);
  }

private:
  ::web_navigation_msgs::srv::GetTask_Response msg_;
};

class Init_GetTask_Response_error_code
{
public:
  explicit Init_GetTask_Response_error_code(::web_navigation_msgs::srv::GetTask_Response & msg)
  : msg_(msg)
  {}
  Init_GetTask_Response_error_message error_code(::web_navigation_msgs::srv::GetTask_Response::_error_code_type arg)
  {
    msg_.error_code = std::move(arg);
    return Init_GetTask_Response_error_message(msg_);
  }

private:
  ::web_navigation_msgs::srv::GetTask_Response msg_;
};

class Init_GetTask_Response_device_label
{
public:
  explicit Init_GetTask_Response_device_label(::web_navigation_msgs::srv::GetTask_Response & msg)
  : msg_(msg)
  {}
  Init_GetTask_Response_error_code device_label(::web_navigation_msgs::srv::GetTask_Response::_device_label_type arg)
  {
    msg_.device_label = std::move(arg);
    return Init_GetTask_Response_error_code(msg_);
  }

private:
  ::web_navigation_msgs::srv::GetTask_Response msg_;
};

class Init_GetTask_Response_effective_endpoint
{
public:
  explicit Init_GetTask_Response_effective_endpoint(::web_navigation_msgs::srv::GetTask_Response & msg)
  : msg_(msg)
  {}
  Init_GetTask_Response_device_label effective_endpoint(::web_navigation_msgs::srv::GetTask_Response::_effective_endpoint_type arg)
  {
    msg_.effective_endpoint = std::move(arg);
    return Init_GetTask_Response_device_label(msg_);
  }

private:
  ::web_navigation_msgs::srv::GetTask_Response msg_;
};

class Init_GetTask_Response_requested_y
{
public:
  explicit Init_GetTask_Response_requested_y(::web_navigation_msgs::srv::GetTask_Response & msg)
  : msg_(msg)
  {}
  Init_GetTask_Response_effective_endpoint requested_y(::web_navigation_msgs::srv::GetTask_Response::_requested_y_type arg)
  {
    msg_.requested_y = std::move(arg);
    return Init_GetTask_Response_effective_endpoint(msg_);
  }

private:
  ::web_navigation_msgs::srv::GetTask_Response msg_;
};

class Init_GetTask_Response_requested_x
{
public:
  explicit Init_GetTask_Response_requested_x(::web_navigation_msgs::srv::GetTask_Response & msg)
  : msg_(msg)
  {}
  Init_GetTask_Response_requested_y requested_x(::web_navigation_msgs::srv::GetTask_Response::_requested_x_type arg)
  {
    msg_.requested_x = std::move(arg);
    return Init_GetTask_Response_requested_y(msg_);
  }

private:
  ::web_navigation_msgs::srv::GetTask_Response msg_;
};

class Init_GetTask_Response_status
{
public:
  explicit Init_GetTask_Response_status(::web_navigation_msgs::srv::GetTask_Response & msg)
  : msg_(msg)
  {}
  Init_GetTask_Response_requested_x status(::web_navigation_msgs::srv::GetTask_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_GetTask_Response_requested_x(msg_);
  }

private:
  ::web_navigation_msgs::srv::GetTask_Response msg_;
};

class Init_GetTask_Response_frame_id
{
public:
  explicit Init_GetTask_Response_frame_id(::web_navigation_msgs::srv::GetTask_Response & msg)
  : msg_(msg)
  {}
  Init_GetTask_Response_status frame_id(::web_navigation_msgs::srv::GetTask_Response::_frame_id_type arg)
  {
    msg_.frame_id = std::move(arg);
    return Init_GetTask_Response_status(msg_);
  }

private:
  ::web_navigation_msgs::srv::GetTask_Response msg_;
};

class Init_GetTask_Response_map_version
{
public:
  explicit Init_GetTask_Response_map_version(::web_navigation_msgs::srv::GetTask_Response & msg)
  : msg_(msg)
  {}
  Init_GetTask_Response_frame_id map_version(::web_navigation_msgs::srv::GetTask_Response::_map_version_type arg)
  {
    msg_.map_version = std::move(arg);
    return Init_GetTask_Response_frame_id(msg_);
  }

private:
  ::web_navigation_msgs::srv::GetTask_Response msg_;
};

class Init_GetTask_Response_ros_goal_uuid
{
public:
  explicit Init_GetTask_Response_ros_goal_uuid(::web_navigation_msgs::srv::GetTask_Response & msg)
  : msg_(msg)
  {}
  Init_GetTask_Response_map_version ros_goal_uuid(::web_navigation_msgs::srv::GetTask_Response::_ros_goal_uuid_type arg)
  {
    msg_.ros_goal_uuid = std::move(arg);
    return Init_GetTask_Response_map_version(msg_);
  }

private:
  ::web_navigation_msgs::srv::GetTask_Response msg_;
};

class Init_GetTask_Response_request_id
{
public:
  explicit Init_GetTask_Response_request_id(::web_navigation_msgs::srv::GetTask_Response & msg)
  : msg_(msg)
  {}
  Init_GetTask_Response_ros_goal_uuid request_id(::web_navigation_msgs::srv::GetTask_Response::_request_id_type arg)
  {
    msg_.request_id = std::move(arg);
    return Init_GetTask_Response_ros_goal_uuid(msg_);
  }

private:
  ::web_navigation_msgs::srv::GetTask_Response msg_;
};

class Init_GetTask_Response_task_id
{
public:
  explicit Init_GetTask_Response_task_id(::web_navigation_msgs::srv::GetTask_Response & msg)
  : msg_(msg)
  {}
  Init_GetTask_Response_request_id task_id(::web_navigation_msgs::srv::GetTask_Response::_task_id_type arg)
  {
    msg_.task_id = std::move(arg);
    return Init_GetTask_Response_request_id(msg_);
  }

private:
  ::web_navigation_msgs::srv::GetTask_Response msg_;
};

class Init_GetTask_Response_found
{
public:
  Init_GetTask_Response_found()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetTask_Response_task_id found(::web_navigation_msgs::srv::GetTask_Response::_found_type arg)
  {
    msg_.found = std::move(arg);
    return Init_GetTask_Response_task_id(msg_);
  }

private:
  ::web_navigation_msgs::srv::GetTask_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::web_navigation_msgs::srv::GetTask_Response>()
{
  return web_navigation_msgs::srv::builder::Init_GetTask_Response_found();
}

}  // namespace web_navigation_msgs

#endif  // WEB_NAVIGATION_MSGS__SRV__DETAIL__GET_TASK__BUILDER_HPP_
