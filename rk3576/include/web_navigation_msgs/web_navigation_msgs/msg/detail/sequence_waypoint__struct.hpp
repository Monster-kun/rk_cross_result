// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from web_navigation_msgs:msg/SequenceWaypoint.idl
// generated code does not contain a copyright notice

#ifndef WEB_NAVIGATION_MSGS__MSG__DETAIL__SEQUENCE_WAYPOINT__STRUCT_HPP_
#define WEB_NAVIGATION_MSGS__MSG__DETAIL__SEQUENCE_WAYPOINT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__web_navigation_msgs__msg__SequenceWaypoint __attribute__((deprecated))
#else
# define DEPRECATED__web_navigation_msgs__msg__SequenceWaypoint __declspec(deprecated)
#endif

namespace web_navigation_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SequenceWaypoint_
{
  using Type = SequenceWaypoint_<ContainerAllocator>;

  explicit SequenceWaypoint_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->annotation_id = "";
      this->name = "";
      this->x = 0.0;
      this->y = 0.0;
      this->lanelet_id = "";
      this->stop = false;
    }
  }

  explicit SequenceWaypoint_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : annotation_id(_alloc),
    name(_alloc),
    lanelet_id(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->annotation_id = "";
      this->name = "";
      this->x = 0.0;
      this->y = 0.0;
      this->lanelet_id = "";
      this->stop = false;
    }
  }

  // field types and members
  using _annotation_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _annotation_id_type annotation_id;
  using _name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _name_type name;
  using _x_type =
    double;
  _x_type x;
  using _y_type =
    double;
  _y_type y;
  using _lanelet_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _lanelet_id_type lanelet_id;
  using _stop_type =
    bool;
  _stop_type stop;

  // setters for named parameter idiom
  Type & set__annotation_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->annotation_id = _arg;
    return *this;
  }
  Type & set__name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->name = _arg;
    return *this;
  }
  Type & set__x(
    const double & _arg)
  {
    this->x = _arg;
    return *this;
  }
  Type & set__y(
    const double & _arg)
  {
    this->y = _arg;
    return *this;
  }
  Type & set__lanelet_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->lanelet_id = _arg;
    return *this;
  }
  Type & set__stop(
    const bool & _arg)
  {
    this->stop = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    web_navigation_msgs::msg::SequenceWaypoint_<ContainerAllocator> *;
  using ConstRawPtr =
    const web_navigation_msgs::msg::SequenceWaypoint_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<web_navigation_msgs::msg::SequenceWaypoint_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<web_navigation_msgs::msg::SequenceWaypoint_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      web_navigation_msgs::msg::SequenceWaypoint_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<web_navigation_msgs::msg::SequenceWaypoint_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      web_navigation_msgs::msg::SequenceWaypoint_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<web_navigation_msgs::msg::SequenceWaypoint_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<web_navigation_msgs::msg::SequenceWaypoint_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<web_navigation_msgs::msg::SequenceWaypoint_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__web_navigation_msgs__msg__SequenceWaypoint
    std::shared_ptr<web_navigation_msgs::msg::SequenceWaypoint_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__web_navigation_msgs__msg__SequenceWaypoint
    std::shared_ptr<web_navigation_msgs::msg::SequenceWaypoint_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SequenceWaypoint_ & other) const
  {
    if (this->annotation_id != other.annotation_id) {
      return false;
    }
    if (this->name != other.name) {
      return false;
    }
    if (this->x != other.x) {
      return false;
    }
    if (this->y != other.y) {
      return false;
    }
    if (this->lanelet_id != other.lanelet_id) {
      return false;
    }
    if (this->stop != other.stop) {
      return false;
    }
    return true;
  }
  bool operator!=(const SequenceWaypoint_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SequenceWaypoint_

// alias to use template instance with default allocator
using SequenceWaypoint =
  web_navigation_msgs::msg::SequenceWaypoint_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace web_navigation_msgs

#endif  // WEB_NAVIGATION_MSGS__MSG__DETAIL__SEQUENCE_WAYPOINT__STRUCT_HPP_
