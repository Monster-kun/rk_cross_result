// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from chassis_control_msgs:msg/Ackcmd.idl
// generated code does not contain a copyright notice

#ifndef CHASSIS_CONTROL_MSGS__MSG__DETAIL__ACKCMD__TRAITS_HPP_
#define CHASSIS_CONTROL_MSGS__MSG__DETAIL__ACKCMD__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "chassis_control_msgs/msg/detail/ackcmd__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace chassis_control_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Ackcmd & msg,
  std::ostream & out)
{
  out << "{";
  // member: vel
  {
    out << "vel: ";
    rosidl_generator_traits::value_to_yaml(msg.vel, out);
    out << ", ";
  }

  // member: steer
  {
    out << "steer: ";
    rosidl_generator_traits::value_to_yaml(msg.steer, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Ackcmd & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: vel
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vel: ";
    rosidl_generator_traits::value_to_yaml(msg.vel, out);
    out << "\n";
  }

  // member: steer
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "steer: ";
    rosidl_generator_traits::value_to_yaml(msg.steer, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Ackcmd & msg, bool use_flow_style = false)
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
  const chassis_control_msgs::msg::Ackcmd & msg,
  std::ostream & out, size_t indentation = 0)
{
  chassis_control_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use chassis_control_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const chassis_control_msgs::msg::Ackcmd & msg)
{
  return chassis_control_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<chassis_control_msgs::msg::Ackcmd>()
{
  return "chassis_control_msgs::msg::Ackcmd";
}

template<>
inline const char * name<chassis_control_msgs::msg::Ackcmd>()
{
  return "chassis_control_msgs/msg/Ackcmd";
}

template<>
struct has_fixed_size<chassis_control_msgs::msg::Ackcmd>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<chassis_control_msgs::msg::Ackcmd>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<chassis_control_msgs::msg::Ackcmd>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CHASSIS_CONTROL_MSGS__MSG__DETAIL__ACKCMD__TRAITS_HPP_
