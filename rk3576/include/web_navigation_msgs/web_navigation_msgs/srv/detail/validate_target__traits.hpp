// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from web_navigation_msgs:srv/ValidateTarget.idl
// generated code does not contain a copyright notice

#ifndef WEB_NAVIGATION_MSGS__SRV__DETAIL__VALIDATE_TARGET__TRAITS_HPP_
#define WEB_NAVIGATION_MSGS__SRV__DETAIL__VALIDATE_TARGET__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "web_navigation_msgs/srv/detail/validate_target__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace web_navigation_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const ValidateTarget_Request & msg,
  std::ostream & out)
{
  out << "{";
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

  // member: suggest_nearest
  {
    out << "suggest_nearest: ";
    rosidl_generator_traits::value_to_yaml(msg.suggest_nearest, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ValidateTarget_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
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

  // member: suggest_nearest
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "suggest_nearest: ";
    rosidl_generator_traits::value_to_yaml(msg.suggest_nearest, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ValidateTarget_Request & msg, bool use_flow_style = false)
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
  const web_navigation_msgs::srv::ValidateTarget_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  web_navigation_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use web_navigation_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const web_navigation_msgs::srv::ValidateTarget_Request & msg)
{
  return web_navigation_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<web_navigation_msgs::srv::ValidateTarget_Request>()
{
  return "web_navigation_msgs::srv::ValidateTarget_Request";
}

template<>
inline const char * name<web_navigation_msgs::srv::ValidateTarget_Request>()
{
  return "web_navigation_msgs/srv/ValidateTarget_Request";
}

template<>
struct has_fixed_size<web_navigation_msgs::srv::ValidateTarget_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<web_navigation_msgs::srv::ValidateTarget_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<web_navigation_msgs::srv::ValidateTarget_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace web_navigation_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const ValidateTarget_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: valid
  {
    out << "valid: ";
    rosidl_generator_traits::value_to_yaml(msg.valid, out);
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

  // member: map_version
  {
    out << "map_version: ";
    rosidl_generator_traits::value_to_yaml(msg.map_version, out);
    out << ", ";
  }

  // member: lanelet_ids
  {
    if (msg.lanelet_ids.size() == 0) {
      out << "lanelet_ids: []";
    } else {
      out << "lanelet_ids: [";
      size_t pending_items = msg.lanelet_ids.size();
      for (auto item : msg.lanelet_ids) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
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

  // member: lanelet_id
  {
    out << "lanelet_id: ";
    rosidl_generator_traits::value_to_yaml(msg.lanelet_id, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ValidateTarget_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: valid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "valid: ";
    rosidl_generator_traits::value_to_yaml(msg.valid, out);
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

  // member: map_version
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "map_version: ";
    rosidl_generator_traits::value_to_yaml(msg.map_version, out);
    out << "\n";
  }

  // member: lanelet_ids
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.lanelet_ids.size() == 0) {
      out << "lanelet_ids: []\n";
    } else {
      out << "lanelet_ids:\n";
      for (auto item : msg.lanelet_ids) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
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

  // member: lanelet_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lanelet_id: ";
    rosidl_generator_traits::value_to_yaml(msg.lanelet_id, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ValidateTarget_Response & msg, bool use_flow_style = false)
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
  const web_navigation_msgs::srv::ValidateTarget_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  web_navigation_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use web_navigation_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const web_navigation_msgs::srv::ValidateTarget_Response & msg)
{
  return web_navigation_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<web_navigation_msgs::srv::ValidateTarget_Response>()
{
  return "web_navigation_msgs::srv::ValidateTarget_Response";
}

template<>
inline const char * name<web_navigation_msgs::srv::ValidateTarget_Response>()
{
  return "web_navigation_msgs/srv/ValidateTarget_Response";
}

template<>
struct has_fixed_size<web_navigation_msgs::srv::ValidateTarget_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<web_navigation_msgs::srv::ValidateTarget_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<web_navigation_msgs::srv::ValidateTarget_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<web_navigation_msgs::srv::ValidateTarget>()
{
  return "web_navigation_msgs::srv::ValidateTarget";
}

template<>
inline const char * name<web_navigation_msgs::srv::ValidateTarget>()
{
  return "web_navigation_msgs/srv/ValidateTarget";
}

template<>
struct has_fixed_size<web_navigation_msgs::srv::ValidateTarget>
  : std::integral_constant<
    bool,
    has_fixed_size<web_navigation_msgs::srv::ValidateTarget_Request>::value &&
    has_fixed_size<web_navigation_msgs::srv::ValidateTarget_Response>::value
  >
{
};

template<>
struct has_bounded_size<web_navigation_msgs::srv::ValidateTarget>
  : std::integral_constant<
    bool,
    has_bounded_size<web_navigation_msgs::srv::ValidateTarget_Request>::value &&
    has_bounded_size<web_navigation_msgs::srv::ValidateTarget_Response>::value
  >
{
};

template<>
struct is_service<web_navigation_msgs::srv::ValidateTarget>
  : std::true_type
{
};

template<>
struct is_service_request<web_navigation_msgs::srv::ValidateTarget_Request>
  : std::true_type
{
};

template<>
struct is_service_response<web_navigation_msgs::srv::ValidateTarget_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // WEB_NAVIGATION_MSGS__SRV__DETAIL__VALIDATE_TARGET__TRAITS_HPP_
