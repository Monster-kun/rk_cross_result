// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from system_msgs:srv/IsEmergencyStop.idl
// generated code does not contain a copyright notice

#ifndef SYSTEM_MSGS__SRV__DETAIL__IS_EMERGENCY_STOP__STRUCT_HPP_
#define SYSTEM_MSGS__SRV__DETAIL__IS_EMERGENCY_STOP__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'input'
#include "std_msgs/msg/detail/empty__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__system_msgs__srv__IsEmergencyStop_Request __attribute__((deprecated))
#else
# define DEPRECATED__system_msgs__srv__IsEmergencyStop_Request __declspec(deprecated)
#endif

namespace system_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct IsEmergencyStop_Request_
{
  using Type = IsEmergencyStop_Request_<ContainerAllocator>;

  explicit IsEmergencyStop_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : input(_init)
  {
    (void)_init;
  }

  explicit IsEmergencyStop_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : input(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _input_type =
    std_msgs::msg::Empty_<ContainerAllocator>;
  _input_type input;

  // setters for named parameter idiom
  Type & set__input(
    const std_msgs::msg::Empty_<ContainerAllocator> & _arg)
  {
    this->input = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    system_msgs::srv::IsEmergencyStop_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const system_msgs::srv::IsEmergencyStop_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<system_msgs::srv::IsEmergencyStop_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<system_msgs::srv::IsEmergencyStop_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      system_msgs::srv::IsEmergencyStop_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<system_msgs::srv::IsEmergencyStop_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      system_msgs::srv::IsEmergencyStop_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<system_msgs::srv::IsEmergencyStop_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<system_msgs::srv::IsEmergencyStop_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<system_msgs::srv::IsEmergencyStop_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__system_msgs__srv__IsEmergencyStop_Request
    std::shared_ptr<system_msgs::srv::IsEmergencyStop_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__system_msgs__srv__IsEmergencyStop_Request
    std::shared_ptr<system_msgs::srv::IsEmergencyStop_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const IsEmergencyStop_Request_ & other) const
  {
    if (this->input != other.input) {
      return false;
    }
    return true;
  }
  bool operator!=(const IsEmergencyStop_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct IsEmergencyStop_Request_

// alias to use template instance with default allocator
using IsEmergencyStop_Request =
  system_msgs::srv::IsEmergencyStop_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace system_msgs


#ifndef _WIN32
# define DEPRECATED__system_msgs__srv__IsEmergencyStop_Response __attribute__((deprecated))
#else
# define DEPRECATED__system_msgs__srv__IsEmergencyStop_Response __declspec(deprecated)
#endif

namespace system_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct IsEmergencyStop_Response_
{
  using Type = IsEmergencyStop_Response_<ContainerAllocator>;

  explicit IsEmergencyStop_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->is_emergency_stop = false;
    }
  }

  explicit IsEmergencyStop_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->is_emergency_stop = false;
    }
  }

  // field types and members
  using _is_emergency_stop_type =
    bool;
  _is_emergency_stop_type is_emergency_stop;

  // setters for named parameter idiom
  Type & set__is_emergency_stop(
    const bool & _arg)
  {
    this->is_emergency_stop = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    system_msgs::srv::IsEmergencyStop_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const system_msgs::srv::IsEmergencyStop_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<system_msgs::srv::IsEmergencyStop_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<system_msgs::srv::IsEmergencyStop_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      system_msgs::srv::IsEmergencyStop_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<system_msgs::srv::IsEmergencyStop_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      system_msgs::srv::IsEmergencyStop_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<system_msgs::srv::IsEmergencyStop_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<system_msgs::srv::IsEmergencyStop_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<system_msgs::srv::IsEmergencyStop_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__system_msgs__srv__IsEmergencyStop_Response
    std::shared_ptr<system_msgs::srv::IsEmergencyStop_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__system_msgs__srv__IsEmergencyStop_Response
    std::shared_ptr<system_msgs::srv::IsEmergencyStop_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const IsEmergencyStop_Response_ & other) const
  {
    if (this->is_emergency_stop != other.is_emergency_stop) {
      return false;
    }
    return true;
  }
  bool operator!=(const IsEmergencyStop_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct IsEmergencyStop_Response_

// alias to use template instance with default allocator
using IsEmergencyStop_Response =
  system_msgs::srv::IsEmergencyStop_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace system_msgs

namespace system_msgs
{

namespace srv
{

struct IsEmergencyStop
{
  using Request = system_msgs::srv::IsEmergencyStop_Request;
  using Response = system_msgs::srv::IsEmergencyStop_Response;
};

}  // namespace srv

}  // namespace system_msgs

#endif  // SYSTEM_MSGS__SRV__DETAIL__IS_EMERGENCY_STOP__STRUCT_HPP_
