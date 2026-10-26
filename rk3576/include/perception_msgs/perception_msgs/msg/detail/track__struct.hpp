// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from perception_msgs:msg/Track.idl
// generated code does not contain a copyright notice

#ifndef PERCEPTION_MSGS__MSG__DETAIL__TRACK__STRUCT_HPP_
#define PERCEPTION_MSGS__MSG__DETAIL__TRACK__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__struct.hpp"
// Member 'vel'
#include "geometry_msgs/msg/detail/vector3__struct.hpp"
// Member 'associated'
#include "perception_msgs/msg/detail/cluster__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__perception_msgs__msg__Track __attribute__((deprecated))
#else
# define DEPRECATED__perception_msgs__msg__Track __declspec(deprecated)
#endif

namespace perception_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Track_
{
  using Type = Track_<ContainerAllocator>;

  explicit Track_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : pose(_init),
    vel(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0l;
      this->age = 0.0;
      std::fill<typename std::array<double, 9>::iterator, double>(this->pos_cov.begin(), this->pos_cov.end(), 0.0);
      std::fill<typename std::array<double, 9>::iterator, double>(this->vel_cov.begin(), this->vel_cov.end(), 0.0);
    }
  }

  explicit Track_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : pose(_alloc, _init),
    vel(_alloc, _init),
    pos_cov(_alloc),
    vel_cov(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0l;
      this->age = 0.0;
      std::fill<typename std::array<double, 9>::iterator, double>(this->pos_cov.begin(), this->pos_cov.end(), 0.0);
      std::fill<typename std::array<double, 9>::iterator, double>(this->vel_cov.begin(), this->vel_cov.end(), 0.0);
    }
  }

  // field types and members
  using _id_type =
    int32_t;
  _id_type id;
  using _age_type =
    double;
  _age_type age;
  using _pose_type =
    geometry_msgs::msg::Pose_<ContainerAllocator>;
  _pose_type pose;
  using _vel_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _vel_type vel;
  using _pos_cov_type =
    std::array<double, 9>;
  _pos_cov_type pos_cov;
  using _vel_cov_type =
    std::array<double, 9>;
  _vel_cov_type vel_cov;
  using _associated_type =
    std::vector<perception_msgs::msg::Cluster_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<perception_msgs::msg::Cluster_<ContainerAllocator>>>;
  _associated_type associated;

  // setters for named parameter idiom
  Type & set__id(
    const int32_t & _arg)
  {
    this->id = _arg;
    return *this;
  }
  Type & set__age(
    const double & _arg)
  {
    this->age = _arg;
    return *this;
  }
  Type & set__pose(
    const geometry_msgs::msg::Pose_<ContainerAllocator> & _arg)
  {
    this->pose = _arg;
    return *this;
  }
  Type & set__vel(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->vel = _arg;
    return *this;
  }
  Type & set__pos_cov(
    const std::array<double, 9> & _arg)
  {
    this->pos_cov = _arg;
    return *this;
  }
  Type & set__vel_cov(
    const std::array<double, 9> & _arg)
  {
    this->vel_cov = _arg;
    return *this;
  }
  Type & set__associated(
    const std::vector<perception_msgs::msg::Cluster_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<perception_msgs::msg::Cluster_<ContainerAllocator>>> & _arg)
  {
    this->associated = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    perception_msgs::msg::Track_<ContainerAllocator> *;
  using ConstRawPtr =
    const perception_msgs::msg::Track_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<perception_msgs::msg::Track_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<perception_msgs::msg::Track_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      perception_msgs::msg::Track_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<perception_msgs::msg::Track_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      perception_msgs::msg::Track_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<perception_msgs::msg::Track_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<perception_msgs::msg::Track_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<perception_msgs::msg::Track_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__perception_msgs__msg__Track
    std::shared_ptr<perception_msgs::msg::Track_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__perception_msgs__msg__Track
    std::shared_ptr<perception_msgs::msg::Track_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Track_ & other) const
  {
    if (this->id != other.id) {
      return false;
    }
    if (this->age != other.age) {
      return false;
    }
    if (this->pose != other.pose) {
      return false;
    }
    if (this->vel != other.vel) {
      return false;
    }
    if (this->pos_cov != other.pos_cov) {
      return false;
    }
    if (this->vel_cov != other.vel_cov) {
      return false;
    }
    if (this->associated != other.associated) {
      return false;
    }
    return true;
  }
  bool operator!=(const Track_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Track_

// alias to use template instance with default allocator
using Track =
  perception_msgs::msg::Track_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace perception_msgs

#endif  // PERCEPTION_MSGS__MSG__DETAIL__TRACK__STRUCT_HPP_
