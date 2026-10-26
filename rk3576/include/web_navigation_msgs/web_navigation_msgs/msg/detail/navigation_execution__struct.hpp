// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from web_navigation_msgs:msg/NavigationExecution.idl
// generated code does not contain a copyright notice

#ifndef WEB_NAVIGATION_MSGS__MSG__DETAIL__NAVIGATION_EXECUTION__STRUCT_HPP_
#define WEB_NAVIGATION_MSGS__MSG__DETAIL__NAVIGATION_EXECUTION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'goals'
// Member 'endpoint'
#include "geometry_msgs/msg/detail/pose_stamped__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__web_navigation_msgs__msg__NavigationExecution __attribute__((deprecated))
#else
# define DEPRECATED__web_navigation_msgs__msg__NavigationExecution __declspec(deprecated)
#endif

namespace web_navigation_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct NavigationExecution_
{
  using Type = NavigationExecution_<ContainerAllocator>;

  explicit NavigationExecution_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : endpoint(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->ros_goal_uuid = "";
      this->task_id = "";
      this->map_version = "";
      this->status = 0;
    }
  }

  explicit NavigationExecution_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : ros_goal_uuid(_alloc),
    task_id(_alloc),
    map_version(_alloc),
    endpoint(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->ros_goal_uuid = "";
      this->task_id = "";
      this->map_version = "";
      this->status = 0;
    }
  }

  // field types and members
  using _ros_goal_uuid_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _ros_goal_uuid_type ros_goal_uuid;
  using _task_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _task_id_type task_id;
  using _map_version_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _map_version_type map_version;
  using _status_type =
    uint8_t;
  _status_type status;
  using _goals_type =
    std::vector<geometry_msgs::msg::PoseStamped_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::PoseStamped_<ContainerAllocator>>>;
  _goals_type goals;
  using _endpoint_type =
    geometry_msgs::msg::PoseStamped_<ContainerAllocator>;
  _endpoint_type endpoint;

  // setters for named parameter idiom
  Type & set__ros_goal_uuid(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->ros_goal_uuid = _arg;
    return *this;
  }
  Type & set__task_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->task_id = _arg;
    return *this;
  }
  Type & set__map_version(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->map_version = _arg;
    return *this;
  }
  Type & set__status(
    const uint8_t & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__goals(
    const std::vector<geometry_msgs::msg::PoseStamped_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::PoseStamped_<ContainerAllocator>>> & _arg)
  {
    this->goals = _arg;
    return *this;
  }
  Type & set__endpoint(
    const geometry_msgs::msg::PoseStamped_<ContainerAllocator> & _arg)
  {
    this->endpoint = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    web_navigation_msgs::msg::NavigationExecution_<ContainerAllocator> *;
  using ConstRawPtr =
    const web_navigation_msgs::msg::NavigationExecution_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<web_navigation_msgs::msg::NavigationExecution_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<web_navigation_msgs::msg::NavigationExecution_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      web_navigation_msgs::msg::NavigationExecution_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<web_navigation_msgs::msg::NavigationExecution_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      web_navigation_msgs::msg::NavigationExecution_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<web_navigation_msgs::msg::NavigationExecution_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<web_navigation_msgs::msg::NavigationExecution_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<web_navigation_msgs::msg::NavigationExecution_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__web_navigation_msgs__msg__NavigationExecution
    std::shared_ptr<web_navigation_msgs::msg::NavigationExecution_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__web_navigation_msgs__msg__NavigationExecution
    std::shared_ptr<web_navigation_msgs::msg::NavigationExecution_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const NavigationExecution_ & other) const
  {
    if (this->ros_goal_uuid != other.ros_goal_uuid) {
      return false;
    }
    if (this->task_id != other.task_id) {
      return false;
    }
    if (this->map_version != other.map_version) {
      return false;
    }
    if (this->status != other.status) {
      return false;
    }
    if (this->goals != other.goals) {
      return false;
    }
    if (this->endpoint != other.endpoint) {
      return false;
    }
    return true;
  }
  bool operator!=(const NavigationExecution_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct NavigationExecution_

// alias to use template instance with default allocator
using NavigationExecution =
  web_navigation_msgs::msg::NavigationExecution_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace web_navigation_msgs

#endif  // WEB_NAVIGATION_MSGS__MSG__DETAIL__NAVIGATION_EXECUTION__STRUCT_HPP_
