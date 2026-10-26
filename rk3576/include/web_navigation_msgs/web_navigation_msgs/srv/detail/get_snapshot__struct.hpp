// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from web_navigation_msgs:srv/GetSnapshot.idl
// generated code does not contain a copyright notice

#ifndef WEB_NAVIGATION_MSGS__SRV__DETAIL__GET_SNAPSHOT__STRUCT_HPP_
#define WEB_NAVIGATION_MSGS__SRV__DETAIL__GET_SNAPSHOT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__web_navigation_msgs__srv__GetSnapshot_Request __attribute__((deprecated))
#else
# define DEPRECATED__web_navigation_msgs__srv__GetSnapshot_Request __declspec(deprecated)
#endif

namespace web_navigation_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetSnapshot_Request_
{
  using Type = GetSnapshot_Request_<ContainerAllocator>;

  explicit GetSnapshot_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit GetSnapshot_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    web_navigation_msgs::srv::GetSnapshot_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const web_navigation_msgs::srv::GetSnapshot_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<web_navigation_msgs::srv::GetSnapshot_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<web_navigation_msgs::srv::GetSnapshot_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      web_navigation_msgs::srv::GetSnapshot_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<web_navigation_msgs::srv::GetSnapshot_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      web_navigation_msgs::srv::GetSnapshot_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<web_navigation_msgs::srv::GetSnapshot_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<web_navigation_msgs::srv::GetSnapshot_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<web_navigation_msgs::srv::GetSnapshot_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__web_navigation_msgs__srv__GetSnapshot_Request
    std::shared_ptr<web_navigation_msgs::srv::GetSnapshot_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__web_navigation_msgs__srv__GetSnapshot_Request
    std::shared_ptr<web_navigation_msgs::srv::GetSnapshot_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetSnapshot_Request_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetSnapshot_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetSnapshot_Request_

// alias to use template instance with default allocator
using GetSnapshot_Request =
  web_navigation_msgs::srv::GetSnapshot_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace web_navigation_msgs


// Include directives for member types
// Member 'state'
#include "web_navigation_msgs/msg/detail/navigation_state__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__web_navigation_msgs__srv__GetSnapshot_Response __attribute__((deprecated))
#else
# define DEPRECATED__web_navigation_msgs__srv__GetSnapshot_Response __declspec(deprecated)
#endif

namespace web_navigation_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetSnapshot_Response_
{
  using Type = GetSnapshot_Response_<ContainerAllocator>;

  explicit GetSnapshot_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : state(_init)
  {
    (void)_init;
  }

  explicit GetSnapshot_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : state(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _state_type =
    web_navigation_msgs::msg::NavigationState_<ContainerAllocator>;
  _state_type state;

  // setters for named parameter idiom
  Type & set__state(
    const web_navigation_msgs::msg::NavigationState_<ContainerAllocator> & _arg)
  {
    this->state = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    web_navigation_msgs::srv::GetSnapshot_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const web_navigation_msgs::srv::GetSnapshot_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<web_navigation_msgs::srv::GetSnapshot_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<web_navigation_msgs::srv::GetSnapshot_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      web_navigation_msgs::srv::GetSnapshot_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<web_navigation_msgs::srv::GetSnapshot_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      web_navigation_msgs::srv::GetSnapshot_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<web_navigation_msgs::srv::GetSnapshot_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<web_navigation_msgs::srv::GetSnapshot_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<web_navigation_msgs::srv::GetSnapshot_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__web_navigation_msgs__srv__GetSnapshot_Response
    std::shared_ptr<web_navigation_msgs::srv::GetSnapshot_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__web_navigation_msgs__srv__GetSnapshot_Response
    std::shared_ptr<web_navigation_msgs::srv::GetSnapshot_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetSnapshot_Response_ & other) const
  {
    if (this->state != other.state) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetSnapshot_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetSnapshot_Response_

// alias to use template instance with default allocator
using GetSnapshot_Response =
  web_navigation_msgs::srv::GetSnapshot_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace web_navigation_msgs

namespace web_navigation_msgs
{

namespace srv
{

struct GetSnapshot
{
  using Request = web_navigation_msgs::srv::GetSnapshot_Request;
  using Response = web_navigation_msgs::srv::GetSnapshot_Response;
};

}  // namespace srv

}  // namespace web_navigation_msgs

#endif  // WEB_NAVIGATION_MSGS__SRV__DETAIL__GET_SNAPSHOT__STRUCT_HPP_
