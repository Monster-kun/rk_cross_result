// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from web_navigation_msgs:msg/PlanningEvent.idl
// generated code does not contain a copyright notice

#ifndef WEB_NAVIGATION_MSGS__MSG__DETAIL__PLANNING_EVENT__TRAITS_HPP_
#define WEB_NAVIGATION_MSGS__MSG__DETAIL__PLANNING_EVENT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "web_navigation_msgs/msg/detail/planning_event__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'effective_endpoint'
#include "geometry_msgs/msg/detail/pose__traits.hpp"
// Member 'path'
#include "planning_msgs/msg/detail/global_path__traits.hpp"

namespace web_navigation_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const PlanningEvent & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: task_id
  {
    out << "task_id: ";
    rosidl_generator_traits::value_to_yaml(msg.task_id, out);
    out << ", ";
  }

  // member: ros_goal_uuid
  {
    out << "ros_goal_uuid: ";
    rosidl_generator_traits::value_to_yaml(msg.ros_goal_uuid, out);
    out << ", ";
  }

  // member: map_version
  {
    out << "map_version: ";
    rosidl_generator_traits::value_to_yaml(msg.map_version, out);
    out << ", ";
  }

  // member: planning_attempt_id
  {
    out << "planning_attempt_id: ";
    rosidl_generator_traits::value_to_yaml(msg.planning_attempt_id, out);
    out << ", ";
  }

  // member: status
  {
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << ", ";
  }

  // member: path_revision
  {
    out << "path_revision: ";
    rosidl_generator_traits::value_to_yaml(msg.path_revision, out);
    out << ", ";
  }

  // member: effective_endpoint
  {
    out << "effective_endpoint: ";
    to_flow_style_yaml(msg.effective_endpoint, out);
    out << ", ";
  }

  // member: error_code
  {
    out << "error_code: ";
    rosidl_generator_traits::value_to_yaml(msg.error_code, out);
    out << ", ";
  }

  // member: error_message
  {
    out << "error_message: ";
    rosidl_generator_traits::value_to_yaml(msg.error_message, out);
    out << ", ";
  }

  // member: path
  {
    out << "path: ";
    to_flow_style_yaml(msg.path, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PlanningEvent & msg,
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

  // member: task_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "task_id: ";
    rosidl_generator_traits::value_to_yaml(msg.task_id, out);
    out << "\n";
  }

  // member: ros_goal_uuid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ros_goal_uuid: ";
    rosidl_generator_traits::value_to_yaml(msg.ros_goal_uuid, out);
    out << "\n";
  }

  // member: map_version
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "map_version: ";
    rosidl_generator_traits::value_to_yaml(msg.map_version, out);
    out << "\n";
  }

  // member: planning_attempt_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "planning_attempt_id: ";
    rosidl_generator_traits::value_to_yaml(msg.planning_attempt_id, out);
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

  // member: path_revision
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "path_revision: ";
    rosidl_generator_traits::value_to_yaml(msg.path_revision, out);
    out << "\n";
  }

  // member: effective_endpoint
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "effective_endpoint:\n";
    to_block_style_yaml(msg.effective_endpoint, out, indentation + 2);
  }

  // member: error_code
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "error_code: ";
    rosidl_generator_traits::value_to_yaml(msg.error_code, out);
    out << "\n";
  }

  // member: error_message
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "error_message: ";
    rosidl_generator_traits::value_to_yaml(msg.error_message, out);
    out << "\n";
  }

  // member: path
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "path:\n";
    to_block_style_yaml(msg.path, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PlanningEvent & msg, bool use_flow_style = false)
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
  const web_navigation_msgs::msg::PlanningEvent & msg,
  std::ostream & out, size_t indentation = 0)
{
  web_navigation_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use web_navigation_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const web_navigation_msgs::msg::PlanningEvent & msg)
{
  return web_navigation_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<web_navigation_msgs::msg::PlanningEvent>()
{
  return "web_navigation_msgs::msg::PlanningEvent";
}

template<>
inline const char * name<web_navigation_msgs::msg::PlanningEvent>()
{
  return "web_navigation_msgs/msg/PlanningEvent";
}

template<>
struct has_fixed_size<web_navigation_msgs::msg::PlanningEvent>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<web_navigation_msgs::msg::PlanningEvent>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<web_navigation_msgs::msg::PlanningEvent>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // WEB_NAVIGATION_MSGS__MSG__DETAIL__PLANNING_EVENT__TRAITS_HPP_
