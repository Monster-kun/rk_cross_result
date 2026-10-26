// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from chassis_control_msgs:msg/Canframe.idl
// generated code does not contain a copyright notice

#ifndef CHASSIS_CONTROL_MSGS__MSG__DETAIL__CANFRAME__TRAITS_HPP_
#define CHASSIS_CONTROL_MSGS__MSG__DETAIL__CANFRAME__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "chassis_control_msgs/msg/detail/canframe__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace chassis_control_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Canframe & msg,
  std::ostream & out)
{
  out << "{";
  // member: id
  {
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << ", ";
  }

  // member: dricmd
  {
    out << "dricmd: ";
    rosidl_generator_traits::value_to_yaml(msg.dricmd, out);
    out << ", ";
  }

  // member: pivcmd
  {
    out << "pivcmd: ";
    rosidl_generator_traits::value_to_yaml(msg.pivcmd, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Canframe & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << "\n";
  }

  // member: dricmd
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "dricmd: ";
    rosidl_generator_traits::value_to_yaml(msg.dricmd, out);
    out << "\n";
  }

  // member: pivcmd
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pivcmd: ";
    rosidl_generator_traits::value_to_yaml(msg.pivcmd, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Canframe & msg, bool use_flow_style = false)
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
  const chassis_control_msgs::msg::Canframe & msg,
  std::ostream & out, size_t indentation = 0)
{
  chassis_control_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use chassis_control_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const chassis_control_msgs::msg::Canframe & msg)
{
  return chassis_control_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<chassis_control_msgs::msg::Canframe>()
{
  return "chassis_control_msgs::msg::Canframe";
}

template<>
inline const char * name<chassis_control_msgs::msg::Canframe>()
{
  return "chassis_control_msgs/msg/Canframe";
}

template<>
struct has_fixed_size<chassis_control_msgs::msg::Canframe>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<chassis_control_msgs::msg::Canframe>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<chassis_control_msgs::msg::Canframe>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CHASSIS_CONTROL_MSGS__MSG__DETAIL__CANFRAME__TRAITS_HPP_
