// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from web_navigation_msgs:srv/ValidateTarget.idl
// generated code does not contain a copyright notice

#ifndef WEB_NAVIGATION_MSGS__SRV__DETAIL__VALIDATE_TARGET__BUILDER_HPP_
#define WEB_NAVIGATION_MSGS__SRV__DETAIL__VALIDATE_TARGET__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "web_navigation_msgs/srv/detail/validate_target__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace web_navigation_msgs
{

namespace srv
{

namespace builder
{

class Init_ValidateTarget_Request_suggest_nearest
{
public:
  explicit Init_ValidateTarget_Request_suggest_nearest(::web_navigation_msgs::srv::ValidateTarget_Request & msg)
  : msg_(msg)
  {}
  ::web_navigation_msgs::srv::ValidateTarget_Request suggest_nearest(::web_navigation_msgs::srv::ValidateTarget_Request::_suggest_nearest_type arg)
  {
    msg_.suggest_nearest = std::move(arg);
    return std::move(msg_);
  }

private:
  ::web_navigation_msgs::srv::ValidateTarget_Request msg_;
};

class Init_ValidateTarget_Request_selected_layer_id
{
public:
  explicit Init_ValidateTarget_Request_selected_layer_id(::web_navigation_msgs::srv::ValidateTarget_Request & msg)
  : msg_(msg)
  {}
  Init_ValidateTarget_Request_suggest_nearest selected_layer_id(::web_navigation_msgs::srv::ValidateTarget_Request::_selected_layer_id_type arg)
  {
    msg_.selected_layer_id = std::move(arg);
    return Init_ValidateTarget_Request_suggest_nearest(msg_);
  }

private:
  ::web_navigation_msgs::srv::ValidateTarget_Request msg_;
};

class Init_ValidateTarget_Request_y
{
public:
  explicit Init_ValidateTarget_Request_y(::web_navigation_msgs::srv::ValidateTarget_Request & msg)
  : msg_(msg)
  {}
  Init_ValidateTarget_Request_selected_layer_id y(::web_navigation_msgs::srv::ValidateTarget_Request::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_ValidateTarget_Request_selected_layer_id(msg_);
  }

private:
  ::web_navigation_msgs::srv::ValidateTarget_Request msg_;
};

class Init_ValidateTarget_Request_x
{
public:
  explicit Init_ValidateTarget_Request_x(::web_navigation_msgs::srv::ValidateTarget_Request & msg)
  : msg_(msg)
  {}
  Init_ValidateTarget_Request_y x(::web_navigation_msgs::srv::ValidateTarget_Request::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_ValidateTarget_Request_y(msg_);
  }

private:
  ::web_navigation_msgs::srv::ValidateTarget_Request msg_;
};

class Init_ValidateTarget_Request_frame_id
{
public:
  explicit Init_ValidateTarget_Request_frame_id(::web_navigation_msgs::srv::ValidateTarget_Request & msg)
  : msg_(msg)
  {}
  Init_ValidateTarget_Request_x frame_id(::web_navigation_msgs::srv::ValidateTarget_Request::_frame_id_type arg)
  {
    msg_.frame_id = std::move(arg);
    return Init_ValidateTarget_Request_x(msg_);
  }

private:
  ::web_navigation_msgs::srv::ValidateTarget_Request msg_;
};

class Init_ValidateTarget_Request_map_version
{
public:
  Init_ValidateTarget_Request_map_version()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ValidateTarget_Request_frame_id map_version(::web_navigation_msgs::srv::ValidateTarget_Request::_map_version_type arg)
  {
    msg_.map_version = std::move(arg);
    return Init_ValidateTarget_Request_frame_id(msg_);
  }

private:
  ::web_navigation_msgs::srv::ValidateTarget_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::web_navigation_msgs::srv::ValidateTarget_Request>()
{
  return web_navigation_msgs::srv::builder::Init_ValidateTarget_Request_map_version();
}

}  // namespace web_navigation_msgs


namespace web_navigation_msgs
{

namespace srv
{

namespace builder
{

class Init_ValidateTarget_Response_lanelet_id
{
public:
  explicit Init_ValidateTarget_Response_lanelet_id(::web_navigation_msgs::srv::ValidateTarget_Response & msg)
  : msg_(msg)
  {}
  ::web_navigation_msgs::srv::ValidateTarget_Response lanelet_id(::web_navigation_msgs::srv::ValidateTarget_Response::_lanelet_id_type arg)
  {
    msg_.lanelet_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::web_navigation_msgs::srv::ValidateTarget_Response msg_;
};

class Init_ValidateTarget_Response_y
{
public:
  explicit Init_ValidateTarget_Response_y(::web_navigation_msgs::srv::ValidateTarget_Response & msg)
  : msg_(msg)
  {}
  Init_ValidateTarget_Response_lanelet_id y(::web_navigation_msgs::srv::ValidateTarget_Response::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_ValidateTarget_Response_lanelet_id(msg_);
  }

private:
  ::web_navigation_msgs::srv::ValidateTarget_Response msg_;
};

class Init_ValidateTarget_Response_x
{
public:
  explicit Init_ValidateTarget_Response_x(::web_navigation_msgs::srv::ValidateTarget_Response & msg)
  : msg_(msg)
  {}
  Init_ValidateTarget_Response_y x(::web_navigation_msgs::srv::ValidateTarget_Response::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_ValidateTarget_Response_y(msg_);
  }

private:
  ::web_navigation_msgs::srv::ValidateTarget_Response msg_;
};

class Init_ValidateTarget_Response_lanelet_ids
{
public:
  explicit Init_ValidateTarget_Response_lanelet_ids(::web_navigation_msgs::srv::ValidateTarget_Response & msg)
  : msg_(msg)
  {}
  Init_ValidateTarget_Response_x lanelet_ids(::web_navigation_msgs::srv::ValidateTarget_Response::_lanelet_ids_type arg)
  {
    msg_.lanelet_ids = std::move(arg);
    return Init_ValidateTarget_Response_x(msg_);
  }

private:
  ::web_navigation_msgs::srv::ValidateTarget_Response msg_;
};

class Init_ValidateTarget_Response_map_version
{
public:
  explicit Init_ValidateTarget_Response_map_version(::web_navigation_msgs::srv::ValidateTarget_Response & msg)
  : msg_(msg)
  {}
  Init_ValidateTarget_Response_lanelet_ids map_version(::web_navigation_msgs::srv::ValidateTarget_Response::_map_version_type arg)
  {
    msg_.map_version = std::move(arg);
    return Init_ValidateTarget_Response_lanelet_ids(msg_);
  }

private:
  ::web_navigation_msgs::srv::ValidateTarget_Response msg_;
};

class Init_ValidateTarget_Response_message
{
public:
  explicit Init_ValidateTarget_Response_message(::web_navigation_msgs::srv::ValidateTarget_Response & msg)
  : msg_(msg)
  {}
  Init_ValidateTarget_Response_map_version message(::web_navigation_msgs::srv::ValidateTarget_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return Init_ValidateTarget_Response_map_version(msg_);
  }

private:
  ::web_navigation_msgs::srv::ValidateTarget_Response msg_;
};

class Init_ValidateTarget_Response_code
{
public:
  explicit Init_ValidateTarget_Response_code(::web_navigation_msgs::srv::ValidateTarget_Response & msg)
  : msg_(msg)
  {}
  Init_ValidateTarget_Response_message code(::web_navigation_msgs::srv::ValidateTarget_Response::_code_type arg)
  {
    msg_.code = std::move(arg);
    return Init_ValidateTarget_Response_message(msg_);
  }

private:
  ::web_navigation_msgs::srv::ValidateTarget_Response msg_;
};

class Init_ValidateTarget_Response_valid
{
public:
  Init_ValidateTarget_Response_valid()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ValidateTarget_Response_code valid(::web_navigation_msgs::srv::ValidateTarget_Response::_valid_type arg)
  {
    msg_.valid = std::move(arg);
    return Init_ValidateTarget_Response_code(msg_);
  }

private:
  ::web_navigation_msgs::srv::ValidateTarget_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::web_navigation_msgs::srv::ValidateTarget_Response>()
{
  return web_navigation_msgs::srv::builder::Init_ValidateTarget_Response_valid();
}

}  // namespace web_navigation_msgs

#endif  // WEB_NAVIGATION_MSGS__SRV__DETAIL__VALIDATE_TARGET__BUILDER_HPP_
