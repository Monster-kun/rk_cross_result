// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from perception_msgs:msg/DetectedObjectArray.idl
// generated code does not contain a copyright notice

#ifndef PERCEPTION_MSGS__MSG__DETAIL__DETECTED_OBJECT_ARRAY__BUILDER_HPP_
#define PERCEPTION_MSGS__MSG__DETAIL__DETECTED_OBJECT_ARRAY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "perception_msgs/msg/detail/detected_object_array__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace perception_msgs
{

namespace msg
{

namespace builder
{

class Init_DetectedObjectArray_objects
{
public:
  explicit Init_DetectedObjectArray_objects(::perception_msgs::msg::DetectedObjectArray & msg)
  : msg_(msg)
  {}
  ::perception_msgs::msg::DetectedObjectArray objects(::perception_msgs::msg::DetectedObjectArray::_objects_type arg)
  {
    msg_.objects = std::move(arg);
    return std::move(msg_);
  }

private:
  ::perception_msgs::msg::DetectedObjectArray msg_;
};

class Init_DetectedObjectArray_header
{
public:
  Init_DetectedObjectArray_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DetectedObjectArray_objects header(::perception_msgs::msg::DetectedObjectArray::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_DetectedObjectArray_objects(msg_);
  }

private:
  ::perception_msgs::msg::DetectedObjectArray msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::perception_msgs::msg::DetectedObjectArray>()
{
  return perception_msgs::msg::builder::Init_DetectedObjectArray_header();
}

}  // namespace perception_msgs

#endif  // PERCEPTION_MSGS__MSG__DETAIL__DETECTED_OBJECT_ARRAY__BUILDER_HPP_
