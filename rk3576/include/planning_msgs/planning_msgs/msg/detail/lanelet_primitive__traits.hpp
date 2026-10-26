// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from planning_msgs:msg/LaneletPrimitive.idl
// generated code does not contain a copyright notice

#ifndef PLANNING_MSGS__MSG__DETAIL__LANELET_PRIMITIVE__TRAITS_HPP_
#define PLANNING_MSGS__MSG__DETAIL__LANELET_PRIMITIVE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "planning_msgs/msg/detail/lanelet_primitive__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace planning_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const LaneletPrimitive & msg,
  std::ostream & out)
{
  out << "{";
  // member: id
  {
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << ", ";
  }

  // member: primitive_type
  {
    out << "primitive_type: ";
    rosidl_generator_traits::value_to_yaml(msg.primitive_type, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const LaneletPrimitive & msg,
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

  // member: primitive_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "primitive_type: ";
    rosidl_generator_traits::value_to_yaml(msg.primitive_type, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const LaneletPrimitive & msg, bool use_flow_style = false)
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

}  // namespace planning_msgs

namespace rosidl_generator_traits
{

[[deprecated("use planning_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const planning_msgs::msg::LaneletPrimitive & msg,
  std::ostream & out, size_t indentation = 0)
{
  planning_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use planning_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const planning_msgs::msg::LaneletPrimitive & msg)
{
  return planning_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<planning_msgs::msg::LaneletPrimitive>()
{
  return "planning_msgs::msg::LaneletPrimitive";
}

template<>
inline const char * name<planning_msgs::msg::LaneletPrimitive>()
{
  return "planning_msgs/msg/LaneletPrimitive";
}

template<>
struct has_fixed_size<planning_msgs::msg::LaneletPrimitive>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<planning_msgs::msg::LaneletPrimitive>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<planning_msgs::msg::LaneletPrimitive>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PLANNING_MSGS__MSG__DETAIL__LANELET_PRIMITIVE__TRAITS_HPP_
