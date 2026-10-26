// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from planning_msgs:msg/LaneletPrimitive.idl
// generated code does not contain a copyright notice

#ifndef PLANNING_MSGS__MSG__DETAIL__LANELET_PRIMITIVE__BUILDER_HPP_
#define PLANNING_MSGS__MSG__DETAIL__LANELET_PRIMITIVE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "planning_msgs/msg/detail/lanelet_primitive__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace planning_msgs
{

namespace msg
{

namespace builder
{

class Init_LaneletPrimitive_primitive_type
{
public:
  explicit Init_LaneletPrimitive_primitive_type(::planning_msgs::msg::LaneletPrimitive & msg)
  : msg_(msg)
  {}
  ::planning_msgs::msg::LaneletPrimitive primitive_type(::planning_msgs::msg::LaneletPrimitive::_primitive_type_type arg)
  {
    msg_.primitive_type = std::move(arg);
    return std::move(msg_);
  }

private:
  ::planning_msgs::msg::LaneletPrimitive msg_;
};

class Init_LaneletPrimitive_id
{
public:
  Init_LaneletPrimitive_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LaneletPrimitive_primitive_type id(::planning_msgs::msg::LaneletPrimitive::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_LaneletPrimitive_primitive_type(msg_);
  }

private:
  ::planning_msgs::msg::LaneletPrimitive msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::planning_msgs::msg::LaneletPrimitive>()
{
  return planning_msgs::msg::builder::Init_LaneletPrimitive_id();
}

}  // namespace planning_msgs

#endif  // PLANNING_MSGS__MSG__DETAIL__LANELET_PRIMITIVE__BUILDER_HPP_
