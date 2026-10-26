// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from planning_msgs:msg/MincoTraj.idl
// generated code does not contain a copyright notice

#ifndef PLANNING_MSGS__MSG__DETAIL__MINCO_TRAJ__TRAITS_HPP_
#define PLANNING_MSGS__MSG__DETAIL__MINCO_TRAJ__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "planning_msgs/msg/detail/minco_traj__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'start_time'
#include "builtin_interfaces/msg/detail/time__traits.hpp"
// Member 'head_x'
// Member 'head_y'
// Member 'tail_x'
// Member 'tail_y'
#include "geometry_msgs/msg/detail/vector3__traits.hpp"
// Member 'pos_pts'
#include "geometry_msgs/msg/detail/point__traits.hpp"
// Member 'waypoints'
#include "planning_msgs/msg/detail/waypoint__traits.hpp"

namespace planning_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const MincoTraj & msg,
  std::ostream & out)
{
  out << "{";
  // member: start_time
  {
    out << "start_time: ";
    to_flow_style_yaml(msg.start_time, out);
    out << ", ";
  }

  // member: end_time
  {
    out << "end_time: ";
    rosidl_generator_traits::value_to_yaml(msg.end_time, out);
    out << ", ";
  }

  // member: use_init
  {
    out << "use_init: ";
    rosidl_generator_traits::value_to_yaml(msg.use_init, out);
    out << ", ";
  }

  // member: yaw
  {
    out << "yaw: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw, out);
    out << ", ";
  }

  // member: head_x
  {
    out << "head_x: ";
    to_flow_style_yaml(msg.head_x, out);
    out << ", ";
  }

  // member: head_y
  {
    out << "head_y: ";
    to_flow_style_yaml(msg.head_y, out);
    out << ", ";
  }

  // member: tail_x
  {
    out << "tail_x: ";
    to_flow_style_yaml(msg.tail_x, out);
    out << ", ";
  }

  // member: tail_y
  {
    out << "tail_y: ";
    to_flow_style_yaml(msg.tail_y, out);
    out << ", ";
  }

  // member: t_pts
  {
    if (msg.t_pts.size() == 0) {
      out << "t_pts: []";
    } else {
      out << "t_pts: [";
      size_t pending_items = msg.t_pts.size();
      for (auto item : msg.t_pts) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: pos_pts
  {
    if (msg.pos_pts.size() == 0) {
      out << "pos_pts: []";
    } else {
      out << "pos_pts: [";
      size_t pending_items = msg.pos_pts.size();
      for (auto item : msg.pos_pts) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: yaw_pts
  {
    if (msg.yaw_pts.size() == 0) {
      out << "yaw_pts: []";
    } else {
      out << "yaw_pts: [";
      size_t pending_items = msg.yaw_pts.size();
      for (auto item : msg.yaw_pts) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: waypoints
  {
    if (msg.waypoints.size() == 0) {
      out << "waypoints: []";
    } else {
      out << "waypoints: [";
      size_t pending_items = msg.waypoints.size();
      for (auto item : msg.waypoints) {
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
  const MincoTraj & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: start_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "start_time:\n";
    to_block_style_yaml(msg.start_time, out, indentation + 2);
  }

  // member: end_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "end_time: ";
    rosidl_generator_traits::value_to_yaml(msg.end_time, out);
    out << "\n";
  }

  // member: use_init
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "use_init: ";
    rosidl_generator_traits::value_to_yaml(msg.use_init, out);
    out << "\n";
  }

  // member: yaw
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "yaw: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw, out);
    out << "\n";
  }

  // member: head_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "head_x:\n";
    to_block_style_yaml(msg.head_x, out, indentation + 2);
  }

  // member: head_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "head_y:\n";
    to_block_style_yaml(msg.head_y, out, indentation + 2);
  }

  // member: tail_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tail_x:\n";
    to_block_style_yaml(msg.tail_x, out, indentation + 2);
  }

  // member: tail_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tail_y:\n";
    to_block_style_yaml(msg.tail_y, out, indentation + 2);
  }

  // member: t_pts
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.t_pts.size() == 0) {
      out << "t_pts: []\n";
    } else {
      out << "t_pts:\n";
      for (auto item : msg.t_pts) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: pos_pts
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.pos_pts.size() == 0) {
      out << "pos_pts: []\n";
    } else {
      out << "pos_pts:\n";
      for (auto item : msg.pos_pts) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: yaw_pts
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.yaw_pts.size() == 0) {
      out << "yaw_pts: []\n";
    } else {
      out << "yaw_pts:\n";
      for (auto item : msg.yaw_pts) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: waypoints
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.waypoints.size() == 0) {
      out << "waypoints: []\n";
    } else {
      out << "waypoints:\n";
      for (auto item : msg.waypoints) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MincoTraj & msg, bool use_flow_style = false)
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
  const planning_msgs::msg::MincoTraj & msg,
  std::ostream & out, size_t indentation = 0)
{
  planning_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use planning_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const planning_msgs::msg::MincoTraj & msg)
{
  return planning_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<planning_msgs::msg::MincoTraj>()
{
  return "planning_msgs::msg::MincoTraj";
}

template<>
inline const char * name<planning_msgs::msg::MincoTraj>()
{
  return "planning_msgs/msg/MincoTraj";
}

template<>
struct has_fixed_size<planning_msgs::msg::MincoTraj>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<planning_msgs::msg::MincoTraj>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<planning_msgs::msg::MincoTraj>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PLANNING_MSGS__MSG__DETAIL__MINCO_TRAJ__TRAITS_HPP_
