// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from chassis_control_msgs:msg/Ackcmd.idl
// generated code does not contain a copyright notice

#ifndef CHASSIS_CONTROL_MSGS__MSG__DETAIL__ACKCMD__STRUCT_HPP_
#define CHASSIS_CONTROL_MSGS__MSG__DETAIL__ACKCMD__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__chassis_control_msgs__msg__Ackcmd __attribute__((deprecated))
#else
# define DEPRECATED__chassis_control_msgs__msg__Ackcmd __declspec(deprecated)
#endif

namespace chassis_control_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Ackcmd_
{
  using Type = Ackcmd_<ContainerAllocator>;

  explicit Ackcmd_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->vel = 0.0f;
      this->steer = 0.0f;
    }
  }

  explicit Ackcmd_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->vel = 0.0f;
      this->steer = 0.0f;
    }
  }

  // field types and members
  using _vel_type =
    float;
  _vel_type vel;
  using _steer_type =
    float;
  _steer_type steer;

  // setters for named parameter idiom
  Type & set__vel(
    const float & _arg)
  {
    this->vel = _arg;
    return *this;
  }
  Type & set__steer(
    const float & _arg)
  {
    this->steer = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    chassis_control_msgs::msg::Ackcmd_<ContainerAllocator> *;
  using ConstRawPtr =
    const chassis_control_msgs::msg::Ackcmd_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<chassis_control_msgs::msg::Ackcmd_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<chassis_control_msgs::msg::Ackcmd_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      chassis_control_msgs::msg::Ackcmd_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<chassis_control_msgs::msg::Ackcmd_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      chassis_control_msgs::msg::Ackcmd_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<chassis_control_msgs::msg::Ackcmd_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<chassis_control_msgs::msg::Ackcmd_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<chassis_control_msgs::msg::Ackcmd_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__chassis_control_msgs__msg__Ackcmd
    std::shared_ptr<chassis_control_msgs::msg::Ackcmd_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__chassis_control_msgs__msg__Ackcmd
    std::shared_ptr<chassis_control_msgs::msg::Ackcmd_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Ackcmd_ & other) const
  {
    if (this->vel != other.vel) {
      return false;
    }
    if (this->steer != other.steer) {
      return false;
    }
    return true;
  }
  bool operator!=(const Ackcmd_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Ackcmd_

// alias to use template instance with default allocator
using Ackcmd =
  chassis_control_msgs::msg::Ackcmd_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace chassis_control_msgs

#endif  // CHASSIS_CONTROL_MSGS__MSG__DETAIL__ACKCMD__STRUCT_HPP_
