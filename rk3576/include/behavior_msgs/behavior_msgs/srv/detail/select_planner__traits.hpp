// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from behavior_msgs:srv/SelectPlanner.idl
// generated code does not contain a copyright notice

#ifndef BEHAVIOR_MSGS__SRV__DETAIL__SELECT_PLANNER__TRAITS_HPP_
#define BEHAVIOR_MSGS__SRV__DETAIL__SELECT_PLANNER__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "behavior_msgs/srv/detail/select_planner__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace behavior_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const SelectPlanner_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: planner_selector_id
  {
    out << "planner_selector_id: ";
    rosidl_generator_traits::value_to_yaml(msg.planner_selector_id, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SelectPlanner_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: planner_selector_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "planner_selector_id: ";
    rosidl_generator_traits::value_to_yaml(msg.planner_selector_id, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SelectPlanner_Request & msg, bool use_flow_style = false)
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
  const behavior_msgs::srv::SelectPlanner_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  behavior_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use behavior_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const behavior_msgs::srv::SelectPlanner_Request & msg)
{
  return behavior_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<behavior_msgs::srv::SelectPlanner_Request>()
{
  return "behavior_msgs::srv::SelectPlanner_Request";
}

template<>
inline const char * name<behavior_msgs::srv::SelectPlanner_Request>()
{
  return "behavior_msgs/srv/SelectPlanner_Request";
}

template<>
struct has_fixed_size<behavior_msgs::srv::SelectPlanner_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<behavior_msgs::srv::SelectPlanner_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<behavior_msgs::srv::SelectPlanner_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace behavior_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const SelectPlanner_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: local_planner_id
  {
    out << "local_planner_id: ";
    rosidl_generator_traits::value_to_yaml(msg.local_planner_id, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SelectPlanner_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: local_planner_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "local_planner_id: ";
    rosidl_generator_traits::value_to_yaml(msg.local_planner_id, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SelectPlanner_Response & msg, bool use_flow_style = false)
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
  const behavior_msgs::srv::SelectPlanner_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  behavior_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use behavior_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const behavior_msgs::srv::SelectPlanner_Response & msg)
{
  return behavior_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<behavior_msgs::srv::SelectPlanner_Response>()
{
  return "behavior_msgs::srv::SelectPlanner_Response";
}

template<>
inline const char * name<behavior_msgs::srv::SelectPlanner_Response>()
{
  return "behavior_msgs/srv/SelectPlanner_Response";
}

template<>
struct has_fixed_size<behavior_msgs::srv::SelectPlanner_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<behavior_msgs::srv::SelectPlanner_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<behavior_msgs::srv::SelectPlanner_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<behavior_msgs::srv::SelectPlanner>()
{
  return "behavior_msgs::srv::SelectPlanner";
}

template<>
inline const char * name<behavior_msgs::srv::SelectPlanner>()
{
  return "behavior_msgs/srv/SelectPlanner";
}

template<>
struct has_fixed_size<behavior_msgs::srv::SelectPlanner>
  : std::integral_constant<
    bool,
    has_fixed_size<behavior_msgs::srv::SelectPlanner_Request>::value &&
    has_fixed_size<behavior_msgs::srv::SelectPlanner_Response>::value
  >
{
};

template<>
struct has_bounded_size<behavior_msgs::srv::SelectPlanner>
  : std::integral_constant<
    bool,
    has_bounded_size<behavior_msgs::srv::SelectPlanner_Request>::value &&
    has_bounded_size<behavior_msgs::srv::SelectPlanner_Response>::value
  >
{
};

template<>
struct is_service<behavior_msgs::srv::SelectPlanner>
  : std::true_type
{
};

template<>
struct is_service_request<behavior_msgs::srv::SelectPlanner_Request>
  : std::true_type
{
};

template<>
struct is_service_response<behavior_msgs::srv::SelectPlanner_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // BEHAVIOR_MSGS__SRV__DETAIL__SELECT_PLANNER__TRAITS_HPP_
