// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from chassis_control_msgs:msg/PurepursuitViz.idl
// generated code does not contain a copyright notice

#ifndef CHASSIS_CONTROL_MSGS__MSG__DETAIL__PUREPURSUIT_VIZ__TRAITS_HPP_
#define CHASSIS_CONTROL_MSGS__MSG__DETAIL__PUREPURSUIT_VIZ__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "chassis_control_msgs/msg/detail/purepursuit_viz__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace chassis_control_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const PurepursuitViz & msg,
  std::ostream & out)
{
  out << "{";
  // member: aimpointx
  {
    out << "aimpointx: ";
    rosidl_generator_traits::value_to_yaml(msg.aimpointx, out);
    out << ", ";
  }

  // member: aimpointy
  {
    out << "aimpointy: ";
    rosidl_generator_traits::value_to_yaml(msg.aimpointy, out);
    out << ", ";
  }

  // member: velx
  {
    out << "velx: ";
    rosidl_generator_traits::value_to_yaml(msg.velx, out);
    out << ", ";
  }

  // member: vely
  {
    out << "vely: ";
    rosidl_generator_traits::value_to_yaml(msg.vely, out);
    out << ", ";
  }

  // member: velz
  {
    out << "velz: ";
    rosidl_generator_traits::value_to_yaml(msg.velz, out);
    out << ", ";
  }

  // member: ahead
  {
    out << "ahead: ";
    rosidl_generator_traits::value_to_yaml(msg.ahead, out);
    out << ", ";
  }

  // member: currentx
  {
    out << "currentx: ";
    rosidl_generator_traits::value_to_yaml(msg.currentx, out);
    out << ", ";
  }

  // member: currenty
  {
    out << "currenty: ";
    rosidl_generator_traits::value_to_yaml(msg.currenty, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PurepursuitViz & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: aimpointx
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "aimpointx: ";
    rosidl_generator_traits::value_to_yaml(msg.aimpointx, out);
    out << "\n";
  }

  // member: aimpointy
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "aimpointy: ";
    rosidl_generator_traits::value_to_yaml(msg.aimpointy, out);
    out << "\n";
  }

  // member: velx
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "velx: ";
    rosidl_generator_traits::value_to_yaml(msg.velx, out);
    out << "\n";
  }

  // member: vely
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vely: ";
    rosidl_generator_traits::value_to_yaml(msg.vely, out);
    out << "\n";
  }

  // member: velz
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "velz: ";
    rosidl_generator_traits::value_to_yaml(msg.velz, out);
    out << "\n";
  }

  // member: ahead
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ahead: ";
    rosidl_generator_traits::value_to_yaml(msg.ahead, out);
    out << "\n";
  }

  // member: currentx
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "currentx: ";
    rosidl_generator_traits::value_to_yaml(msg.currentx, out);
    out << "\n";
  }

  // member: currenty
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "currenty: ";
    rosidl_generator_traits::value_to_yaml(msg.currenty, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PurepursuitViz & msg, bool use_flow_style = false)
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

}  // namespace chassis_control_msgs

namespace rosidl_generator_traits
{

[[deprecated("use chassis_control_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const chassis_control_msgs::msg::PurepursuitViz & msg,
  std::ostream & out, size_t indentation = 0)
{
  chassis_control_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use chassis_control_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const chassis_control_msgs::msg::PurepursuitViz & msg)
{
  return chassis_control_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<chassis_control_msgs::msg::PurepursuitViz>()
{
  return "chassis_control_msgs::msg::PurepursuitViz";
}

template<>
inline const char * name<chassis_control_msgs::msg::PurepursuitViz>()
{
  return "chassis_control_msgs/msg/PurepursuitViz";
}

template<>
struct has_fixed_size<chassis_control_msgs::msg::PurepursuitViz>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<chassis_control_msgs::msg::PurepursuitViz>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<chassis_control_msgs::msg::PurepursuitViz>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CHASSIS_CONTROL_MSGS__MSG__DETAIL__PUREPURSUIT_VIZ__TRAITS_HPP_
