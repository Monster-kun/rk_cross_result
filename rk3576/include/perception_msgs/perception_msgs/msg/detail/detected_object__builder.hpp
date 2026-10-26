// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from perception_msgs:msg/DetectedObject.idl
// generated code does not contain a copyright notice

#ifndef PERCEPTION_MSGS__MSG__DETAIL__DETECTED_OBJECT__BUILDER_HPP_
#define PERCEPTION_MSGS__MSG__DETAIL__DETECTED_OBJECT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "perception_msgs/msg/detail/detected_object__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace perception_msgs
{

namespace msg
{

namespace builder
{

class Init_DetectedObject_dimensions
{
public:
  explicit Init_DetectedObject_dimensions(::perception_msgs::msg::DetectedObject & msg)
  : msg_(msg)
  {}
  ::perception_msgs::msg::DetectedObject dimensions(::perception_msgs::msg::DetectedObject::_dimensions_type arg)
  {
    msg_.dimensions = std::move(arg);
    return std::move(msg_);
  }

private:
  ::perception_msgs::msg::DetectedObject msg_;
};

class Init_DetectedObject_pose
{
public:
  explicit Init_DetectedObject_pose(::perception_msgs::msg::DetectedObject & msg)
  : msg_(msg)
  {}
  Init_DetectedObject_dimensions pose(::perception_msgs::msg::DetectedObject::_pose_type arg)
  {
    msg_.pose = std::move(arg);
    return Init_DetectedObject_dimensions(msg_);
  }

private:
  ::perception_msgs::msg::DetectedObject msg_;
};

class Init_DetectedObject_header
{
public:
  Init_DetectedObject_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DetectedObject_pose header(::perception_msgs::msg::DetectedObject::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_DetectedObject_pose(msg_);
  }

private:
  ::perception_msgs::msg::DetectedObject msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::perception_msgs::msg::DetectedObject>()
{
  return perception_msgs::msg::builder::Init_DetectedObject_header();
}

}  // namespace perception_msgs

#endif  // PERCEPTION_MSGS__MSG__DETAIL__DETECTED_OBJECT__BUILDER_HPP_
