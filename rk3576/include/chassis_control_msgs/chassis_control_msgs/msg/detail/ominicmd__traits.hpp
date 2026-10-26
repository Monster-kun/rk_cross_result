// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from chassis_control_msgs:msg/Ominicmd.idl
// generated code does not contain a copyright notice

#ifndef CHASSIS_CONTROL_MSGS__MSG__DETAIL__OMINICMD__TRAITS_HPP_
#define CHASSIS_CONTROL_MSGS__MSG__DETAIL__OMINICMD__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "chassis_control_msgs/msg/detail/ominicmd__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace chassis_control_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Ominicmd & msg,
  std::ostream & out)
{
  out << "{";
  // member: x
  {
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << ", ";
  }

  // member: y
  {
    out << "y: ";
    rosidl_generator_traits::value_to_yaml(msg.y, out);
    out << ", ";
  }

  // member: angle
  {
    out << "angle: ";
    rosidl_generator_traits::value_to_yaml(msg.angle, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Ominicmd & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << "\n";
  }

  // member: y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "y: ";
    rosidl_generator_traits::value_to_yaml(msg.y, out);
    out << "\n";
  }

  // member: angle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "angle: ";
    rosidl_generator_traits::value_to_yaml(msg.angle, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Ominicmd & msg, bool use_flow_style = false)
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

}  // namespace chassis_control_msgs

namespace rosidl_generator_traits
{

[[deprecated("use chassis_control_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const chassis_control_msgs::msg::Ominicmd & msg,
  std::ostream & out, size_t indentation = 0)
{
  chassis_control_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use chassis_control_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const chassis_control_msgs::msg::Ominicmd & msg)
{
  return chassis_control_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<chassis_control_msgs::msg::Ominicmd>()
{
  return "chassis_control_msgs::msg::Ominicmd";
}

template<>
inline const char * name<chassis_control_msgs::msg::Ominicmd>()
{
  return "chassis_control_msgs/msg/Ominicmd";
}

template<>
struct has_fixed_size<chassis_control_msgs::msg::Ominicmd>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<chassis_control_msgs::msg::Ominicmd>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<chassis_control_msgs::msg::Ominicmd>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CHASSIS_CONTROL_MSGS__MSG__DETAIL__OMINICMD__TRAITS_HPP_
