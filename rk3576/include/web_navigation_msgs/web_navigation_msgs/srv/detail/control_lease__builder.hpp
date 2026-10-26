// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from web_navigation_msgs:srv/ControlLease.idl
// generated code does not contain a copyright notice

#ifndef WEB_NAVIGATION_MSGS__SRV__DETAIL__CONTROL_LEASE__BUILDER_HPP_
#define WEB_NAVIGATION_MSGS__SRV__DETAIL__CONTROL_LEASE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "web_navigation_msgs/srv/detail/control_lease__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace web_navigation_msgs
{

namespace srv
{

namespace builder
{

class Init_ControlLease_Request_control_epoch
{
public:
  explicit Init_ControlLease_Request_control_epoch(::web_navigation_msgs::srv::ControlLease_Request & msg)
  : msg_(msg)
  {}
  ::web_navigation_msgs::srv::ControlLease_Request control_epoch(::web_navigation_msgs::srv::ControlLease_Request::_control_epoch_type arg)
  {
    msg_.control_epoch = std::move(arg);
    return std::move(msg_);
  }

private:
  ::web_navigation_msgs::srv::ControlLease_Request msg_;
};

class Init_ControlLease_Request_lease_token
{
public:
  explicit Init_ControlLease_Request_lease_token(::web_navigation_msgs::srv::ControlLease_Request & msg)
  : msg_(msg)
  {}
  Init_ControlLease_Request_control_epoch lease_token(::web_navigation_msgs::srv::ControlLease_Request::_lease_token_type arg)
  {
    msg_.lease_token = std::move(arg);
    return Init_ControlLease_Request_control_epoch(msg_);
  }

private:
  ::web_navigation_msgs::srv::ControlLease_Request msg_;
};

class Init_ControlLease_Request_manager_boot_id
{
public:
  explicit Init_ControlLease_Request_manager_boot_id(::web_navigation_msgs::srv::ControlLease_Request & msg)
  : msg_(msg)
  {}
  Init_ControlLease_Request_lease_token manager_boot_id(::web_navigation_msgs::srv::ControlLease_Request::_manager_boot_id_type arg)
  {
    msg_.manager_boot_id = std::move(arg);
    return Init_ControlLease_Request_lease_token(msg_);
  }

private:
  ::web_navigation_msgs::srv::ControlLease_Request msg_;
};

class Init_ControlLease_Request_device_label
{
public:
  explicit Init_ControlLease_Request_device_label(::web_navigation_msgs::srv::ControlLease_Request & msg)
  : msg_(msg)
  {}
  Init_ControlLease_Request_manager_boot_id device_label(::web_navigation_msgs::srv::ControlLease_Request::_device_label_type arg)
  {
    msg_.device_label = std::move(arg);
    return Init_ControlLease_Request_manager_boot_id(msg_);
  }

private:
  ::web_navigation_msgs::srv::ControlLease_Request msg_;
};

class Init_ControlLease_Request_session_id
{
public:
  explicit Init_ControlLease_Request_session_id(::web_navigation_msgs::srv::ControlLease_Request & msg)
  : msg_(msg)
  {}
  Init_ControlLease_Request_device_label session_id(::web_navigation_msgs::srv::ControlLease_Request::_session_id_type arg)
  {
    msg_.session_id = std::move(arg);
    return Init_ControlLease_Request_device_label(msg_);
  }

private:
  ::web_navigation_msgs::srv::ControlLease_Request msg_;
};

class Init_ControlLease_Request_operation
{
public:
  Init_ControlLease_Request_operation()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ControlLease_Request_session_id operation(::web_navigation_msgs::srv::ControlLease_Request::_operation_type arg)
  {
    msg_.operation = std::move(arg);
    return Init_ControlLease_Request_session_id(msg_);
  }

private:
  ::web_navigation_msgs::srv::ControlLease_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::web_navigation_msgs::srv::ControlLease_Request>()
{
  return web_navigation_msgs::srv::builder::Init_ControlLease_Request_operation();
}

}  // namespace web_navigation_msgs


namespace web_navigation_msgs
{

namespace srv
{

namespace builder
{

class Init_ControlLease_Response_owner_label
{
public:
  explicit Init_ControlLease_Response_owner_label(::web_navigation_msgs::srv::ControlLease_Response & msg)
  : msg_(msg)
  {}
  ::web_navigation_msgs::srv::ControlLease_Response owner_label(::web_navigation_msgs::srv::ControlLease_Response::_owner_label_type arg)
  {
    msg_.owner_label = std::move(arg);
    return std::move(msg_);
  }

private:
  ::web_navigation_msgs::srv::ControlLease_Response msg_;
};

class Init_ControlLease_Response_control_held
{
public:
  explicit Init_ControlLease_Response_control_held(::web_navigation_msgs::srv::ControlLease_Response & msg)
  : msg_(msg)
  {}
  Init_ControlLease_Response_owner_label control_held(::web_navigation_msgs::srv::ControlLease_Response::_control_held_type arg)
  {
    msg_.control_held = std::move(arg);
    return Init_ControlLease_Response_owner_label(msg_);
  }

private:
  ::web_navigation_msgs::srv::ControlLease_Response msg_;
};

class Init_ControlLease_Response_lease_ttl_ms
{
public:
  explicit Init_ControlLease_Response_lease_ttl_ms(::web_navigation_msgs::srv::ControlLease_Response & msg)
  : msg_(msg)
  {}
  Init_ControlLease_Response_control_held lease_ttl_ms(::web_navigation_msgs::srv::ControlLease_Response::_lease_ttl_ms_type arg)
  {
    msg_.lease_ttl_ms = std::move(arg);
    return Init_ControlLease_Response_control_held(msg_);
  }

private:
  ::web_navigation_msgs::srv::ControlLease_Response msg_;
};

class Init_ControlLease_Response_control_epoch
{
public:
  explicit Init_ControlLease_Response_control_epoch(::web_navigation_msgs::srv::ControlLease_Response & msg)
  : msg_(msg)
  {}
  Init_ControlLease_Response_lease_ttl_ms control_epoch(::web_navigation_msgs::srv::ControlLease_Response::_control_epoch_type arg)
  {
    msg_.control_epoch = std::move(arg);
    return Init_ControlLease_Response_lease_ttl_ms(msg_);
  }

private:
  ::web_navigation_msgs::srv::ControlLease_Response msg_;
};

class Init_ControlLease_Response_lease_token
{
public:
  explicit Init_ControlLease_Response_lease_token(::web_navigation_msgs::srv::ControlLease_Response & msg)
  : msg_(msg)
  {}
  Init_ControlLease_Response_control_epoch lease_token(::web_navigation_msgs::srv::ControlLease_Response::_lease_token_type arg)
  {
    msg_.lease_token = std::move(arg);
    return Init_ControlLease_Response_control_epoch(msg_);
  }

private:
  ::web_navigation_msgs::srv::ControlLease_Response msg_;
};

class Init_ControlLease_Response_manager_boot_id
{
public:
  explicit Init_ControlLease_Response_manager_boot_id(::web_navigation_msgs::srv::ControlLease_Response & msg)
  : msg_(msg)
  {}
  Init_ControlLease_Response_lease_token manager_boot_id(::web_navigation_msgs::srv::ControlLease_Response::_manager_boot_id_type arg)
  {
    msg_.manager_boot_id = std::move(arg);
    return Init_ControlLease_Response_lease_token(msg_);
  }

private:
  ::web_navigation_msgs::srv::ControlLease_Response msg_;
};

class Init_ControlLease_Response_message
{
public:
  explicit Init_ControlLease_Response_message(::web_navigation_msgs::srv::ControlLease_Response & msg)
  : msg_(msg)
  {}
  Init_ControlLease_Response_manager_boot_id message(::web_navigation_msgs::srv::ControlLease_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return Init_ControlLease_Response_manager_boot_id(msg_);
  }

private:
  ::web_navigation_msgs::srv::ControlLease_Response msg_;
};

class Init_ControlLease_Response_code
{
public:
  explicit Init_ControlLease_Response_code(::web_navigation_msgs::srv::ControlLease_Response & msg)
  : msg_(msg)
  {}
  Init_ControlLease_Response_message code(::web_navigation_msgs::srv::ControlLease_Response::_code_type arg)
  {
    msg_.code = std::move(arg);
    return Init_ControlLease_Response_message(msg_);
  }

private:
  ::web_navigation_msgs::srv::ControlLease_Response msg_;
};

class Init_ControlLease_Response_success
{
public:
  Init_ControlLease_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ControlLease_Response_code success(::web_navigation_msgs::srv::ControlLease_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_ControlLease_Response_code(msg_);
  }

private:
  ::web_navigation_msgs::srv::ControlLease_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::web_navigation_msgs::srv::ControlLease_Response>()
{
  return web_navigation_msgs::srv::builder::Init_ControlLease_Response_success();
}

}  // namespace web_navigation_msgs

#endif  // WEB_NAVIGATION_MSGS__SRV__DETAIL__CONTROL_LEASE__BUILDER_HPP_
