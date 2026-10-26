// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mapping_msgs:msg/MapProjectorInfo.idl
// generated code does not contain a copyright notice

#ifndef MAPPING_MSGS__MSG__DETAIL__MAP_PROJECTOR_INFO__TRAITS_HPP_
#define MAPPING_MSGS__MSG__DETAIL__MAP_PROJECTOR_INFO__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "mapping_msgs/msg/detail/map_projector_info__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'map_origin'
#include "geographic_msgs/msg/detail/geo_point__traits.hpp"

namespace mapping_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const MapProjectorInfo & msg,
  std::ostream & out)
{
  out << "{";
  // member: type
  {
    out << "type: ";
    rosidl_generator_traits::value_to_yaml(msg.type, out);
    out << ", ";
  }

  // member: mgrs_grid
  {
    out << "mgrs_grid: ";
    rosidl_generator_traits::value_to_yaml(msg.mgrs_grid, out);
    out << ", ";
  }

  // member: map_origin
  {
    out << "map_origin: ";
    to_flow_style_yaml(msg.map_origin, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MapProjectorInfo & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "type: ";
    rosidl_generator_traits::value_to_yaml(msg.type, out);
    out << "\n";
  }

  // member: mgrs_grid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mgrs_grid: ";
    rosidl_generator_traits::value_to_yaml(msg.mgrs_grid, out);
    out << "\n";
  }

  // member: map_origin
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "map_origin:\n";
    to_block_style_yaml(msg.map_origin, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MapProjectorInfo & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace mapping_msgs

namespace rosidl_generator_traits
{

[[deprecated("use mapping_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const mapping_msgs::msg::MapProjectorInfo & msg,
  std::ostream & out, size_t indentation = 0)
{
  mapping_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mapping_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const mapping_msgs::msg::MapProjectorInfo & msg)
{
  return mapping_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<mapping_msgs::msg::MapProjectorInfo>()
{
  return "mapping_msgs::msg::MapProjectorInfo";
}

template<>
inline const char * name<mapping_msgs::msg::MapProjectorInfo>()
{
  return "mapping_msgs/msg/MapProjectorInfo";
}

template<>
struct has_fixed_size<mapping_msgs::msg::MapProjectorInfo>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<mapping_msgs::msg::MapProjectorInfo>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<mapping_msgs::msg::MapProjectorInfo>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MAPPING_MSGS__MSG__DETAIL__MAP_PROJECTOR_INFO__TRAITS_HPP_
