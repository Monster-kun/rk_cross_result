// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from chassis_control_msgs:msg/PurepursuitViz.idl
// generated code does not contain a copyright notice

#ifndef CHASSIS_CONTROL_MSGS__MSG__DETAIL__PUREPURSUIT_VIZ__BUILDER_HPP_
#define CHASSIS_CONTROL_MSGS__MSG__DETAIL__PUREPURSUIT_VIZ__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "chassis_control_msgs/msg/detail/purepursuit_viz__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace chassis_control_msgs
{

namespace msg
{

namespace builder
{

class Init_PurepursuitViz_currenty
{
public:
  explicit Init_PurepursuitViz_currenty(::chassis_control_msgs::msg::PurepursuitViz & msg)
  : msg_(msg)
  {}
  ::chassis_control_msgs::msg::PurepursuitViz currenty(::chassis_control_msgs::msg::PurepursuitViz::_currenty_type arg)
  {
    msg_.currenty = std::move(arg);
    return std::move(msg_);
  }

private:
  ::chassis_control_msgs::msg::PurepursuitViz msg_;
};

class Init_PurepursuitViz_currentx
{
public:
  explicit Init_PurepursuitViz_currentx(::chassis_control_msgs::msg::PurepursuitViz & msg)
  : msg_(msg)
  {}
  Init_PurepursuitViz_currenty currentx(::chassis_control_msgs::msg::PurepursuitViz::_currentx_type arg)
  {
    msg_.currentx = std::move(arg);
    return Init_PurepursuitViz_currenty(msg_);
  }

private:
  ::chassis_control_msgs::msg::PurepursuitViz msg_;
};

class Init_PurepursuitViz_ahead
{
public:
  explicit Init_PurepursuitViz_ahead(::chassis_control_msgs::msg::PurepursuitViz & msg)
  : msg_(msg)
  {}
  Init_PurepursuitViz_currentx ahead(::chassis_control_msgs::msg::PurepursuitViz::_ahead_type arg)
  {
    msg_.ahead = std::move(arg);
    return Init_PurepursuitViz_currentx(msg_);
  }

private:
  ::chassis_control_msgs::msg::PurepursuitViz msg_;
};

class Init_PurepursuitViz_velz
{
public:
  explicit Init_PurepursuitViz_velz(::chassis_control_msgs::msg::PurepursuitViz & msg)
  : msg_(msg)
  {}
  Init_PurepursuitViz_ahead velz(::chassis_control_msgs::msg::PurepursuitViz::_velz_type arg)
  {
    msg_.velz = std::move(arg);
    return Init_PurepursuitViz_ahead(msg_);
  }

private:
  ::chassis_control_msgs::msg::PurepursuitViz msg_;
};

class Init_PurepursuitViz_vely
{
public:
  explicit Init_PurepursuitViz_vely(::chassis_control_msgs::msg::PurepursuitViz & msg)
  : msg_(msg)
  {}
  Init_PurepursuitViz_velz vely(::chassis_control_msgs::msg::PurepursuitViz::_vely_type arg)
  {
    msg_.vely = std::move(arg);
    return Init_PurepursuitViz_velz(msg_);
  }

private:
  ::chassis_control_msgs::msg::PurepursuitViz msg_;
};

class Init_PurepursuitViz_velx
{
public:
  explicit Init_PurepursuitViz_velx(::chassis_control_msgs::msg::PurepursuitViz & msg)
  : msg_(msg)
  {}
  Init_PurepursuitViz_vely velx(::chassis_control_msgs::msg::PurepursuitViz::_velx_type arg)
  {
    msg_.velx = std::move(arg);
    return Init_PurepursuitViz_vely(msg_);
  }

private:
  ::chassis_control_msgs::msg::PurepursuitViz msg_;
};

class Init_PurepursuitViz_aimpointy
{
public:
  explicit Init_PurepursuitViz_aimpointy(::chassis_control_msgs::msg::PurepursuitViz & msg)
  : msg_(msg)
  {}
  Init_PurepursuitViz_velx aimpointy(::chassis_control_msgs::msg::PurepursuitViz::_aimpointy_type arg)
  {
    msg_.aimpointy = std::move(arg);
    return Init_PurepursuitViz_velx(msg_);
  }

private:
  ::chassis_control_msgs::msg::PurepursuitViz msg_;
};

class Init_PurepursuitViz_aimpointx
{
public:
  Init_PurepursuitViz_aimpointx()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PurepursuitViz_aimpointy aimpointx(::chassis_control_msgs::msg::PurepursuitViz::_aimpointx_type arg)
  {
    msg_.aimpointx = std::move(arg);
    return Init_PurepursuitViz_aimpointy(msg_);
  }

private:
  ::chassis_control_msgs::msg::PurepursuitViz msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::chassis_control_msgs::msg::PurepursuitViz>()
{
  return chassis_control_msgs::msg::builder::Init_PurepursuitViz_aimpointx();
}

}  // namespace chassis_control_msgs

#endif  // CHASSIS_CONTROL_MSGS__MSG__DETAIL__PUREPURSUIT_VIZ__BUILDER_HPP_
