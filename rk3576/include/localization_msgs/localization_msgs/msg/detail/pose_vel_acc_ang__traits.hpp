// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from localization_msgs:msg/PoseVelAccAng.idl
// generated code does not contain a copyright notice

#ifndef LOCALIZATION_MSGS__MSG__DETAIL__POSE_VEL_ACC_ANG__TRAITS_HPP_
#define LOCALIZATION_MSGS__MSG__DETAIL__POSE_VEL_ACC_ANG__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "localization_msgs/msg/detail/pose_vel_acc_ang__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__traits.hpp"
// Member 'linear_velocity'
// Member 'linear_acceleration'
// Member 'angular_velocity'
#include "geometry_msgs/msg/detail/vector3__traits.hpp"

namespace localization_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const PoseVelAccAng & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: pose
  {
    out << "pose: ";
    to_flow_style_yaml(msg.pose, out);
    out << ", ";
  }

  // member: linear_velocity
  {
    out << "linear_velocity: ";
    to_flow_style_yaml(msg.linear_velocity, out);
    out << ", ";
  }

  // member: linear_acceleration
  {
    out << "linear_acceleration: ";
    to_flow_style_yaml(msg.linear_acceleration, out);
    out << ", ";
  }

  // member: angular_velocity
  {
    out << "angular_velocity: ";
    to_flow_style_yaml(msg.angular_velocity, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PoseVelAccAng & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: pose
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pose:\n";
    to_block_style_yaml(msg.pose, out, indentation + 2);
  }

  // member: linear_velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "linear_velocity:\n";
    to_block_style_yaml(msg.linear_velocity, out, indentation + 2);
  }

  // member: linear_acceleration
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "linear_acceleration:\n";
    to_block_style_yaml(msg.linear_acceleration, out, indentation + 2);
  }

  // member: angular_velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "angular_velocity:\n";
    to_block_style_yaml(msg.angular_velocity, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PoseVelAccAng & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace localization_msgs

namespace rosidl_generator_traits
{

[[deprecated("use localization_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const localization_msgs::msg::PoseVelAccAng & msg,
  std::ostream & out, size_t indentation = 0)
{
  localization_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use localization_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const localization_msgs::msg::PoseVelAccAng & msg)
{
  return localization_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<localization_msgs::msg::PoseVelAccAng>()
{
  return "localization_msgs::msg::PoseVelAccAng";
}

template<>
inline const char * name<localization_msgs::msg::PoseVelAccAng>()
{
  return "localization_msgs/msg/PoseVelAccAng";
}

template<>
struct has_fixed_size<localization_msgs::msg::PoseVelAccAng>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Pose>::value && has_fixed_size<geometry_msgs::msg::Vector3>::value && has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<localization_msgs::msg::PoseVelAccAng>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Pose>::value && has_bounded_size<geometry_msgs::msg::Vector3>::value && has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<localization_msgs::msg::PoseVelAccAng>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // LOCALIZATION_MSGS__MSG__DETAIL__POSE_VEL_ACC_ANG__TRAITS_HPP_
