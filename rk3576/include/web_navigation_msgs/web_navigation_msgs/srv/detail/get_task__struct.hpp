// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from web_navigation_msgs:srv/GetTask.idl
// generated code does not contain a copyright notice

#ifndef WEB_NAVIGATION_MSGS__SRV__DETAIL__GET_TASK__STRUCT_HPP_
#define WEB_NAVIGATION_MSGS__SRV__DETAIL__GET_TASK__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__web_navigation_msgs__srv__GetTask_Request __attribute__((deprecated))
#else
# define DEPRECATED__web_navigation_msgs__srv__GetTask_Request __declspec(deprecated)
#endif

namespace web_navigation_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetTask_Request_
{
  using Type = GetTask_Request_<ContainerAllocator>;

  explicit GetTask_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->task_id = "";
    }
  }

  explicit GetTask_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : task_id(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->task_id = "";
    }
  }

  // field types and members
  using _task_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _task_id_type task_id;

  // setters for named parameter idiom
  Type & set__task_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->task_id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    web_navigation_msgs::srv::GetTask_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const web_navigation_msgs::srv::GetTask_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<web_navigation_msgs::srv::GetTask_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<web_navigation_msgs::srv::GetTask_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      web_navigation_msgs::srv::GetTask_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<web_navigation_msgs::srv::GetTask_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      web_navigation_msgs::srv::GetTask_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<web_navigation_msgs::srv::GetTask_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<web_navigation_msgs::srv::GetTask_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<web_navigation_msgs::srv::GetTask_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__web_navigation_msgs__srv__GetTask_Request
    std::shared_ptr<web_navigation_msgs::srv::GetTask_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__web_navigation_msgs__srv__GetTask_Request
    std::shared_ptr<web_navigation_msgs::srv::GetTask_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetTask_Request_ & other) const
  {
    if (this->task_id != other.task_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetTask_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetTask_Request_

// alias to use template instance with default allocator
using GetTask_Request =
  web_navigation_msgs::srv::GetTask_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace web_navigation_msgs


// Include directives for member types
// Member 'effective_endpoint'
#include "geometry_msgs/msg/detail/pose__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__web_navigation_msgs__srv__GetTask_Response __attribute__((deprecated))
#else
# define DEPRECATED__web_navigation_msgs__srv__GetTask_Response __declspec(deprecated)
#endif

namespace web_navigation_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetTask_Response_
{
  using Type = GetTask_Response_<ContainerAllocator>;

  explicit GetTask_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : effective_endpoint(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->found = false;
      this->task_id = "";
      this->request_id = "";
      this->ros_goal_uuid = "";
      this->map_version = "";
      this->frame_id = "";
      this->status = 0;
      this->requested_x = 0.0;
      this->requested_y = 0.0;
      this->device_label = "";
      this->error_code = "";
      this->error_message = "";
      this->updated_at = 0ll;
    }
  }

  explicit GetTask_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : task_id(_alloc),
    request_id(_alloc),
    ros_goal_uuid(_alloc),
    map_version(_alloc),
    frame_id(_alloc),
    effective_endpoint(_alloc, _init),
    device_label(_alloc),
    error_code(_alloc),
    error_message(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->found = false;
      this->task_id = "";
      this->request_id = "";
      this->ros_goal_uuid = "";
      this->map_version = "";
      this->frame_id = "";
      this->status = 0;
      this->requested_x = 0.0;
      this->requested_y = 0.0;
      this->device_label = "";
      this->error_code = "";
      this->error_message = "";
      this->updated_at = 0ll;
    }
  }

  // field types and members
  using _found_type =
    bool;
  _found_type found;
  using _task_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _task_id_type task_id;
  using _request_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _request_id_type request_id;
  using _ros_goal_uuid_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _ros_goal_uuid_type ros_goal_uuid;
  using _map_version_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _map_version_type map_version;
  using _frame_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _frame_id_type frame_id;
  using _status_type =
    uint8_t;
  _status_type status;
  using _requested_x_type =
    double;
  _requested_x_type requested_x;
  using _requested_y_type =
    double;
  _requested_y_type requested_y;
  using _effective_endpoint_type =
    geometry_msgs::msg::Pose_<ContainerAllocator>;
  _effective_endpoint_type effective_endpoint;
  using _device_label_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _device_label_type device_label;
  using _error_code_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _error_code_type error_code;
  using _error_message_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _error_message_type error_message;
  using _updated_at_type =
    int64_t;
  _updated_at_type updated_at;

  // setters for named parameter idiom
  Type & set__found(
    const bool & _arg)
  {
    this->found = _arg;
    return *this;
  }
  Type & set__task_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->task_id = _arg;
    return *this;
  }
  Type & set__request_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->request_id = _arg;
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
  Type & set__frame_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->frame_id = _arg;
    return *this;
  }
  Type & set__status(
    const uint8_t & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__requested_x(
    const double & _arg)
  {
    this->requested_x = _arg;
    return *this;
  }
  Type & set__requested_y(
    const double & _arg)
  {
    this->requested_y = _arg;
    return *this;
  }
  Type & set__effective_endpoint(
    const geometry_msgs::msg::Pose_<ContainerAllocator> & _arg)
  {
    this->effective_endpoint = _arg;
    return *this;
  }
  Type & set__device_label(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->device_label = _arg;
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
  Type & set__updated_at(
    const int64_t & _arg)
  {
    this->updated_at = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    web_navigation_msgs::srv::GetTask_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const web_navigation_msgs::srv::GetTask_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<web_navigation_msgs::srv::GetTask_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<web_navigation_msgs::srv::GetTask_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      web_navigation_msgs::srv::GetTask_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<web_navigation_msgs::srv::GetTask_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      web_navigation_msgs::srv::GetTask_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<web_navigation_msgs::srv::GetTask_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<web_navigation_msgs::srv::GetTask_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<web_navigation_msgs::srv::GetTask_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__web_navigation_msgs__srv__GetTask_Response
    std::shared_ptr<web_navigation_msgs::srv::GetTask_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__web_navigation_msgs__srv__GetTask_Response
    std::shared_ptr<web_navigation_msgs::srv::GetTask_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetTask_Response_ & other) const
  {
    if (this->found != other.found) {
      return false;
    }
    if (this->task_id != other.task_id) {
      return false;
    }
    if (this->request_id != other.request_id) {
      return false;
    }
    if (this->ros_goal_uuid != other.ros_goal_uuid) {
      return false;
    }
    if (this->map_version != other.map_version) {
      return false;
    }
    if (this->frame_id != other.frame_id) {
      return false;
    }
    if (this->status != other.status) {
      return false;
    }
    if (this->requested_x != other.requested_x) {
      return false;
    }
    if (this->requested_y != other.requested_y) {
      return false;
    }
    if (this->effective_endpoint != other.effective_endpoint) {
      return false;
    }
    if (this->device_label != other.device_label) {
      return false;
    }
    if (this->error_code != other.error_code) {
      return false;
    }
    if (this->error_message != other.error_message) {
      return false;
    }
    if (this->updated_at != other.updated_at) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetTask_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetTask_Response_

// alias to use template instance with default allocator
using GetTask_Response =
  web_navigation_msgs::srv::GetTask_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace web_navigation_msgs

namespace web_navigation_msgs
{

namespace srv
{

struct GetTask
{
  using Request = web_navigation_msgs::srv::GetTask_Request;
  using Response = web_navigation_msgs::srv::GetTask_Response;
};

}  // namespace srv

}  // namespace web_navigation_msgs

#endif  // WEB_NAVIGATION_MSGS__SRV__DETAIL__GET_TASK__STRUCT_HPP_
