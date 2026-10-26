// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from planning_msgs:msg/GlobalPath.idl
// generated code does not contain a copyright notice

#ifndef PLANNING_MSGS__MSG__DETAIL__GLOBAL_PATH__BUILDER_HPP_
#define PLANNING_MSGS__MSG__DETAIL__GLOBAL_PATH__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "planning_msgs/msg/detail/global_path__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace planning_msgs
{

namespace msg
{

namespace builder
{

class Init_GlobalPath_loop_right_bound_start_index
{
public:
  explicit Init_GlobalPath_loop_right_bound_start_index(::planning_msgs::msg::GlobalPath & msg)
  : msg_(msg)
  {}
  ::planning_msgs::msg::GlobalPath loop_right_bound_start_index(::planning_msgs::msg::GlobalPath::_loop_right_bound_start_index_type arg)
  {
    msg_.loop_right_bound_start_index = std::move(arg);
    return std::move(msg_);
  }

private:
  ::planning_msgs::msg::GlobalPath msg_;
};

class Init_GlobalPath_loop_left_bound_start_index
{
public:
  explicit Init_GlobalPath_loop_left_bound_start_index(::planning_msgs::msg::GlobalPath & msg)
  : msg_(msg)
  {}
  Init_GlobalPath_loop_right_bound_start_index loop_left_bound_start_index(::planning_msgs::msg::GlobalPath::_loop_left_bound_start_index_type arg)
  {
    msg_.loop_left_bound_start_index = std::move(arg);
    return Init_GlobalPath_loop_right_bound_start_index(msg_);
  }

private:
  ::planning_msgs::msg::GlobalPath msg_;
};

class Init_GlobalPath_loop_start_index
{
public:
  explicit Init_GlobalPath_loop_start_index(::planning_msgs::msg::GlobalPath & msg)
  : msg_(msg)
  {}
  Init_GlobalPath_loop_left_bound_start_index loop_start_index(::planning_msgs::msg::GlobalPath::_loop_start_index_type arg)
  {
    msg_.loop_start_index = std::move(arg);
    return Init_GlobalPath_loop_left_bound_start_index(msg_);
  }

private:
  ::planning_msgs::msg::GlobalPath msg_;
};

class Init_GlobalPath_loop
{
public:
  explicit Init_GlobalPath_loop(::planning_msgs::msg::GlobalPath & msg)
  : msg_(msg)
  {}
  Init_GlobalPath_loop_start_index loop(::planning_msgs::msg::GlobalPath::_loop_type arg)
  {
    msg_.loop = std::move(arg);
    return Init_GlobalPath_loop_start_index(msg_);
  }

private:
  ::planning_msgs::msg::GlobalPath msg_;
};

class Init_GlobalPath_checkpoint_indices
{
public:
  explicit Init_GlobalPath_checkpoint_indices(::planning_msgs::msg::GlobalPath & msg)
  : msg_(msg)
  {}
  Init_GlobalPath_loop checkpoint_indices(::planning_msgs::msg::GlobalPath::_checkpoint_indices_type arg)
  {
    msg_.checkpoint_indices = std::move(arg);
    return Init_GlobalPath_loop(msg_);
  }

private:
  ::planning_msgs::msg::GlobalPath msg_;
};

class Init_GlobalPath_right_bound_s
{
public:
  explicit Init_GlobalPath_right_bound_s(::planning_msgs::msg::GlobalPath & msg)
  : msg_(msg)
  {}
  Init_GlobalPath_checkpoint_indices right_bound_s(::planning_msgs::msg::GlobalPath::_right_bound_s_type arg)
  {
    msg_.right_bound_s = std::move(arg);
    return Init_GlobalPath_checkpoint_indices(msg_);
  }

private:
  ::planning_msgs::msg::GlobalPath msg_;
};

class Init_GlobalPath_left_bound_s
{
public:
  explicit Init_GlobalPath_left_bound_s(::planning_msgs::msg::GlobalPath & msg)
  : msg_(msg)
  {}
  Init_GlobalPath_right_bound_s left_bound_s(::planning_msgs::msg::GlobalPath::_left_bound_s_type arg)
  {
    msg_.left_bound_s = std::move(arg);
    return Init_GlobalPath_right_bound_s(msg_);
  }

private:
  ::planning_msgs::msg::GlobalPath msg_;
};

class Init_GlobalPath_right_bound
{
public:
  explicit Init_GlobalPath_right_bound(::planning_msgs::msg::GlobalPath & msg)
  : msg_(msg)
  {}
  Init_GlobalPath_left_bound_s right_bound(::planning_msgs::msg::GlobalPath::_right_bound_type arg)
  {
    msg_.right_bound = std::move(arg);
    return Init_GlobalPath_left_bound_s(msg_);
  }

private:
  ::planning_msgs::msg::GlobalPath msg_;
};

class Init_GlobalPath_left_bound
{
public:
  explicit Init_GlobalPath_left_bound(::planning_msgs::msg::GlobalPath & msg)
  : msg_(msg)
  {}
  Init_GlobalPath_right_bound left_bound(::planning_msgs::msg::GlobalPath::_left_bound_type arg)
  {
    msg_.left_bound = std::move(arg);
    return Init_GlobalPath_right_bound(msg_);
  }

private:
  ::planning_msgs::msg::GlobalPath msg_;
};

class Init_GlobalPath_main_trajectory
{
public:
  explicit Init_GlobalPath_main_trajectory(::planning_msgs::msg::GlobalPath & msg)
  : msg_(msg)
  {}
  Init_GlobalPath_left_bound main_trajectory(::planning_msgs::msg::GlobalPath::_main_trajectory_type arg)
  {
    msg_.main_trajectory = std::move(arg);
    return Init_GlobalPath_left_bound(msg_);
  }

private:
  ::planning_msgs::msg::GlobalPath msg_;
};

class Init_GlobalPath_header
{
public:
  Init_GlobalPath_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GlobalPath_main_trajectory header(::planning_msgs::msg::GlobalPath::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_GlobalPath_main_trajectory(msg_);
  }

private:
  ::planning_msgs::msg::GlobalPath msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::planning_msgs::msg::GlobalPath>()
{
  return planning_msgs::msg::builder::Init_GlobalPath_header();
}

}  // namespace planning_msgs

#endif  // PLANNING_MSGS__MSG__DETAIL__GLOBAL_PATH__BUILDER_HPP_
