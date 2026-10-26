// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from chassis_control_msgs:msg/Frenet.idl
// generated code does not contain a copyright notice

#ifndef CHASSIS_CONTROL_MSGS__MSG__DETAIL__FRENET__BUILDER_HPP_
#define CHASSIS_CONTROL_MSGS__MSG__DETAIL__FRENET__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "chassis_control_msgs/msg/detail/frenet__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace chassis_control_msgs
{

namespace msg
{

namespace builder
{

class Init_Frenet_ddl
{
public:
  explicit Init_Frenet_ddl(::chassis_control_msgs::msg::Frenet & msg)
  : msg_(msg)
  {}
  ::chassis_control_msgs::msg::Frenet ddl(::chassis_control_msgs::msg::Frenet::_ddl_type arg)
  {
    msg_.ddl = std::move(arg);
    return std::move(msg_);
  }

private:
  ::chassis_control_msgs::msg::Frenet msg_;
};

class Init_Frenet_dl
{
public:
  explicit Init_Frenet_dl(::chassis_control_msgs::msg::Frenet & msg)
  : msg_(msg)
  {}
  Init_Frenet_ddl dl(::chassis_control_msgs::msg::Frenet::_dl_type arg)
  {
    msg_.dl = std::move(arg);
    return Init_Frenet_ddl(msg_);
  }

private:
  ::chassis_control_msgs::msg::Frenet msg_;
};

class Init_Frenet_l
{
public:
  explicit Init_Frenet_l(::chassis_control_msgs::msg::Frenet & msg)
  : msg_(msg)
  {}
  Init_Frenet_dl l(::chassis_control_msgs::msg::Frenet::_l_type arg)
  {
    msg_.l = std::move(arg);
    return Init_Frenet_dl(msg_);
  }

private:
  ::chassis_control_msgs::msg::Frenet msg_;
};

class Init_Frenet_dds
{
public:
  explicit Init_Frenet_dds(::chassis_control_msgs::msg::Frenet & msg)
  : msg_(msg)
  {}
  Init_Frenet_l dds(::chassis_control_msgs::msg::Frenet::_dds_type arg)
  {
    msg_.dds = std::move(arg);
    return Init_Frenet_l(msg_);
  }

private:
  ::chassis_control_msgs::msg::Frenet msg_;
};

class Init_Frenet_ds
{
public:
  explicit Init_Frenet_ds(::chassis_control_msgs::msg::Frenet & msg)
  : msg_(msg)
  {}
  Init_Frenet_dds ds(::chassis_control_msgs::msg::Frenet::_ds_type arg)
  {
    msg_.ds = std::move(arg);
    return Init_Frenet_dds(msg_);
  }

private:
  ::chassis_control_msgs::msg::Frenet msg_;
};

class Init_Frenet_s
{
public:
  Init_Frenet_s()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Frenet_ds s(::chassis_control_msgs::msg::Frenet::_s_type arg)
  {
    msg_.s = std::move(arg);
    return Init_Frenet_ds(msg_);
  }

private:
  ::chassis_control_msgs::msg::Frenet msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::chassis_control_msgs::msg::Frenet>()
{
  return chassis_control_msgs::msg::builder::Init_Frenet_s();
}

}  // namespace chassis_control_msgs

#endif  // CHASSIS_CONTROL_MSGS__MSG__DETAIL__FRENET__BUILDER_HPP_
