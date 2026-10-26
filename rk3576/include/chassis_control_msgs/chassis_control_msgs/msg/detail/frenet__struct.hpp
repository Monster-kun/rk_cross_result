// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from chassis_control_msgs:msg/Frenet.idl
// generated code does not contain a copyright notice

#ifndef CHASSIS_CONTROL_MSGS__MSG__DETAIL__FRENET__STRUCT_HPP_
#define CHASSIS_CONTROL_MSGS__MSG__DETAIL__FRENET__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__chassis_control_msgs__msg__Frenet __attribute__((deprecated))
#else
# define DEPRECATED__chassis_control_msgs__msg__Frenet __declspec(deprecated)
#endif

namespace chassis_control_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Frenet_
{
  using Type = Frenet_<ContainerAllocator>;

  explicit Frenet_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->s = 0.0f;
      this->ds = 0.0f;
      this->dds = 0.0f;
      this->l = 0.0f;
      this->dl = 0.0f;
      this->ddl = 0.0f;
    }
  }

  explicit Frenet_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->s = 0.0f;
      this->ds = 0.0f;
      this->dds = 0.0f;
      this->l = 0.0f;
      this->dl = 0.0f;
      this->ddl = 0.0f;
    }
  }

  // field types and members
  using _s_type =
    float;
  _s_type s;
  using _ds_type =
    float;
  _ds_type ds;
  using _dds_type =
    float;
  _dds_type dds;
  using _l_type =
    float;
  _l_type l;
  using _dl_type =
    float;
  _dl_type dl;
  using _ddl_type =
    float;
  _ddl_type ddl;

  // setters for named parameter idiom
  Type & set__s(
    const float & _arg)
  {
    this->s = _arg;
    return *this;
  }
  Type & set__ds(
    const float & _arg)
  {
    this->ds = _arg;
    return *this;
  }
  Type & set__dds(
    const float & _arg)
  {
    this->dds = _arg;
    return *this;
  }
  Type & set__l(
    const float & _arg)
  {
    this->l = _arg;
    return *this;
  }
  Type & set__dl(
    const float & _arg)
  {
    this->dl = _arg;
    return *this;
  }
  Type & set__ddl(
    const float & _arg)
  {
    this->ddl = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    chassis_control_msgs::msg::Frenet_<ContainerAllocator> *;
  using ConstRawPtr =
    const chassis_control_msgs::msg::Frenet_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<chassis_control_msgs::msg::Frenet_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<chassis_control_msgs::msg::Frenet_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      chassis_control_msgs::msg::Frenet_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<chassis_control_msgs::msg::Frenet_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      chassis_control_msgs::msg::Frenet_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<chassis_control_msgs::msg::Frenet_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<chassis_control_msgs::msg::Frenet_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<chassis_control_msgs::msg::Frenet_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__chassis_control_msgs__msg__Frenet
    std::shared_ptr<chassis_control_msgs::msg::Frenet_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__chassis_control_msgs__msg__Frenet
    std::shared_ptr<chassis_control_msgs::msg::Frenet_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Frenet_ & other) const
  {
    if (this->s != other.s) {
      return false;
    }
    if (this->ds != other.ds) {
      return false;
    }
    if (this->dds != other.dds) {
      return false;
    }
    if (this->l != other.l) {
      return false;
    }
    if (this->dl != other.dl) {
      return false;
    }
    if (this->ddl != other.ddl) {
      return false;
    }
    return true;
  }
  bool operator!=(const Frenet_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Frenet_

// alias to use template instance with default allocator
using Frenet =
  chassis_control_msgs::msg::Frenet_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace chassis_control_msgs

#endif  // CHASSIS_CONTROL_MSGS__MSG__DETAIL__FRENET__STRUCT_HPP_
