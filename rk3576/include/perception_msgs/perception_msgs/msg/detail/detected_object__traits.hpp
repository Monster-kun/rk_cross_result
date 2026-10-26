// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from perception_msgs:msg/DetectedObject.idl
// generated code does not contain a copyright notice

#ifndef PERCEPTION_MSGS__MSG__DETAIL__DETECTED_OBJECT__TRAITS_HPP_
#define PERCEPTION_MSGS__MSG__DETAIL__DETECTED_OBJECT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "perception_msgs/msg/detail/detected_object__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__traits.hpp"
// Member 'dimensions'
#include "geometry_msgs/msg/detail/vector3__traits.hpp"

namespace perception_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const DetectedObject & msg,
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

  // member: dimensions
  {
    out << "dimensions: ";
    to_flow_style_yaml(msg.dimensions, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const DetectedObject & msg,
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

  // member: dimensions
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "dimensions:\n";
    to_block_style_yaml(msg.dimensions, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const DetectedObject & msg, bool use_flow_style = false)
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

}  // namespace perception_msgs

namespace rosidl_generator_traits
{

[[deprecated("use perception_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const perception_msgs::msg::DetectedObject & msg,
  std::ostream & out, size_t indentation = 0)
{
  perception_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use perception_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const perception_msgs::msg::DetectedObject & msg)
{
  return perception_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<perception_msgs::msg::DetectedObject>()
{
  return "perception_msgs::msg::DetectedObject";
}

template<>
inline const char * name<perception_msgs::msg::DetectedObject>()
{
  return "perception_msgs/msg/DetectedObject";
}

template<>
struct has_fixed_size<perception_msgs::msg::DetectedObject>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Pose>::value && has_fixed_size<geometry_msgs::msg::Vector3>::value && has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<perception_msgs::msg::DetectedObject>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Pose>::value && has_bounded_size<geometry_msgs::msg::Vector3>::value && has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<perception_msgs::msg::DetectedObject>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PERCEPTION_MSGS__MSG__DETAIL__DETECTED_OBJECT__TRAITS_HPP_
