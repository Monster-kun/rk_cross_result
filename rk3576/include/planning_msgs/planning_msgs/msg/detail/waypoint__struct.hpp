// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from planning_msgs:msg/Waypoint.idl
// generated code does not contain a copyright notice

#ifndef PLANNING_MSGS__MSG__DETAIL__WAYPOINT__STRUCT_HPP_
#define PLANNING_MSGS__MSG__DETAIL__WAYPOINT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'point'
#include "geometry_msgs/msg/detail/point__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__planning_msgs__msg__Waypoint __attribute__((deprecated))
#else
# define DEPRECATED__planning_msgs__msg__Waypoint __declspec(deprecated)
#endif

namespace planning_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Waypoint_
{
  using Type = Waypoint_<ContainerAllocator>;

  explicit Waypoint_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : point(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->time = 0.0f;
      this->s = 0.0f;
      this->theta = 0.0f;
      this->kappa = 0.0f;
      this->dkappa = 0.0f;
      this->ddkappa = 0.0f;
      this->v = 0.0f;
      this->a = 0.0f;
      this->j = 0.0f;
      this->w = 0.0f;
    }
  }

  explicit Waypoint_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : point(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->time = 0.0f;
      this->s = 0.0f;
      this->theta = 0.0f;
      this->kappa = 0.0f;
      this->dkappa = 0.0f;
      this->ddkappa = 0.0f;
      this->v = 0.0f;
      this->a = 0.0f;
      this->j = 0.0f;
      this->w = 0.0f;
    }
  }

  // field types and members
  using _point_type =
    geometry_msgs::msg::Point_<ContainerAllocator>;
  _point_type point;
  using _time_type =
    float;
  _time_type time;
  using _s_type =
    float;
  _s_type s;
  using _theta_type =
    float;
  _theta_type theta;
  using _kappa_type =
    float;
  _kappa_type kappa;
  using _dkappa_type =
    float;
  _dkappa_type dkappa;
  using _ddkappa_type =
    float;
  _ddkappa_type ddkappa;
  using _v_type =
    float;
  _v_type v;
  using _a_type =
    float;
  _a_type a;
  using _j_type =
    float;
  _j_type j;
  using _w_type =
    float;
  _w_type w;

  // setters for named parameter idiom
  Type & set__point(
    const geometry_msgs::msg::Point_<ContainerAllocator> & _arg)
  {
    this->point = _arg;
    return *this;
  }
  Type & set__time(
    const float & _arg)
  {
    this->time = _arg;
    return *this;
  }
  Type & set__s(
    const float & _arg)
  {
    this->s = _arg;
    return *this;
  }
  Type & set__theta(
    const float & _arg)
  {
    this->theta = _arg;
    return *this;
  }
  Type & set__kappa(
    const float & _arg)
  {
    this->kappa = _arg;
    return *this;
  }
  Type & set__dkappa(
    const float & _arg)
  {
    this->dkappa = _arg;
    return *this;
  }
  Type & set__ddkappa(
    const float & _arg)
  {
    this->ddkappa = _arg;
    return *this;
  }
  Type & set__v(
    const float & _arg)
  {
    this->v = _arg;
    return *this;
  }
  Type & set__a(
    const float & _arg)
  {
    this->a = _arg;
    return *this;
  }
  Type & set__j(
    const float & _arg)
  {
    this->j = _arg;
    return *this;
  }
  Type & set__w(
    const float & _arg)
  {
    this->w = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    planning_msgs::msg::Waypoint_<ContainerAllocator> *;
  using ConstRawPtr =
    const planning_msgs::msg::Waypoint_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<planning_msgs::msg::Waypoint_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<planning_msgs::msg::Waypoint_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      planning_msgs::msg::Waypoint_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<planning_msgs::msg::Waypoint_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      planning_msgs::msg::Waypoint_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<planning_msgs::msg::Waypoint_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<planning_msgs::msg::Waypoint_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<planning_msgs::msg::Waypoint_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__planning_msgs__msg__Waypoint
    std::shared_ptr<planning_msgs::msg::Waypoint_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__planning_msgs__msg__Waypoint
    std::shared_ptr<planning_msgs::msg::Waypoint_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Waypoint_ & other) const
  {
    if (this->point != other.point) {
      return false;
    }
    if (this->time != other.time) {
      return false;
    }
    if (this->s != other.s) {
      return false;
    }
    if (this->theta != other.theta) {
      return false;
    }
    if (this->kappa != other.kappa) {
      return false;
    }
    if (this->dkappa != other.dkappa) {
      return false;
    }
    if (this->ddkappa != other.ddkappa) {
      return false;
    }
    if (this->v != other.v) {
      return false;
    }
    if (this->a != other.a) {
      return false;
    }
    if (this->j != other.j) {
      return false;
    }
    if (this->w != other.w) {
      return false;
    }
    return true;
  }
  bool operator!=(const Waypoint_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Waypoint_

// alias to use template instance with default allocator
using Waypoint =
  planning_msgs::msg::Waypoint_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace planning_msgs

#endif  // PLANNING_MSGS__MSG__DETAIL__WAYPOINT__STRUCT_HPP_
