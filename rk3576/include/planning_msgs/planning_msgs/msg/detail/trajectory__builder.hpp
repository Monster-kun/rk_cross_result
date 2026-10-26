// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from planning_msgs:msg/Trajectory.idl
// generated code does not contain a copyright notice

#ifndef PLANNING_MSGS__MSG__DETAIL__TRAJECTORY__BUILDER_HPP_
#define PLANNING_MSGS__MSG__DETAIL__TRAJECTORY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "planning_msgs/msg/detail/trajectory__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace planning_msgs
{

namespace msg
{

namespace builder
{

class Init_Trajectory_waypoints
{
public:
  explicit Init_Trajectory_waypoints(::planning_msgs::msg::Trajectory & msg)
  : msg_(msg)
  {}
  ::planning_msgs::msg::Trajectory waypoints(::planning_msgs::msg::Trajectory::_waypoints_type arg)
  {
    msg_.waypoints = std::move(arg);
    return std::move(msg_);
  }

private:
  ::planning_msgs::msg::Trajectory msg_;
};

class Init_Trajectory_start_time
{
public:
  explicit Init_Trajectory_start_time(::planning_msgs::msg::Trajectory & msg)
  : msg_(msg)
  {}
  Init_Trajectory_waypoints start_time(::planning_msgs::msg::Trajectory::_start_time_type arg)
  {
    msg_.start_time = std::move(arg);
    return Init_Trajectory_waypoints(msg_);
  }

private:
  ::planning_msgs::msg::Trajectory msg_;
};

class Init_Trajectory_header
{
public:
  Init_Trajectory_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Trajectory_start_time header(::planning_msgs::msg::Trajectory::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Trajectory_start_time(msg_);
  }

private:
  ::planning_msgs::msg::Trajectory msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::planning_msgs::msg::Trajectory>()
{
  return planning_msgs::msg::builder::Init_Trajectory_header();
}

}  // namespace planning_msgs

#endif  // PLANNING_MSGS__MSG__DETAIL__TRAJECTORY__BUILDER_HPP_
