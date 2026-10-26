// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from system_msgs:srv/NeedSlowDown.idl
// generated code does not contain a copyright notice

#ifndef SYSTEM_MSGS__SRV__DETAIL__NEED_SLOW_DOWN__STRUCT_HPP_
#define SYSTEM_MSGS__SRV__DETAIL__NEED_SLOW_DOWN__STRUCT_HPP_

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

#ifndef _WIN32
# define DEPRECATED__system_msgs__srv__NeedSlowDown_Request __attribute__((deprecated))
#else
# define DEPRECATED__system_msgs__srv__NeedSlowDown_Request __declspec(deprecated)
#endif

namespace system_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct NeedSlowDown_Request_
{
  using Type = NeedSlowDown_Request_<ContainerAllocator>;

  explicit NeedSlowDown_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : pose(_init)
  {
    (void)_init;
  }

  explicit NeedSlowDown_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : pose(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _pose_type =
    geometry_msgs::msg::Pose_<ContainerAllocator>;
  _pose_type pose;

  // setters for named parameter idiom
  Type & set__pose(
    const geometry_msgs::msg::Pose_<ContainerAllocator> & _arg)
  {
    this->pose = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    system_msgs::srv::NeedSlowDown_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const system_msgs::srv::NeedSlowDown_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<system_msgs::srv::NeedSlowDown_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<system_msgs::srv::NeedSlowDown_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      system_msgs::srv::NeedSlowDown_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<system_msgs::srv::NeedSlowDown_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      system_msgs::srv::NeedSlowDown_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<system_msgs::srv::NeedSlowDown_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<system_msgs::srv::NeedSlowDown_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<system_msgs::srv::NeedSlowDown_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__system_msgs__srv__NeedSlowDown_Request
    std::shared_ptr<system_msgs::srv::NeedSlowDown_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__system_msgs__srv__NeedSlowDown_Request
    std::shared_ptr<system_msgs::srv::NeedSlowDown_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const NeedSlowDown_Request_ & other) const
  {
    if (this->pose != other.pose) {
      return false;
    }
    return true;
  }
  bool operator!=(const NeedSlowDown_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct NeedSlowDown_Request_

// alias to use template instance with default allocator
using NeedSlowDown_Request =
  system_msgs::srv::NeedSlowDown_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace system_msgs


#ifndef _WIN32
# define DEPRECATED__system_msgs__srv__NeedSlowDown_Response __attribute__((deprecated))
#else
# define DEPRECATED__system_msgs__srv__NeedSlowDown_Response __declspec(deprecated)
#endif

namespace system_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct NeedSlowDown_Response_
{
  using Type = NeedSlowDown_Response_<ContainerAllocator>;

  explicit NeedSlowDown_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->slow_down = false;
      this->slow_down_ratio = 0.0f;
    }
  }

  explicit NeedSlowDown_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->slow_down = false;
      this->slow_down_ratio = 0.0f;
    }
  }

  // field types and members
  using _slow_down_type =
    bool;
  _slow_down_type slow_down;
  using _slow_down_ratio_type =
    float;
  _slow_down_ratio_type slow_down_ratio;

  // setters for named parameter idiom
  Type & set__slow_down(
    const bool & _arg)
  {
    this->slow_down = _arg;
    return *this;
  }
  Type & set__slow_down_ratio(
    const float & _arg)
  {
    this->slow_down_ratio = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    system_msgs::srv::NeedSlowDown_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const system_msgs::srv::NeedSlowDown_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<system_msgs::srv::NeedSlowDown_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<system_msgs::srv::NeedSlowDown_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      system_msgs::srv::NeedSlowDown_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<system_msgs::srv::NeedSlowDown_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      system_msgs::srv::NeedSlowDown_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<system_msgs::srv::NeedSlowDown_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<system_msgs::srv::NeedSlowDown_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<system_msgs::srv::NeedSlowDown_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__system_msgs__srv__NeedSlowDown_Response
    std::shared_ptr<system_msgs::srv::NeedSlowDown_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__system_msgs__srv__NeedSlowDown_Response
    std::shared_ptr<system_msgs::srv::NeedSlowDown_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const NeedSlowDown_Response_ & other) const
  {
    if (this->slow_down != other.slow_down) {
      return false;
    }
    if (this->slow_down_ratio != other.slow_down_ratio) {
      return false;
    }
    return true;
  }
  bool operator!=(const NeedSlowDown_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct NeedSlowDown_Response_

// alias to use template instance with default allocator
using NeedSlowDown_Response =
  system_msgs::srv::NeedSlowDown_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace system_msgs

namespace system_msgs
{

namespace srv
{

struct NeedSlowDown
{
  using Request = system_msgs::srv::NeedSlowDown_Request;
  using Response = system_msgs::srv::NeedSlowDown_Response;
};

}  // namespace srv

}  // namespace system_msgs

#endif  // SYSTEM_MSGS__SRV__DETAIL__NEED_SLOW_DOWN__STRUCT_HPP_
