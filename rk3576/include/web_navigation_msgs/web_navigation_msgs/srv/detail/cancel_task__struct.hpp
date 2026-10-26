// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from web_navigation_msgs:srv/CancelTask.idl
// generated code does not contain a copyright notice

#ifndef WEB_NAVIGATION_MSGS__SRV__DETAIL__CANCEL_TASK__STRUCT_HPP_
#define WEB_NAVIGATION_MSGS__SRV__DETAIL__CANCEL_TASK__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__web_navigation_msgs__srv__CancelTask_Request __attribute__((deprecated))
#else
# define DEPRECATED__web_navigation_msgs__srv__CancelTask_Request __declspec(deprecated)
#endif

namespace web_navigation_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct CancelTask_Request_
{
  using Type = CancelTask_Request_<ContainerAllocator>;

  explicit CancelTask_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->request_id = "";
      this->task_id = "";
      this->session_id = "";
      this->manager_boot_id = "";
      this->lease_token = "";
      this->control_epoch = 0ull;
      this->expected_state_revision = 0ull;
    }
  }

  explicit CancelTask_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : request_id(_alloc),
    task_id(_alloc),
    session_id(_alloc),
    manager_boot_id(_alloc),
    lease_token(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->request_id = "";
      this->task_id = "";
      this->session_id = "";
      this->manager_boot_id = "";
      this->lease_token = "";
      this->control_epoch = 0ull;
      this->expected_state_revision = 0ull;
    }
  }

  // field types and members
  using _request_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _request_id_type request_id;
  using _task_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _task_id_type task_id;
  using _session_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _session_id_type session_id;
  using _manager_boot_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _manager_boot_id_type manager_boot_id;
  using _lease_token_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _lease_token_type lease_token;
  using _control_epoch_type =
    uint64_t;
  _control_epoch_type control_epoch;
  using _expected_state_revision_type =
    uint64_t;
  _expected_state_revision_type expected_state_revision;

  // setters for named parameter idiom
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
  Type & set__session_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->session_id = _arg;
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
  Type & set__expected_state_revision(
    const uint64_t & _arg)
  {
    this->expected_state_revision = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    web_navigation_msgs::srv::CancelTask_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const web_navigation_msgs::srv::CancelTask_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<web_navigation_msgs::srv::CancelTask_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<web_navigation_msgs::srv::CancelTask_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      web_navigation_msgs::srv::CancelTask_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<web_navigation_msgs::srv::CancelTask_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      web_navigation_msgs::srv::CancelTask_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<web_navigation_msgs::srv::CancelTask_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<web_navigation_msgs::srv::CancelTask_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<web_navigation_msgs::srv::CancelTask_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__web_navigation_msgs__srv__CancelTask_Request
    std::shared_ptr<web_navigation_msgs::srv::CancelTask_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__web_navigation_msgs__srv__CancelTask_Request
    std::shared_ptr<web_navigation_msgs::srv::CancelTask_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CancelTask_Request_ & other) const
  {
    if (this->request_id != other.request_id) {
      return false;
    }
    if (this->task_id != other.task_id) {
      return false;
    }
    if (this->session_id != other.session_id) {
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
    if (this->expected_state_revision != other.expected_state_revision) {
      return false;
    }
    return true;
  }
  bool operator!=(const CancelTask_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CancelTask_Request_

// alias to use template instance with default allocator
using CancelTask_Request =
  web_navigation_msgs::srv::CancelTask_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace web_navigation_msgs


#ifndef _WIN32
# define DEPRECATED__web_navigation_msgs__srv__CancelTask_Response __attribute__((deprecated))
#else
# define DEPRECATED__web_navigation_msgs__srv__CancelTask_Response __declspec(deprecated)
#endif

namespace web_navigation_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct CancelTask_Response_
{
  using Type = CancelTask_Response_<ContainerAllocator>;

  explicit CancelTask_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
      this->code = "";
      this->message = "";
      this->request_id = "";
      this->task_status = 0;
      this->state_revision = 0ull;
    }
  }

  explicit CancelTask_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : code(_alloc),
    message(_alloc),
    request_id(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
      this->code = "";
      this->message = "";
      this->request_id = "";
      this->task_status = 0;
      this->state_revision = 0ull;
    }
  }

  // field types and members
  using _accepted_type =
    bool;
  _accepted_type accepted;
  using _code_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _code_type code;
  using _message_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _message_type message;
  using _request_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _request_id_type request_id;
  using _task_status_type =
    uint8_t;
  _task_status_type task_status;
  using _state_revision_type =
    uint64_t;
  _state_revision_type state_revision;

  // setters for named parameter idiom
  Type & set__accepted(
    const bool & _arg)
  {
    this->accepted = _arg;
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
  Type & set__request_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->request_id = _arg;
    return *this;
  }
  Type & set__task_status(
    const uint8_t & _arg)
  {
    this->task_status = _arg;
    return *this;
  }
  Type & set__state_revision(
    const uint64_t & _arg)
  {
    this->state_revision = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    web_navigation_msgs::srv::CancelTask_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const web_navigation_msgs::srv::CancelTask_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<web_navigation_msgs::srv::CancelTask_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<web_navigation_msgs::srv::CancelTask_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      web_navigation_msgs::srv::CancelTask_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<web_navigation_msgs::srv::CancelTask_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      web_navigation_msgs::srv::CancelTask_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<web_navigation_msgs::srv::CancelTask_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<web_navigation_msgs::srv::CancelTask_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<web_navigation_msgs::srv::CancelTask_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__web_navigation_msgs__srv__CancelTask_Response
    std::shared_ptr<web_navigation_msgs::srv::CancelTask_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__web_navigation_msgs__srv__CancelTask_Response
    std::shared_ptr<web_navigation_msgs::srv::CancelTask_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CancelTask_Response_ & other) const
  {
    if (this->accepted != other.accepted) {
      return false;
    }
    if (this->code != other.code) {
      return false;
    }
    if (this->message != other.message) {
      return false;
    }
    if (this->request_id != other.request_id) {
      return false;
    }
    if (this->task_status != other.task_status) {
      return false;
    }
    if (this->state_revision != other.state_revision) {
      return false;
    }
    return true;
  }
  bool operator!=(const CancelTask_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CancelTask_Response_

// alias to use template instance with default allocator
using CancelTask_Response =
  web_navigation_msgs::srv::CancelTask_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace web_navigation_msgs

namespace web_navigation_msgs
{

namespace srv
{

struct CancelTask
{
  using Request = web_navigation_msgs::srv::CancelTask_Request;
  using Response = web_navigation_msgs::srv::CancelTask_Response;
};

}  // namespace srv

}  // namespace web_navigation_msgs

#endif  // WEB_NAVIGATION_MSGS__SRV__DETAIL__CANCEL_TASK__STRUCT_HPP_
