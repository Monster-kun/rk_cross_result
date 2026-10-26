// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from web_navigation_msgs:srv/ControlLease.idl
// generated code does not contain a copyright notice

#ifndef WEB_NAVIGATION_MSGS__SRV__DETAIL__CONTROL_LEASE__STRUCT_HPP_
#define WEB_NAVIGATION_MSGS__SRV__DETAIL__CONTROL_LEASE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__web_navigation_msgs__srv__ControlLease_Request __attribute__((deprecated))
#else
# define DEPRECATED__web_navigation_msgs__srv__ControlLease_Request __declspec(deprecated)
#endif

namespace web_navigation_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ControlLease_Request_
{
  using Type = ControlLease_Request_<ContainerAllocator>;

  explicit ControlLease_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->operation = 0;
      this->session_id = "";
      this->device_label = "";
      this->manager_boot_id = "";
      this->lease_token = "";
      this->control_epoch = 0ull;
    }
  }

  explicit ControlLease_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : session_id(_alloc),
    device_label(_alloc),
    manager_boot_id(_alloc),
    lease_token(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->operation = 0;
      this->session_id = "";
      this->device_label = "";
      this->manager_boot_id = "";
      this->lease_token = "";
      this->control_epoch = 0ull;
    }
  }

  // field types and members
  using _operation_type =
    uint8_t;
  _operation_type operation;
  using _session_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _session_id_type session_id;
  using _device_label_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _device_label_type device_label;
  using _manager_boot_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _manager_boot_id_type manager_boot_id;
  using _lease_token_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _lease_token_type lease_token;
  using _control_epoch_type =
    uint64_t;
  _control_epoch_type control_epoch;

  // setters for named parameter idiom
  Type & set__operation(
    const uint8_t & _arg)
  {
    this->operation = _arg;
    return *this;
  }
  Type & set__session_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->session_id = _arg;
    return *this;
  }
  Type & set__device_label(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->device_label = _arg;
    return *this;
  }
  Type & set__manager_boot_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->manager_boot_id = _arg;
    return *this;
  }
  Type & set__lease_token(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->lease_token = _arg;
    return *this;
  }
  Type & set__control_epoch(
    const uint64_t & _arg)
  {
    this->control_epoch = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t ACQUIRE =
    0u;
  static constexpr uint8_t RENEW =
    1u;
  static constexpr uint8_t RELEASE =
    2u;
  static constexpr uint8_t VALIDATE =
    3u;

  // pointer types
  using RawPtr =
    web_navigation_msgs::srv::ControlLease_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const web_navigation_msgs::srv::ControlLease_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<web_navigation_msgs::srv::ControlLease_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<web_navigation_msgs::srv::ControlLease_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      web_navigation_msgs::srv::ControlLease_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<web_navigation_msgs::srv::ControlLease_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      web_navigation_msgs::srv::ControlLease_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<web_navigation_msgs::srv::ControlLease_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<web_navigation_msgs::srv::ControlLease_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<web_navigation_msgs::srv::ControlLease_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__web_navigation_msgs__srv__ControlLease_Request
    std::shared_ptr<web_navigation_msgs::srv::ControlLease_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__web_navigation_msgs__srv__ControlLease_Request
    std::shared_ptr<web_navigation_msgs::srv::ControlLease_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ControlLease_Request_ & other) const
  {
    if (this->operation != other.operation) {
      return false;
    }
    if (this->session_id != other.session_id) {
      return false;
    }
    if (this->device_label != other.device_label) {
      return false;
    }
    if (this->manager_boot_id != other.manager_boot_id) {
      return false;
    }
    if (this->lease_token != other.lease_token) {
      return false;
    }
    if (this->control_epoch != other.control_epoch) {
      return false;
    }
    return true;
  }
  bool operator!=(const ControlLease_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ControlLease_Request_

// alias to use template instance with default allocator
using ControlLease_Request =
  web_navigation_msgs::srv::ControlLease_Request_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t ControlLease_Request_<ContainerAllocator>::ACQUIRE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t ControlLease_Request_<ContainerAllocator>::RENEW;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t ControlLease_Request_<ContainerAllocator>::RELEASE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t ControlLease_Request_<ContainerAllocator>::VALIDATE;
#endif  // __cplusplus < 201703L

}  // namespace srv

}  // namespace web_navigation_msgs


