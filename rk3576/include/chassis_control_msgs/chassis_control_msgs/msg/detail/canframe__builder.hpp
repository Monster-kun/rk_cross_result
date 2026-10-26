// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from chassis_control_msgs:msg/Canframe.idl
// generated code does not contain a copyright notice

#ifndef CHASSIS_CONTROL_MSGS__MSG__DETAIL__CANFRAME__BUILDER_HPP_
#define CHASSIS_CONTROL_MSGS__MSG__DETAIL__CANFRAME__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "chassis_control_msgs/msg/detail/canframe__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace chassis_control_msgs
{

namespace msg
{

namespace builder
{

class Init_Canframe_pivcmd
{
public:
  explicit Init_Canframe_pivcmd(::chassis_control_msgs::msg::Canframe & msg)
  : msg_(msg)
  {}
  ::chassis_control_msgs::msg::Canframe pivcmd(::chassis_control_msgs::msg::Canframe::_pivcmd_type arg)
  {
    msg_.pivcmd = std::move(arg);
    return std::move(msg_);
  }

private:
  ::chassis_control_msgs::msg::Canframe msg_;
};

class Init_Canframe_dricmd
{
public:
  explicit Init_Canframe_dricmd(::chassis_control_msgs::msg::Canframe & msg)
  : msg_(msg)
  {}
  Init_Canframe_pivcmd dricmd(::chassis_control_msgs::msg::Canframe::_dricmd_type arg)
  {
    msg_.dricmd = std::move(arg);
    return Init_Canframe_pivcmd(msg_);
  }

private:
  ::chassis_control_msgs::msg::Canframe msg_;
};

class Init_Canframe_id
{
public:
  Init_Canframe_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Canframe_dricmd id(::chassis_control_msgs::msg::Canframe::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_Canframe_dricmd(msg_);
  }

private:
  ::chassis_control_msgs::msg::Canframe msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::chassis_control_msgs::msg::Canframe>()
{
  return chassis_control_msgs::msg::builder::Init_Canframe_id();
}

}  // namespace chassis_control_msgs

#endif  // CHASSIS_CONTROL_MSGS__MSG__DETAIL__CANFRAME__BUILDER_HPP_
