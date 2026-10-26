// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from planning_msgs:msg/LaneletSegment.idl
// generated code does not contain a copyright notice

#ifndef PLANNING_MSGS__MSG__DETAIL__LANELET_SEGMENT__BUILDER_HPP_
#define PLANNING_MSGS__MSG__DETAIL__LANELET_SEGMENT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "planning_msgs/msg/detail/lanelet_segment__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace planning_msgs
{

namespace msg
{

namespace builder
{

class Init_LaneletSegment_is_inverted
{
public:
  explicit Init_LaneletSegment_is_inverted(::planning_msgs::msg::LaneletSegment & msg)
  : msg_(msg)
  {}
  ::planning_msgs::msg::LaneletSegment is_inverted(::planning_msgs::msg::LaneletSegment::_is_inverted_type arg)
  {
    msg_.is_inverted = std::move(arg);
    return std::move(msg_);
  }

private:
  ::planning_msgs::msg::LaneletSegment msg_;
};

class Init_LaneletSegment_right_bound
{
public:
  explicit Init_LaneletSegment_right_bound(::planning_msgs::msg::LaneletSegment & msg)
  : msg_(msg)
  {}
  Init_LaneletSegment_is_inverted right_bound(::planning_msgs::msg::LaneletSegment::_right_bound_type arg)
  {
    msg_.right_bound = std::move(arg);
    return Init_LaneletSegment_is_inverted(msg_);
  }

private:
  ::planning_msgs::msg::LaneletSegment msg_;
};

class Init_LaneletSegment_left_bound
{
public:
  explicit Init_LaneletSegment_left_bound(::planning_msgs::msg::LaneletSegment & msg)
  : msg_(msg)
  {}
  Init_LaneletSegment_right_bound left_bound(::planning_msgs::msg::LaneletSegment::_left_bound_type arg)
  {
    msg_.left_bound = std::move(arg);
    return Init_LaneletSegment_right_bound(msg_);
  }

private:
  ::planning_msgs::msg::LaneletSegment msg_;
};

class Init_LaneletSegment_primitives
{
public:
  explicit Init_LaneletSegment_primitives(::planning_msgs::msg::LaneletSegment & msg)
  : msg_(msg)
  {}
  Init_LaneletSegment_left_bound primitives(::planning_msgs::msg::LaneletSegment::_primitives_type arg)
  {
    msg_.primitives = std::move(arg);
    return Init_LaneletSegment_left_bound(msg_);
  }

private:
  ::planning_msgs::msg::LaneletSegment msg_;
};

class Init_LaneletSegment_preferred_primitive
{
public:
  Init_LaneletSegment_preferred_primitive()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LaneletSegment_primitives preferred_primitive(::planning_msgs::msg::LaneletSegment::_preferred_primitive_type arg)
  {
    msg_.preferred_primitive = std::move(arg);
    return Init_LaneletSegment_primitives(msg_);
  }

private:
  ::planning_msgs::msg::LaneletSegment msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::planning_msgs::msg::LaneletSegment>()
{
  return planning_msgs::msg::builder::Init_LaneletSegment_preferred_primitive();
}

}  // namespace planning_msgs

#endif  // PLANNING_MSGS__MSG__DETAIL__LANELET_SEGMENT__BUILDER_HPP_
