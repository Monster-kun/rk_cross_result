// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from web_navigation_msgs:srv/GetTask.idl
// generated code does not contain a copyright notice

#ifndef WEB_NAVIGATION_MSGS__SRV__DETAIL__GET_TASK__TRAITS_HPP_
#define WEB_NAVIGATION_MSGS__SRV__DETAIL__GET_TASK__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "web_navigation_msgs/srv/detail/get_task__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace web_navigation_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetTask_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: task_id
  {
    out << "task_id: ";
    rosidl_generator_traits::value_to_yaml(msg.task_id, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetTask_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: task_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "task_id: ";
    rosidl_generator_traits::value_to_yaml(msg.task_id, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetTask_Request & msg, bool use_flow_style = false)
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
  const web_navigation_msgs::srv::GetTask_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  web_navigation_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use web_navigation_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const web_navigation_msgs::srv::GetTask_Request & msg)
{
  return web_navigation_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<web_navigation_msgs::srv::GetTask_Request>()
{
  return "web_navigation_msgs::srv::GetTask_Request";
}

template<>
inline const char * name<web_navigation_msgs::srv::GetTask_Request>()
{
  return "web_navigation_msgs/srv/GetTask_Request";
}

template<>
struct has_fixed_size<web_navigation_msgs::srv::GetTask_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<web_navigation_msgs::srv::GetTask_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<web_navigation_msgs::srv::GetTask_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'effective_endpoint'
#include "geometry_msgs/msg/detail/pose__traits.hpp"

namespace web_navigation_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetTask_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: found
  {
    out << "found: ";
    rosidl_generator_traits::value_to_yaml(msg.found, out);
    out << ", ";
  }

  // member: task_id
  {
    out << "task_id: ";
    rosidl_generator_traits::value_to_yaml(msg.task_id, out);
    out << ", ";
  }

  // member: request_id
  {
    out << "request_id: ";
    rosidl_generator_traits::value_to_yaml(msg.request_id, out);
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

  // member: frame_id
  {
    out << "frame_id: ";
    rosidl_generator_traits::value_to_yaml(msg.frame_id, out);
    out << ", ";
  }

  // member: status
  {
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
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

  // member: device_label
  {
    out << "device_label: ";
    rosidl_generator_traits::value_to_yaml(msg.device_label, out);
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

  // member: updated_at
  {
    out << "updated_at: ";
    rosidl_generator_traits::value_to_yaml(msg.updated_at, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetTask_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: found
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "found: ";
    rosidl_generator_traits::value_to_yaml(msg.found, out);
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

  // member: request_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "request_id: ";
    rosidl_generator_traits::value_to_yaml(msg.request_id, out);
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

  // member: frame_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "frame_id: ";
    rosidl_generator_traits::value_to_yaml(msg.frame_id, out);
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

  // member: device_label
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "device_label: ";
    rosidl_generator_traits::value_to_yaml(msg.device_label, out);
    out << "\n";
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

  // member: updated_at
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "updated_at: ";
    rosidl_generator_traits::value_to_yaml(msg.updated_at, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetTask_Response & msg, bool use_flow_style = false)
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
  const web_navigation_msgs::srv::GetTask_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  web_navigation_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use web_navigation_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const web_navigation_msgs::srv::GetTask_Response & msg)
{
  return web_navigation_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<web_navigation_msgs::srv::GetTask_Response>()
{
  return "web_navigation_msgs::srv::GetTask_Response";
}

template<>
inline const char * name<web_navigation_msgs::srv::GetTask_Response>()
{
  return "web_navigation_msgs/srv/GetTask_Response";
}

template<>
struct has_fixed_size<web_navigation_msgs::srv::GetTask_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<web_navigation_msgs::srv::GetTask_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<web_navigation_msgs::srv::GetTask_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<web_navigation_msgs::srv::GetTask>()
{
  return "web_navigation_msgs::srv::GetTask";
}

template<>
inline const char * name<web_navigation_msgs::srv::GetTask>()
{
  return "web_navigation_msgs/srv/GetTask";
}

template<>
struct has_fixed_size<web_navigation_msgs::srv::GetTask>
  : std::integral_constant<
    bool,
    has_fixed_size<web_navigation_msgs::srv::GetTask_Request>::value &&
    has_fixed_size<web_navigation_msgs::srv::GetTask_Response>::value
  >
{
};

template<>
struct has_bounded_size<web_navigation_msgs::srv::GetTask>
  : std::integral_constant<
    bool,
    has_bounded_size<web_navigation_msgs::srv::GetTask_Request>::value &&
    has_bounded_size<web_navigation_msgs::srv::GetTask_Response>::value
  >
{
};

template<>
struct is_service<web_navigation_msgs::srv::GetTask>
  : std::true_type
{
};

template<>
struct is_service_request<web_navigation_msgs::srv::GetTask_Request>
  : std::true_type
{
};

template<>
struct is_service_response<web_navigation_msgs::srv::GetTask_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // WEB_NAVIGATION_MSGS__SRV__DETAIL__GET_TASK__TRAITS_HPP_
