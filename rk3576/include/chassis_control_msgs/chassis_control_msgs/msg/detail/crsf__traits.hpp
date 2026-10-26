// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from chassis_control_msgs:msg/Crsf.idl
// generated code does not contain a copyright notice

#ifndef CHASSIS_CONTROL_MSGS__MSG__DETAIL__CRSF__TRAITS_HPP_
#define CHASSIS_CONTROL_MSGS__MSG__DETAIL__CRSF__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "chassis_control_msgs/msg/detail/crsf__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace chassis_control_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Crsf & msg,
  std::ostream & out)
{
  out << "{";
  // member: ch1
  {
    out << "ch1: ";
    rosidl_generator_traits::value_to_yaml(msg.ch1, out);
    out << ", ";
  }

  // member: ch2
  {
    out << "ch2: ";
    rosidl_generator_traits::value_to_yaml(msg.ch2, out);
    out << ", ";
  }

  // member: ch3
  {
    out << "ch3: ";
    rosidl_generator_traits::value_to_yaml(msg.ch3, out);
    out << ", ";
  }

  // member: ch4
  {
    out << "ch4: ";
    rosidl_generator_traits::value_to_yaml(msg.ch4, out);
    out << ", ";
  }

  // member: ch5
  {
    out << "ch5: ";
    rosidl_generator_traits::value_to_yaml(msg.ch5, out);
    out << ", ";
  }

  // member: ch6
  {
    out << "ch6: ";
    rosidl_generator_traits::value_to_yaml(msg.ch6, out);
    out << ", ";
  }

  // member: ch7
  {
    out << "ch7: ";
    rosidl_generator_traits::value_to_yaml(msg.ch7, out);
    out << ", ";
  }

  // member: ch8
  {
    out << "ch8: ";
    rosidl_generator_traits::value_to_yaml(msg.ch8, out);
    out << ", ";
  }

  // member: ch9
  {
    out << "ch9: ";
    rosidl_generator_traits::value_to_yaml(msg.ch9, out);
    out << ", ";
  }

  // member: ch10
  {
    out << "ch10: ";
    rosidl_generator_traits::value_to_yaml(msg.ch10, out);
    out << ", ";
  }

  // member: ch11
  {
    out << "ch11: ";
    rosidl_generator_traits::value_to_yaml(msg.ch11, out);
    out << ", ";
  }

  // member: ch12
  {
    out << "ch12: ";
    rosidl_generator_traits::value_to_yaml(msg.ch12, out);
    out << ", ";
  }

  // member: ch13
  {
    out << "ch13: ";
    rosidl_generator_traits::value_to_yaml(msg.ch13, out);
    out << ", ";
  }

  // member: ch14
  {
    out << "ch14: ";
    rosidl_generator_traits::value_to_yaml(msg.ch14, out);
    out << ", ";
  }

  // member: ch15
  {
    out << "ch15: ";
    rosidl_generator_traits::value_to_yaml(msg.ch15, out);
    out << ", ";
  }

  // member: ch16
  {
    out << "ch16: ";
    rosidl_generator_traits::value_to_yaml(msg.ch16, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Crsf & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: ch1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ch1: ";
    rosidl_generator_traits::value_to_yaml(msg.ch1, out);
    out << "\n";
  }

  // member: ch2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ch2: ";
    rosidl_generator_traits::value_to_yaml(msg.ch2, out);
    out << "\n";
  }

  // member: ch3
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ch3: ";
    rosidl_generator_traits::value_to_yaml(msg.ch3, out);
    out << "\n";
  }

  // member: ch4
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ch4: ";
    rosidl_generator_traits::value_to_yaml(msg.ch4, out);
    out << "\n";
  }

  // member: ch5
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ch5: ";
    rosidl_generator_traits::value_to_yaml(msg.ch5, out);
    out << "\n";
  }

  // member: ch6
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ch6: ";
    rosidl_generator_traits::value_to_yaml(msg.ch6, out);
    out << "\n";
  }

  // member: ch7
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ch7: ";
    rosidl_generator_traits::value_to_yaml(msg.ch7, out);
    out << "\n";
  }

  // member: ch8
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ch8: ";
    rosidl_generator_traits::value_to_yaml(msg.ch8, out);
    out << "\n";
  }

  // member: ch9
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ch9: ";
    rosidl_generator_traits::value_to_yaml(msg.ch9, out);
    out << "\n";
  }

  // member: ch10
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ch10: ";
    rosidl_generator_traits::value_to_yaml(msg.ch10, out);
    out << "\n";
  }

  // member: ch11
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ch11: ";
    rosidl_generator_traits::value_to_yaml(msg.ch11, out);
    out << "\n";
  }

  // member: ch12
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ch12: ";
    rosidl_generator_traits::value_to_yaml(msg.ch12, out);
    out << "\n";
  }

  // member: ch13
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ch13: ";
    rosidl_generator_traits::value_to_yaml(msg.ch13, out);
    out << "\n";
  }

  // member: ch14
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ch14: ";
    rosidl_generator_traits::value_to_yaml(msg.ch14, out);
    out << "\n";
  }

  // member: ch15
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ch15: ";
    rosidl_generator_traits::value_to_yaml(msg.ch15, out);
    out << "\n";
  }

  // member: ch16
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ch16: ";
    rosidl_generator_traits::value_to_yaml(msg.ch16, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Crsf & msg, bool use_flow_style = false)
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
  const chassis_control_msgs::msg::Crsf & msg,
  std::ostream & out, size_t indentation = 0)
{
  chassis_control_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use chassis_control_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const chassis_control_msgs::msg::Crsf & msg)
{
  return chassis_control_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<chassis_control_msgs::msg::Crsf>()
{
  return "chassis_control_msgs::msg::Crsf";
}

template<>
inline const char * name<chassis_control_msgs::msg::Crsf>()
{
  return "chassis_control_msgs/msg/Crsf";
}

template<>
struct has_fixed_size<chassis_control_msgs::msg::Crsf>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<chassis_control_msgs::msg::Crsf>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<chassis_control_msgs::msg::Crsf>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CHASSIS_CONTROL_MSGS__MSG__DETAIL__CRSF__TRAITS_HPP_
