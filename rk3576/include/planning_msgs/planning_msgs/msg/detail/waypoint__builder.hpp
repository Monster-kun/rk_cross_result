// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from planning_msgs:msg/Waypoint.idl
// generated code does not contain a copyright notice

#ifndef PLANNING_MSGS__MSG__DETAIL__WAYPOINT__BUILDER_HPP_
#define PLANNING_MSGS__MSG__DETAIL__WAYPOINT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "planning_msgs/msg/detail/waypoint__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace planning_msgs
{

namespace msg
{

namespace builder
{

class Init_Waypoint_w
{
public:
  explicit Init_Waypoint_w(::planning_msgs::msg::Waypoint & msg)
  : msg_(msg)
  {}
  ::planning_msgs::msg::Waypoint w(::planning_msgs::msg::Waypoint::_w_type arg)
  {
    msg_.w = std::move(arg);
    return std::move(msg_);
  }

private:
  ::planning_msgs::msg::Waypoint msg_;
};

class Init_Waypoint_j
{
public:
  explicit Init_Waypoint_j(::planning_msgs::msg::Waypoint & msg)
  : msg_(msg)
  {}
  Init_Waypoint_w j(::planning_msgs::msg::Waypoint::_j_type arg)
  {
    msg_.j = std::move(arg);
    return Init_Waypoint_w(msg_);
  }

private:
  ::planning_msgs::msg::Waypoint msg_;
};

class Init_Waypoint_a
{
public:
  explicit Init_Waypoint_a(::planning_msgs::msg::Waypoint & msg)
  : msg_(msg)
  {}
  Init_Waypoint_j a(::planning_msgs::msg::Waypoint::_a_type arg)
  {
    msg_.a = std::move(arg);
    return Init_Waypoint_j(msg_);
  }

private:
  ::planning_msgs::msg::Waypoint msg_;
};

class Init_Waypoint_v
{
public:
  explicit Init_Waypoint_v(::planning_msgs::msg::Waypoint & msg)
  : msg_(msg)
  {}
  Init_Waypoint_a v(::planning_msgs::msg::Waypoint::_v_type arg)
  {
    msg_.v = std::move(arg);
    return Init_Waypoint_a(msg_);
  }

private:
  ::planning_msgs::msg::Waypoint msg_;
};

class Init_Waypoint_ddkappa
{
public:
  explicit Init_Waypoint_ddkappa(::planning_msgs::msg::Waypoint & msg)
  : msg_(msg)
  {}
  Init_Waypoint_v ddkappa(::planning_msgs::msg::Waypoint::_ddkappa_type arg)
  {
    msg_.ddkappa = std::move(arg);
    return Init_Waypoint_v(msg_);
  }

private:
  ::planning_msgs::msg::Waypoint msg_;
};

class Init_Waypoint_dkappa
{
public:
  explicit Init_Waypoint_dkappa(::planning_msgs::msg::Waypoint & msg)
  : msg_(msg)
  {}
  Init_Waypoint_ddkappa dkappa(::planning_msgs::msg::Waypoint::_dkappa_type arg)
  {
    msg_.dkappa = std::move(arg);
    return Init_Waypoint_ddkappa(msg_);
  }

private:
  ::planning_msgs::msg::Waypoint msg_;
};

class Init_Waypoint_kappa
{
public:
  explicit Init_Waypoint_kappa(::planning_msgs::msg::Waypoint & msg)
  : msg_(msg)
  {}
  Init_Waypoint_dkappa kappa(::planning_msgs::msg::Waypoint::_kappa_type arg)
  {
    msg_.kappa = std::move(arg);
    return Init_Waypoint_dkappa(msg_);
  }

private:
  ::planning_msgs::msg::Waypoint msg_;
};

class Init_Waypoint_theta
{
public:
  explicit Init_Waypoint_theta(::planning_msgs::msg::Waypoint & msg)
  : msg_(msg)
  {}
  Init_Waypoint_kappa theta(::planning_msgs::msg::Waypoint::_theta_type arg)
  {
    msg_.theta = std::move(arg);
    return Init_Waypoint_kappa(msg_);
  }

private:
  ::planning_msgs::msg::Waypoint msg_;
};

class Init_Waypoint_s
{
public:
  explicit Init_Waypoint_s(::planning_msgs::msg::Waypoint & msg)
  : msg_(msg)
  {}
  Init_Waypoint_theta s(::planning_msgs::msg::Waypoint::_s_type arg)
  {
    msg_.s = std::move(arg);
    return Init_Waypoint_theta(msg_);
  }

private:
  ::planning_msgs::msg::Waypoint msg_;
};

class Init_Waypoint_time
{
public:
  explicit Init_Waypoint_time(::planning_msgs::msg::Waypoint & msg)
  : msg_(msg)
  {}
  Init_Waypoint_s time(::planning_msgs::msg::Waypoint::_time_type arg)
  {
    msg_.time = std::move(arg);
    return Init_Waypoint_s(msg_);
  }

private:
  ::planning_msgs::msg::Waypoint msg_;
};

class Init_Waypoint_point
{
public:
  Init_Waypoint_point()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Waypoint_time point(::planning_msgs::msg::Waypoint::_point_type arg)
  {
    msg_.point = std::move(arg);
    return Init_Waypoint_time(msg_);
  }

private:
  ::planning_msgs::msg::Waypoint msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::planning_msgs::msg::Waypoint>()
{
  return planning_msgs::msg::builder::Init_Waypoint_point();
}

}  // namespace planning_msgs

#endif  // PLANNING_MSGS__MSG__DETAIL__WAYPOINT__BUILDER_HPP_
