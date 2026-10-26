// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from se2_grid_msgs:msg/SE2GridInfo.idl
// generated code does not contain a copyright notice

#ifndef SE2_GRID_MSGS__MSG__DETAIL__SE2_GRID_INFO__TRAITS_HPP_
#define SE2_GRID_MSGS__MSG__DETAIL__SE2_GRID_INFO__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "se2_grid_msgs/msg/detail/se2_grid_info__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__traits.hpp"

namespace se2_grid_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const SE2GridInfo & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: pos_resolution
  {
    out << "pos_resolution: ";
    rosidl_generator_traits::value_to_yaml(msg.pos_resolution, out);
    out << ", ";
  }

  // member: yaw_resolution
  {
    out << "yaw_resolution: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw_resolution, out);
    out << ", ";
  }

  // member: length_x
  {
    out << "length_x: ";
    rosidl_generator_traits::value_to_yaml(msg.length_x, out);
    out << ", ";
  }

  // member: length_y
  {
    out << "length_y: ";
    rosidl_generator_traits::value_to_yaml(msg.length_y, out);
    out << ", ";
  }

  // member: length_yaw
  {
    out << "length_yaw: ";
    rosidl_generator_traits::value_to_yaml(msg.length_yaw, out);
    out << ", ";
  }

  // member: pose
  {
    out << "pose: ";
    to_flow_style_yaml(msg.pose, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SE2GridInfo & msg,
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

  // member: pos_resolution
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pos_resolution: ";
    rosidl_generator_traits::value_to_yaml(msg.pos_resolution, out);
    out << "\n";
  }

  // member: yaw_resolution
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "yaw_resolution: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw_resolution, out);
    out << "\n";
  }

  // member: length_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "length_x: ";
    rosidl_generator_traits::value_to_yaml(msg.length_x, out);
    out << "\n";
  }

  // member: length_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "length_y: ";
    rosidl_generator_traits::value_to_yaml(msg.length_y, out);
    out << "\n";
  }

  // member: length_yaw
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "length_yaw: ";
    rosidl_generator_traits::value_to_yaml(msg.length_yaw, out);
    out << "\n";
  }

  // member: pose
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pose:\n";
    to_block_style_yaml(msg.pose, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SE2GridInfo & msg, bool use_flow_style = false)
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

}  // namespace se2_grid_msgs

namespace rosidl_generator_traits
{

[[deprecated("use se2_grid_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const se2_grid_msgs::msg::SE2GridInfo & msg,
  std::ostream & out, size_t indentation = 0)
{
  se2_grid_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use se2_grid_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const se2_grid_msgs::msg::SE2GridInfo & msg)
{
  return se2_grid_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<se2_grid_msgs::msg::SE2GridInfo>()
{
  return "se2_grid_msgs::msg::SE2GridInfo";
}

template<>
inline const char * name<se2_grid_msgs::msg::SE2GridInfo>()
{
  return "se2_grid_msgs/msg/SE2GridInfo";
}

template<>
struct has_fixed_size<se2_grid_msgs::msg::SE2GridInfo>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Pose>::value && has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<se2_grid_msgs::msg::SE2GridInfo>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Pose>::value && has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<se2_grid_msgs::msg::SE2GridInfo>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SE2_GRID_MSGS__MSG__DETAIL__SE2_GRID_INFO__TRAITS_HPP_
