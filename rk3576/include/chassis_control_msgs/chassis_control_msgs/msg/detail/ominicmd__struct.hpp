// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from chassis_control_msgs:msg/Ominicmd.idl
// generated code does not contain a copyright notice

#ifndef CHASSIS_CONTROL_MSGS__MSG__DETAIL__OMINICMD__STRUCT_HPP_
#define CHASSIS_CONTROL_MSGS__MSG__DETAIL__OMINICMD__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__chassis_control_msgs__msg__Ominicmd __attribute__((deprecated))
#else
# define DEPRECATED__chassis_control_msgs__msg__Ominicmd __declspec(deprecated)
#endif

namespace chassis_control_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Ominicmd_
{
  using Type = Ominicmd_<ContainerAllocator>;

  explicit Ominicmd_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x = 0.0f;
      this->y = 0.0f;
      this->angle = 0.0f;
    }
  }

  explicit Ominicmd_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x = 0.0f;
      this->y = 0.0f;
      this->angle = 0.0f;
    }
  }

  // field types and members
  using _x_type =
    float;
  _x_type x;
  using _y_type =
    float;
  _y_type y;
  using _angle_type =
    float;
  _angle_type angle;

  // setters for named parameter idiom
  Type & set__x(
    const float & _arg)
  {
    this->x = _arg;
    return *this;
  }
  Type & set__y(
    const float & _arg)
  {
    this->y = _arg;
    return *this;
  }
  Type & set__angle(
    const float & _arg)
  {
    this->angle = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    chassis_control_msgs::msg::Ominicmd_<ContainerAllocator> *;
  using ConstRawPtr =
    const chassis_control_msgs::msg::Ominicmd_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<chassis_control_msgs::msg::Ominicmd_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<chassis_control_msgs::msg::Ominicmd_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      chassis_control_msgs::msg::Ominicmd_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<chassis_control_msgs::msg::Ominicmd_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      chassis_control_msgs::msg::Ominicmd_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<chassis_control_msgs::msg::Ominicmd_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<chassis_control_msgs::msg::Ominicmd_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<chassis_control_msgs::msg::Ominicmd_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__chassis_control_msgs__msg__Ominicmd
    std::shared_ptr<chassis_control_msgs::msg::Ominicmd_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__chassis_control_msgs__msg__Ominicmd
    std::shared_ptr<chassis_control_msgs::msg::Ominicmd_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Ominicmd_ & other) const
  {
    if (this->x != other.x) {
      return false;
    }
    if (this->y != other.y) {
      return false;
    }
    if (this->angle != other.angle) {
      return false;
    }
    return true;
  }
  bool operator!=(const Ominicmd_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Ominicmd_

// alias to use template instance with default allocator
using Ominicmd =
  chassis_control_msgs::msg::Ominicmd_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace chassis_control_msgs

#endif  // CHASSIS_CONTROL_MSGS__MSG__DETAIL__OMINICMD__STRUCT_HPP_
