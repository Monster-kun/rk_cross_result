// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from web_navigation_msgs:srv/SubmitGoal.idl
// generated code does not contain a copyright notice

#ifndef WEB_NAVIGATION_MSGS__SRV__DETAIL__SUBMIT_GOAL__TRAITS_HPP_
#define WEB_NAVIGATION_MSGS__SRV__DETAIL__SUBMIT_GOAL__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "web_navigation_msgs/srv/detail/submit_goal__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'sequence'
#include "web_navigation_msgs/msg/detail/sequence_waypoint__traits.hpp"

namespace web_navigation_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const SubmitGoal_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: operation
  {
    out << "operation: ";
    rosidl_generator_traits::value_to_yaml(msg.operation, out);
    out << ", ";
  }

  // member: request_id
  {
    out << "request_id: ";
    rosidl_generator_traits::value_to_yaml(msg.request_id, out);
    out << ", ";
  }

  // member: session_id
  {
    out << "session_id: ";
    rosidl_generator_traits::value_to_yaml(msg.session_id, out);
    out << ", ";
  }

  // member: device_label
  {
    out << "device_label: ";
    rosidl_generator_traits::value_to_yaml(msg.device_label, out);
    out << ", ";
  }

  // member: manager_boot_id
  {
    out << "manager_boot_id: ";
    rosidl_generator_traits::value_to_yaml(msg.manager_boot_id, out);
    out << ", ";
  }

  // member: lease_token
  {
    out << "lease_token: ";
    rosidl_generator_traits::value_to_yaml(msg.lease_token, out);
    out << ", ";
  }

  // member: control_epoch
  {
    out << "control_epoch: ";
    rosidl_generator_traits::value_to_yaml(msg.control_epoch, out);
    out << ", ";
  }

  // member: map_version
  {
    out << "map_version: ";
    rosidl_generator_traits::value_to_yaml(msg.map_version, out);
    out << ", ";
  }

  // member: frame_id
  {
    out << "frame_id: ";
    rosidl_generator_traits::value_to_yaml(msg.frame_id, out);
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

  // member: selected_layer_id
  {
    out << "selected_layer_id: ";
    rosidl_generator_traits::value_to_yaml(msg.selected_layer_id, out);
    out << ", ";
  }

  // member: expected_active_task_id
  {
    out << "expected_active_task_id: ";
    rosidl_generator_traits::value_to_yaml(msg.expected_active_task_id, out);
    out << ", ";
  }

  // member: expected_state_revision
  {
    out << "expected_state_revision: ";
    rosidl_generator_traits::value_to_yaml(msg.expected_state_revision, out);
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
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SubmitGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: operation
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "operation: ";
    rosidl_generator_traits::value_to_yaml(msg.operation, out);
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

  // member: session_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "session_id: ";
    rosidl_generator_traits::value_to_yaml(msg.session_id, out);
    out << "\n";
  }

  // member: device_label
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "device_label: ";
    rosidl_generator_traits::value_to_yaml(msg.device_label, out);
    out << "\n";
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

  // member: lease_token
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lease_token: ";
    rosidl_generator_traits::value_to_yaml(msg.lease_token, out);
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

  // member: map_version
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "map_version: ";
    rosidl_generator_traits::value_to_yaml(msg.map_version, out);
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

  // member: selected_layer_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "selected_layer_id: ";
    rosidl_generator_traits::value_to_yaml(msg.selected_layer_id, out);
    out << "\n";
  }

  // member: expected_active_task_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "expected_active_task_id: ";
    rosidl_generator_traits::value_to_yaml(msg.expected_active_task_id, out);
    out << "\n";
  }

  // member: expected_state_revision
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "expected_state_revision: ";
    rosidl_generator_traits::value_to_yaml(msg.expected_state_revision, out);
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
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SubmitGoal_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace web_navigation_msgs

namespace rosidl_generator_traits
{

[[deprecated("use web_navigation_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const web_navigation_msgs::srv::SubmitGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  web_navigation_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use web_navigation_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const web_navigation_msgs::srv::SubmitGoal_Request & msg)
{
  return web_navigation_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<web_navigation_msgs::srv::SubmitGoal_Request>()
{
  return "web_navigation_msgs::srv::SubmitGoal_Request";
}

template<>
inline const char * name<web_navigation_msgs::srv::SubmitGoal_Request>()
{
  return "web_navigation_msgs/srv/SubmitGoal_Request";
}

template<>
struct has_fixed_size<web_navigation_msgs::srv::SubmitGoal_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<web_navigation_msgs::srv::SubmitGoal_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<web_navigation_msgs::srv::SubmitGoal_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace web_navigation_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const SubmitGoal_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: accepted
  {
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
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

  // member: task_status
  {
    out << "task_status: ";
    rosidl_generator_traits::value_to_yaml(msg.task_status, out);
    out << ", ";
  }

  // member: state_revision
  {
    out << "state_revision: ";
    rosidl_generator_traits::value_to_yaml(msg.state_revision, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SubmitGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: accepted
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
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

  // member: task_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "task_status: ";
    rosidl_generator_traits::value_to_yaml(msg.task_status, out);
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
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SubmitGoal_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace web_navigation_msgs

namespace rosidl_generator_traits
{

[[deprecated("use web_navigation_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const web_navigation_msgs::srv::SubmitGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  web_navigation_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use web_navigation_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const web_navigation_msgs::srv::SubmitGoal_Response & msg)
{
  return web_navigation_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<web_navigation_msgs::srv::SubmitGoal_Response>()
{
  return "web_navigation_msgs::srv::SubmitGoal_Response";
}

template<>
inline const char * name<web_navigation_msgs::srv::SubmitGoal_Response>()
{
  return "web_navigation_msgs/srv/SubmitGoal_Response";
}

template<>
struct has_fixed_size<web_navigation_msgs::srv::SubmitGoal_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<web_navigation_msgs::srv::SubmitGoal_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<web_navigation_msgs::srv::SubmitGoal_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<web_navigation_msgs::srv::SubmitGoal>()
{
  return "web_navigation_msgs::srv::SubmitGoal";
}

template<>
inline const char * name<web_navigation_msgs::srv::SubmitGoal>()
{
  return "web_navigation_msgs/srv/SubmitGoal";
}

template<>
struct has_fixed_size<web_navigation_msgs::srv::SubmitGoal>
  : std::integral_constant<
    bool,
    has_fixed_size<web_navigation_msgs::srv::SubmitGoal_Request>::value &&
    has_fixed_size<web_navigation_msgs::srv::SubmitGoal_Response>::value
  >
{
};

template<>
struct has_bounded_size<web_navigation_msgs::srv::SubmitGoal>
  : std::integral_constant<
    bool,
    has_bounded_size<web_navigation_msgs::srv::SubmitGoal_Request>::value &&
    has_bounded_size<web_navigation_msgs::srv::SubmitGoal_Response>::value
  >
{
};

template<>
struct is_service<web_navigation_msgs::srv::SubmitGoal>
  : std::true_type
{
};

template<>
struct is_service_request<web_navigation_msgs::srv::SubmitGoal_Request>
  : std::true_type
{
};

template<>
struct is_service_response<web_navigation_msgs::srv::SubmitGoal_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // WEB_NAVIGATION_MSGS__SRV__DETAIL__SUBMIT_GOAL__TRAITS_HPP_
