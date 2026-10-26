// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from web_navigation_msgs:srv/GetWebMap.idl
// generated code does not contain a copyright notice

#ifndef WEB_NAVIGATION_MSGS__SRV__DETAIL__GET_WEB_MAP__TRAITS_HPP_
#define WEB_NAVIGATION_MSGS__SRV__DETAIL__GET_WEB_MAP__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "web_navigation_msgs/srv/detail/get_web_map__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace web_navigation_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetWebMap_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: if_map_version
  {
    out << "if_map_version: ";
    rosidl_generator_traits::value_to_yaml(msg.if_map_version, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetWebMap_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: if_map_version
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "if_map_version: ";
    rosidl_generator_traits::value_to_yaml(msg.if_map_version, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetWebMap_Request & msg, bool use_flow_style = false)
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
  const web_navigation_msgs::srv::GetWebMap_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  web_navigation_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use web_navigation_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const web_navigation_msgs::srv::GetWebMap_Request & msg)
{
  return web_navigation_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<web_navigation_msgs::srv::GetWebMap_Request>()
{
  return "web_navigation_msgs::srv::GetWebMap_Request";
}

template<>
inline const char * name<web_navigation_msgs::srv::GetWebMap_Request>()
{
  return "web_navigation_msgs/srv/GetWebMap_Request";
}

template<>
struct has_fixed_size<web_navigation_msgs::srv::GetWebMap_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<web_navigation_msgs::srv::GetWebMap_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<web_navigation_msgs::srv::GetWebMap_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace web_navigation_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetWebMap_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: ready
  {
    out << "ready: ";
    rosidl_generator_traits::value_to_yaml(msg.ready, out);
    out << ", ";
  }

  // member: not_modified
  {
    out << "not_modified: ";
    rosidl_generator_traits::value_to_yaml(msg.not_modified, out);
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

  // member: map_name
  {
    out << "map_name: ";
    rosidl_generator_traits::value_to_yaml(msg.map_name, out);
    out << ", ";
  }

  // member: coordinate_revision
  {
    out << "coordinate_revision: ";
    rosidl_generator_traits::value_to_yaml(msg.coordinate_revision, out);
    out << ", ";
  }

  // member: frame_id
  {
    out << "frame_id: ";
    rosidl_generator_traits::value_to_yaml(msg.frame_id, out);
    out << ", ";
  }

  // member: unit
  {
    out << "unit: ";
    rosidl_generator_traits::value_to_yaml(msg.unit, out);
    out << ", ";
  }

  // member: bounds
  {
    if (msg.bounds.size() == 0) {
      out << "bounds: []";
    } else {
      out << "bounds: [";
      size_t pending_items = msg.bounds.size();
      for (auto item : msg.bounds) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: geometry_json
  {
    out << "geometry_json: ";
    rosidl_generator_traits::value_to_yaml(msg.geometry_json, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetWebMap_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: ready
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ready: ";
    rosidl_generator_traits::value_to_yaml(msg.ready, out);
    out << "\n";
  }

  // member: not_modified
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "not_modified: ";
    rosidl_generator_traits::value_to_yaml(msg.not_modified, out);
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

  // member: map_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "map_name: ";
    rosidl_generator_traits::value_to_yaml(msg.map_name, out);
    out << "\n";
  }

  // member: coordinate_revision
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "coordinate_revision: ";
    rosidl_generator_traits::value_to_yaml(msg.coordinate_revision, out);
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

  // member: unit
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "unit: ";
    rosidl_generator_traits::value_to_yaml(msg.unit, out);
    out << "\n";
  }

  // member: bounds
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.bounds.size() == 0) {
      out << "bounds: []\n";
    } else {
      out << "bounds:\n";
      for (auto item : msg.bounds) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: geometry_json
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "geometry_json: ";
    rosidl_generator_traits::value_to_yaml(msg.geometry_json, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetWebMap_Response & msg, bool use_flow_style = false)
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
  const web_navigation_msgs::srv::GetWebMap_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  web_navigation_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use web_navigation_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const web_navigation_msgs::srv::GetWebMap_Response & msg)
{
  return web_navigation_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<web_navigation_msgs::srv::GetWebMap_Response>()
{
  return "web_navigation_msgs::srv::GetWebMap_Response";
}

template<>
inline const char * name<web_navigation_msgs::srv::GetWebMap_Response>()
{
  return "web_navigation_msgs/srv/GetWebMap_Response";
}

template<>
struct has_fixed_size<web_navigation_msgs::srv::GetWebMap_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<web_navigation_msgs::srv::GetWebMap_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<web_navigation_msgs::srv::GetWebMap_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<web_navigation_msgs::srv::GetWebMap>()
{
  return "web_navigation_msgs::srv::GetWebMap";
}

template<>
inline const char * name<web_navigation_msgs::srv::GetWebMap>()
{
  return "web_navigation_msgs/srv/GetWebMap";
}

template<>
struct has_fixed_size<web_navigation_msgs::srv::GetWebMap>
  : std::integral_constant<
    bool,
    has_fixed_size<web_navigation_msgs::srv::GetWebMap_Request>::value &&
    has_fixed_size<web_navigation_msgs::srv::GetWebMap_Response>::value
  >
{
};

template<>
struct has_bounded_size<web_navigation_msgs::srv::GetWebMap>
  : std::integral_constant<
    bool,
    has_bounded_size<web_navigation_msgs::srv::GetWebMap_Request>::value &&
    has_bounded_size<web_navigation_msgs::srv::GetWebMap_Response>::value
  >
{
};

template<>
struct is_service<web_navigation_msgs::srv::GetWebMap>
  : std::true_type
{
};

template<>
struct is_service_request<web_navigation_msgs::srv::GetWebMap_Request>
  : std::true_type
{
};

template<>
struct is_service_response<web_navigation_msgs::srv::GetWebMap_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // WEB_NAVIGATION_MSGS__SRV__DETAIL__GET_WEB_MAP__TRAITS_HPP_
