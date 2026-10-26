// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from chassis_control_msgs:msg/Ominicmd.idl
// generated code does not contain a copyright notice

#ifndef CHASSIS_CONTROL_MSGS__MSG__DETAIL__OMINICMD__BUILDER_HPP_
#define CHASSIS_CONTROL_MSGS__MSG__DETAIL__OMINICMD__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "chassis_control_msgs/msg/detail/ominicmd__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace chassis_control_msgs
{

namespace msg
{

namespace builder
{

class Init_Ominicmd_angle
{
public:
  explicit Init_Ominicmd_angle(::chassis_control_msgs::msg::Ominicmd & msg)
  : msg_(msg)
  {}
  ::chassis_control_msgs::msg::Ominicmd angle(::chassis_control_msgs::msg::Ominicmd::_angle_type arg)
  {
    msg_.angle = std::move(arg);
    return std::move(msg_);
  }

private:
  ::chassis_control_msgs::msg::Ominicmd msg_;
};

class Init_Ominicmd_y
{
public:
  explicit Init_Ominicmd_y(::chassis_control_msgs::msg::Ominicmd & msg)
  : msg_(msg)
  {}
  Init_Ominicmd_angle y(::chassis_control_msgs::msg::Ominicmd::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_Ominicmd_angle(msg_);
  }

private:
  ::chassis_control_msgs::msg::Ominicmd msg_;
};

class Init_Ominicmd_x
{
public:
  Init_Ominicmd_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Ominicmd_y x(::chassis_control_msgs::msg::Ominicmd::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_Ominicmd_y(msg_);
  }

private:
  ::chassis_control_msgs::msg::Ominicmd msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::chassis_control_msgs::msg::Ominicmd>()
{
  return chassis_control_msgs::msg::builder::Init_Ominicmd_x();
}

}  // namespace chassis_control_msgs

#endif  // CHASSIS_CONTROL_MSGS__MSG__DETAIL__OMINICMD__BUILDER_HPP_
