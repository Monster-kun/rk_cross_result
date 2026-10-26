// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from chassis_control_msgs:msg/PurepursuitViz.idl
// generated code does not contain a copyright notice

#ifndef CHASSIS_CONTROL_MSGS__MSG__DETAIL__PUREPURSUIT_VIZ__STRUCT_HPP_
#define CHASSIS_CONTROL_MSGS__MSG__DETAIL__PUREPURSUIT_VIZ__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__chassis_control_msgs__msg__PurepursuitViz __attribute__((deprecated))
#else
# define DEPRECATED__chassis_control_msgs__msg__PurepursuitViz __declspec(deprecated)
#endif

namespace chassis_control_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PurepursuitViz_
{
  using Type = PurepursuitViz_<ContainerAllocator>;

  explicit PurepursuitViz_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->aimpointx = 0.0;
      this->aimpointy = 0.0;
      this->velx = 0.0;
      this->vely = 0.0;
      this->velz = 0.0;
      this->ahead = 0.0;
      this->currentx = 0.0;
      this->currenty = 0.0;
    }
  }

  explicit PurepursuitViz_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->aimpointx = 0.0;
      this->aimpointy = 0.0;
      this->velx = 0.0;
      this->vely = 0.0;
      this->velz = 0.0;
      this->ahead = 0.0;
      this->currentx = 0.0;
      this->currenty = 0.0;
    }
  }

  // field types and members
  using _aimpointx_type =
    double;
  _aimpointx_type aimpointx;
  using _aimpointy_type =
    double;
  _aimpointy_type aimpointy;
  using _velx_type =
    double;
  _velx_type velx;
  using _vely_type =
    double;
  _vely_type vely;
  using _velz_type =
    double;
  _velz_type velz;
  using _ahead_type =
    double;
  _ahead_type ahead;
  using _currentx_type =
    double;
  _currentx_type currentx;
  using _currenty_type =
    double;
  _currenty_type currenty;

  // setters for named parameter idiom
  Type & set__aimpointx(
    const double & _arg)
  {
    this->aimpointx = _arg;
    return *this;
  }
  Type & set__aimpointy(
    const double & _arg)
  {
    this->aimpointy = _arg;
    return *this;
  }
  Type & set__velx(
    const double & _arg)
  {
    this->velx = _arg;
    return *this;
  }
  Type & set__vely(
    const double & _arg)
  {
    this->vely = _arg;
    return *this;
  }
  Type & set__velz(
    const double & _arg)
  {
    this->velz = _arg;
    return *this;
  }
  Type & set__ahead(
    const double & _arg)
  {
    this->ahead = _arg;
    return *this;
  }
  Type & set__currentx(
    const double & _arg)
  {
    this->currentx = _arg;
    return *this;
  }
  Type & set__currenty(
    const double & _arg)
  {
    this->currenty = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    chassis_control_msgs::msg::PurepursuitViz_<ContainerAllocator> *;
  using ConstRawPtr =
    const chassis_control_msgs::msg::PurepursuitViz_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<chassis_control_msgs::msg::PurepursuitViz_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<chassis_control_msgs::msg::PurepursuitViz_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      chassis_control_msgs::msg::PurepursuitViz_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<chassis_control_msgs::msg::PurepursuitViz_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      chassis_control_msgs::msg::PurepursuitViz_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<chassis_control_msgs::msg::PurepursuitViz_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<chassis_control_msgs::msg::PurepursuitViz_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<chassis_control_msgs::msg::PurepursuitViz_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__chassis_control_msgs__msg__PurepursuitViz
    std::shared_ptr<chassis_control_msgs::msg::PurepursuitViz_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__chassis_control_msgs__msg__PurepursuitViz
    std::shared_ptr<chassis_control_msgs::msg::PurepursuitViz_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PurepursuitViz_ & other) const
  {
    if (this->aimpointx != other.aimpointx) {
      return false;
    }
    if (this->aimpointy != other.aimpointy) {
      return false;
    }
    if (this->velx != other.velx) {
      return false;
    }
    if (this->vely != other.vely) {
      return false;
    }
    if (this->velz != other.velz) {
      return false;
    }
    if (this->ahead != other.ahead) {
      return false;
    }
    if (this->currentx != other.currentx) {
      return false;
    }
    if (this->currenty != other.currenty) {
      return false;
    }
    return true;
  }
  bool operator!=(const PurepursuitViz_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PurepursuitViz_

// alias to use template instance with default allocator
using PurepursuitViz =
  chassis_control_msgs::msg::PurepursuitViz_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace chassis_control_msgs

#endif  // CHASSIS_CONTROL_MSGS__MSG__DETAIL__PUREPURSUIT_VIZ__STRUCT_HPP_
