// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from web_navigation_msgs:msg/SequenceWaypoint.idl
// generated code does not contain a copyright notice

#ifndef WEB_NAVIGATION_MSGS__MSG__DETAIL__SEQUENCE_WAYPOINT__BUILDER_HPP_
#define WEB_NAVIGATION_MSGS__MSG__DETAIL__SEQUENCE_WAYPOINT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "web_navigation_msgs/msg/detail/sequence_waypoint__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace web_navigation_msgs
{

namespace msg
{

namespace builder
{

class Init_SequenceWaypoint_stop
{
public:
  explicit Init_SequenceWaypoint_stop(::web_navigation_msgs::msg::SequenceWaypoint & msg)
  : msg_(msg)
  {}
  ::web_navigation_msgs::msg::SequenceWaypoint stop(::web_navigation_msgs::msg::SequenceWaypoint::_stop_type arg)
  {
    msg_.stop = std::move(arg);
    return std::move(msg_);
  }

private:
  ::web_navigation_msgs::msg::SequenceWaypoint msg_;
};

class Init_SequenceWaypoint_lanelet_id
{
public:
  explicit Init_SequenceWaypoint_lanelet_id(::web_navigation_msgs::msg::SequenceWaypoint & msg)
  : msg_(msg)
  {}
  Init_SequenceWaypoint_stop lanelet_id(::web_navigation_msgs::msg::SequenceWaypoint::_lanelet_id_type arg)
  {
    msg_.lanelet_id = std::move(arg);
    return Init_SequenceWaypoint_stop(msg_);
  }

private:
  ::web_navigation_msgs::msg::SequenceWaypoint msg_;
};

class Init_SequenceWaypoint_y
{
public:
  explicit Init_SequenceWaypoint_y(::web_navigation_msgs::msg::SequenceWaypoint & msg)
  : msg_(msg)
  {}
  Init_SequenceWaypoint_lanelet_id y(::web_navigation_msgs::msg::SequenceWaypoint::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_SequenceWaypoint_lanelet_id(msg_);
  }

private:
  ::web_navigation_msgs::msg::SequenceWaypoint msg_;
};

class Init_SequenceWaypoint_x
{
public:
  explicit Init_SequenceWaypoint_x(::web_navigation_msgs::msg::SequenceWaypoint & msg)
  : msg_(msg)
  {}
  Init_SequenceWaypoint_y x(::web_navigation_msgs::msg::SequenceWaypoint::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_SequenceWaypoint_y(msg_);
  }

private:
  ::web_navigation_msgs::msg::SequenceWaypoint msg_;
};

class Init_SequenceWaypoint_name
{
public:
  explicit Init_SequenceWaypoint_name(::web_navigation_msgs::msg::SequenceWaypoint & msg)
  : msg_(msg)
  {}
  Init_SequenceWaypoint_x name(::web_navigation_msgs::msg::SequenceWaypoint::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_SequenceWaypoint_x(msg_);
  }

private:
  ::web_navigation_msgs::msg::SequenceWaypoint msg_;
};

class Init_SequenceWaypoint_annotation_id
{
public:
  Init_SequenceWaypoint_annotation_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SequenceWaypoint_name annotation_id(::web_navigation_msgs::msg::SequenceWaypoint::_annotation_id_type arg)
  {
    msg_.annotation_id = std::move(arg);
    return Init_SequenceWaypoint_name(msg_);
  }

private:
  ::web_navigation_msgs::msg::SequenceWaypoint msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::web_navigation_msgs::msg::SequenceWaypoint>()
{
  return web_navigation_msgs::msg::builder::Init_SequenceWaypoint_annotation_id();
}

}  // namespace web_navigation_msgs

#endif  // WEB_NAVIGATION_MSGS__MSG__DETAIL__SEQUENCE_WAYPOINT__BUILDER_HPP_
