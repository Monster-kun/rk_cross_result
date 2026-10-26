// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from web_navigation_msgs:srv/GetSnapshot.idl
// generated code does not contain a copyright notice

#ifndef WEB_NAVIGATION_MSGS__SRV__DETAIL__GET_SNAPSHOT__TRAITS_HPP_
#define WEB_NAVIGATION_MSGS__SRV__DETAIL__GET_SNAPSHOT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "web_navigation_msgs/srv/detail/get_snapshot__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace web_navigation_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetSnapshot_Request & msg,
  std::ostream & out)
{
  (void)msg;
  out << "null";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetSnapshot_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  (void)msg;
  (void)indentation;
  out << "null\n";
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetSnapshot_Request & msg, bool use_flow_style = false)
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
  const web_navigation_msgs::srv::GetSnapshot_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  web_navigation_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use web_navigation_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const web_navigation_msgs::srv::GetSnapshot_Request & msg)
{
  return web_navigation_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<web_navigation_msgs::srv::GetSnapshot_Request>()
{
  return "web_navigation_msgs::srv::GetSnapshot_Request";
}

template<>
inline const char * name<web_navigation_msgs::srv::GetSnapshot_Request>()
{
  return "web_navigation_msgs/srv/GetSnapshot_Request";
}

template<>
struct has_fixed_size<web_navigation_msgs::srv::GetSnapshot_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<web_navigation_msgs::srv::GetSnapshot_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<web_navigation_msgs::srv::GetSnapshot_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'state'
#include "web_navigation_msgs/msg/detail/navigation_state__traits.hpp"

namespace web_navigation_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetSnapshot_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: state
  {
    out << "state: ";
    to_flow_style_yaml(msg.state, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetSnapshot_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "state:\n";
    to_block_style_yaml(msg.state, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetSnapshot_Response & msg, bool use_flow_style = false)
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
  const web_navigation_msgs::srv::GetSnapshot_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  web_navigation_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use web_navigation_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const web_navigation_msgs::srv::GetSnapshot_Response & msg)
{
  return web_navigation_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<web_navigation_msgs::srv::GetSnapshot_Response>()
{
  return "web_navigation_msgs::srv::GetSnapshot_Response";
}

template<>
inline const char * name<web_navigation_msgs::srv::GetSnapshot_Response>()
{
  return "web_navigation_msgs/srv/GetSnapshot_Response";
}

template<>
struct has_fixed_size<web_navigation_msgs::srv::GetSnapshot_Response>
  : std::integral_constant<bool, has_fixed_size<web_navigation_msgs::msg::NavigationState>::value> {};

template<>
struct has_bounded_size<web_navigation_msgs::srv::GetSnapshot_Response>
  : std::integral_constant<bool, has_bounded_size<web_navigation_msgs::msg::NavigationState>::value> {};

template<>
struct is_message<web_navigation_msgs::srv::GetSnapshot_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<web_navigation_msgs::srv::GetSnapshot>()
{
  return "web_navigation_msgs::srv::GetSnapshot";
}

template<>
inline const char * name<web_navigation_msgs::srv::GetSnapshot>()
{
  return "web_navigation_msgs/srv/GetSnapshot";
}

template<>
struct has_fixed_size<web_navigation_msgs::srv::GetSnapshot>
  : std::integral_constant<
    bool,
    has_fixed_size<web_navigation_msgs::srv::GetSnapshot_Request>::value &&
    has_fixed_size<web_navigation_msgs::srv::GetSnapshot_Response>::value
  >
{
};

template<>
struct has_bounded_size<web_navigation_msgs::srv::GetSnapshot>
  : std::integral_constant<
    bool,
    has_bounded_size<web_navigation_msgs::srv::GetSnapshot_Request>::value &&
    has_bounded_size<web_navigation_msgs::srv::GetSnapshot_Response>::value
  >
{
};

template<>
struct is_service<web_navigation_msgs::srv::GetSnapshot>
  : std::true_type
{
};

template<>
struct is_service_request<web_navigation_msgs::srv::GetSnapshot_Request>
  : std::true_type
{
};

template<>
struct is_service_response<web_navigation_msgs::srv::GetSnapshot_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // WEB_NAVIGATION_MSGS__SRV__DETAIL__GET_SNAPSHOT__TRAITS_HPP_
