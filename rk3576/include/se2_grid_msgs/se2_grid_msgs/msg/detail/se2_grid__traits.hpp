// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from se2_grid_msgs:msg/SE2Grid.idl
// generated code does not contain a copyright notice

#ifndef SE2_GRID_MSGS__MSG__DETAIL__SE2_GRID__TRAITS_HPP_
#define SE2_GRID_MSGS__MSG__DETAIL__SE2_GRID__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "se2_grid_msgs/msg/detail/se2_grid__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'info'
#include "se2_grid_msgs/msg/detail/se2_grid_info__traits.hpp"
// Member 'data'
#include "std_msgs/msg/detail/float32_multi_array__traits.hpp"

namespace se2_grid_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const SE2Grid & msg,
  std::ostream & out)
{
  out << "{";
  // member: info
  {
    out << "info: ";
    to_flow_style_yaml(msg.info, out);
    out << ", ";
  }

  // member: layers
  {
    if (msg.layers.size() == 0) {
      out << "layers: []";
    } else {
      out << "layers: [";
      size_t pending_items = msg.layers.size();
      for (auto item : msg.layers) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: has_so2
  {
    if (msg.has_so2.size() == 0) {
      out << "has_so2: []";
    } else {
      out << "has_so2: [";
      size_t pending_items = msg.has_so2.size();
      for (auto item : msg.has_so2) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: data
  {
    if (msg.data.size() == 0) {
      out << "data: []";
    } else {
      out << "data: [";
      size_t pending_items = msg.data.size();
      for (auto item : msg.data) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: start_index_row
  {
    out << "start_index_row: ";
    rosidl_generator_traits::value_to_yaml(msg.start_index_row, out);
    out << ", ";
  }

  // member: start_index_col
  {
    out << "start_index_col: ";
    rosidl_generator_traits::value_to_yaml(msg.start_index_col, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SE2Grid & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "info:\n";
    to_block_style_yaml(msg.info, out, indentation + 2);
  }

  // member: layers
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.layers.size() == 0) {
      out << "layers: []\n";
    } else {
      out << "layers:\n";
      for (auto item : msg.layers) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: has_so2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.has_so2.size() == 0) {
      out << "has_so2: []\n";
    } else {
      out << "has_so2:\n";
      for (auto item : msg.has_so2) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: data
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.data.size() == 0) {
      out << "data: []\n";
    } else {
      out << "data:\n";
      for (auto item : msg.data) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: start_index_row
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "start_index_row: ";
    rosidl_generator_traits::value_to_yaml(msg.start_index_row, out);
    out << "\n";
  }

  // member: start_index_col
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "start_index_col: ";
    rosidl_generator_traits::value_to_yaml(msg.start_index_col, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SE2Grid & msg, bool use_flow_style = false)
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

}  // namespace se2_grid_msgs

namespace rosidl_generator_traits
{

[[deprecated("use se2_grid_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const se2_grid_msgs::msg::SE2Grid & msg,
  std::ostream & out, size_t indentation = 0)
{
  se2_grid_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use se2_grid_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const se2_grid_msgs::msg::SE2Grid & msg)
{
  return se2_grid_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<se2_grid_msgs::msg::SE2Grid>()
{
  return "se2_grid_msgs::msg::SE2Grid";
}

template<>
inline const char * name<se2_grid_msgs::msg::SE2Grid>()
{
  return "se2_grid_msgs/msg/SE2Grid";
}

template<>
struct has_fixed_size<se2_grid_msgs::msg::SE2Grid>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<se2_grid_msgs::msg::SE2Grid>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<se2_grid_msgs::msg::SE2Grid>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SE2_GRID_MSGS__MSG__DETAIL__SE2_GRID__TRAITS_HPP_
