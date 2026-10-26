// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from web_navigation_msgs:srv/GetNavigationExecution.idl
// generated code does not contain a copyright notice

#ifndef WEB_NAVIGATION_MSGS__SRV__DETAIL__GET_NAVIGATION_EXECUTION__STRUCT_HPP_
#define WEB_NAVIGATION_MSGS__SRV__DETAIL__GET_NAVIGATION_EXECUTION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__web_navigation_msgs__srv__GetNavigationExecution_Request __attribute__((deprecated))
#else
# define DEPRECATED__web_navigation_msgs__srv__GetNavigationExecution_Request __declspec(deprecated)
#endif

namespace web_navigation_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetNavigationExecution_Request_
{
  using Type = GetNavigationExecution_Request_<ContainerAllocator>;

  explicit GetNavigationExecution_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit GetNavigationExecution_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  // field types and members
  using _structure_needs_at_least_one_member_type =
    uint8_t;
  _structure_needs_at_least_one_member_type structure_needs_at_least_one_member;


  // constant declarations

  // pointer types
  using RawPtr =
    web_navigation_msgs::srv::GetNavigationExecution_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const web_navigation_msgs::srv::GetNavigationExecution_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<web_navigation_msgs::srv::GetNavigationExecution_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<web_navigation_msgs::srv::GetNavigationExecution_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      web_navigation_msgs::srv::GetNavigationExecution_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<web_navigation_msgs::srv::GetNavigationExecution_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      web_navigation_msgs::srv::GetNavigationExecution_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<web_navigation_msgs::srv::GetNavigationExecution_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<web_navigation_msgs::srv::GetNavigationExecution_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<web_navigation_msgs::srv::GetNavigationExecution_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__web_navigation_msgs__srv__GetNavigationExecution_Request
    std::shared_ptr<web_navigation_msgs::srv::GetNavigationExecution_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__web_navigation_msgs__srv__GetNavigationExecution_Request
    std::shared_ptr<web_navigation_msgs::srv::GetNavigationExecution_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetNavigationExecution_Request_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetNavigationExecution_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetNavigationExecution_Request_

// alias to use template instance with default allocator
using GetNavigationExecution_Request =
  web_navigation_msgs::srv::GetNavigationExecution_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace web_navigation_msgs


// Include directives for member types
// Member 'goals'
#include "web_navigation_msgs/msg/detail/navigation_execution__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__web_navigation_msgs__srv__GetNavigationExecution_Response __attribute__((deprecated))
#else
# define DEPRECATED__web_navigation_msgs__srv__GetNavigationExecution_Response __declspec(deprecated)
#endif

namespace web_navigation_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetNavigationExecution_Response_
{
  using Type = GetNavigationExecution_Response_<ContainerAllocator>;

  explicit GetNavigationExecution_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->instance_id = "";
      this->active = false;
      this->execution_running = false;
    }
  }

  explicit GetNavigationExecution_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : instance_id(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->instance_id = "";
      this->active = false;
      this->execution_running = false;
    }
  }

  // field types and members
  using _instance_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _instance_id_type instance_id;
  using _active_type =
    bool;
  _active_type active;
  using _execution_running_type =
    bool;
  _execution_running_type execution_running;
  using _goals_type =
    std::vector<web_navigation_msgs::msg::NavigationExecution_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<web_navigation_msgs::msg::NavigationExecution_<ContainerAllocator>>>;
  _goals_type goals;

  // setters for named parameter idiom
  Type & set__instance_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->instance_id = _arg;
    return *this;
  }
  Type & set__active(
    const bool & _arg)
  {
    this->active = _arg;
    return *this;
  }
  Type & set__execution_running(
    const bool & _arg)
  {
    this->execution_running = _arg;
    return *this;
  }
  Type & set__goals(
    const std::vector<web_navigation_msgs::msg::NavigationExecution_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<web_navigation_msgs::msg::NavigationExecution_<ContainerAllocator>>> & _arg)
  {
    this->goals = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    web_navigation_msgs::srv::GetNavigationExecution_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const web_navigation_msgs::srv::GetNavigationExecution_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<web_navigation_msgs::srv::GetNavigationExecution_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<web_navigation_msgs::srv::GetNavigationExecution_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      web_navigation_msgs::srv::GetNavigationExecution_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<web_navigation_msgs::srv::GetNavigationExecution_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      web_navigation_msgs::srv::GetNavigationExecution_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<web_navigation_msgs::srv::GetNavigationExecution_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<web_navigation_msgs::srv::GetNavigationExecution_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<web_navigation_msgs::srv::GetNavigationExecution_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__web_navigation_msgs__srv__GetNavigationExecution_Response
    std::shared_ptr<web_navigation_msgs::srv::GetNavigationExecution_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__web_navigation_msgs__srv__GetNavigationExecution_Response
    std::shared_ptr<web_navigation_msgs::srv::GetNavigationExecution_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetNavigationExecution_Response_ & other) const
  {
    if (this->instance_id != other.instance_id) {
      return false;
    }
    if (this->active != other.active) {
      return false;
    }
    if (this->execution_running != other.execution_running) {
      return false;
    }
    if (this->goals != other.goals) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetNavigationExecution_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetNavigationExecution_Response_

// alias to use template instance with default allocator
using GetNavigationExecution_Response =
  web_navigation_msgs::srv::GetNavigationExecution_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace web_navigation_msgs

namespace web_navigation_msgs
{

namespace srv
{

struct GetNavigationExecution
{
  using Request = web_navigation_msgs::srv::GetNavigationExecution_Request;
  using Response = web_navigation_msgs::srv::GetNavigationExecution_Response;
};

}  // namespace srv

}  // namespace web_navigation_msgs

#endif  // WEB_NAVIGATION_MSGS__SRV__DETAIL__GET_NAVIGATION_EXECUTION__STRUCT_HPP_
