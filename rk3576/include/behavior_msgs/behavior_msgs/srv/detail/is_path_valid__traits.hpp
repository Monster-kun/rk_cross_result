// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from behavior_msgs:srv/IsPathValid.idl
// generated code does not contain a copyright notice

#ifndef BEHAVIOR_MSGS__SRV__DETAIL__IS_PATH_VALID__TRAITS_HPP_
#define BEHAVIOR_MSGS__SRV__DETAIL__IS_PATH_VALID__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "behavior_msgs/srv/detail/is_path_valid__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace behavior_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const IsPathValid_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: check_distance
  {
    out << "check_distance: ";
    rosidl_generator_traits::value_to_yaml(msg.check_distance, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const IsPathValid_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: check_distance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "check_distance: ";
    rosidl_generator_traits::value_to_yaml(msg.check_distance, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const IsPathValid_Request & msg, bool use_flow_style = false)
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

}  // namespace behavior_msgs

namespace rosidl_generator_traits
{

[[deprecated("use behavior_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const behavior_msgs::srv::IsPathValid_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  behavior_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use behavior_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const behavior_msgs::srv::IsPathValid_Request & msg)
{
  return behavior_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<behavior_msgs::srv::IsPathValid_Request>()
{
  return "behavior_msgs::srv::IsPathValid_Request";
}

template<>
inline const char * name<behavior_msgs::srv::IsPathValid_Request>()
{
  return "behavior_msgs/srv/IsPathValid_Request";
}

template<>
struct has_fixed_size<behavior_msgs::srv::IsPathValid_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<behavior_msgs::srv::IsPathValid_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<behavior_msgs::srv::IsPathValid_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace behavior_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const IsPathValid_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: is_valid
  {
    out << "is_valid: ";
    rosidl_generator_traits::value_to_yaml(msg.is_valid, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const IsPathValid_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: is_valid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_valid: ";
    rosidl_generator_traits::value_to_yaml(msg.is_valid, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const IsPathValid_Response & msg, bool use_flow_style = false)
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

}  // namespace behavior_msgs

namespace rosidl_generator_traits
{

[[deprecated("use behavior_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const behavior_msgs::srv::IsPathValid_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  behavior_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use behavior_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const behavior_msgs::srv::IsPathValid_Response & msg)
{
  return behavior_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<behavior_msgs::srv::IsPathValid_Response>()
{
  return "behavior_msgs::srv::IsPathValid_Response";
}

template<>
inline const char * name<behavior_msgs::srv::IsPathValid_Response>()
{
  return "behavior_msgs/srv/IsPathValid_Response";
}

template<>
struct has_fixed_size<behavior_msgs::srv::IsPathValid_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<behavior_msgs::srv::IsPathValid_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<behavior_msgs::srv::IsPathValid_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<behavior_msgs::srv::IsPathValid>()
{
  return "behavior_msgs::srv::IsPathValid";
}

template<>
inline const char * name<behavior_msgs::srv::IsPathValid>()
{
  return "behavior_msgs/srv/IsPathValid";
}

template<>
struct has_fixed_size<behavior_msgs::srv::IsPathValid>
  : std::integral_constant<
    bool,
    has_fixed_size<behavior_msgs::srv::IsPathValid_Request>::value &&
    has_fixed_size<behavior_msgs::srv::IsPathValid_Response>::value
  >
{
};

template<>
struct has_bounded_size<behavior_msgs::srv::IsPathValid>
  : std::integral_constant<
    bool,
    has_bounded_size<behavior_msgs::srv::IsPathValid_Request>::value &&
    has_bounded_size<behavior_msgs::srv::IsPathValid_Response>::value
  >
{
};

template<>
struct is_service<behavior_msgs::srv::IsPathValid>
  : std::true_type
{
};

template<>
struct is_service_request<behavior_msgs::srv::IsPathValid_Request>
  : std::true_type
{
};

template<>
struct is_service_response<behavior_msgs::srv::IsPathValid_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // BEHAVIOR_MSGS__SRV__DETAIL__IS_PATH_VALID__TRAITS_HPP_
