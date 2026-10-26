// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from chassis_control_msgs:msg/Ackcmd.idl
// generated code does not contain a copyright notice

#ifndef CHASSIS_CONTROL_MSGS__MSG__DETAIL__ACKCMD__BUILDER_HPP_
#define CHASSIS_CONTROL_MSGS__MSG__DETAIL__ACKCMD__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "chassis_control_msgs/msg/detail/ackcmd__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace chassis_control_msgs
{

namespace msg
{

namespace builder
{

class Init_Ackcmd_steer
{
public:
  explicit Init_Ackcmd_steer(::chassis_control_msgs::msg::Ackcmd & msg)
  : msg_(msg)
  {}
  ::chassis_control_msgs::msg::Ackcmd steer(::chassis_control_msgs::msg::Ackcmd::_steer_type arg)
  {
    msg_.steer = std::move(arg);
    return std::move(msg_);
  }

private:
  ::chassis_control_msgs::msg::Ackcmd msg_;
};

class Init_Ackcmd_vel
{
public:
  Init_Ackcmd_vel()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Ackcmd_steer vel(::chassis_control_msgs::msg::Ackcmd::_vel_type arg)
  {
    msg_.vel = std::move(arg);
    return Init_Ackcmd_steer(msg_);
  }

private:
  ::chassis_control_msgs::msg::Ackcmd msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::chassis_control_msgs::msg::Ackcmd>()
{
  return chassis_control_msgs::msg::builder::Init_Ackcmd_vel();
}

}  // namespace chassis_control_msgs

#endif  // CHASSIS_CONTROL_MSGS__MSG__DETAIL__ACKCMD__BUILDER_HPP_
