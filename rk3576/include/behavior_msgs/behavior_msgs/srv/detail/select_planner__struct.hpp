// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from behavior_msgs:srv/SelectPlanner.idl
// generated code does not contain a copyright notice

#ifndef BEHAVIOR_MSGS__SRV__DETAIL__SELECT_PLANNER__STRUCT_HPP_
#define BEHAVIOR_MSGS__SRV__DETAIL__SELECT_PLANNER__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__behavior_msgs__srv__SelectPlanner_Request __attribute__((deprecated))
#else
# define DEPRECATED__behavior_msgs__srv__SelectPlanner_Request __declspec(deprecated)
#endif

namespace behavior_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SelectPlanner_Request_
{
  using Type = SelectPlanner_Request_<ContainerAllocator>;

  explicit SelectPlanner_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->planner_selector_id = "";
    }
  }

  explicit SelectPlanner_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : planner_selector_id(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->planner_selector_id = "";
    }
  }

  // field types and members
  using _planner_selector_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _planner_selector_id_type planner_selector_id;

  // setters for named parameter idiom
  Type & set__planner_selector_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->planner_selector_id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    behavior_msgs::srv::SelectPlanner_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const behavior_msgs::srv::SelectPlanner_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<behavior_msgs::srv::SelectPlanner_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<behavior_msgs::srv::SelectPlanner_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      behavior_msgs::srv::SelectPlanner_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<behavior_msgs::srv::SelectPlanner_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      behavior_msgs::srv::SelectPlanner_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<behavior_msgs::srv::SelectPlanner_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<behavior_msgs::srv::SelectPlanner_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<behavior_msgs::srv::SelectPlanner_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__behavior_msgs__srv__SelectPlanner_Request
    std::shared_ptr<behavior_msgs::srv::SelectPlanner_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__behavior_msgs__srv__SelectPlanner_Request
    std::shared_ptr<behavior_msgs::srv::SelectPlanner_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SelectPlanner_Request_ & other) const
  {
    if (this->planner_selector_id != other.planner_selector_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const SelectPlanner_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SelectPlanner_Request_

// alias to use template instance with default allocator
using SelectPlanner_Request =
  behavior_msgs::srv::SelectPlanner_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace behavior_msgs


#ifndef _WIN32
# define DEPRECATED__behavior_msgs__srv__SelectPlanner_Response __attribute__((deprecated))
#else
# define DEPRECATED__behavior_msgs__srv__SelectPlanner_Response __declspec(deprecated)
#endif

namespace behavior_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SelectPlanner_Response_
{
  using Type = SelectPlanner_Response_<ContainerAllocator>;

  explicit SelectPlanner_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->local_planner_id = "";
    }
  }

  explicit SelectPlanner_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : local_planner_id(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->local_planner_id = "";
    }
  }

  // field types and members
  using _local_planner_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _local_planner_id_type local_planner_id;

  // setters for named parameter idiom
  Type & set__local_planner_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->local_planner_id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    behavior_msgs::srv::SelectPlanner_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const behavior_msgs::srv::SelectPlanner_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<behavior_msgs::srv::SelectPlanner_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<behavior_msgs::srv::SelectPlanner_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      behavior_msgs::srv::SelectPlanner_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<behavior_msgs::srv::SelectPlanner_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      behavior_msgs::srv::SelectPlanner_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<behavior_msgs::srv::SelectPlanner_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<behavior_msgs::srv::SelectPlanner_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<behavior_msgs::srv::SelectPlanner_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__behavior_msgs__srv__SelectPlanner_Response
    std::shared_ptr<behavior_msgs::srv::SelectPlanner_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__behavior_msgs__srv__SelectPlanner_Response
    std::shared_ptr<behavior_msgs::srv::SelectPlanner_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SelectPlanner_Response_ & other) const
  {
    if (this->local_planner_id != other.local_planner_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const SelectPlanner_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SelectPlanner_Response_

// alias to use template instance with default allocator
using SelectPlanner_Response =
  behavior_msgs::srv::SelectPlanner_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace behavior_msgs

namespace behavior_msgs
{

namespace srv
{

struct SelectPlanner
{
  using Request = behavior_msgs::srv::SelectPlanner_Request;
  using Response = behavior_msgs::srv::SelectPlanner_Response;
};

}  // namespace srv

}  // namespace behavior_msgs

#endif  // BEHAVIOR_MSGS__SRV__DETAIL__SELECT_PLANNER__STRUCT_HPP_
