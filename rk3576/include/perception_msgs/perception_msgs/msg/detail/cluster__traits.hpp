// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from perception_msgs:msg/Cluster.idl
// generated code does not contain a copyright notice

#ifndef PERCEPTION_MSGS__MSG__DETAIL__CLUSTER__TRAITS_HPP_
#define PERCEPTION_MSGS__MSG__DETAIL__CLUSTER__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "perception_msgs/msg/detail/cluster__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'min_pt'
// Member 'max_pt'
// Member 'centroid'
#include "geometry_msgs/msg/detail/point__traits.hpp"
// Member 'size'
#include "geometry_msgs/msg/detail/vector3__traits.hpp"

namespace perception_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Cluster & msg,
  std::ostream & out)
{
  out << "{";
  // member: is_human
  {
    out << "is_human: ";
    rosidl_generator_traits::value_to_yaml(msg.is_human, out);
    out << ", ";
  }

  // member: id
  {
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << ", ";
  }

  // member: min_pt
  {
    out << "min_pt: ";
    to_flow_style_yaml(msg.min_pt, out);
    out << ", ";
  }

  // member: max_pt
  {
    out << "max_pt: ";
    to_flow_style_yaml(msg.max_pt, out);
    out << ", ";
  }

  // member: size
  {
    out << "size: ";
    to_flow_style_yaml(msg.size, out);
    out << ", ";
  }

  // member: centroid
  {
    out << "centroid: ";
    to_flow_style_yaml(msg.centroid, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Cluster & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: is_human
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_human: ";
    rosidl_generator_traits::value_to_yaml(msg.is_human, out);
    out << "\n";
  }

  // member: id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << "\n";
  }

  // member: min_pt
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "min_pt:\n";
    to_block_style_yaml(msg.min_pt, out, indentation + 2);
  }

  // member: max_pt
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "max_pt:\n";
    to_block_style_yaml(msg.max_pt, out, indentation + 2);
  }

  // member: size
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "size:\n";
    to_block_style_yaml(msg.size, out, indentation + 2);
  }

  // member: centroid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "centroid:\n";
    to_block_style_yaml(msg.centroid, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Cluster & msg, bool use_flow_style = false)
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

}  // namespace perception_msgs

namespace rosidl_generator_traits
{

[[deprecated("use perception_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const perception_msgs::msg::Cluster & msg,
  std::ostream & out, size_t indentation = 0)
{
  perception_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use perception_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const perception_msgs::msg::Cluster & msg)
{
  return perception_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<perception_msgs::msg::Cluster>()
{
  return "perception_msgs::msg::Cluster";
}

template<>
inline const char * name<perception_msgs::msg::Cluster>()
{
  return "perception_msgs/msg/Cluster";
}

template<>
struct has_fixed_size<perception_msgs::msg::Cluster>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Point>::value && has_fixed_size<geometry_msgs::msg::Vector3>::value> {};

template<>
struct has_bounded_size<perception_msgs::msg::Cluster>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Point>::value && has_bounded_size<geometry_msgs::msg::Vector3>::value> {};

template<>
struct is_message<perception_msgs::msg::Cluster>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PERCEPTION_MSGS__MSG__DETAIL__CLUSTER__TRAITS_HPP_
