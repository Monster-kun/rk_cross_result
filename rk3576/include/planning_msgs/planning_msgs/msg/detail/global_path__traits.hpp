// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from planning_msgs:msg/GlobalPath.idl
// generated code does not contain a copyright notice

#ifndef PLANNING_MSGS__MSG__DETAIL__GLOBAL_PATH__TRAITS_HPP_
#define PLANNING_MSGS__MSG__DETAIL__GLOBAL_PATH__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "planning_msgs/msg/detail/global_path__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'main_trajectory'
#include "planning_msgs/msg/detail/trajectory__traits.hpp"
// Member 'left_bound'
// Member 'right_bound'
#include "geometry_msgs/msg/detail/point__traits.hpp"

namespace planning_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const GlobalPath & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: main_trajectory
  {
    out << "main_trajectory: ";
    to_flow_style_yaml(msg.main_trajectory, out);
    out << ", ";
  }

  // member: left_bound
  {
    if (msg.left_bound.size() == 0) {
      out << "left_bound: []";
    } else {
      out << "left_bound: [";
      size_t pending_items = msg.left_bound.size();
      for (auto item : msg.left_bound) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: right_bound
  {
    if (msg.right_bound.size() == 0) {
      out << "right_bound: []";
    } else {
      out << "right_bound: [";
      size_t pending_items = msg.right_bound.size();
      for (auto item : msg.right_bound) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: left_bound_s
  {
    if (msg.left_bound_s.size() == 0) {
      out << "left_bound_s: []";
    } else {
      out << "left_bound_s: [";
      size_t pending_items = msg.left_bound_s.size();
      for (auto item : msg.left_bound_s) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: right_bound_s
  {
    if (msg.right_bound_s.size() == 0) {
      out << "right_bound_s: []";
    } else {
      out << "right_bound_s: [";
      size_t pending_items = msg.right_bound_s.size();
      for (auto item : msg.right_bound_s) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: checkpoint_indices
  {
    if (msg.checkpoint_indices.size() == 0) {
      out << "checkpoint_indices: []";
    } else {
      out << "checkpoint_indices: [";
      size_t pending_items = msg.checkpoint_indices.size();
      for (auto item : msg.checkpoint_indices) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: loop
  {
    out << "loop: ";
    rosidl_generator_traits::value_to_yaml(msg.loop, out);
    out << ", ";
  }

  // member: loop_start_index
  {
    out << "loop_start_index: ";
    rosidl_generator_traits::value_to_yaml(msg.loop_start_index, out);
    out << ", ";
  }

  // member: loop_left_bound_start_index
  {
    out << "loop_left_bound_start_index: ";
    rosidl_generator_traits::value_to_yaml(msg.loop_left_bound_start_index, out);
    out << ", ";
  }

  // member: loop_right_bound_start_index
  {
    out << "loop_right_bound_start_index: ";
    rosidl_generator_traits::value_to_yaml(msg.loop_right_bound_start_index, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GlobalPath & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: main_trajectory
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "main_trajectory:\n";
    to_block_style_yaml(msg.main_trajectory, out, indentation + 2);
  }

  // member: left_bound
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.left_bound.size() == 0) {
      out << "left_bound: []\n";
    } else {
      out << "left_bound:\n";
      for (auto item : msg.left_bound) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: right_bound
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.right_bound.size() == 0) {
      out << "right_bound: []\n";
    } else {
      out << "right_bound:\n";
      for (auto item : msg.right_bound) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: left_bound_s
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.left_bound_s.size() == 0) {
      out << "left_bound_s: []\n";
    } else {
      out << "left_bound_s:\n";
      for (auto item : msg.left_bound_s) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: right_bound_s
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.right_bound_s.size() == 0) {
      out << "right_bound_s: []\n";
    } else {
      out << "right_bound_s:\n";
      for (auto item : msg.right_bound_s) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: checkpoint_indices
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.checkpoint_indices.size() == 0) {
      out << "checkpoint_indices: []\n";
    } else {
      out << "checkpoint_indices:\n";
      for (auto item : msg.checkpoint_indices) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: loop
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "loop: ";
    rosidl_generator_traits::value_to_yaml(msg.loop, out);
    out << "\n";
  }

  // member: loop_start_index
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "loop_start_index: ";
    rosidl_generator_traits::value_to_yaml(msg.loop_start_index, out);
    out << "\n";
  }

  // member: loop_left_bound_start_index
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "loop_left_bound_start_index: ";
    rosidl_generator_traits::value_to_yaml(msg.loop_left_bound_start_index, out);
    out << "\n";
  }

  // member: loop_right_bound_start_index
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "loop_right_bound_start_index: ";
    rosidl_generator_traits::value_to_yaml(msg.loop_right_bound_start_index, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GlobalPath & msg, bool use_flow_style = false)
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

}  // namespace planning_msgs

namespace rosidl_generator_traits
{

[[deprecated("use planning_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const planning_msgs::msg::GlobalPath & msg,
  std::ostream & out, size_t indentation = 0)
{
  planning_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use planning_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const planning_msgs::msg::GlobalPath & msg)
{
  return planning_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<planning_msgs::msg::GlobalPath>()
{
  return "planning_msgs::msg::GlobalPath";
}

template<>
inline const char * name<planning_msgs::msg::GlobalPath>()
{
  return "planning_msgs/msg/GlobalPath";
}

template<>
struct has_fixed_size<planning_msgs::msg::GlobalPath>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<planning_msgs::msg::GlobalPath>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<planning_msgs::msg::GlobalPath>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PLANNING_MSGS__MSG__DETAIL__GLOBAL_PATH__TRAITS_HPP_
