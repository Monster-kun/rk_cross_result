// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from web_navigation_msgs:msg/PlanningEvent.idl
// generated code does not contain a copyright notice

#ifndef WEB_NAVIGATION_MSGS__MSG__DETAIL__PLANNING_EVENT__STRUCT_HPP_
#define WEB_NAVIGATION_MSGS__MSG__DETAIL__PLANNING_EVENT__STRUCT_HPP_

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
// Member 'effective_endpoint'
#include "geometry_msgs/msg/detail/pose__struct.hpp"
// Member 'path'
#include "planning_msgs/msg/detail/global_path__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__web_navigation_msgs__msg__PlanningEvent __attribute__((deprecated))
#else
# define DEPRECATED__web_navigation_msgs__msg__PlanningEvent __declspec(deprecated)
#endif

namespace web_navigation_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PlanningEvent_
{
  using Type = PlanningEvent_<ContainerAllocator>;

  explicit PlanningEvent_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    effective_endpoint(_init),
    path(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->task_id = "";
      this->ros_goal_uuid = "";
      this->map_version = "";
      this->planning_attempt_id = "";
      this->status = 0;
      this->path_revision = 0ul;
      this->error_code = "";
      this->error_message = "";
    }
  }

  explicit PlanningEvent_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    task_id(_alloc),
    ros_goal_uuid(_alloc),
    map_version(_alloc),
    planning_attempt_id(_alloc),
    effective_endpoint(_alloc, _init),
    error_code(_alloc),
    error_message(_alloc),
    path(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->task_id = "";
      this->ros_goal_uuid = "";
      this->map_version = "";
      this->planning_attempt_id = "";
      this->status = 0;
      this->path_revision = 0ul;
      this->error_code = "";
      this->error_message = "";
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _task_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _task_id_type task_id;
  using _ros_goal_uuid_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _ros_goal_uuid_type ros_goal_uuid;
  using _map_version_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _map_version_type map_version;
  using _planning_attempt_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _planning_attempt_id_type planning_attempt_id;
  using _status_type =
    uint8_t;
  _status_type status;
  using _path_revision_type =
    uint32_t;
  _path_revision_type path_revision;
  using _effective_endpoint_type =
    geometry_msgs::msg::Pose_<ContainerAllocator>;
  _effective_endpoint_type effective_endpoint;
  using _error_code_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _error_code_type error_code;
  using _error_message_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _error_message_type error_message;
  using _path_type =
    planning_msgs::msg::GlobalPath_<ContainerAllocator>;
  _path_type path;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__task_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->task_id = _arg;
    return *this;
  }
  Type & set__ros_goal_uuid(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->ros_goal_uuid = _arg;
    return *this;
  }
  Type & set__map_version(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->map_version = _arg;
    return *this;
  }
  Type & set__planning_attempt_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->planning_attempt_id = _arg;
    return *this;
  }
  Type & set__status(
    const uint8_t & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__path_revision(
    const uint32_t & _arg)
  {
    this->path_revision = _arg;
    return *this;
  }
  Type & set__effective_endpoint(
    const geometry_msgs::msg::Pose_<ContainerAllocator> & _arg)
  {
    this->effective_endpoint = _arg;
    return *this;
  }
  Type & set__error_code(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->error_code = _arg;
    return *this;
  }
  Type & set__error_message(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->error_message = _arg;
    return *this;
  }
  Type & set__path(
    const planning_msgs::msg::GlobalPath_<ContainerAllocator> & _arg)
  {
    this->path = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t STARTED =
    0u;
  static constexpr uint8_t SUCCEEDED =
    1u;
  static constexpr uint8_t FAILED =
    2u;

  // pointer types
  using RawPtr =
    web_navigation_msgs::msg::PlanningEvent_<ContainerAllocator> *;
  using ConstRawPtr =
    const web_navigation_msgs::msg::PlanningEvent_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<web_navigation_msgs::msg::PlanningEvent_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<web_navigation_msgs::msg::PlanningEvent_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      web_navigation_msgs::msg::PlanningEvent_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<web_navigation_msgs::msg::PlanningEvent_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      web_navigation_msgs::msg::PlanningEvent_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<web_navigation_msgs::msg::PlanningEvent_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<web_navigation_msgs::msg::PlanningEvent_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<web_navigation_msgs::msg::PlanningEvent_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__web_navigation_msgs__msg__PlanningEvent
    std::shared_ptr<web_navigation_msgs::msg::PlanningEvent_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__web_navigation_msgs__msg__PlanningEvent
    std::shared_ptr<web_navigation_msgs::msg::PlanningEvent_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PlanningEvent_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->task_id != other.task_id) {
      return false;
    }
    if (this->ros_goal_uuid != other.ros_goal_uuid) {
      return false;
    }
    if (this->map_version != other.map_version) {
      return false;
    }
    if (this->planning_attempt_id != other.planning_attempt_id) {
      return false;
    }
    if (this->status != other.status) {
      return false;
    }
    if (this->path_revision != other.path_revision) {
      return false;
    }
    if (this->effective_endpoint != other.effective_endpoint) {
      return false;
    }
    if (this->error_code != other.error_code) {
      return false;
    }
    if (this->error_message != other.error_message) {
      return false;
    }
    if (this->path != other.path) {
      return false;
    }
    return true;
  }
  bool operator!=(const PlanningEvent_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PlanningEvent_

// alias to use template instance with default allocator
using PlanningEvent =
  web_navigation_msgs::msg::PlanningEvent_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t PlanningEvent_<ContainerAllocator>::STARTED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t PlanningEvent_<ContainerAllocator>::SUCCEEDED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t PlanningEvent_<ContainerAllocator>::FAILED;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace web_navigation_msgs

#endif  // WEB_NAVIGATION_MSGS__MSG__DETAIL__PLANNING_EVENT__STRUCT_HPP_
