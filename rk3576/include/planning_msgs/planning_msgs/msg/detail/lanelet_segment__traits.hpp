// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from planning_msgs:msg/LaneletSegment.idl
// generated code does not contain a copyright notice

#ifndef PLANNING_MSGS__MSG__DETAIL__LANELET_SEGMENT__TRAITS_HPP_
#define PLANNING_MSGS__MSG__DETAIL__LANELET_SEGMENT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "planning_msgs/msg/detail/lanelet_segment__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'preferred_primitive'
// Member 'primitives'
// Member 'left_bound'
// Member 'right_bound'
#include "planning_msgs/msg/detail/lanelet_primitive__traits.hpp"

namespace planning_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const LaneletSegment & msg,
  std::ostream & out)
{
  out << "{";
  // member: preferred_primitive
  {
    out << "preferred_primitive: ";
    to_flow_style_yaml(msg.preferred_primitive, out);
    out << ", ";
  }

  // member: primitives
  {
    if (msg.primitives.size() == 0) {
      out << "primitives: []";
    } else {
      out << "primitives: [";
      size_t pending_items = msg.primitives.size();
      for (auto item : msg.primitives) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: left_bound
  {
    out << "left_bound: ";
    to_flow_style_yaml(msg.left_bound, out);
    out << ", ";
  }

  // member: right_bound
  {
    out << "right_bound: ";
    to_flow_style_yaml(msg.right_bound, out);
    out << ", ";
  }

  // member: is_inverted
  {
    out << "is_inverted: ";
    rosidl_generator_traits::value_to_yaml(msg.is_inverted, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const LaneletSegment & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: preferred_primitive
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "preferred_primitive:\n";
    to_block_style_yaml(msg.preferred_primitive, out, indentation + 2);
  }

  // member: primitives
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.primitives.size() == 0) {
      out << "primitives: []\n";
    } else {
      out << "primitives:\n";
      for (auto item : msg.primitives) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: left_bound
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "left_bound:\n";
    to_block_style_yaml(msg.left_bound, out, indentation + 2);
  }

  // member: right_bound
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "right_bound:\n";
    to_block_style_yaml(msg.right_bound, out, indentation + 2);
  }

  // member: is_inverted
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_inverted: ";
    rosidl_generator_traits::value_to_yaml(msg.is_inverted, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const LaneletSegment & msg, bool use_flow_style = false)
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
  const planning_msgs::msg::LaneletSegment & msg,
  std::ostream & out, size_t indentation = 0)
{
  planning_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use planning_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const planning_msgs::msg::LaneletSegment & msg)
{
  return planning_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<planning_msgs::msg::LaneletSegment>()
{
  return "planning_msgs::msg::LaneletSegment";
}

template<>
inline const char * name<planning_msgs::msg::LaneletSegment>()
{
  return "planning_msgs/msg/LaneletSegment";
}

template<>
struct has_fixed_size<planning_msgs::msg::LaneletSegment>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<planning_msgs::msg::LaneletSegment>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<planning_msgs::msg::LaneletSegment>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PLANNING_MSGS__MSG__DETAIL__LANELET_SEGMENT__TRAITS_HPP_
