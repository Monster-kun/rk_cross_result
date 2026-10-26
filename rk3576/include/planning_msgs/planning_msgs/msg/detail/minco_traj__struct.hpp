// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from planning_msgs:msg/MincoTraj.idl
// generated code does not contain a copyright notice

#ifndef PLANNING_MSGS__MSG__DETAIL__MINCO_TRAJ__STRUCT_HPP_
#define PLANNING_MSGS__MSG__DETAIL__MINCO_TRAJ__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'start_time'
#include "builtin_interfaces/msg/detail/time__struct.hpp"
// Member 'head_x'
// Member 'head_y'
// Member 'tail_x'
// Member 'tail_y'
#include "geometry_msgs/msg/detail/vector3__struct.hpp"
// Member 'pos_pts'
#include "geometry_msgs/msg/detail/point__struct.hpp"
// Member 'waypoints'
#include "planning_msgs/msg/detail/waypoint__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__planning_msgs__msg__MincoTraj __attribute__((deprecated))
#else
# define DEPRECATED__planning_msgs__msg__MincoTraj __declspec(deprecated)
#endif

namespace planning_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MincoTraj_
{
  using Type = MincoTraj_<ContainerAllocator>;

  explicit MincoTraj_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : start_time(_init),
    head_x(_init),
    head_y(_init),
    tail_x(_init),
    tail_y(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->end_time = 0.0;
      this->use_init = false;
      this->yaw = 0.0;
    }
  }

  explicit MincoTraj_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : start_time(_alloc, _init),
    head_x(_alloc, _init),
    head_y(_alloc, _init),
    tail_x(_alloc, _init),
    tail_y(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->end_time = 0.0;
      this->use_init = false;
      this->yaw = 0.0;
    }
  }

  // field types and members
  using _start_time_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _start_time_type start_time;
  using _end_time_type =
    double;
  _end_time_type end_time;
  using _use_init_type =
    bool;
  _use_init_type use_init;
  using _yaw_type =
    double;
  _yaw_type yaw;
  using _head_x_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _head_x_type head_x;
  using _head_y_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _head_y_type head_y;
  using _tail_x_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _tail_x_type tail_x;
  using _tail_y_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _tail_y_type tail_y;
  using _t_pts_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _t_pts_type t_pts;
  using _pos_pts_type =
    std::vector<geometry_msgs::msg::Point_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::Point_<ContainerAllocator>>>;
  _pos_pts_type pos_pts;
  using _yaw_pts_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _yaw_pts_type yaw_pts;
  using _waypoints_type =
    std::vector<planning_msgs::msg::Waypoint_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<planning_msgs::msg::Waypoint_<ContainerAllocator>>>;
  _waypoints_type waypoints;

  // setters for named parameter idiom
  Type & set__start_time(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->start_time = _arg;
    return *this;
  }
  Type & set__end_time(
    const double & _arg)
  {
    this->end_time = _arg;
    return *this;
  }
  Type & set__use_init(
    const bool & _arg)
  {
    this->use_init = _arg;
    return *this;
  }
  Type & set__yaw(
    const double & _arg)
  {
    this->yaw = _arg;
    return *this;
  }
  Type & set__head_x(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->head_x = _arg;
    return *this;
  }
  Type & set__head_y(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->head_y = _arg;
    return *this;
  }
  Type & set__tail_x(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->tail_x = _arg;
    return *this;
  }
  Type & set__tail_y(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->tail_y = _arg;
    return *this;
  }
  Type & set__t_pts(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->t_pts = _arg;
    return *this;
  }
  Type & set__pos_pts(
    const std::vector<geometry_msgs::msg::Point_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::Point_<ContainerAllocator>>> & _arg)
  {
    this->pos_pts = _arg;
    return *this;
  }
  Type & set__yaw_pts(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->yaw_pts = _arg;
    return *this;
  }
  Type & set__waypoints(
    const std::vector<planning_msgs::msg::Waypoint_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<planning_msgs::msg::Waypoint_<ContainerAllocator>>> & _arg)
  {
    this->waypoints = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    planning_msgs::msg::MincoTraj_<ContainerAllocator> *;
  using ConstRawPtr =
    const planning_msgs::msg::MincoTraj_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<planning_msgs::msg::MincoTraj_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<planning_msgs::msg::MincoTraj_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      planning_msgs::msg::MincoTraj_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<planning_msgs::msg::MincoTraj_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      planning_msgs::msg::MincoTraj_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<planning_msgs::msg::MincoTraj_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<planning_msgs::msg::MincoTraj_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<planning_msgs::msg::MincoTraj_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__planning_msgs__msg__MincoTraj
    std::shared_ptr<planning_msgs::msg::MincoTraj_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__planning_msgs__msg__MincoTraj
    std::shared_ptr<planning_msgs::msg::MincoTraj_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MincoTraj_ & other) const
  {
    if (this->start_time != other.start_time) {
      return false;
    }
    if (this->end_time != other.end_time) {
      return false;
    }
    if (this->use_init != other.use_init) {
      return false;
    }
    if (this->yaw != other.yaw) {
      return false;
    }
    if (this->head_x != other.head_x) {
      return false;
    }
    if (this->head_y != other.head_y) {
      return false;
    }
    if (this->tail_x != other.tail_x) {
      return false;
    }
    if (this->tail_y != other.tail_y) {
      return false;
    }
    if (this->t_pts != other.t_pts) {
      return false;
    }
    if (this->pos_pts != other.pos_pts) {
      return false;
    }
    if (this->yaw_pts != other.yaw_pts) {
      return false;
    }
    if (this->waypoints != other.waypoints) {
      return false;
    }
    return true;
  }
  bool operator!=(const MincoTraj_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MincoTraj_

// alias to use template instance with default allocator
using MincoTraj =
  planning_msgs::msg::MincoTraj_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace planning_msgs

#endif  // PLANNING_MSGS__MSG__DETAIL__MINCO_TRAJ__STRUCT_HPP_
