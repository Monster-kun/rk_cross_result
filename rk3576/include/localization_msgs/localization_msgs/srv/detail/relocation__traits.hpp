// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from localization_msgs:srv/Relocation.idl
// generated code does not contain a copyright notice

#ifndef LOCALIZATION_MSGS__SRV__DETAIL__RELOCATION__TRAITS_HPP_
#define LOCALIZATION_MSGS__SRV__DETAIL__RELOCATION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "localization_msgs/srv/detail/relocation__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'cloud'
#include "sensor_msgs/msg/detail/point_cloud2__traits.hpp"

namespace localization_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const Relocation_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: cloud
  {
    out << "cloud: ";
    to_flow_style_yaml(msg.cloud, out);
    out << ", ";
  }

  // member: map_name
  {
    out << "map_name: ";
    rosidl_generator_traits::value_to_yaml(msg.map_name, out);
    out << ", ";
  }

  // member: relocation_method
  {
    out << "relocation_method: ";
    rosidl_generator_traits::value_to_yaml(msg.relocation_method, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Relocation_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: cloud
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cloud:\n";
    to_block_style_yaml(msg.cloud, out, indentation + 2);
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

  // member: relocation_method
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "relocation_method: ";
    rosidl_generator_traits::value_to_yaml(msg.relocation_method, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Relocation_Request & msg, bool use_flow_style = false)
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

}  // namespace localization_msgs

namespace rosidl_generator_traits
{

[[deprecated("use localization_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const localization_msgs::srv::Relocation_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  localization_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use localization_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const localization_msgs::srv::Relocation_Request & msg)
{
  return localization_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<localization_msgs::srv::Relocation_Request>()
{
  return "localization_msgs::srv::Relocation_Request";
}

template<>
inline const char * name<localization_msgs::srv::Relocation_Request>()
{
  return "localization_msgs/srv/Relocation_Request";
}

template<>
struct has_fixed_size<localization_msgs::srv::Relocation_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<localization_msgs::srv::Relocation_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<localization_msgs::srv::Relocation_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'init_pose'
#include "geometry_msgs/msg/detail/pose_stamped__traits.hpp"

namespace localization_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const Relocation_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: init_pose
  {
    out << "init_pose: ";
    to_flow_style_yaml(msg.init_pose, out);
    out << ", ";
  }

  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Relocation_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: init_pose
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "init_pose:\n";
    to_block_style_yaml(msg.init_pose, out, indentation + 2);
  }

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

inline std::string to_yaml(const Relocation_Response & msg, bool use_flow_style = false)
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

}  // namespace localization_msgs

namespace rosidl_generator_traits
{

[[deprecated("use localization_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const localization_msgs::srv::Relocation_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  localization_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use localization_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const localization_msgs::srv::Relocation_Response & msg)
{
  return localization_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<localization_msgs::srv::Relocation_Response>()
{
  return "localization_msgs::srv::Relocation_Response";
}

template<>
inline const char * name<localization_msgs::srv::Relocation_Response>()
{
  return "localization_msgs/srv/Relocation_Response";
}

template<>
struct has_fixed_size<localization_msgs::srv::Relocation_Response>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::PoseStamped>::value> {};

template<>
struct has_bounded_size<localization_msgs::srv::Relocation_Response>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::PoseStamped>::value> {};

template<>
struct is_message<localization_msgs::srv::Relocation_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<localization_msgs::srv::Relocation>()
{
  return "localization_msgs::srv::Relocation";
}

template<>
inline const char * name<localization_msgs::srv::Relocation>()
{
  return "localization_msgs/srv/Relocation";
}

template<>
struct has_fixed_size<localization_msgs::srv::Relocation>
  : std::integral_constant<
    bool,
    has_fixed_size<localization_msgs::srv::Relocation_Request>::value &&
    has_fixed_size<localization_msgs::srv::Relocation_Response>::value
  >
{
};

template<>
struct has_bounded_size<localization_msgs::srv::Relocation>
  : std::integral_constant<
    bool,
    has_bounded_size<localization_msgs::srv::Relocation_Request>::value &&
    has_bounded_size<localization_msgs::srv::Relocation_Response>::value
  >
{
};

template<>
struct is_service<localization_msgs::srv::Relocation>
  : std::true_type
{
};

template<>
struct is_service_request<localization_msgs::srv::Relocation_Request>
  : std::true_type
{
};

template<>
struct is_service_response<localization_msgs::srv::Relocation_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // LOCALIZATION_MSGS__SRV__DETAIL__RELOCATION__TRAITS_HPP_
