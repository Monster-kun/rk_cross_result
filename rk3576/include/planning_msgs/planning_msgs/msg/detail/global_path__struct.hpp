// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from planning_msgs:msg/GlobalPath.idl
// generated code does not contain a copyright notice

#ifndef PLANNING_MSGS__MSG__DETAIL__GLOBAL_PATH__STRUCT_HPP_
#define PLANNING_MSGS__MSG__DETAIL__GLOBAL_PATH__STRUCT_HPP_

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
// Member 'main_trajectory'
#include "planning_msgs/msg/detail/trajectory__struct.hpp"
// Member 'left_bound'
// Member 'right_bound'
#include "geometry_msgs/msg/detail/point__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__planning_msgs__msg__GlobalPath __attribute__((deprecated))
#else
# define DEPRECATED__planning_msgs__msg__GlobalPath __declspec(deprecated)
#endif

namespace planning_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct GlobalPath_
{
  using Type = GlobalPath_<ContainerAllocator>;

  explicit GlobalPath_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    main_trajectory(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->loop = false;
      this->loop_start_index = 0ul;
      this->loop_left_bound_start_index = 0ul;
      this->loop_right_bound_start_index = 0ul;
    }
  }

  explicit GlobalPath_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    main_trajectory(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->loop = false;
      this->loop_start_index = 0ul;
      this->loop_left_bound_start_index = 0ul;
      this->loop_right_bound_start_index = 0ul;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _main_trajectory_type =
    planning_msgs::msg::Trajectory_<ContainerAllocator>;
  _main_trajectory_type main_trajectory;
  using _left_bound_type =
    std::vector<geometry_msgs::msg::Point_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::Point_<ContainerAllocator>>>;
  _left_bound_type left_bound;
  using _right_bound_type =
    std::vector<geometry_msgs::msg::Point_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::Point_<ContainerAllocator>>>;
  _right_bound_type right_bound;
  using _left_bound_s_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _left_bound_s_type left_bound_s;
  using _right_bound_s_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _right_bound_s_type right_bound_s;
  using _checkpoint_indices_type =
    std::vector<uint32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint32_t>>;
  _checkpoint_indices_type checkpoint_indices;
  using _loop_type =
    bool;
  _loop_type loop;
  using _loop_start_index_type =
    uint32_t;
  _loop_start_index_type loop_start_index;
  using _loop_left_bound_start_index_type =
    uint32_t;
  _loop_left_bound_start_index_type loop_left_bound_start_index;
  using _loop_right_bound_start_index_type =
    uint32_t;
  _loop_right_bound_start_index_type loop_right_bound_start_index;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__main_trajectory(
    const planning_msgs::msg::Trajectory_<ContainerAllocator> & _arg)
  {
    this->main_trajectory = _arg;
    return *this;
  }
  Type & set__left_bound(
    const std::vector<geometry_msgs::msg::Point_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::Point_<ContainerAllocator>>> & _arg)
  {
    this->left_bound = _arg;
    return *this;
  }
  Type & set__right_bound(
    const std::vector<geometry_msgs::msg::Point_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::Point_<ContainerAllocator>>> & _arg)
  {
    this->right_bound = _arg;
    return *this;
  }
  Type & set__left_bound_s(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->left_bound_s = _arg;
    return *this;
  }
  Type & set__right_bound_s(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->right_bound_s = _arg;
    return *this;
  }
  Type & set__checkpoint_indices(
    const std::vector<uint32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint32_t>> & _arg)
  {
    this->checkpoint_indices = _arg;
    return *this;
  }
  Type & set__loop(
    const bool & _arg)
  {
    this->loop = _arg;
    return *this;
  }
  Type & set__loop_start_index(
    const uint32_t & _arg)
  {
    this->loop_start_index = _arg;
    return *this;
  }
  Type & set__loop_left_bound_start_index(
    const uint32_t & _arg)
  {
    this->loop_left_bound_start_index = _arg;
    return *this;
  }
  Type & set__loop_right_bound_start_index(
    const uint32_t & _arg)
  {
    this->loop_right_bound_start_index = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    planning_msgs::msg::GlobalPath_<ContainerAllocator> *;
  using ConstRawPtr =
    const planning_msgs::msg::GlobalPath_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<planning_msgs::msg::GlobalPath_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<planning_msgs::msg::GlobalPath_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      planning_msgs::msg::GlobalPath_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<planning_msgs::msg::GlobalPath_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      planning_msgs::msg::GlobalPath_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<planning_msgs::msg::GlobalPath_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<planning_msgs::msg::GlobalPath_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<planning_msgs::msg::GlobalPath_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__planning_msgs__msg__GlobalPath
    std::shared_ptr<planning_msgs::msg::GlobalPath_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__planning_msgs__msg__GlobalPath
    std::shared_ptr<planning_msgs::msg::GlobalPath_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GlobalPath_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->main_trajectory != other.main_trajectory) {
      return false;
    }
    if (this->left_bound != other.left_bound) {
      return false;
    }
    if (this->right_bound != other.right_bound) {
      return false;
    }
    if (this->left_bound_s != other.left_bound_s) {
      return false;
    }
    if (this->right_bound_s != other.right_bound_s) {
      return false;
    }
    if (this->checkpoint_indices != other.checkpoint_indices) {
      return false;
    }
    if (this->loop != other.loop) {
      return false;
    }
    if (this->loop_start_index != other.loop_start_index) {
      return false;
    }
    if (this->loop_left_bound_start_index != other.loop_left_bound_start_index) {
      return false;
    }
    if (this->loop_right_bound_start_index != other.loop_right_bound_start_index) {
      return false;
    }
    return true;
  }
  bool operator!=(const GlobalPath_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GlobalPath_

// alias to use template instance with default allocator
using GlobalPath =
  planning_msgs::msg::GlobalPath_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace planning_msgs

#endif  // PLANNING_MSGS__MSG__DETAIL__GLOBAL_PATH__STRUCT_HPP_
