// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from web_navigation_msgs:msg/RvizGoalFeedback.idl
// generated code does not contain a copyright notice

#ifndef WEB_NAVIGATION_MSGS__MSG__DETAIL__RVIZ_GOAL_FEEDBACK__STRUCT_HPP_
#define WEB_NAVIGATION_MSGS__MSG__DETAIL__RVIZ_GOAL_FEEDBACK__STRUCT_HPP_

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

#ifndef _WIN32
# define DEPRECATED__web_navigation_msgs__msg__RvizGoalFeedback __attribute__((deprecated))
#else
# define DEPRECATED__web_navigation_msgs__msg__RvizGoalFeedback __declspec(deprecated)
#endif

namespace web_navigation_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RvizGoalFeedback_
{
  using Type = RvizGoalFeedback_<ContainerAllocator>;

  explicit RvizGoalFeedback_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->manager_boot_id = "";
      this->status = 0;
      this->request_id = "";
      this->task_id = "";
      this->code = "";
      this->message = "";
      this->staged_waypoints = 0ul;
    }
  }

  explicit RvizGoalFeedback_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    manager_boot_id(_alloc),
    request_id(_alloc),
    task_id(_alloc),
    code(_alloc),
    message(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->manager_boot_id = "";
      this->status = 0;
      this->request_id = "";
      this->task_id = "";
      this->code = "";
      this->message = "";
      this->staged_waypoints = 0ul;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _manager_boot_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _manager_boot_id_type manager_boot_id;
  using _status_type =
    uint8_t;
  _status_type status;
  using _request_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _request_id_type request_id;
  using _task_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _task_id_type task_id;
  using _code_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _code_type code;
  using _message_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _message_type message;
  using _staged_waypoints_type =
    uint32_t;
  _staged_waypoints_type staged_waypoints;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__manager_boot_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->manager_boot_id = _arg;
    return *this;
  }
  Type & set__status(
    const uint8_t & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__request_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->request_id = _arg;
    return *this;
  }
  Type & set__task_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->task_id = _arg;
    return *this;
  }
  Type & set__code(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->code = _arg;
    return *this;
  }
  Type & set__message(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->message = _arg;
    return *this;
  }
  Type & set__staged_waypoints(
    const uint32_t & _arg)
  {
    this->staged_waypoints = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t STAGED =
    0u;
  static constexpr uint8_t ACCEPTED =
    1u;
  static constexpr uint8_t REJECTED =
    2u;

  // pointer types
  using RawPtr =
    web_navigation_msgs::msg::RvizGoalFeedback_<ContainerAllocator> *;
  using ConstRawPtr =
    const web_navigation_msgs::msg::RvizGoalFeedback_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<web_navigation_msgs::msg::RvizGoalFeedback_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<web_navigation_msgs::msg::RvizGoalFeedback_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      web_navigation_msgs::msg::RvizGoalFeedback_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<web_navigation_msgs::msg::RvizGoalFeedback_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      web_navigation_msgs::msg::RvizGoalFeedback_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<web_navigation_msgs::msg::RvizGoalFeedback_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<web_navigation_msgs::msg::RvizGoalFeedback_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<web_navigation_msgs::msg::RvizGoalFeedback_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__web_navigation_msgs__msg__RvizGoalFeedback
    std::shared_ptr<web_navigation_msgs::msg::RvizGoalFeedback_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__web_navigation_msgs__msg__RvizGoalFeedback
    std::shared_ptr<web_navigation_msgs::msg::RvizGoalFeedback_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RvizGoalFeedback_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->manager_boot_id != other.manager_boot_id) {
      return false;
    }
    if (this->status != other.status) {
      return false;
    }
    if (this->request_id != other.request_id) {
      return false;
    }
    if (this->task_id != other.task_id) {
      return false;
    }
    if (this->code != other.code) {
      return false;
    }
    if (this->message != other.message) {
      return false;
    }
    if (this->staged_waypoints != other.staged_waypoints) {
      return false;
    }
    return true;
  }
  bool operator!=(const RvizGoalFeedback_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RvizGoalFeedback_

// alias to use template instance with default allocator
using RvizGoalFeedback =
  web_navigation_msgs::msg::RvizGoalFeedback_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t RvizGoalFeedback_<ContainerAllocator>::STAGED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t RvizGoalFeedback_<ContainerAllocator>::ACCEPTED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t RvizGoalFeedback_<ContainerAllocator>::REJECTED;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace web_navigation_msgs

#endif  // WEB_NAVIGATION_MSGS__MSG__DETAIL__RVIZ_GOAL_FEEDBACK__STRUCT_HPP_
