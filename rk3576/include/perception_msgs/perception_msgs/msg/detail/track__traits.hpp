// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from perception_msgs:msg/Track.idl
// generated code does not contain a copyright notice

#ifndef PERCEPTION_MSGS__MSG__DETAIL__TRACK__TRAITS_HPP_
#define PERCEPTION_MSGS__MSG__DETAIL__TRACK__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "perception_msgs/msg/detail/track__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__traits.hpp"
// Member 'vel'
#include "geometry_msgs/msg/detail/vector3__traits.hpp"
// Member 'associated'
#include "perception_msgs/msg/detail/cluster__traits.hpp"

namespace perception_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Track & msg,
  std::ostream & out)
{
  out << "{";
  // member: id
  {
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << ", ";
  }

  // member: age
  {
    out << "age: ";
    rosidl_generator_traits::value_to_yaml(msg.age, out);
    out << ", ";
  }

  // member: pose
  {
    out << "pose: ";
    to_flow_style_yaml(msg.pose, out);
    out << ", ";
  }

  // member: vel
  {
    out << "vel: ";
    to_flow_style_yaml(msg.vel, out);
    out << ", ";
  }

  // member: pos_cov
  {
    if (msg.pos_cov.size() == 0) {
      out << "pos_cov: []";
    } else {
      out << "pos_cov: [";
      size_t pending_items = msg.pos_cov.size();
      for (auto item : msg.pos_cov) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: vel_cov
  {
    if (msg.vel_cov.size() == 0) {
      out << "vel_cov: []";
    } else {
      out << "vel_cov: [";
      size_t pending_items = msg.vel_cov.size();
      for (auto item : msg.vel_cov) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: associated
  {
    if (msg.associated.size() == 0) {
      out << "associated: []";
    } else {
      out << "associated: [";
      size_t pending_items = msg.associated.size();
      for (auto item : msg.associated) {
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
  const Track & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << "\n";
  }

  // member: age
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "age: ";
    rosidl_generator_traits::value_to_yaml(msg.age, out);
    out << "\n";
  }

  // member: pose
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pose:\n";
    to_block_style_yaml(msg.pose, out, indentation + 2);
  }

  // member: vel
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vel:\n";
    to_block_style_yaml(msg.vel, out, indentation + 2);
  }

  // member: pos_cov
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.pos_cov.size() == 0) {
      out << "pos_cov: []\n";
    } else {
      out << "pos_cov:\n";
      for (auto item : msg.pos_cov) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: vel_cov
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.vel_cov.size() == 0) {
      out << "vel_cov: []\n";
    } else {
      out << "vel_cov:\n";
      for (auto item : msg.vel_cov) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: associated
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.associated.size() == 0) {
      out << "associated: []\n";
    } else {
      out << "associated:\n";
      for (auto item : msg.associated) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Track & msg, bool use_flow_style = false)
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
  const perception_msgs::msg::Track & msg,
  std::ostream & out, size_t indentation = 0)
{
  perception_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use perception_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const perception_msgs::msg::Track & msg)
{
  return perception_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<perception_msgs::msg::Track>()
{
  return "perception_msgs::msg::Track";
}

template<>
inline const char * name<perception_msgs::msg::Track>()
{
  return "perception_msgs/msg/Track";
}

template<>
struct has_fixed_size<perception_msgs::msg::Track>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<perception_msgs::msg::Track>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<perception_msgs::msg::Track>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PERCEPTION_MSGS__MSG__DETAIL__TRACK__TRAITS_HPP_
