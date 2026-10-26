// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from se2_grid_msgs:msg/SE2GridInfo.idl
// generated code does not contain a copyright notice

#ifndef SE2_GRID_MSGS__MSG__DETAIL__SE2_GRID_INFO__BUILDER_HPP_
#define SE2_GRID_MSGS__MSG__DETAIL__SE2_GRID_INFO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "se2_grid_msgs/msg/detail/se2_grid_info__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace se2_grid_msgs
{

namespace msg
{

namespace builder
{

class Init_SE2GridInfo_pose
{
public:
  explicit Init_SE2GridInfo_pose(::se2_grid_msgs::msg::SE2GridInfo & msg)
  : msg_(msg)
  {}
  ::se2_grid_msgs::msg::SE2GridInfo pose(::se2_grid_msgs::msg::SE2GridInfo::_pose_type arg)
  {
    msg_.pose = std::move(arg);
    return std::move(msg_);
  }

private:
  ::se2_grid_msgs::msg::SE2GridInfo msg_;
};

class Init_SE2GridInfo_length_yaw
{
public:
  explicit Init_SE2GridInfo_length_yaw(::se2_grid_msgs::msg::SE2GridInfo & msg)
  : msg_(msg)
  {}
  Init_SE2GridInfo_pose length_yaw(::se2_grid_msgs::msg::SE2GridInfo::_length_yaw_type arg)
  {
    msg_.length_yaw = std::move(arg);
    return Init_SE2GridInfo_pose(msg_);
  }

private:
  ::se2_grid_msgs::msg::SE2GridInfo msg_;
};

class Init_SE2GridInfo_length_y
{
public:
  explicit Init_SE2GridInfo_length_y(::se2_grid_msgs::msg::SE2GridInfo & msg)
  : msg_(msg)
  {}
  Init_SE2GridInfo_length_yaw length_y(::se2_grid_msgs::msg::SE2GridInfo::_length_y_type arg)
  {
    msg_.length_y = std::move(arg);
    return Init_SE2GridInfo_length_yaw(msg_);
  }

private:
  ::se2_grid_msgs::msg::SE2GridInfo msg_;
};

class Init_SE2GridInfo_length_x
{
public:
  explicit Init_SE2GridInfo_length_x(::se2_grid_msgs::msg::SE2GridInfo & msg)
  : msg_(msg)
  {}
  Init_SE2GridInfo_length_y length_x(::se2_grid_msgs::msg::SE2GridInfo::_length_x_type arg)
  {
    msg_.length_x = std::move(arg);
    return Init_SE2GridInfo_length_y(msg_);
  }

private:
  ::se2_grid_msgs::msg::SE2GridInfo msg_;
};

class Init_SE2GridInfo_yaw_resolution
{
public:
  explicit Init_SE2GridInfo_yaw_resolution(::se2_grid_msgs::msg::SE2GridInfo & msg)
  : msg_(msg)
  {}
  Init_SE2GridInfo_length_x yaw_resolution(::se2_grid_msgs::msg::SE2GridInfo::_yaw_resolution_type arg)
  {
    msg_.yaw_resolution = std::move(arg);
    return Init_SE2GridInfo_length_x(msg_);
  }

private:
  ::se2_grid_msgs::msg::SE2GridInfo msg_;
};

class Init_SE2GridInfo_pos_resolution
{
public:
  explicit Init_SE2GridInfo_pos_resolution(::se2_grid_msgs::msg::SE2GridInfo & msg)
  : msg_(msg)
  {}
  Init_SE2GridInfo_yaw_resolution pos_resolution(::se2_grid_msgs::msg::SE2GridInfo::_pos_resolution_type arg)
  {
    msg_.pos_resolution = std::move(arg);
    return Init_SE2GridInfo_yaw_resolution(msg_);
  }

private:
  ::se2_grid_msgs::msg::SE2GridInfo msg_;
};

class Init_SE2GridInfo_header
{
public:
  Init_SE2GridInfo_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SE2GridInfo_pos_resolution header(::se2_grid_msgs::msg::SE2GridInfo::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_SE2GridInfo_pos_resolution(msg_);
  }

private:
  ::se2_grid_msgs::msg::SE2GridInfo msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::se2_grid_msgs::msg::SE2GridInfo>()
{
  return se2_grid_msgs::msg::builder::Init_SE2GridInfo_header();
}

}  // namespace se2_grid_msgs

#endif  // SE2_GRID_MSGS__MSG__DETAIL__SE2_GRID_INFO__BUILDER_HPP_
