// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from web_navigation_msgs:srv/SubmitGoal.idl
// generated code does not contain a copyright notice

#ifndef WEB_NAVIGATION_MSGS__SRV__DETAIL__SUBMIT_GOAL__BUILDER_HPP_
#define WEB_NAVIGATION_MSGS__SRV__DETAIL__SUBMIT_GOAL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "web_navigation_msgs/srv/detail/submit_goal__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace web_navigation_msgs
{

namespace srv
{

namespace builder
{

class Init_SubmitGoal_Request_sequence
{
public:
  explicit Init_SubmitGoal_Request_sequence(::web_navigation_msgs::srv::SubmitGoal_Request & msg)
  : msg_(msg)
  {}
  ::web_navigation_msgs::srv::SubmitGoal_Request sequence(::web_navigation_msgs::srv::SubmitGoal_Request::_sequence_type arg)
  {
    msg_.sequence = std::move(arg);
    return std::move(msg_);
  }

private:
  ::web_navigation_msgs::srv::SubmitGoal_Request msg_;
};

class Init_SubmitGoal_Request_expected_state_revision
{
public:
  explicit Init_SubmitGoal_Request_expected_state_revision(::web_navigation_msgs::srv::SubmitGoal_Request & msg)
  : msg_(msg)
  {}
  Init_SubmitGoal_Request_sequence expected_state_revision(::web_navigation_msgs::srv::SubmitGoal_Request::_expected_state_revision_type arg)
  {
    msg_.expected_state_revision = std::move(arg);
    return Init_SubmitGoal_Request_sequence(msg_);
  }

private:
  ::web_navigation_msgs::srv::SubmitGoal_Request msg_;
};

class Init_SubmitGoal_Request_expected_active_task_id
{
public:
  explicit Init_SubmitGoal_Request_expected_active_task_id(::web_navigation_msgs::srv::SubmitGoal_Request & msg)
  : msg_(msg)
  {}
  Init_SubmitGoal_Request_expected_state_revision expected_active_task_id(::web_navigation_msgs::srv::SubmitGoal_Request::_expected_active_task_id_type arg)
  {
    msg_.expected_active_task_id = std::move(arg);
    return Init_SubmitGoal_Request_expected_state_revision(msg_);
  }

private:
  ::web_navigation_msgs::srv::SubmitGoal_Request msg_;
};

class Init_SubmitGoal_Request_selected_layer_id
{
public:
  explicit Init_SubmitGoal_Request_selected_layer_id(::web_navigation_msgs::srv::SubmitGoal_Request & msg)
  : msg_(msg)
  {}
  Init_SubmitGoal_Request_expected_active_task_id selected_layer_id(::web_navigation_msgs::srv::SubmitGoal_Request::_selected_layer_id_type arg)
  {
    msg_.selected_layer_id = std::move(arg);
    return Init_SubmitGoal_Request_expected_active_task_id(msg_);
  }

private:
  ::web_navigation_msgs::srv::SubmitGoal_Request msg_;
};

class Init_SubmitGoal_Request_y
{
public:
  explicit Init_SubmitGoal_Request_y(::web_navigation_msgs::srv::SubmitGoal_Request & msg)
  : msg_(msg)
  {}
  Init_SubmitGoal_Request_selected_layer_id y(::web_navigation_msgs::srv::SubmitGoal_Request::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_SubmitGoal_Request_selected_layer_id(msg_);
  }

private:
  ::web_navigation_msgs::srv::SubmitGoal_Request msg_;
};

class Init_SubmitGoal_Request_x
{
public:
  explicit Init_SubmitGoal_Request_x(::web_navigation_msgs::srv::SubmitGoal_Request & msg)
  : msg_(msg)
  {}
  Init_SubmitGoal_Request_y x(::web_navigation_msgs::srv::SubmitGoal_Request::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_SubmitGoal_Request_y(msg_);
  }

private:
  ::web_navigation_msgs::srv::SubmitGoal_Request msg_;
};

class Init_SubmitGoal_Request_frame_id
{
public:
  explicit Init_SubmitGoal_Request_frame_id(::web_navigation_msgs::srv::SubmitGoal_Request & msg)
  : msg_(msg)
  {}
  Init_SubmitGoal_Request_x frame_id(::web_navigation_msgs::srv::SubmitGoal_Request::_frame_id_type arg)
  {
    msg_.frame_id = std::move(arg);
    return Init_SubmitGoal_Request_x(msg_);
  }

private:
  ::web_navigation_msgs::srv::SubmitGoal_Request msg_;
};

class Init_SubmitGoal_Request_map_version
{
public:
  explicit Init_SubmitGoal_Request_map_version(::web_navigation_msgs::srv::SubmitGoal_Request & msg)
  : msg_(msg)
  {}
  Init_SubmitGoal_Request_frame_id map_version(::web_navigation_msgs::srv::SubmitGoal_Request::_map_version_type arg)
  {
    msg_.map_version = std::move(arg);
    return Init_SubmitGoal_Request_frame_id(msg_);
  }

private:
  ::web_navigation_msgs::srv::SubmitGoal_Request msg_;
};

class Init_SubmitGoal_Request_control_epoch
{
public:
  explicit Init_SubmitGoal_Request_control_epoch(::web_navigation_msgs::srv::SubmitGoal_Request & msg)
  : msg_(msg)
  {}
  Init_SubmitGoal_Request_map_version control_epoch(::web_navigation_msgs::srv::SubmitGoal_Request::_control_epoch_type arg)
  {
    msg_.control_epoch = std::move(arg);
    return Init_SubmitGoal_Request_map_version(msg_);
  }

private:
  ::web_navigation_msgs::srv::SubmitGoal_Request msg_;
};

class Init_SubmitGoal_Request_lease_token
{
public:
  explicit Init_SubmitGoal_Request_lease_token(::web_navigation_msgs::srv::SubmitGoal_Request & msg)
  : msg_(msg)
  {}
  Init_SubmitGoal_Request_control_epoch lease_token(::web_navigation_msgs::srv::SubmitGoal_Request::_lease_token_type arg)
  {
    msg_.lease_token = std::move(arg);
    return Init_SubmitGoal_Request_control_epoch(msg_);
  }

private:
  ::web_navigation_msgs::srv::SubmitGoal_Request msg_;
};

class Init_SubmitGoal_Request_manager_boot_id
{
public:
  explicit Init_SubmitGoal_Request_manager_boot_id(::web_navigation_msgs::srv::SubmitGoal_Request & msg)
  : msg_(msg)
  {}
  Init_SubmitGoal_Request_lease_token manager_boot_id(::web_navigation_msgs::srv::SubmitGoal_Request::_manager_boot_id_type arg)
  {
    msg_.manager_boot_id = std::move(arg);
    return Init_SubmitGoal_Request_lease_token(msg_);
  }

private:
  ::web_navigation_msgs::srv::SubmitGoal_Request msg_;
};

class Init_SubmitGoal_Request_device_label
{
public:
  explicit Init_SubmitGoal_Request_device_label(::web_navigation_msgs::srv::SubmitGoal_Request & msg)
  : msg_(msg)
  {}
  Init_SubmitGoal_Request_manager_boot_id device_label(::web_navigation_msgs::srv::SubmitGoal_Request::_device_label_type arg)
  {
    msg_.device_label = std::move(arg);
    return Init_SubmitGoal_Request_manager_boot_id(msg_);
  }

private:
  ::web_navigation_msgs::srv::SubmitGoal_Request msg_;
};

class Init_SubmitGoal_Request_session_id
{
public:
  explicit Init_SubmitGoal_Request_session_id(::web_navigation_msgs::srv::SubmitGoal_Request & msg)
  : msg_(msg)
  {}
  Init_SubmitGoal_Request_device_label session_id(::web_navigation_msgs::srv::SubmitGoal_Request::_session_id_type arg)
  {
    msg_.session_id = std::move(arg);
    return Init_SubmitGoal_Request_device_label(msg_);
  }

private:
  ::web_navigation_msgs::srv::SubmitGoal_Request msg_;
};

class Init_SubmitGoal_Request_request_id
{
public:
  explicit Init_SubmitGoal_Request_request_id(::web_navigation_msgs::srv::SubmitGoal_Request & msg)
  : msg_(msg)
  {}
  Init_SubmitGoal_Request_session_id request_id(::web_navigation_msgs::srv::SubmitGoal_Request::_request_id_type arg)
  {
    msg_.request_id = std::move(arg);
    return Init_SubmitGoal_Request_session_id(msg_);
  }

private:
  ::web_navigation_msgs::srv::SubmitGoal_Request msg_;
};

class Init_SubmitGoal_Request_operation
{
public:
  Init_SubmitGoal_Request_operation()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SubmitGoal_Request_request_id operation(::web_navigation_msgs::srv::SubmitGoal_Request::_operation_type arg)
  {
    msg_.operation = std::move(arg);
    return Init_SubmitGoal_Request_request_id(msg_);
  }

private:
  ::web_navigation_msgs::srv::SubmitGoal_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::web_navigation_msgs::srv::SubmitGoal_Request>()
{
  return web_navigation_msgs::srv::builder::Init_SubmitGoal_Request_operation();
}

}  // namespace web_navigation_msgs


namespace web_navigation_msgs
{

namespace srv
{

namespace builder
{

class Init_SubmitGoal_Response_state_revision
{
public:
  explicit Init_SubmitGoal_Response_state_revision(::web_navigation_msgs::srv::SubmitGoal_Response & msg)
  : msg_(msg)
  {}
  ::web_navigation_msgs::srv::SubmitGoal_Response state_revision(::web_navigation_msgs::srv::SubmitGoal_Response::_state_revision_type arg)
  {
    msg_.state_revision = std::move(arg);
    return std::move(msg_);
  }

private:
  ::web_navigation_msgs::srv::SubmitGoal_Response msg_;
};

class Init_SubmitGoal_Response_task_status
{
public:
  explicit Init_SubmitGoal_Response_task_status(::web_navigation_msgs::srv::SubmitGoal_Response & msg)
  : msg_(msg)
  {}
  Init_SubmitGoal_Response_state_revision task_status(::web_navigation_msgs::srv::SubmitGoal_Response::_task_status_type arg)
  {
    msg_.task_status = std::move(arg);
    return Init_SubmitGoal_Response_state_revision(msg_);
  }

private:
  ::web_navigation_msgs::srv::SubmitGoal_Response msg_;
};

class Init_SubmitGoal_Response_task_id
{
public:
  explicit Init_SubmitGoal_Response_task_id(::web_navigation_msgs::srv::SubmitGoal_Response & msg)
  : msg_(msg)
  {}
  Init_SubmitGoal_Response_task_status task_id(::web_navigation_msgs::srv::SubmitGoal_Response::_task_id_type arg)
  {
    msg_.task_id = std::move(arg);
    return Init_SubmitGoal_Response_task_status(msg_);
  }

private:
  ::web_navigation_msgs::srv::SubmitGoal_Response msg_;
};

class Init_SubmitGoal_Response_request_id
{
public:
  explicit Init_SubmitGoal_Response_request_id(::web_navigation_msgs::srv::SubmitGoal_Response & msg)
  : msg_(msg)
  {}
  Init_SubmitGoal_Response_task_id request_id(::web_navigation_msgs::srv::SubmitGoal_Response::_request_id_type arg)
  {
    msg_.request_id = std::move(arg);
    return Init_SubmitGoal_Response_task_id(msg_);
  }

private:
  ::web_navigation_msgs::srv::SubmitGoal_Response msg_;
};

class Init_SubmitGoal_Response_message
{
public:
  explicit Init_SubmitGoal_Response_message(::web_navigation_msgs::srv::SubmitGoal_Response & msg)
  : msg_(msg)
  {}
  Init_SubmitGoal_Response_request_id message(::web_navigation_msgs::srv::SubmitGoal_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return Init_SubmitGoal_Response_request_id(msg_);
  }

private:
  ::web_navigation_msgs::srv::SubmitGoal_Response msg_;
};

class Init_SubmitGoal_Response_code
{
public:
  explicit Init_SubmitGoal_Response_code(::web_navigation_msgs::srv::SubmitGoal_Response & msg)
  : msg_(msg)
  {}
  Init_SubmitGoal_Response_message code(::web_navigation_msgs::srv::SubmitGoal_Response::_code_type arg)
  {
    msg_.code = std::move(arg);
    return Init_SubmitGoal_Response_message(msg_);
  }

private:
  ::web_navigation_msgs::srv::SubmitGoal_Response msg_;
};

class Init_SubmitGoal_Response_accepted
{
public:
  Init_SubmitGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SubmitGoal_Response_code accepted(::web_navigation_msgs::srv::SubmitGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_SubmitGoal_Response_code(msg_);
  }

private:
  ::web_navigation_msgs::srv::SubmitGoal_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::web_navigation_msgs::srv::SubmitGoal_Response>()
{
  return web_navigation_msgs::srv::builder::Init_SubmitGoal_Response_accepted();
}

}  // namespace web_navigation_msgs

#endif  // WEB_NAVIGATION_MSGS__SRV__DETAIL__SUBMIT_GOAL__BUILDER_HPP_
