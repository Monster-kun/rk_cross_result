// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from system_msgs:srv/ManageLifecycleNodes.idl
// generated code does not contain a copyright notice

#ifndef SYSTEM_MSGS__SRV__DETAIL__MANAGE_LIFECYCLE_NODES__TRAITS_HPP_
#define SYSTEM_MSGS__SRV__DETAIL__MANAGE_LIFECYCLE_NODES__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "system_msgs/srv/detail/manage_lifecycle_nodes__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace system_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const ManageLifecycleNodes_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: command
  {
    out << "command: ";
    rosidl_generator_traits::value_to_yaml(msg.command, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ManageLifecycleNodes_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: command
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "command: ";
    rosidl_generator_traits::value_to_yaml(msg.command, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ManageLifecycleNodes_Request & msg, bool use_flow_style = false)
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

}  // namespace system_msgs

namespace rosidl_generator_traits
{

[[deprecated("use system_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const system_msgs::srv::ManageLifecycleNodes_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  system_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use system_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const system_msgs::srv::ManageLifecycleNodes_Request & msg)
{
  return system_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<system_msgs::srv::ManageLifecycleNodes_Request>()
{
  return "system_msgs::srv::ManageLifecycleNodes_Request";
}

template<>
inline const char * name<system_msgs::srv::ManageLifecycleNodes_Request>()
{
  return "system_msgs/srv/ManageLifecycleNodes_Request";
}

template<>
struct has_fixed_size<system_msgs::srv::ManageLifecycleNodes_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<system_msgs::srv::ManageLifecycleNodes_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<system_msgs::srv::ManageLifecycleNodes_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace system_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const ManageLifecycleNodes_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ManageLifecycleNodes_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ManageLifecycleNodes_Response & msg, bool use_flow_style = false)
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

}  // namespace system_msgs

namespace rosidl_generator_traits
{

[[deprecated("use system_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const system_msgs::srv::ManageLifecycleNodes_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  system_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use system_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const system_msgs::srv::ManageLifecycleNodes_Response & msg)
{
  return system_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<system_msgs::srv::ManageLifecycleNodes_Response>()
{
  return "system_msgs::srv::ManageLifecycleNodes_Response";
}

template<>
inline const char * name<system_msgs::srv::ManageLifecycleNodes_Response>()
{
  return "system_msgs/srv/ManageLifecycleNodes_Response";
}

template<>
struct has_fixed_size<system_msgs::srv::ManageLifecycleNodes_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<system_msgs::srv::ManageLifecycleNodes_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<system_msgs::srv::ManageLifecycleNodes_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<system_msgs::srv::ManageLifecycleNodes>()
{
  return "system_msgs::srv::ManageLifecycleNodes";
}

template<>
inline const char * name<system_msgs::srv::ManageLifecycleNodes>()
{
  return "system_msgs/srv/ManageLifecycleNodes";
}

template<>
struct has_fixed_size<system_msgs::srv::ManageLifecycleNodes>
  : std::integral_constant<
    bool,
    has_fixed_size<system_msgs::srv::ManageLifecycleNodes_Request>::value &&
    has_fixed_size<system_msgs::srv::ManageLifecycleNodes_Response>::value
  >
{
};

template<>
struct has_bounded_size<system_msgs::srv::ManageLifecycleNodes>
  : std::integral_constant<
    bool,
    has_bounded_size<system_msgs::srv::ManageLifecycleNodes_Request>::value &&
    has_bounded_size<system_msgs::srv::ManageLifecycleNodes_Response>::value
  >
{
};

template<>
struct is_service<system_msgs::srv::ManageLifecycleNodes>
  : std::true_type
{
};

template<>
struct is_service_request<system_msgs::srv::ManageLifecycleNodes_Request>
  : std::true_type
{
};

template<>
struct is_service_response<system_msgs::srv::ManageLifecycleNodes_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // SYSTEM_MSGS__SRV__DETAIL__MANAGE_LIFECYCLE_NODES__TRAITS_HPP_
