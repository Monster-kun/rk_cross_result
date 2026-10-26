// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from planning_msgs:msg/LaneletSegment.idl
// generated code does not contain a copyright notice

#ifndef PLANNING_MSGS__MSG__DETAIL__LANELET_SEGMENT__STRUCT_HPP_
#define PLANNING_MSGS__MSG__DETAIL__LANELET_SEGMENT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'preferred_primitive'
// Member 'primitives'
// Member 'left_bound'
// Member 'right_bound'
#include "planning_msgs/msg/detail/lanelet_primitive__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__planning_msgs__msg__LaneletSegment __attribute__((deprecated))
#else
# define DEPRECATED__planning_msgs__msg__LaneletSegment __declspec(deprecated)
#endif

namespace planning_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct LaneletSegment_
{
  using Type = LaneletSegment_<ContainerAllocator>;

  explicit LaneletSegment_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : preferred_primitive(_init),
    left_bound(_init),
    right_bound(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->is_inverted = false;
    }
  }

  explicit LaneletSegment_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : preferred_primitive(_alloc, _init),
    left_bound(_alloc, _init),
    right_bound(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->is_inverted = false;
    }
  }

  // field types and members
  using _preferred_primitive_type =
    planning_msgs::msg::LaneletPrimitive_<ContainerAllocator>;
  _preferred_primitive_type preferred_primitive;
  using _primitives_type =
    std::vector<planning_msgs::msg::LaneletPrimitive_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<planning_msgs::msg::LaneletPrimitive_<ContainerAllocator>>>;
  _primitives_type primitives;
  using _left_bound_type =
    planning_msgs::msg::LaneletPrimitive_<ContainerAllocator>;
  _left_bound_type left_bound;
  using _right_bound_type =
    planning_msgs::msg::LaneletPrimitive_<ContainerAllocator>;
  _right_bound_type right_bound;
  using _is_inverted_type =
    bool;
  _is_inverted_type is_inverted;

  // setters for named parameter idiom
  Type & set__preferred_primitive(
    const planning_msgs::msg::LaneletPrimitive_<ContainerAllocator> & _arg)
  {
    this->preferred_primitive = _arg;
    return *this;
  }
  Type & set__primitives(
    const std::vector<planning_msgs::msg::LaneletPrimitive_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<planning_msgs::msg::LaneletPrimitive_<ContainerAllocator>>> & _arg)
  {
    this->primitives = _arg;
    return *this;
  }
  Type & set__left_bound(
    const planning_msgs::msg::LaneletPrimitive_<ContainerAllocator> & _arg)
  {
    this->left_bound = _arg;
    return *this;
  }
  Type & set__right_bound(
    const planning_msgs::msg::LaneletPrimitive_<ContainerAllocator> & _arg)
  {
    this->right_bound = _arg;
    return *this;
  }
  Type & set__is_inverted(
    const bool & _arg)
  {
    this->is_inverted = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    planning_msgs::msg::LaneletSegment_<ContainerAllocator> *;
  using ConstRawPtr =
    const planning_msgs::msg::LaneletSegment_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<planning_msgs::msg::LaneletSegment_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<planning_msgs::msg::LaneletSegment_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      planning_msgs::msg::LaneletSegment_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<planning_msgs::msg::LaneletSegment_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      planning_msgs::msg::LaneletSegment_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<planning_msgs::msg::LaneletSegment_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<planning_msgs::msg::LaneletSegment_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<planning_msgs::msg::LaneletSegment_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__planning_msgs__msg__LaneletSegment
    std::shared_ptr<planning_msgs::msg::LaneletSegment_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__planning_msgs__msg__LaneletSegment
    std::shared_ptr<planning_msgs::msg::LaneletSegment_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LaneletSegment_ & other) const
  {
    if (this->preferred_primitive != other.preferred_primitive) {
      return false;
    }
    if (this->primitives != other.primitives) {
      return false;
    }
    if (this->left_bound != other.left_bound) {
      return false;
    }
    if (this->right_bound != other.right_bound) {
      return false;
    }
    if (this->is_inverted != other.is_inverted) {
      return false;
    }
    return true;
  }
  bool operator!=(const LaneletSegment_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LaneletSegment_

// alias to use template instance with default allocator
using LaneletSegment =
  planning_msgs::msg::LaneletSegment_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace planning_msgs

#endif  // PLANNING_MSGS__MSG__DETAIL__LANELET_SEGMENT__STRUCT_HPP_
