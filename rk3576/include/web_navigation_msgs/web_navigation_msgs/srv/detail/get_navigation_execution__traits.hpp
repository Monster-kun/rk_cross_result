// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from web_navigation_msgs:srv/GetNavigationExecution.idl
// generated code does not contain a copyright notice

#ifndef WEB_NAVIGATION_MSGS__SRV__DETAIL__GET_NAVIGATION_EXECUTION__TRAITS_HPP_
#define WEB_NAVIGATION_MSGS__SRV__DETAIL__GET_NAVIGATION_EXECUTION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "web_navigation_msgs/srv/detail/get_navigation_execution__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace web_navigation_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetNavigationExecution_Request & msg,
  std::ostream & out)
{
  (void)msg;
  out << "null";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetNavigationExecution_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  (void)msg;
  (void)indentation;
  out << "null\n";
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetNavigationExecution_Request & msg, bool use_flow_style = false)
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
  const web_navigation_msgs::srv::GetNavigationExecution_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  web_navigation_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use web_navigation_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const web_navigation_msgs::srv::GetNavigationExecution_Request & msg)
{
  return web_navigation_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<web_navigation_msgs::srv::GetNavigationExecution_Request>()
{
  return "web_navigation_msgs::srv::GetNavigationExecution_Request";
}

template<>
inline const char * name<web_navigation_msgs::srv::GetNavigationExecution_Request>()
{
  return "web_navigation_msgs/srv/GetNavigationExecution_Request";
}

template<>
struct has_fixed_size<web_navigation_msgs::srv::GetNavigationExecution_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<web_navigation_msgs::srv::GetNavigationExecution_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<web_navigation_msgs::srv::GetNavigationExecution_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goals'
#include "web_navigation_msgs/msg/detail/navigation_execution__traits.hpp"

namespace web_navigation_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetNavigationExecution_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: instance_id
  {
    out << "instance_id: ";
    rosidl_generator_traits::value_to_yaml(msg.instance_id, out);
    out << ", ";
  }

  // member: active
  {
    out << "active: ";
    rosidl_generator_traits::value_to_yaml(msg.active, out);
    out << ", ";
  }

  // member: execution_running
  {
    out << "execution_running: ";
    rosidl_generator_traits::value_to_yaml(msg.execution_running, out);
    out << ", ";
  }

  // member: goals
  {
    if (msg.goals.size() == 0) {
      out << "goals: []";
    } else {
      out << "goals: [";
      size_t pending_items = msg.goals.size();
      for (auto item : msg.goals) {
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
  const GetNavigationExecution_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: instance_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "instance_id: ";
    rosidl_generator_traits::value_to_yaml(msg.instance_id, out);
    out << "\n";
  }

  // member: active
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "active: ";
    rosidl_generator_traits::value_to_yaml(msg.active, out);
    out << "\n";
  }

  // member: execution_running
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "execution_running: ";
    rosidl_generator_traits::value_to_yaml(msg.execution_running, out);
    out << "\n";
  }

  // member: goals
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.goals.size() == 0) {
      out << "goals: []\n";
    } else {
      out << "goals:\n";
      for (auto item : msg.goals) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetNavigationExecution_Response & msg, bool use_flow_style = false)
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
  const web_navigation_msgs::srv::GetNavigationExecution_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  web_navigation_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use web_navigation_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const web_navigation_msgs::srv::GetNavigationExecution_Response & msg)
{
  return web_navigation_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<web_navigation_msgs::srv::GetNavigationExecution_Response>()
{
  return "web_navigation_msgs::srv::GetNavigationExecution_Response";
}

template<>
inline const char * name<web_navigation_msgs::srv::GetNavigationExecution_Response>()
{
  return "web_navigation_msgs/srv/GetNavigationExecution_Response";
}

template<>
struct has_fixed_size<web_navigation_msgs::srv::GetNavigationExecution_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<web_navigation_msgs::srv::GetNavigationExecution_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<web_navigation_msgs::srv::GetNavigationExecution_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<web_navigation_msgs::srv::GetNavigationExecution>()
{
  return "web_navigation_msgs::srv::GetNavigationExecution";
}

template<>
inline const char * name<web_navigation_msgs::srv::GetNavigationExecution>()
{
  return "web_navigation_msgs/srv/GetNavigationExecution";
}

template<>
struct has_fixed_size<web_navigation_msgs::srv::GetNavigationExecution>
  : std::integral_constant<
    bool,
    has_fixed_size<web_navigation_msgs::srv::GetNavigationExecution_Request>::value &&
    has_fixed_size<web_navigation_msgs::srv::GetNavigationExecution_Response>::value
  >
{
};

template<>
struct has_bounded_size<web_navigation_msgs::srv::GetNavigationExecution>
  : std::integral_constant<
    bool,
    has_bounded_size<web_navigation_msgs::srv::GetNavigationExecution_Request>::value &&
    has_bounded_size<web_navigation_msgs::srv::GetNavigationExecution_Response>::value
  >
{
};

template<>
struct is_service<web_navigation_msgs::srv::GetNavigationExecution>
  : std::true_type
{
};

template<>
struct is_service_request<web_navigation_msgs::srv::GetNavigationExecution_Request>
  : std::true_type
{
};

template<>
struct is_service_response<web_navigation_msgs::srv::GetNavigationExecution_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // WEB_NAVIGATION_MSGS__SRV__DETAIL__GET_NAVIGATION_EXECUTION__TRAITS_HPP_
