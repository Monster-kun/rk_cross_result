// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from web_navigation_msgs:srv/GetWebMap.idl
// generated code does not contain a copyright notice

#ifndef WEB_NAVIGATION_MSGS__SRV__DETAIL__GET_WEB_MAP__BUILDER_HPP_
#define WEB_NAVIGATION_MSGS__SRV__DETAIL__GET_WEB_MAP__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "web_navigation_msgs/srv/detail/get_web_map__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace web_navigation_msgs
{

namespace srv
{

namespace builder
{

class Init_GetWebMap_Request_if_map_version
{
public:
  Init_GetWebMap_Request_if_map_version()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::web_navigation_msgs::srv::GetWebMap_Request if_map_version(::web_navigation_msgs::srv::GetWebMap_Request::_if_map_version_type arg)
  {
    msg_.if_map_version = std::move(arg);
    return std::move(msg_);
  }

private:
  ::web_navigation_msgs::srv::GetWebMap_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::web_navigation_msgs::srv::GetWebMap_Request>()
{
  return web_navigation_msgs::srv::builder::Init_GetWebMap_Request_if_map_version();
}

}  // namespace web_navigation_msgs


namespace web_navigation_msgs
{

namespace srv
{

namespace builder
{

class Init_GetWebMap_Response_geometry_json
{
public:
  explicit Init_GetWebMap_Response_geometry_json(::web_navigation_msgs::srv::GetWebMap_Response & msg)
  : msg_(msg)
  {}
  ::web_navigation_msgs::srv::GetWebMap_Response geometry_json(::web_navigation_msgs::srv::GetWebMap_Response::_geometry_json_type arg)
  {
    msg_.geometry_json = std::move(arg);
    return std::move(msg_);
  }

private:
  ::web_navigation_msgs::srv::GetWebMap_Response msg_;
};

class Init_GetWebMap_Response_bounds
{
public:
  explicit Init_GetWebMap_Response_bounds(::web_navigation_msgs::srv::GetWebMap_Response & msg)
  : msg_(msg)
  {}
  Init_GetWebMap_Response_geometry_json bounds(::web_navigation_msgs::srv::GetWebMap_Response::_bounds_type arg)
  {
    msg_.bounds = std::move(arg);
    return Init_GetWebMap_Response_geometry_json(msg_);
  }

private:
  ::web_navigation_msgs::srv::GetWebMap_Response msg_;
};

class Init_GetWebMap_Response_unit
{
public:
  explicit Init_GetWebMap_Response_unit(::web_navigation_msgs::srv::GetWebMap_Response & msg)
  : msg_(msg)
  {}
  Init_GetWebMap_Response_bounds unit(::web_navigation_msgs::srv::GetWebMap_Response::_unit_type arg)
  {
    msg_.unit = std::move(arg);
    return Init_GetWebMap_Response_bounds(msg_);
  }

private:
  ::web_navigation_msgs::srv::GetWebMap_Response msg_;
};

class Init_GetWebMap_Response_frame_id
{
public:
  explicit Init_GetWebMap_Response_frame_id(::web_navigation_msgs::srv::GetWebMap_Response & msg)
  : msg_(msg)
  {}
  Init_GetWebMap_Response_unit frame_id(::web_navigation_msgs::srv::GetWebMap_Response::_frame_id_type arg)
  {
    msg_.frame_id = std::move(arg);
    return Init_GetWebMap_Response_unit(msg_);
  }

private:
  ::web_navigation_msgs::srv::GetWebMap_Response msg_;
};

class Init_GetWebMap_Response_coordinate_revision
{
public:
  explicit Init_GetWebMap_Response_coordinate_revision(::web_navigation_msgs::srv::GetWebMap_Response & msg)
  : msg_(msg)
  {}
  Init_GetWebMap_Response_frame_id coordinate_revision(::web_navigation_msgs::srv::GetWebMap_Response::_coordinate_revision_type arg)
  {
    msg_.coordinate_revision = std::move(arg);
    return Init_GetWebMap_Response_frame_id(msg_);
  }

private:
  ::web_navigation_msgs::srv::GetWebMap_Response msg_;
};

class Init_GetWebMap_Response_map_name
{
public:
  explicit Init_GetWebMap_Response_map_name(::web_navigation_msgs::srv::GetWebMap_Response & msg)
  : msg_(msg)
  {}
  Init_GetWebMap_Response_coordinate_revision map_name(::web_navigation_msgs::srv::GetWebMap_Response::_map_name_type arg)
  {
    msg_.map_name = std::move(arg);
    return Init_GetWebMap_Response_coordinate_revision(msg_);
  }

private:
  ::web_navigation_msgs::srv::GetWebMap_Response msg_;
};

class Init_GetWebMap_Response_map_version
{
public:
  explicit Init_GetWebMap_Response_map_version(::web_navigation_msgs::srv::GetWebMap_Response & msg)
  : msg_(msg)
  {}
  Init_GetWebMap_Response_map_name map_version(::web_navigation_msgs::srv::GetWebMap_Response::_map_version_type arg)
  {
    msg_.map_version = std::move(arg);
    return Init_GetWebMap_Response_map_name(msg_);
  }

private:
  ::web_navigation_msgs::srv::GetWebMap_Response msg_;
};

class Init_GetWebMap_Response_message
{
public:
  explicit Init_GetWebMap_Response_message(::web_navigation_msgs::srv::GetWebMap_Response & msg)
  : msg_(msg)
  {}
  Init_GetWebMap_Response_map_version message(::web_navigation_msgs::srv::GetWebMap_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return Init_GetWebMap_Response_map_version(msg_);
  }

private:
  ::web_navigation_msgs::srv::GetWebMap_Response msg_;
};

class Init_GetWebMap_Response_code
{
public:
  explicit Init_GetWebMap_Response_code(::web_navigation_msgs::srv::GetWebMap_Response & msg)
  : msg_(msg)
  {}
  Init_GetWebMap_Response_message code(::web_navigation_msgs::srv::GetWebMap_Response::_code_type arg)
  {
    msg_.code = std::move(arg);
    return Init_GetWebMap_Response_message(msg_);
  }

private:
  ::web_navigation_msgs::srv::GetWebMap_Response msg_;
};

class Init_GetWebMap_Response_not_modified
{
public:
  explicit Init_GetWebMap_Response_not_modified(::web_navigation_msgs::srv::GetWebMap_Response & msg)
  : msg_(msg)
  {}
  Init_GetWebMap_Response_code not_modified(::web_navigation_msgs::srv::GetWebMap_Response::_not_modified_type arg)
  {
    msg_.not_modified = std::move(arg);
    return Init_GetWebMap_Response_code(msg_);
  }

private:
  ::web_navigation_msgs::srv::GetWebMap_Response msg_;
};

class Init_GetWebMap_Response_ready
{
public:
  Init_GetWebMap_Response_ready()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetWebMap_Response_not_modified ready(::web_navigation_msgs::srv::GetWebMap_Response::_ready_type arg)
  {
    msg_.ready = std::move(arg);
    return Init_GetWebMap_Response_not_modified(msg_);
  }

private:
  ::web_navigation_msgs::srv::GetWebMap_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::web_navigation_msgs::srv::GetWebMap_Response>()
{
  return web_navigation_msgs::srv::builder::Init_GetWebMap_Response_ready();
}

}  // namespace web_navigation_msgs

#endif  // WEB_NAVIGATION_MSGS__SRV__DETAIL__GET_WEB_MAP__BUILDER_HPP_
