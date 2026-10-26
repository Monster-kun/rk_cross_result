// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from localization_msgs:msg/PoseVelAccAng.idl
// generated code does not contain a copyright notice

#ifndef LOCALIZATION_MSGS__MSG__DETAIL__POSE_VEL_ACC_ANG__BUILDER_HPP_
#define LOCALIZATION_MSGS__MSG__DETAIL__POSE_VEL_ACC_ANG__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "localization_msgs/msg/detail/pose_vel_acc_ang__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace localization_msgs
{

namespace msg
{

namespace builder
{

class Init_PoseVelAccAng_angular_velocity
{
public:
  explicit Init_PoseVelAccAng_angular_velocity(::localization_msgs::msg::PoseVelAccAng & msg)
  : msg_(msg)
  {}
  ::localization_msgs::msg::PoseVelAccAng angular_velocity(::localization_msgs::msg::PoseVelAccAng::_angular_velocity_type arg)
  {
    msg_.angular_velocity = std::move(arg);
    return std::move(msg_);
  }

private:
  ::localization_msgs::msg::PoseVelAccAng msg_;
};

class Init_PoseVelAccAng_linear_acceleration
{
public:
  explicit Init_PoseVelAccAng_linear_acceleration(::localization_msgs::msg::PoseVelAccAng & msg)
  : msg_(msg)
  {}
  Init_PoseVelAccAng_angular_velocity linear_acceleration(::localization_msgs::msg::PoseVelAccAng::_linear_acceleration_type arg)
  {
    msg_.linear_acceleration = std::move(arg);
    return Init_PoseVelAccAng_angular_velocity(msg_);
  }

private:
  ::localization_msgs::msg::PoseVelAccAng msg_;
};

class Init_PoseVelAccAng_linear_velocity
{
public:
  explicit Init_PoseVelAccAng_linear_velocity(::localization_msgs::msg::PoseVelAccAng & msg)
  : msg_(msg)
  {}
  Init_PoseVelAccAng_linear_acceleration linear_velocity(::localization_msgs::msg::PoseVelAccAng::_linear_velocity_type arg)
  {
    msg_.linear_velocity = std::move(arg);
    return Init_PoseVelAccAng_linear_acceleration(msg_);
  }

private:
  ::localization_msgs::msg::PoseVelAccAng msg_;
};

class Init_PoseVelAccAng_pose
{
public:
  explicit Init_PoseVelAccAng_pose(::localization_msgs::msg::PoseVelAccAng & msg)
  : msg_(msg)
  {}
  Init_PoseVelAccAng_linear_velocity pose(::localization_msgs::msg::PoseVelAccAng::_pose_type arg)
  {
    msg_.pose = std::move(arg);
    return Init_PoseVelAccAng_linear_velocity(msg_);
  }

private:
  ::localization_msgs::msg::PoseVelAccAng msg_;
};

class Init_PoseVelAccAng_header
{
public:
  Init_PoseVelAccAng_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PoseVelAccAng_pose header(::localization_msgs::msg::PoseVelAccAng::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_PoseVelAccAng_pose(msg_);
  }

private:
  ::localization_msgs::msg::PoseVelAccAng msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::localization_msgs::msg::PoseVelAccAng>()
{
  return localization_msgs::msg::builder::Init_PoseVelAccAng_header();
}

}  // namespace localization_msgs

#endif  // LOCALIZATION_MSGS__MSG__DETAIL__POSE_VEL_ACC_ANG__BUILDER_HPP_
