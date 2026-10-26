// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from web_navigation_msgs:srv/ValidateTarget.idl
// generated code does not contain a copyright notice

#ifndef WEB_NAVIGATION_MSGS__SRV__DETAIL__VALIDATE_TARGET__STRUCT_HPP_
#define WEB_NAVIGATION_MSGS__SRV__DETAIL__VALIDATE_TARGET__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__web_navigation_msgs__srv__ValidateTarget_Request __attribute__((deprecated))
#else
# define DEPRECATED__web_navigation_msgs__srv__ValidateTarget_Request __declspec(deprecated)
#endif

namespace web_navigation_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ValidateTarget_Request_
{
  using Type = ValidateTarget_Request_<ContainerAllocator>;

  explicit ValidateTarget_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->map_version = "";
      this->frame_id = "";
      this->x = 0.0;
      this->y = 0.0;
      this->selected_layer_id = "";
      this->suggest_nearest = false;
    }
  }

  explicit ValidateTarget_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : map_version(_alloc),
    frame_id(_alloc),
    selected_layer_id(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->map_version = "";
      this->frame_id = "";
      this->x = 0.0;
      this->y = 0.0;
      this->selected_layer_id = "";
      this->suggest_nearest = false;
    }
  }

  // field types and members
  using _map_version_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _map_version_type map_version;
  using _frame_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _frame_id_type frame_id;
  using _x_type =
    double;
  _x_type x;
  using _y_type =
    double;
  _y_type y;
  using _selected_layer_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _selected_layer_id_type selected_layer_id;
  using _suggest_nearest_type =
    bool;
  _suggest_nearest_type suggest_nearest;

  // setters for named parameter idiom
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
  Type & set__x(
    const double & _arg)
  {
    this->x = _arg;
    return *this;
  }
  Type & set__y(
    const double & _arg)
  {
    this->y = _arg;
    return *this;
  }
  Type & set__selected_layer_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->selected_layer_id = _arg;
    return *this;
  }
  Type & set__suggest_nearest(
    const bool & _arg)
  {
    this->suggest_nearest = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    web_navigation_msgs::srv::ValidateTarget_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const web_navigation_msgs::srv::ValidateTarget_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<web_navigation_msgs::srv::ValidateTarget_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<web_navigation_msgs::srv::ValidateTarget_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      web_navigation_msgs::srv::ValidateTarget_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<web_navigation_msgs::srv::ValidateTarget_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      web_navigation_msgs::srv::ValidateTarget_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<web_navigation_msgs::srv::ValidateTarget_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<web_navigation_msgs::srv::ValidateTarget_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<web_navigation_msgs::srv::ValidateTarget_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__web_navigation_msgs__srv__ValidateTarget_Request
    std::shared_ptr<web_navigation_msgs::srv::ValidateTarget_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__web_navigation_msgs__srv__ValidateTarget_Request
    std::shared_ptr<web_navigation_msgs::srv::ValidateTarget_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ValidateTarget_Request_ & other) const
  {
    if (this->map_version != other.map_version) {
      return false;
    }
    if (this->frame_id != other.frame_id) {
      return false;
    }
    if (this->x != other.x) {
      return false;
    }
    if (this->y != other.y) {
      return false;
    }
    if (this->selected_layer_id != other.selected_layer_id) {
      return false;
    }
    if (this->suggest_nearest != other.suggest_nearest) {
      return false;
    }
    return true;
  }
  bool operator!=(const ValidateTarget_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ValidateTarget_Request_

// alias to use template instance with default allocator
using ValidateTarget_Request =
  web_navigation_msgs::srv::ValidateTarget_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace web_navigation_msgs


#ifndef _WIN32
# define DEPRECATED__web_navigation_msgs__srv__ValidateTarget_Response __attribute__((deprecated))
#else
# define DEPRECATED__web_navigation_msgs__srv__ValidateTarget_Response __declspec(deprecated)
#endif

namespace web_navigation_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ValidateTarget_Response_
{
  using Type = ValidateTarget_Response_<ContainerAllocator>;

  explicit ValidateTarget_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->valid = false;
      this->code = "";
      this->message = "";
      this->map_version = "";
      this->x = 0.0;
      this->y = 0.0;
      this->lanelet_id = "";
    }
  }

  explicit ValidateTarget_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : code(_alloc),
    message(_alloc),
    map_version(_alloc),
    lanelet_id(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->valid = false;
      this->code = "";
      this->message = "";
      this->map_version = "";
      this->x = 0.0;
      this->y = 0.0;
      this->lanelet_id = "";
    }
  }

  // field types and members
  using _valid_type =
    bool;
  _valid_type valid;
  using _code_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _code_type code;
  using _message_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _message_type message;
  using _map_version_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _map_version_type map_version;
  using _lanelet_ids_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _lanelet_ids_type lanelet_ids;
  using _x_type =
    double;
  _x_type x;
  using _y_type =
    double;
  _y_type y;
  using _lanelet_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _lanelet_id_type lanelet_id;

  // setters for named parameter idiom
  Type & set__valid(
    const bool & _arg)
  {
    this->valid = _arg;
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
  Type & set__map_version(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->map_version = _arg;
    return *this;
  }
  Type & set__lanelet_ids(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->lanelet_ids = _arg;
    return *this;
  }
  Type & set__x(
    const double & _arg)
  {
    this->x = _arg;
    return *this;
  }
  Type & set__y(
    const double & _arg)
  {
    this->y = _arg;
    return *this;
  }
  Type & set__lanelet_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->lanelet_id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    web_navigation_msgs::srv::ValidateTarget_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const web_navigation_msgs::srv::ValidateTarget_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<web_navigation_msgs::srv::ValidateTarget_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<web_navigation_msgs::srv::ValidateTarget_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      web_navigation_msgs::srv::ValidateTarget_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<web_navigation_msgs::srv::ValidateTarget_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      web_navigation_msgs::srv::ValidateTarget_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<web_navigation_msgs::srv::ValidateTarget_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<web_navigation_msgs::srv::ValidateTarget_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<web_navigation_msgs::srv::ValidateTarget_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__web_navigation_msgs__srv__ValidateTarget_Response
    std::shared_ptr<web_navigation_msgs::srv::ValidateTarget_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__web_navigation_msgs__srv__ValidateTarget_Response
    std::shared_ptr<web_navigation_msgs::srv::ValidateTarget_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ValidateTarget_Response_ & other) const
  {
    if (this->valid != other.valid) {
      return false;
    }
    if (this->code != other.code) {
      return false;
    }
    if (this->message != other.message) {
      return false;
    }
    if (this->map_version != other.map_version) {
      return false;
    }
    if (this->lanelet_ids != other.lanelet_ids) {
      return false;
    }
    if (this->x != other.x) {
      return false;
    }
    if (this->y != other.y) {
      return false;
    }
    if (this->lanelet_id != other.lanelet_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const ValidateTarget_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ValidateTarget_Response_

// alias to use template instance with default allocator
using ValidateTarget_Response =
  web_navigation_msgs::srv::ValidateTarget_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace web_navigation_msgs

namespace web_navigation_msgs
{

namespace srv
{

struct ValidateTarget
{
  using Request = web_navigation_msgs::srv::ValidateTarget_Request;
  using Response = web_navigation_msgs::srv::ValidateTarget_Response;
};

}  // namespace srv

}  // namespace web_navigation_msgs

#endif  // WEB_NAVIGATION_MSGS__SRV__DETAIL__VALIDATE_TARGET__STRUCT_HPP_
