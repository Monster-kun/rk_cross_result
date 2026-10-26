// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from localization_msgs:msg/PoseVelAccAng.idl
// generated code does not contain a copyright notice

#ifndef LOCALIZATION_MSGS__MSG__DETAIL__POSE_VEL_ACC_ANG__STRUCT_HPP_
#define LOCALIZATION_MSGS__MSG__DETAIL__POSE_VEL_ACC_ANG__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__struct.hpp"
// Member 'linear_velocity'
// Member 'linear_acceleration'
// Member 'angular_velocity'
#include "geometry_msgs/msg/detail/vector3__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__localization_msgs__msg__PoseVelAccAng __attribute__((deprecated))
#else
# define DEPRECATED__localization_msgs__msg__PoseVelAccAng __declspec(deprecated)
#endif

namespace localization_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PoseVelAccAng_
{
  using Type = PoseVelAccAng_<ContainerAllocator>;

  explicit PoseVelAccAng_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    pose(_init),
    linear_velocity(_init),
    linear_acceleration(_init),
    angular_velocity(_init)
  {
    (void)_init;
  }

  explicit PoseVelAccAng_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    pose(_alloc, _init),
    linear_velocity(_alloc, _init),
    linear_acceleration(_alloc, _init),
    angular_velocity(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _pose_type =
    geometry_msgs::msg::Pose_<ContainerAllocator>;
  _pose_type pose;
  using _linear_velocity_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _linear_velocity_type linear_velocity;
  using _linear_acceleration_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _linear_acceleration_type linear_acceleration;
  using _angular_velocity_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _angular_velocity_type angular_velocity;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__pose(
    const geometry_msgs::msg::Pose_<ContainerAllocator> & _arg)
  {
    this->pose = _arg;
    return *this;
  }
  Type & set__linear_velocity(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->linear_velocity = _arg;
    return *this;
  }
  Type & set__linear_acceleration(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->linear_acceleration = _arg;
    return *this;
  }
  Type & set__angular_velocity(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->angular_velocity = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    localization_msgs::msg::PoseVelAccAng_<ContainerAllocator> *;
  using ConstRawPtr =
    const localization_msgs::msg::PoseVelAccAng_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<localization_msgs::msg::PoseVelAccAng_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<localization_msgs::msg::PoseVelAccAng_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      localization_msgs::msg::PoseVelAccAng_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<localization_msgs::msg::PoseVelAccAng_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      localization_msgs::msg::PoseVelAccAng_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<localization_msgs::msg::PoseVelAccAng_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<localization_msgs::msg::PoseVelAccAng_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<localization_msgs::msg::PoseVelAccAng_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__localization_msgs__msg__PoseVelAccAng
    std::shared_ptr<localization_msgs::msg::PoseVelAccAng_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__localization_msgs__msg__PoseVelAccAng
    std::shared_ptr<localization_msgs::msg::PoseVelAccAng_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PoseVelAccAng_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->pose != other.pose) {
      return false;
    }
    if (this->linear_velocity != other.linear_velocity) {
      return false;
    }
    if (this->linear_acceleration != other.linear_acceleration) {
      return false;
    }
    if (this->angular_velocity != other.angular_velocity) {
      return false;
    }
    return true;
  }
  bool operator!=(const PoseVelAccAng_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PoseVelAccAng_

// alias to use template instance with default allocator
using PoseVelAccAng =
  localization_msgs::msg::PoseVelAccAng_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace localization_msgs

#endif  // LOCALIZATION_MSGS__MSG__DETAIL__POSE_VEL_ACC_ANG__STRUCT_HPP_
