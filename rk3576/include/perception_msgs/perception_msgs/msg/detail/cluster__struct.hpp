// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from perception_msgs:msg/Cluster.idl
// generated code does not contain a copyright notice

#ifndef PERCEPTION_MSGS__MSG__DETAIL__CLUSTER__STRUCT_HPP_
#define PERCEPTION_MSGS__MSG__DETAIL__CLUSTER__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'min_pt'
// Member 'max_pt'
// Member 'centroid'
#include "geometry_msgs/msg/detail/point__struct.hpp"
// Member 'size'
#include "geometry_msgs/msg/detail/vector3__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__perception_msgs__msg__Cluster __attribute__((deprecated))
#else
# define DEPRECATED__perception_msgs__msg__Cluster __declspec(deprecated)
#endif

namespace perception_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Cluster_
{
  using Type = Cluster_<ContainerAllocator>;

  explicit Cluster_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : min_pt(_init),
    max_pt(_init),
    size(_init),
    centroid(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->is_human = false;
      this->id = 0l;
    }
  }

  explicit Cluster_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : min_pt(_alloc, _init),
    max_pt(_alloc, _init),
    size(_alloc, _init),
    centroid(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->is_human = false;
      this->id = 0l;
    }
  }

  // field types and members
  using _is_human_type =
    bool;
  _is_human_type is_human;
  using _id_type =
    int32_t;
  _id_type id;
  using _min_pt_type =
    geometry_msgs::msg::Point_<ContainerAllocator>;
  _min_pt_type min_pt;
  using _max_pt_type =
    geometry_msgs::msg::Point_<ContainerAllocator>;
  _max_pt_type max_pt;
  using _size_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _size_type size;
  using _centroid_type =
    geometry_msgs::msg::Point_<ContainerAllocator>;
  _centroid_type centroid;

  // setters for named parameter idiom
  Type & set__is_human(
    const bool & _arg)
  {
    this->is_human = _arg;
    return *this;
  }
  Type & set__id(
    const int32_t & _arg)
  {
    this->id = _arg;
    return *this;
  }
  Type & set__min_pt(
    const geometry_msgs::msg::Point_<ContainerAllocator> & _arg)
  {
    this->min_pt = _arg;
    return *this;
  }
  Type & set__max_pt(
    const geometry_msgs::msg::Point_<ContainerAllocator> & _arg)
  {
    this->max_pt = _arg;
    return *this;
  }
  Type & set__size(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->size = _arg;
    return *this;
  }
  Type & set__centroid(
    const geometry_msgs::msg::Point_<ContainerAllocator> & _arg)
  {
    this->centroid = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    perception_msgs::msg::Cluster_<ContainerAllocator> *;
  using ConstRawPtr =
    const perception_msgs::msg::Cluster_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<perception_msgs::msg::Cluster_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<perception_msgs::msg::Cluster_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      perception_msgs::msg::Cluster_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<perception_msgs::msg::Cluster_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      perception_msgs::msg::Cluster_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<perception_msgs::msg::Cluster_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<perception_msgs::msg::Cluster_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<perception_msgs::msg::Cluster_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__perception_msgs__msg__Cluster
    std::shared_ptr<perception_msgs::msg::Cluster_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__perception_msgs__msg__Cluster
    std::shared_ptr<perception_msgs::msg::Cluster_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Cluster_ & other) const
  {
    if (this->is_human != other.is_human) {
      return false;
    }
    if (this->id != other.id) {
      return false;
    }
    if (this->min_pt != other.min_pt) {
      return false;
    }
    if (this->max_pt != other.max_pt) {
      return false;
    }
    if (this->size != other.size) {
      return false;
    }
    if (this->centroid != other.centroid) {
      return false;
    }
    return true;
  }
  bool operator!=(const Cluster_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Cluster_

// alias to use template instance with default allocator
using Cluster =
  perception_msgs::msg::Cluster_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace perception_msgs

#endif  // PERCEPTION_MSGS__MSG__DETAIL__CLUSTER__STRUCT_HPP_