#ifndef _WIN32
# define DEPRECATED__web_navigation_msgs__srv__ControlLease_Response __attribute__((deprecated))
#else
# define DEPRECATED__web_navigation_msgs__srv__ControlLease_Response __declspec(deprecated)
#endif

namespace web_navigation_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ControlLease_Response_
{
  using Type = ControlLease_Response_<ContainerAllocator>;

  explicit ControlLease_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->code = "";
      this->message = "";
      this->manager_boot_id = "";
      this->lease_token = "";
      this->control_epoch = 0ull;
      this->lease_ttl_ms = 0ul;
      this->control_held = false;
      this->owner_label = "";
    }
  }

  explicit ControlLease_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : code(_alloc),
    message(_alloc),
    manager_boot_id(_alloc),
    lease_token(_alloc),
    owner_label(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->code = "";
      this->message = "";
      this->manager_boot_id = "";
      this->lease_token = "";
      this->control_epoch = 0ull;
      this->lease_ttl_ms = 0ul;
      this->control_held = false;
      this->owner_label = "";
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;
  using _code_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _code_type code;
  using _message_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _message_type message;
  using _manager_boot_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _manager_boot_id_type manager_boot_id;
  using _lease_token_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _lease_token_type lease_token;
  using _control_epoch_type =
    uint64_t;
  _control_epoch_type control_epoch;
  using _lease_ttl_ms_type =
    uint32_t;
  _lease_ttl_ms_type lease_ttl_ms;
  using _control_held_type =
    bool;
  _control_held_type control_held;
  using _owner_label_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _owner_label_type owner_label;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
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
  Type & set__manager_boot_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->manager_boot_id = _arg;
    return *this;
  }
  Type & set__lease_token(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->lease_token = _arg;
    return *this;
  }
  Type & set__control_epoch(
    const uint64_t & _arg)
  {
    this->control_epoch = _arg;
    return *this;
  }
  Type & set__lease_ttl_ms(
    const uint32_t & _arg)
  {
    this->lease_ttl_ms = _arg;
    return *this;
  }
  Type & set__control_held(
    const bool & _arg)
  {
    this->control_held = _arg;
    return *this;
  }
  Type & set__owner_label(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->owner_label = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    web_navigation_msgs::srv::ControlLease_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const web_navigation_msgs::srv::ControlLease_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<web_navigation_msgs::srv::ControlLease_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<web_navigation_msgs::srv::ControlLease_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      web_navigation_msgs::srv::ControlLease_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<web_navigation_msgs::srv::ControlLease_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      web_navigation_msgs::srv::ControlLease_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<web_navigation_msgs::srv::ControlLease_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<web_navigation_msgs::srv::ControlLease_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<web_navigation_msgs::srv::ControlLease_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__web_navigation_msgs__srv__ControlLease_Response
    std::shared_ptr<web_navigation_msgs::srv::ControlLease_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__web_navigation_msgs__srv__ControlLease_Response
    std::shared_ptr<web_navigation_msgs::srv::ControlLease_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ControlLease_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    if (this->code != other.code) {
      return false;
    }
    if (this->message != other.message) {
      return false;
    }
    if (this->manager_boot_id != other.manager_boot_id) {
      return false;
    }
    if (this->lease_token != other.lease_token) {
      return false;
    }
    if (this->control_epoch != other.control_epoch) {
      return false;
    }
    if (this->lease_ttl_ms != other.lease_ttl_ms) {
      return false;
    }
    if (this->control_held != other.control_held) {
      return false;
    }
    if (this->owner_label != other.owner_label) {
      return false;
    }
    return true;
  }
  bool operator!=(const ControlLease_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ControlLease_Response_

// alias to use template instance with default allocator
using ControlLease_Response =
  web_navigation_msgs::srv::ControlLease_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace web_navigation_msgs

namespace web_navigation_msgs
{

namespace srv
{

struct ControlLease
{
  using Request = web_navigation_msgs::srv::ControlLease_Request;
  using Response = web_navigation_msgs::srv::ControlLease_Response;
};

}  // namespace srv

}  // namespace web_navigation_msgs

#endif  // WEB_NAVIGATION_MSGS__SRV__DETAIL__CONTROL_LEASE__STRUCT_HPP_
