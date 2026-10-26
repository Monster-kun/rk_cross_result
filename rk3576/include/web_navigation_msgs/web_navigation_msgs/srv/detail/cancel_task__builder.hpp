// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from web_navigation_msgs:srv/CancelTask.idl
// generated code does not contain a copyright notice

#ifndef WEB_NAVIGATION_MSGS__SRV__DETAIL__CANCEL_TASK__BUILDER_HPP_
#define WEB_NAVIGATION_MSGS__SRV__DETAIL__CANCEL_TASK__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "web_navigation_msgs/srv/detail/cancel_task__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace web_navigation_msgs
{

namespace srv
{

namespace builder
{

class Init_CancelTask_Request_expected_state_revision
{
public:
  explicit Init_CancelTask_Request_expected_state_revision(::web_navigation_msgs::srv::CancelTask_Request & msg)
  : msg_(msg)
  {}
  ::web_navigation_msgs::srv::CancelTask_Request expected_state_revision(::web_navigation_msgs::srv::CancelTask_Request::_expected_state_revision_type arg)
  {
    msg_.expected_state_revision = std::move(arg);
    return std::move(msg_);
  }

private:
  ::web_navigation_msgs::srv::CancelTask_Request msg_;
};

class Init_CancelTask_Request_control_epoch
{
public:
  explicit Init_CancelTask_Request_control_epoch(::web_navigation_msgs::srv::CancelTask_Request & msg)
  : msg_(msg)
  {}
  Init_CancelTask_Request_expected_state_revision control_epoch(::web_navigation_msgs::srv::CancelTask_Request::_control_epoch_type arg)
  {
    msg_.control_epoch = std::move(arg);
    return Init_CancelTask_Request_expected_state_revision(msg_);
  }

private:
  ::web_navigation_msgs::srv::CancelTask_Request msg_;
};

class Init_CancelTask_Request_lease_token
{
public:
  explicit Init_CancelTask_Request_lease_token(::web_navigation_msgs::srv::CancelTask_Request & msg)
  : msg_(msg)
  {}
  Init_CancelTask_Request_control_epoch lease_token(::web_navigation_msgs::srv::CancelTask_Request::_lease_token_type arg)
  {
    msg_.lease_token = std::move(arg);
    return Init_CancelTask_Request_control_epoch(msg_);
  }

private:
  ::web_navigation_msgs::srv::CancelTask_Request msg_;
};

class Init_CancelTask_Request_manager_boot_id
{
public:
  explicit Init_CancelTask_Request_manager_boot_id(::web_navigation_msgs::srv::CancelTask_Request & msg)
  : msg_(msg)
  {}
  Init_CancelTask_Request_lease_token manager_boot_id(::web_navigation_msgs::srv::CancelTask_Request::_manager_boot_id_type arg)
  {
    msg_.manager_boot_id = std::move(arg);
    return Init_CancelTask_Request_lease_token(msg_);
  }

private:
  ::web_navigation_msgs::srv::CancelTask_Request msg_;
};

class Init_CancelTask_Request_session_id
{
public:
  explicit Init_CancelTask_Request_session_id(::web_navigation_msgs::srv::CancelTask_Request & msg)
  : msg_(msg)
  {}
  Init_CancelTask_Request_manager_boot_id session_id(::web_navigation_msgs::srv::CancelTask_Request::_session_id_type arg)
  {
    msg_.session_id = std::move(arg);
    return Init_CancelTask_Request_manager_boot_id(msg_);
  }

private:
  ::web_navigation_msgs::srv::CancelTask_Request msg_;
};

class Init_CancelTask_Request_task_id
{
public:
  explicit Init_CancelTask_Request_task_id(::web_navigation_msgs::srv::CancelTask_Request & msg)
  : msg_(msg)
  {}
  Init_CancelTask_Request_session_id task_id(::web_navigation_msgs::srv::CancelTask_Request::_task_id_type arg)
  {
    msg_.task_id = std::move(arg);
    return Init_CancelTask_Request_session_id(msg_);
  }

private:
  ::web_navigation_msgs::srv::CancelTask_Request msg_;
};

class Init_CancelTask_Request_request_id
{
public:
  Init_CancelTask_Request_request_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CancelTask_Request_task_id request_id(::web_navigation_msgs::srv::CancelTask_Request::_request_id_type arg)
  {
    msg_.request_id = std::move(arg);
    return Init_CancelTask_Request_task_id(msg_);
  }

private:
  ::web_navigation_msgs::srv::CancelTask_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::web_navigation_msgs::srv::CancelTask_Request>()
{
  return web_navigation_msgs::srv::builder::Init_CancelTask_Request_request_id();
}

}  // namespace web_navigation_msgs


namespace web_navigation_msgs
{

namespace srv
{

namespace builder
{

class Init_CancelTask_Response_state_revision
{
public:
  explicit Init_CancelTask_Response_state_revision(::web_navigation_msgs::srv::CancelTask_Response & msg)
  : msg_(msg)
  {}
  ::web_navigation_msgs::srv::CancelTask_Response state_revision(::web_navigation_msgs::srv::CancelTask_Response::_state_revision_type arg)
  {
    msg_.state_revision = std::move(arg);
    return std::move(msg_);
  }

private:
  ::web_navigation_msgs::srv::CancelTask_Response msg_;
};

class Init_CancelTask_Response_task_status
{
public:
  explicit Init_CancelTask_Response_task_status(::web_navigation_msgs::srv::CancelTask_Response & msg)
  : msg_(msg)
  {}
  Init_CancelTask_Response_state_revision task_status(::web_navigation_msgs::srv::CancelTask_Response::_task_status_type arg)
  {
    msg_.task_status = std::move(arg);
    return Init_CancelTask_Response_state_revision(msg_);
  }

private:
  ::web_navigation_msgs::srv::CancelTask_Response msg_;
};

class Init_CancelTask_Response_request_id
{
public:
  explicit Init_CancelTask_Response_request_id(::web_navigation_msgs::srv::CancelTask_Response & msg)
  : msg_(msg)
  {}
  Init_CancelTask_Response_task_status request_id(::web_navigation_msgs::srv::CancelTask_Response::_request_id_type arg)
  {
    msg_.request_id = std::move(arg);
    return Init_CancelTask_Response_task_status(msg_);
  }

private:
  ::web_navigation_msgs::srv::CancelTask_Response msg_;
};

class Init_CancelTask_Response_message
{
public:
  explicit Init_CancelTask_Response_message(::web_navigation_msgs::srv::CancelTask_Response & msg)
  : msg_(msg)
  {}
  Init_CancelTask_Response_request_id message(::web_navigation_msgs::srv::CancelTask_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return Init_CancelTask_Response_request_id(msg_);
  }

private:
  ::web_navigation_msgs::srv::CancelTask_Response msg_;
};

class Init_CancelTask_Response_code
{
public:
  explicit Init_CancelTask_Response_code(::web_navigation_msgs::srv::CancelTask_Response & msg)
  : msg_(msg)
  {}
  Init_CancelTask_Response_message code(::web_navigation_msgs::srv::CancelTask_Response::_code_type arg)
  {
    msg_.code = std::move(arg);
    return Init_CancelTask_Response_message(msg_);
  }

private:
  ::web_navigation_msgs::srv::CancelTask_Response msg_;
};

class Init_CancelTask_Response_accepted
{
public:
  Init_CancelTask_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CancelTask_Response_code accepted(::web_navigation_msgs::srv::CancelTask_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_CancelTask_Response_code(msg_);
  }

private:
  ::web_navigation_msgs::srv::CancelTask_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::web_navigation_msgs::srv::CancelTask_Response>()
{
  return web_navigation_msgs::srv::builder::Init_CancelTask_Response_accepted();
}

}  // namespace web_navigation_msgs

#endif  // WEB_NAVIGATION_MSGS__SRV__DETAIL__CANCEL_TASK__BUILDER_HPP_
