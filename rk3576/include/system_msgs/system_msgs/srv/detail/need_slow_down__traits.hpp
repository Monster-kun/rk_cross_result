// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from system_msgs:srv/NeedSlowDown.idl
// generated code does not contain a copyright notice

#ifndef SYSTEM_MSGS__SRV__DETAIL__NEED_SLOW_DOWN__TRAITS_HPP_
#define SYSTEM_MSGS__SRV__DETAIL__NEED_SLOW_DOWN__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "system_msgs/srv/detail/need_slow_down__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__traits.hpp"

namespace system_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const NeedSlowDown_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: pose
  {
    out << "pose: ";
    to_flow_style_yaml(msg.pose, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const NeedSlowDown_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: pose
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pose:\n";
    to_block_style_yaml(msg.pose, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const NeedSlowDown_Request & msg, bool use_flow_style = false)
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
  const system_msgs::srv::NeedSlowDown_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  system_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use system_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const system_msgs::srv::NeedSlowDown_Request & msg)
{
  return system_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<system_msgs::srv::NeedSlowDown_Request>()
{
  return "system_msgs::srv::NeedSlowDown_Request";
}

template<>
inline const char * name<system_msgs::srv::NeedSlowDown_Request>()
{
  return "system_msgs/srv/NeedSlowDown_Request";
}

template<>
struct has_fixed_size<system_msgs::srv::NeedSlowDown_Request>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Pose>::value> {};

template<>
struct has_bounded_size<system_msgs::srv::NeedSlowDown_Request>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Pose>::value> {};

template<>
struct is_message<system_msgs::srv::NeedSlowDown_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace system_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const NeedSlowDown_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: slow_down
  {
    out << "slow_down: ";
    rosidl_generator_traits::value_to_yaml(msg.slow_down, out);
    out << ", ";
  }

  // member: slow_down_ratio
  {
    out << "slow_down_ratio: ";
    rosidl_generator_traits::value_to_yaml(msg.slow_down_ratio, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const NeedSlowDown_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: slow_down
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "slow_down: ";
    rosidl_generator_traits::value_to_yaml(msg.slow_down, out);
    out << "\n";
  }

  // member: slow_down_ratio
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "slow_down_ratio: ";
    rosidl_generator_traits::value_to_yaml(msg.slow_down_ratio, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const NeedSlowDown_Response & msg, bool use_flow_style = false)
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
  const system_msgs::srv::NeedSlowDown_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  system_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use system_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const system_msgs::srv::NeedSlowDown_Response & msg)
{
  return system_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<system_msgs::srv::NeedSlowDown_Response>()
{
  return "system_msgs::srv::NeedSlowDown_Response";
}

template<>
inline const char * name<system_msgs::srv::NeedSlowDown_Response>()
{
  return "system_msgs/srv/NeedSlowDown_Response";
}

template<>
struct has_fixed_size<system_msgs::srv::NeedSlowDown_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<system_msgs::srv::NeedSlowDown_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<system_msgs::srv::NeedSlowDown_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<system_msgs::srv::NeedSlowDown>()
{
  return "system_msgs::srv::NeedSlowDown";
}

template<>
inline const char * name<system_msgs::srv::NeedSlowDown>()
{
  return "system_msgs/srv/NeedSlowDown";
}

template<>
struct has_fixed_size<system_msgs::srv::NeedSlowDown>
  : std::integral_constant<
    bool,
    has_fixed_size<system_msgs::srv::NeedSlowDown_Request>::value &&
    has_fixed_size<system_msgs::srv::NeedSlowDown_Response>::value
  >
{
};

template<>
struct has_bounded_size<system_msgs::srv::NeedSlowDown>
  : std::integral_constant<
    bool,
    has_bounded_size<system_msgs::srv::NeedSlowDown_Request>::value &&
    has_bounded_size<system_msgs::srv::NeedSlowDown_Response>::value
  >
{
};

template<>
struct is_service<system_msgs::srv::NeedSlowDown>
  : std::true_type
{
};

template<>
struct is_service_request<system_msgs::srv::NeedSlowDown_Request>
  : std::true_type
{
};

template<>
struct is_service_response<system_msgs::srv::NeedSlowDown_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // SYSTEM_MSGS__SRV__DETAIL__NEED_SLOW_DOWN__TRAITS_HPP_
