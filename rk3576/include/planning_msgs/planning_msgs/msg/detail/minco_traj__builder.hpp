// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from planning_msgs:msg/MincoTraj.idl
// generated code does not contain a copyright notice

#ifndef PLANNING_MSGS__MSG__DETAIL__MINCO_TRAJ__BUILDER_HPP_
#define PLANNING_MSGS__MSG__DETAIL__MINCO_TRAJ__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "planning_msgs/msg/detail/minco_traj__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace planning_msgs
{

namespace msg
{

namespace builder
{

class Init_MincoTraj_waypoints
{
public:
  explicit Init_MincoTraj_waypoints(::planning_msgs::msg::MincoTraj & msg)
  : msg_(msg)
  {}
  ::planning_msgs::msg::MincoTraj waypoints(::planning_msgs::msg::MincoTraj::_waypoints_type arg)
  {
    msg_.waypoints = std::move(arg);
    return std::move(msg_);
  }

private:
  ::planning_msgs::msg::MincoTraj msg_;
};

class Init_MincoTraj_yaw_pts
{
public:
  explicit Init_MincoTraj_yaw_pts(::planning_msgs::msg::MincoTraj & msg)
  : msg_(msg)
  {}
  Init_MincoTraj_waypoints yaw_pts(::planning_msgs::msg::MincoTraj::_yaw_pts_type arg)
  {
    msg_.yaw_pts = std::move(arg);
    return Init_MincoTraj_waypoints(msg_);
  }

private:
  ::planning_msgs::msg::MincoTraj msg_;
};

class Init_MincoTraj_pos_pts
{
public:
  explicit Init_MincoTraj_pos_pts(::planning_msgs::msg::MincoTraj & msg)
  : msg_(msg)
  {}
  Init_MincoTraj_yaw_pts pos_pts(::planning_msgs::msg::MincoTraj::_pos_pts_type arg)
  {
    msg_.pos_pts = std::move(arg);
    return Init_MincoTraj_yaw_pts(msg_);
  }

private:
  ::planning_msgs::msg::MincoTraj msg_;
};

class Init_MincoTraj_t_pts
{
public:
  explicit Init_MincoTraj_t_pts(::planning_msgs::msg::MincoTraj & msg)
  : msg_(msg)
  {}
  Init_MincoTraj_pos_pts t_pts(::planning_msgs::msg::MincoTraj::_t_pts_type arg)
  {
    msg_.t_pts = std::move(arg);
    return Init_MincoTraj_pos_pts(msg_);
  }

private:
  ::planning_msgs::msg::MincoTraj msg_;
};

class Init_MincoTraj_tail_y
{
public:
  explicit Init_MincoTraj_tail_y(::planning_msgs::msg::MincoTraj & msg)
  : msg_(msg)
  {}
  Init_MincoTraj_t_pts tail_y(::planning_msgs::msg::MincoTraj::_tail_y_type arg)
  {
    msg_.tail_y = std::move(arg);
    return Init_MincoTraj_t_pts(msg_);
  }

private:
  ::planning_msgs::msg::MincoTraj msg_;
};

class Init_MincoTraj_tail_x
{
public:
  explicit Init_MincoTraj_tail_x(::planning_msgs::msg::MincoTraj & msg)
  : msg_(msg)
  {}
  Init_MincoTraj_tail_y tail_x(::planning_msgs::msg::MincoTraj::_tail_x_type arg)
  {
    msg_.tail_x = std::move(arg);
    return Init_MincoTraj_tail_y(msg_);
  }

private:
  ::planning_msgs::msg::MincoTraj msg_;
};

class Init_MincoTraj_head_y
{
public:
  explicit Init_MincoTraj_head_y(::planning_msgs::msg::MincoTraj & msg)
  : msg_(msg)
  {}
  Init_MincoTraj_tail_x head_y(::planning_msgs::msg::MincoTraj::_head_y_type arg)
  {
    msg_.head_y = std::move(arg);
    return Init_MincoTraj_tail_x(msg_);
  }

private:
  ::planning_msgs::msg::MincoTraj msg_;
};

class Init_MincoTraj_head_x
{
public:
  explicit Init_MincoTraj_head_x(::planning_msgs::msg::MincoTraj & msg)
  : msg_(msg)
  {}
  Init_MincoTraj_head_y head_x(::planning_msgs::msg::MincoTraj::_head_x_type arg)
  {
    msg_.head_x = std::move(arg);
    return Init_MincoTraj_head_y(msg_);
  }

private:
  ::planning_msgs::msg::MincoTraj msg_;
};

class Init_MincoTraj_yaw
{
public:
  explicit Init_MincoTraj_yaw(::planning_msgs::msg::MincoTraj & msg)
  : msg_(msg)
  {}
  Init_MincoTraj_head_x yaw(::planning_msgs::msg::MincoTraj::_yaw_type arg)
  {
    msg_.yaw = std::move(arg);
    return Init_MincoTraj_head_x(msg_);
  }

private:
  ::planning_msgs::msg::MincoTraj msg_;
};

class Init_MincoTraj_use_init
{
public:
  explicit Init_MincoTraj_use_init(::planning_msgs::msg::MincoTraj & msg)
  : msg_(msg)
  {}
  Init_MincoTraj_yaw use_init(::planning_msgs::msg::MincoTraj::_use_init_type arg)
  {
    msg_.use_init = std::move(arg);
    return Init_MincoTraj_yaw(msg_);
  }

private:
  ::planning_msgs::msg::MincoTraj msg_;
};

class Init_MincoTraj_end_time
{
public:
  explicit Init_MincoTraj_end_time(::planning_msgs::msg::MincoTraj & msg)
  : msg_(msg)
  {}
  Init_MincoTraj_use_init end_time(::planning_msgs::msg::MincoTraj::_end_time_type arg)
  {
    msg_.end_time = std::move(arg);
    return Init_MincoTraj_use_init(msg_);
  }

private:
  ::planning_msgs::msg::MincoTraj msg_;
};

class Init_MincoTraj_start_time
{
public:
  Init_MincoTraj_start_time()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MincoTraj_end_time start_time(::planning_msgs::msg::MincoTraj::_start_time_type arg)
  {
    msg_.start_time = std::move(arg);
    return Init_MincoTraj_end_time(msg_);
  }

private:
  ::planning_msgs::msg::MincoTraj msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::planning_msgs::msg::MincoTraj>()
{
  return planning_msgs::msg::builder::Init_MincoTraj_start_time();
}

}  // namespace planning_msgs

#endif  // PLANNING_MSGS__MSG__DETAIL__MINCO_TRAJ__BUILDER_HPP_
