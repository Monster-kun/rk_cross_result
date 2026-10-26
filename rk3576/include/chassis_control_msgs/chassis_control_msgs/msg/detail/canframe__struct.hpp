// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from chassis_control_msgs:msg/Canframe.idl
// generated code does not contain a copyright notice

#ifndef CHASSIS_CONTROL_MSGS__MSG__DETAIL__CANFRAME__STRUCT_HPP_
#define CHASSIS_CONTROL_MSGS__MSG__DETAIL__CANFRAME__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__chassis_control_msgs__msg__Canframe __attribute__((deprecated))
#else
# define DEPRECATED__chassis_control_msgs__msg__Canframe __declspec(deprecated)
#endif

namespace chassis_control_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Canframe_
{
  using Type = Canframe_<ContainerAllocator>;

  explicit Canframe_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0l;
      this->dricmd = 0.0f;
      this->pivcmd = 0.0f;
    }
  }

  explicit Canframe_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0l;
      this->dricmd = 0.0f;
      this->pivcmd = 0.0f;
    }
  }

  // field types and members
  using _id_type =
    int32_t;
  _id_type id;
  using _dricmd_type =
    float;
  _dricmd_type dricmd;
  using _pivcmd_type =
    float;
  _pivcmd_type pivcmd;

  // setters for named parameter idiom
  Type & set__id(
    const int32_t & _arg)
  {
    this->id = _arg;
    return *this;
  }
  Type & set__dricmd(
    const float & _arg)
  {
    this->dricmd = _arg;
    return *this;
  }
  Type & set__pivcmd(
    const float & _arg)
  {
    this->pivcmd = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    chassis_control_msgs::msg::Canframe_<ContainerAllocator> *;
  using ConstRawPtr =
    const chassis_control_msgs::msg::Canframe_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<chassis_control_msgs::msg::Canframe_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<chassis_control_msgs::msg::Canframe_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      chassis_control_msgs::msg::Canframe_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<chassis_control_msgs::msg::Canframe_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      chassis_control_msgs::msg::Canframe_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<chassis_control_msgs::msg::Canframe_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<chassis_control_msgs::msg::Canframe_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<chassis_control_msgs::msg::Canframe_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__chassis_control_msgs__msg__Canframe
    std::shared_ptr<chassis_control_msgs::msg::Canframe_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__chassis_control_msgs__msg__Canframe
    std::shared_ptr<chassis_control_msgs::msg::Canframe_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Canframe_ & other) const
  {
    if (this->id != other.id) {
      return false;
    }
    if (this->dricmd != other.dricmd) {
      return false;
    }
    if (this->pivcmd != other.pivcmd) {
      return false;
    }
    return true;
  }
  bool operator!=(const Canframe_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Canframe_

// alias to use template instance with default allocator
using Canframe =
  chassis_control_msgs::msg::Canframe_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace chassis_control_msgs

#endif  // CHASSIS_CONTROL_MSGS__MSG__DETAIL__CANFRAME__STRUCT_HPP_
