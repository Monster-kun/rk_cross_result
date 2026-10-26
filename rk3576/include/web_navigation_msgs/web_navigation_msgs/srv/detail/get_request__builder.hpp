// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from web_navigation_msgs:srv/GetRequest.idl
// generated code does not contain a copyright notice

#ifndef WEB_NAVIGATION_MSGS__SRV__DETAIL__GET_REQUEST__BUILDER_HPP_
#define WEB_NAVIGATION_MSGS__SRV__DETAIL__GET_REQUEST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "web_navigation_msgs/srv/detail/get_request__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace web_navigation_msgs
{

namespace srv
{

namespace builder
{

class Init_GetRequest_Request_request_id
{
public:
  Init_GetRequest_Request_request_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::web_navigation_msgs::srv::GetRequest_Request request_id(::web_navigation_msgs::srv::GetRequest_Request::_request_id_type arg)
  {
    msg_.request_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::web_navigation_msgs::srv::GetRequest_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::web_navigation_msgs::srv::GetRequest_Request>()
{
  return web_navigation_msgs::srv::builder::Init_GetRequest_Request_request_id();
}

}  // namespace web_navigation_msgs


namespace web_navigation_msgs
{

namespace srv
{

namespace builder
{

class Init_GetRequest_Response_state_revision
{
public:
  explicit Init_GetRequest_Response_state_revision(::web_navigation_msgs::srv::GetRequest_Response & msg)
  : msg_(msg)
  {}
  ::web_navigation_msgs::srv::GetRequest_Response state_revision(::web_navigation_msgs::srv::GetRequest_Response::_state_revision_type arg)
  {
    msg_.state_revision = std::move(arg);
    return std::move(msg_);
  }

private:
  ::web_navigation_msgs::srv::GetRequest_Response msg_;
};

class Init_GetRequest_Response_task_status
{
public:
  explicit Init_GetRequest_Response_task_status(::web_navigation_msgs::srv::GetRequest_Response & msg)
  : msg_(msg)
  {}
  Init_GetRequest_Response_state_revision task_status(::web_navigation_msgs::srv::GetRequest_Response::_task_status_type arg)
  {
    msg_.task_status = std::move(arg);
    return Init_GetRequest_Response_state_revision(msg_);
  }

private:
  ::web_navigation_msgs::srv::GetRequest_Response msg_;
};

class Init_GetRequest_Response_task_id
{
public:
  explicit Init_GetRequest_Response_task_id(::web_navigation_msgs::srv::GetRequest_Response & msg)
  : msg_(msg)
  {}
  Init_GetRequest_Response_task_status task_id(::web_navigation_msgs::srv::GetRequest_Response::_task_id_type arg)
  {
    msg_.task_id = std::move(arg);
    return Init_GetRequest_Response_task_status(msg_);
  }

private:
  ::web_navigation_msgs::srv::GetRequest_Response msg_;
};

class Init_GetRequest_Response_message
{
public:
  explicit Init_GetRequest_Response_message(::web_navigation_msgs::srv::GetRequest_Response & msg)
  : msg_(msg)
  {}
  Init_GetRequest_Response_task_id message(::web_navigation_msgs::srv::GetRequest_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return Init_GetRequest_Response_task_id(msg_);
  }

private:
  ::web_navigation_msgs::srv::GetRequest_Response msg_;
};

class Init_GetRequest_Response_code
{
public:
  explicit Init_GetRequest_Response_code(::web_navigation_msgs::srv::GetRequest_Response & msg)
  : msg_(msg)
  {}
  Init_GetRequest_Response_message code(::web_navigation_msgs::srv::GetRequest_Response::_code_type arg)
  {
    msg_.code = std::move(arg);
    return Init_GetRequest_Response_message(msg_);
  }

private:
  ::web_navigation_msgs::srv::GetRequest_Response msg_;
};

class Init_GetRequest_Response_accepted
{
public:
  explicit Init_GetRequest_Response_accepted(::web_navigation_msgs::srv::GetRequest_Response & msg)
  : msg_(msg)
  {}
  Init_GetRequest_Response_code accepted(::web_navigation_msgs::srv::GetRequest_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_GetRequest_Response_code(msg_);
  }

private:
  ::web_navigation_msgs::srv::GetRequest_Response msg_;
};

class Init_GetRequest_Response_found
{
public:
  Init_GetRequest_Response_found()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetRequest_Response_accepted found(::web_navigation_msgs::srv::GetRequest_Response::_found_type arg)
  {
    msg_.found = std::move(arg);
    return Init_GetRequest_Response_accepted(msg_);
  }

private:
  ::web_navigation_msgs::srv::GetRequest_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::web_navigation_msgs::srv::GetRequest_Response>()
{
  return web_navigation_msgs::srv::builder::Init_GetRequest_Response_found();
}

}  // namespace web_navigation_msgs

#endif  // WEB_NAVIGATION_MSGS__SRV__DETAIL__GET_REQUEST__BUILDER_HPP_
