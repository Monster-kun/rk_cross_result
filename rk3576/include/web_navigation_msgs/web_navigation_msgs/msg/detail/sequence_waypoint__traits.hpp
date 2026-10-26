// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from web_navigation_msgs:msg/SequenceWaypoint.idl
// generated code does not contain a copyright notice

#ifndef WEB_NAVIGATION_MSGS__MSG__DETAIL__SEQUENCE_WAYPOINT__TRAITS_HPP_
#define WEB_NAVIGATION_MSGS__MSG__DETAIL__SEQUENCE_WAYPOINT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "web_navigation_msgs/msg/detail/sequence_waypoint__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace web_navigation_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const SequenceWaypoint & msg,
  std::ostream & out)
{
  out << "{";
  // member: annotation_id
  {
    out << "annotation_id: ";
    rosidl_generator_traits::value_to_yaml(msg.annotation_id, out);
    out << ", ";
  }

  // member: name
  {
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << ", ";
  }

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

  // member: lanelet_id
  {
    out << "lanelet_id: ";
    rosidl_generator_traits::value_to_yaml(msg.lanelet_id, out);
    out << ", ";
  }

  // member: stop
  {
    out << "stop: ";
    rosidl_generator_traits::value_to_yaml(msg.stop, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SequenceWaypoint & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: annotation_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "annotation_id: ";
    rosidl_generator_traits::value_to_yaml(msg.annotation_id, out);
    out << "\n";
  }

  // member: name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << "\n";
  }

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

  // member: lanelet_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lanelet_id: ";
    rosidl_generator_traits::value_to_yaml(msg.lanelet_id, out);
    out << "\n";
  }

  // member: stop
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stop: ";
    rosidl_generator_traits::value_to_yaml(msg.stop, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SequenceWaypoint & msg, bool use_flow_style = false)
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

}  // namespace web_navigation_msgs

namespace rosidl_generator_traits
{

[[deprecated("use web_navigation_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const web_navigation_msgs::msg::SequenceWaypoint & msg,
  std::ostream & out, size_t indentation = 0)
{
  web_navigation_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use web_navigation_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const web_navigation_msgs::msg::SequenceWaypoint & msg)
{
  return web_navigation_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<web_navigation_msgs::msg::SequenceWaypoint>()
{
  return "web_navigation_msgs::msg::SequenceWaypoint";
}

template<>
inline const char * name<web_navigation_msgs::msg::SequenceWaypoint>()
{
  return "web_navigation_msgs/msg/SequenceWaypoint";
}

template<>
struct has_fixed_size<web_navigation_msgs::msg::SequenceWaypoint>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<web_navigation_msgs::msg::SequenceWaypoint>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<web_navigation_msgs::msg::SequenceWaypoint>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // WEB_NAVIGATION_MSGS__MSG__DETAIL__SEQUENCE_WAYPOINT__TRAITS_HPP_
