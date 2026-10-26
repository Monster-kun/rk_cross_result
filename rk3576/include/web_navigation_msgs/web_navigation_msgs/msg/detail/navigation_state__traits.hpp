// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from web_navigation_msgs:msg/NavigationState.idl
// generated code does not contain a copyright notice

#ifndef WEB_NAVIGATION_MSGS__MSG__DETAIL__NAVIGATION_STATE__TRAITS_HPP_
#define WEB_NAVIGATION_MSGS__MSG__DETAIL__NAVIGATION_STATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "web_navigation_msgs/msg/detail/navigation_state__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'vehicle_pose'
// Member 'effective_endpoint'
#include "geometry_msgs/msg/detail/pose__traits.hpp"
// Member 'linear_velocity'
// Member 'angular_velocity'
#include "geometry_msgs/msg/detail/vector3__traits.hpp"
// Member 'route'
#include "planning_msgs/msg/detail/global_path__traits.hpp"
// Member 'sequence'
#include "web_navigation_msgs/msg/detail/sequence_waypoint__traits.hpp"

namespace web_navigation_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const NavigationState & msg,
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

  // member: state_revision
  {
    out << "state_revision: ";
    rosidl_generator_traits::value_to_yaml(msg.state_revision, out);
    out << ", ";
  }

  // member: map_ready
  {
    out << "map_ready: ";
    rosidl_generator_traits::value_to_yaml(msg.map_ready, out);
    out << ", ";
  }

  // member: map_version
  {
    out << "map_version: ";
    rosidl_generator_traits::value_to_yaml(msg.map_version, out);
    out << ", ";
  }

  // member: map_name
  {
    out << "map_name: ";
    rosidl_generator_traits::value_to_yaml(msg.map_name, out);
    out << ", ";
  }

  // member: frame_id
  {
    out << "frame_id: ";
    rosidl_generator_traits::value_to_yaml(msg.frame_id, out);
    out << ", ";
  }

  // member: vehicle_pose
  {
    out << "vehicle_pose: ";
    to_flow_style_yaml(msg.vehicle_pose, out);
    out << ", ";
  }

  // member: linear_velocity
  {
    out << "linear_velocity: ";
    to_flow_style_yaml(msg.linear_velocity, out);
    out << ", ";
  }

  // member: angular_velocity
  {
    out << "angular_velocity: ";
    to_flow_style_yaml(msg.angular_velocity, out);
    out << ", ";
  }

  // member: pose_fresh
  {
    out << "pose_fresh: ";
    rosidl_generator_traits::value_to_yaml(msg.pose_fresh, out);
    out << ", ";
  }

  // member: navigation_synchronized
  {
    out << "navigation_synchronized: ";
    rosidl_generator_traits::value_to_yaml(msg.navigation_synchronized, out);
    out << ", ";
  }

  // member: control_held
  {
    out << "control_held: ";
    rosidl_generator_traits::value_to_yaml(msg.control_held, out);
    out << ", ";
  }

  // member: control_owner_label
  {
    out << "control_owner_label: ";
    rosidl_generator_traits::value_to_yaml(msg.control_owner_label, out);
    out << ", ";
  }

  // member: control_epoch
  {
    out << "control_epoch: ";
    rosidl_generator_traits::value_to_yaml(msg.control_epoch, out);
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

  // member: task_status
  {
    out << "task_status: ";
    rosidl_generator_traits::value_to_yaml(msg.task_status, out);
    out << ", ";
  }

  // member: task_status_text
  {
    out << "task_status_text: ";
    rosidl_generator_traits::value_to_yaml(msg.task_status_text, out);
    out << ", ";
  }

  // member: request_id
  {
    out << "request_id: ";
    rosidl_generator_traits::value_to_yaml(msg.request_id, out);
    out << ", ";
  }

  // member: task_device_label
  {
    out << "task_device_label: ";
    rosidl_generator_traits::value_to_yaml(msg.task_device_label, out);
    out << ", ";
  }

  // member: requested_x
  {
    out << "requested_x: ";
    rosidl_generator_traits::value_to_yaml(msg.requested_x, out);
    out << ", ";
  }

  // member: requested_y
  {
    out << "requested_y: ";
    rosidl_generator_traits::value_to_yaml(msg.requested_y, out);
    out << ", ";
  }

  // member: effective_endpoint
  {
    out << "effective_endpoint: ";
    to_flow_style_yaml(msg.effective_endpoint, out);
    out << ", ";
  }

  // member: path_revision
  {
    out << "path_revision: ";
    rosidl_generator_traits::value_to_yaml(msg.path_revision, out);
    out << ", ";
  }

  // member: route
  {
    out << "route: ";
    to_flow_style_yaml(msg.route, out);
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

  // member: sequence
  {
    if (msg.sequence.size() == 0) {
      out << "sequence: []";
    } else {
      out << "sequence: [";
      size_t pending_items = msg.sequence.size();
      for (auto item : msg.sequence) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: sequence_index
  {
    out << "sequence_index: ";
    rosidl_generator_traits::value_to_yaml(msg.sequence_index, out);
    out << ", ";
  }

  // member: sequence_state
  {
    out << "sequence_state: ";
    rosidl_generator_traits::value_to_yaml(msg.sequence_state, out);
    out << ", ";
  }

  // member: sequence_loop
  {
    out << "sequence_loop: ";
    rosidl_generator_traits::value_to_yaml(msg.sequence_loop, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const NavigationState & msg,
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

  // member: state_revision
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "state_revision: ";
    rosidl_generator_traits::value_to_yaml(msg.state_revision, out);
    out << "\n";
  }

  // member: map_ready
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "map_ready: ";
    rosidl_generator_traits::value_to_yaml(msg.map_ready, out);
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

  // member: map_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "map_name: ";
    rosidl_generator_traits::value_to_yaml(msg.map_name, out);
    out << "\n";
  }

  // member: frame_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "frame_id: ";
    rosidl_generator_traits::value_to_yaml(msg.frame_id, out);
    out << "\n";
  }

  // member: vehicle_pose
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vehicle_pose:\n";
    to_block_style_yaml(msg.vehicle_pose, out, indentation + 2);
  }

  // member: linear_velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "linear_velocity:\n";
    to_block_style_yaml(msg.linear_velocity, out, indentation + 2);
  }

  // member: angular_velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "angular_velocity:\n";
    to_block_style_yaml(msg.angular_velocity, out, indentation + 2);
  }

  // member: pose_fresh
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pose_fresh: ";
    rosidl_generator_traits::value_to_yaml(msg.pose_fresh, out);
    out << "\n";
  }

  // member: navigation_synchronized
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "navigation_synchronized: ";
    rosidl_generator_traits::value_to_yaml(msg.navigation_synchronized, out);
    out << "\n";
  }

  // member: control_held
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "control_held: ";
    rosidl_generator_traits::value_to_yaml(msg.control_held, out);
    out << "\n";
  }

  // member: control_owner_label
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "control_owner_label: ";
    rosidl_generator_traits::value_to_yaml(msg.control_owner_label, out);
    out << "\n";
  }

  // member: control_epoch
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "control_epoch: ";
    rosidl_generator_traits::value_to_yaml(msg.control_epoch, out);
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

  // member: ros_goal_uuid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ros_goal_uuid: ";
    rosidl_generator_traits::value_to_yaml(msg.ros_goal_uuid, out);
    out << "\n";
  }

  // member: task_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "task_status: ";
    rosidl_generator_traits::value_to_yaml(msg.task_status, out);
    out << "\n";
  }

  // member: task_status_text
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "task_status_text: ";
    rosidl_generator_traits::value_to_yaml(msg.task_status_text, out);
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

  // member: task_device_label
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "task_device_label: ";
    rosidl_generator_traits::value_to_yaml(msg.task_device_label, out);
    out << "\n";
  }

  // member: requested_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "requested_x: ";
    rosidl_generator_traits::value_to_yaml(msg.requested_x, out);
    out << "\n";
  }

  // member: requested_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "requested_y: ";
    rosidl_generator_traits::value_to_yaml(msg.requested_y, out);
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

  // member: path_revision
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "path_revision: ";
    rosidl_generator_traits::value_to_yaml(msg.path_revision, out);
    out << "\n";
  }

  // member: route
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "route:\n";
    to_block_style_yaml(msg.route, out, indentation + 2);
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

  // member: sequence
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.sequence.size() == 0) {
      out << "sequence: []\n";
    } else {
      out << "sequence:\n";
      for (auto item : msg.sequence) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: sequence_index
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sequence_index: ";
    rosidl_generator_traits::value_to_yaml(msg.sequence_index, out);
    out << "\n";
  }

  // member: sequence_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sequence_state: ";
    rosidl_generator_traits::value_to_yaml(msg.sequence_state, out);
    out << "\n";
  }

  // member: sequence_loop
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sequence_loop: ";
    rosidl_generator_traits::value_to_yaml(msg.sequence_loop, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const NavigationState & msg, bool use_flow_style = false)
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
  const web_navigation_msgs::msg::NavigationState & msg,
  std::ostream & out, size_t indentation = 0)
{
  web_navigation_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use web_navigation_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const web_navigation_msgs::msg::NavigationState & msg)
{
  return web_navigation_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<web_navigation_msgs::msg::NavigationState>()
{
  return "web_navigation_msgs::msg::NavigationState";
}

template<>
inline const char * name<web_navigation_msgs::msg::NavigationState>()
{
  return "web_navigation_msgs/msg/NavigationState";
}

template<>
struct has_fixed_size<web_navigation_msgs::msg::NavigationState>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<web_navigation_msgs::msg::NavigationState>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<web_navigation_msgs::msg::NavigationState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // WEB_NAVIGATION_MSGS__MSG__DETAIL__NAVIGATION_STATE__TRAITS_HPP_
