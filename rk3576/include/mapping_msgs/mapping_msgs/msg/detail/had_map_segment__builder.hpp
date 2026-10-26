// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mapping_msgs:msg/HADMapSegment.idl
// generated code does not contain a copyright notice

#ifndef MAPPING_MSGS__MSG__DETAIL__HAD_MAP_SEGMENT__BUILDER_HPP_
#define MAPPING_MSGS__MSG__DETAIL__HAD_MAP_SEGMENT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mapping_msgs/msg/detail/had_map_segment__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mapping_msgs
{

namespace msg
{

namespace builder
{

class Init_HADMapSegment_preferred_primitive_id
{
public:
  explicit Init_HADMapSegment_preferred_primitive_id(::mapping_msgs::msg::HADMapSegment & msg)
  : msg_(msg)
  {}
  ::mapping_msgs::msg::HADMapSegment preferred_primitive_id(::mapping_msgs::msg::HADMapSegment::_preferred_primitive_id_type arg)
  {
    msg_.preferred_primitive_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mapping_msgs::msg::HADMapSegment msg_;
};

class Init_HADMapSegment_primitives
{
public:
  Init_HADMapSegment_primitives()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_HADMapSegment_preferred_primitive_id primitives(::mapping_msgs::msg::HADMapSegment::_primitives_type arg)
  {
    msg_.primitives = std::move(arg);
    return Init_HADMapSegment_preferred_primitive_id(msg_);
  }

private:
  ::mapping_msgs::msg::HADMapSegment msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mapping_msgs::msg::HADMapSegment>()
{
  return mapping_msgs::msg::builder::Init_HADMapSegment_primitives();
}

}  // namespace mapping_msgs

#endif  // MAPPING_MSGS__MSG__DETAIL__HAD_MAP_SEGMENT__BUILDER_HPP_
