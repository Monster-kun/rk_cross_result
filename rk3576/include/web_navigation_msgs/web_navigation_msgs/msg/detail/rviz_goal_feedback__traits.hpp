// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from web_navigation_msgs:msg/RvizGoalFeedback.idl
// generated code does not contain a copyright notice

#ifndef WEB_NAVIGATION_MSGS__MSG__DETAIL__RVIZ_GOAL_FEEDBACK__TRAITS_HPP_
#define WEB_NAVIGATION_MSGS__MSG__DETAIL__RVIZ_GOAL_FEEDBACK__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "web_navigation_msgs/msg/detail/rviz_goal_feedback__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace web_navigation_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const RvizGoalFeedback & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: manager_boot_id
  {
    out << "manager_boot_id: ";
    rosidl_generator_traits::value_to_yaml(msg.manager_boot_id, out);
    out << ", ";
  }

  // member: status
  {
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << ", ";
  }

  // member: request_id
  {
    out << "request_id: ";
    rosidl_generator_traits::value_to_yaml(msg.request_id, out);
    out << ", ";
  }

  // member: task_id
  {
    out << "task_id: ";
    rosidl_generator_traits::value_to_yaml(msg.task_id, out);
    out << ", ";
  }

  // member: code
  {
    out << "code: ";
    rosidl_generator_traits::value_to_yaml(msg.code, out);
    out << ", ";
  }

  // member: message
  {
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
    out << ", ";
  }

  // member: staged_waypoints
  {
    out << "staged_waypoints: ";
    rosidl_generator_traits::value_to_yaml(msg.staged_waypoints, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RvizGoalFeedback & msg,
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

  // member: manager_boot_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "manager_boot_id: ";
    rosidl_generator_traits::value_to_yaml(msg.manager_boot_id, out);
    out << "\n";
  }

  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << "\n";
  }

  // member: request_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "request_id: ";
    rosidl_generator_traits::value_to_yaml(msg.request_id, out);
    out << "\n";
  }

  // member: task_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "task_id: ";
    rosidl_generator_traits::value_to_yaml(msg.task_id, out);
    out << "\n";
  }

  // member: code
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "code: ";
    rosidl_generator_traits::value_to_yaml(msg.code, out);
    out << "\n";
  }

  // member: message
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
    out << "\n";
  }

  // member: staged_waypoints
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "staged_waypoints: ";
    rosidl_generator_traits::value_to_yaml(msg.staged_waypoints, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RvizGoalFeedback & msg, bool use_flow_style = false)
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
  const web_navigation_msgs::msg::RvizGoalFeedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  web_navigation_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use web_navigation_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const web_navigation_msgs::msg::RvizGoalFeedback & msg)
{
  return web_navigation_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<web_navigation_msgs::msg::RvizGoalFeedback>()
{
  return "web_navigation_msgs::msg::RvizGoalFeedback";
}

template<>
inline const char * name<web_navigation_msgs::msg::RvizGoalFeedback>()
{
  return "web_navigation_msgs/msg/RvizGoalFeedback";
}

template<>
struct has_fixed_size<web_navigation_msgs::msg::RvizGoalFeedback>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<web_navigation_msgs::msg::RvizGoalFeedback>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<web_navigation_msgs::msg::RvizGoalFeedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // WEB_NAVIGATION_MSGS__MSG__DETAIL__RVIZ_GOAL_FEEDBACK__TRAITS_HPP_
