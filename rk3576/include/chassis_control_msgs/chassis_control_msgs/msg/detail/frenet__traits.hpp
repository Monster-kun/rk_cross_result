// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from chassis_control_msgs:msg/Frenet.idl
// generated code does not contain a copyright notice

#ifndef CHASSIS_CONTROL_MSGS__MSG__DETAIL__FRENET__TRAITS_HPP_
#define CHASSIS_CONTROL_MSGS__MSG__DETAIL__FRENET__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "chassis_control_msgs/msg/detail/frenet__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace chassis_control_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Frenet & msg,
  std::ostream & out)
{
  out << "{";
  // member: s
  {
    out << "s: ";
    rosidl_generator_traits::value_to_yaml(msg.s, out);
    out << ", ";
  }

  // member: ds
  {
    out << "ds: ";
    rosidl_generator_traits::value_to_yaml(msg.ds, out);
    out << ", ";
  }

  // member: dds
  {
    out << "dds: ";
    rosidl_generator_traits::value_to_yaml(msg.dds, out);
    out << ", ";
  }

  // member: l
  {
    out << "l: ";
    rosidl_generator_traits::value_to_yaml(msg.l, out);
    out << ", ";
  }

  // member: dl
  {
    out << "dl: ";
    rosidl_generator_traits::value_to_yaml(msg.dl, out);
    out << ", ";
  }

  // member: ddl
  {
    out << "ddl: ";
    rosidl_generator_traits::value_to_yaml(msg.ddl, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Frenet & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: s
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "s: ";
    rosidl_generator_traits::value_to_yaml(msg.s, out);
    out << "\n";
  }

  // member: ds
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ds: ";
    rosidl_generator_traits::value_to_yaml(msg.ds, out);
    out << "\n";
  }

  // member: dds
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "dds: ";
    rosidl_generator_traits::value_to_yaml(msg.dds, out);
    out << "\n";
  }

  // member: l
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "l: ";
    rosidl_generator_traits::value_to_yaml(msg.l, out);
    out << "\n";
  }

  // member: dl
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "dl: ";
    rosidl_generator_traits::value_to_yaml(msg.dl, out);
    out << "\n";
  }

  // member: ddl
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ddl: ";
    rosidl_generator_traits::value_to_yaml(msg.ddl, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Frenet & msg, bool use_flow_style = false)
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
  const chassis_control_msgs::msg::Frenet & msg,
  std::ostream & out, size_t indentation = 0)
{
  chassis_control_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use chassis_control_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const chassis_control_msgs::msg::Frenet & msg)
{
  return chassis_control_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<chassis_control_msgs::msg::Frenet>()
{
  return "chassis_control_msgs::msg::Frenet";
}

template<>
inline const char * name<chassis_control_msgs::msg::Frenet>()
{
  return "chassis_control_msgs/msg/Frenet";
}

template<>
struct has_fixed_size<chassis_control_msgs::msg::Frenet>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<chassis_control_msgs::msg::Frenet>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<chassis_control_msgs::msg::Frenet>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CHASSIS_CONTROL_MSGS__MSG__DETAIL__FRENET__TRAITS_HPP_
