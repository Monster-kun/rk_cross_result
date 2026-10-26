// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from web_navigation_msgs:srv/GetWebMap.idl
// generated code does not contain a copyright notice

#ifndef WEB_NAVIGATION_MSGS__SRV__DETAIL__GET_WEB_MAP__STRUCT_HPP_
#define WEB_NAVIGATION_MSGS__SRV__DETAIL__GET_WEB_MAP__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__web_navigation_msgs__srv__GetWebMap_Request __attribute__((deprecated))
#else
# define DEPRECATED__web_navigation_msgs__srv__GetWebMap_Request __declspec(deprecated)
#endif

namespace web_navigation_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetWebMap_Request_
{
  using Type = GetWebMap_Request_<ContainerAllocator>;

  explicit GetWebMap_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->if_map_version = "";
    }
  }

  explicit GetWebMap_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : if_map_version(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->if_map_version = "";
    }
  }

  // field types and members
  using _if_map_version_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _if_map_version_type if_map_version;

  // setters for named parameter idiom
  Type & set__if_map_version(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->if_map_version = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    web_navigation_msgs::srv::GetWebMap_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const web_navigation_msgs::srv::GetWebMap_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<web_navigation_msgs::srv::GetWebMap_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<web_navigation_msgs::srv::GetWebMap_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      web_navigation_msgs::srv::GetWebMap_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<web_navigation_msgs::srv::GetWebMap_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      web_navigation_msgs::srv::GetWebMap_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<web_navigation_msgs::srv::GetWebMap_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<web_navigation_msgs::srv::GetWebMap_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<web_navigation_msgs::srv::GetWebMap_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__web_navigation_msgs__srv__GetWebMap_Request
    std::shared_ptr<web_navigation_msgs::srv::GetWebMap_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__web_navigation_msgs__srv__GetWebMap_Request
    std::shared_ptr<web_navigation_msgs::srv::GetWebMap_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetWebMap_Request_ & other) const
  {
    if (this->if_map_version != other.if_map_version) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetWebMap_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetWebMap_Request_

// alias to use template instance with default allocator
using GetWebMap_Request =
  web_navigation_msgs::srv::GetWebMap_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace web_navigation_msgs


#ifndef _WIN32
# define DEPRECATED__web_navigation_msgs__srv__GetWebMap_Response __attribute__((deprecated))
#else
# define DEPRECATED__web_navigation_msgs__srv__GetWebMap_Response __declspec(deprecated)
#endif

namespace web_navigation_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetWebMap_Response_
{
  using Type = GetWebMap_Response_<ContainerAllocator>;

  explicit GetWebMap_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->ready = false;
      this->not_modified = false;
      this->code = "";
      this->message = "";
      this->map_version = "";
      this->map_name = "";
      this->coordinate_revision = "";
      this->frame_id = "";
      this->unit = "";
      std::fill<typename std::array<double, 4>::iterator, double>(this->bounds.begin(), this->bounds.end(), 0.0);
      this->geometry_json = "";
    }
  }

  explicit GetWebMap_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : code(_alloc),
    message(_alloc),
    map_version(_alloc),
    map_name(_alloc),
    coordinate_revision(_alloc),
    frame_id(_alloc),
    unit(_alloc),
    bounds(_alloc),
    geometry_json(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->ready = false;
      this->not_modified = false;
      this->code = "";
      this->message = "";
      this->map_version = "";
      this->map_name = "";
      this->coordinate_revision = "";
      this->frame_id = "";
      this->unit = "";
      std::fill<typename std::array<double, 4>::iterator, double>(this->bounds.begin(), this->bounds.end(), 0.0);
      this->geometry_json = "";
    }
  }

  // field types and members
  using _ready_type =
    bool;
  _ready_type ready;
  using _not_modified_type =
    bool;
  _not_modified_type not_modified;
  using _code_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _code_type code;
  using _message_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _message_type message;
  using _map_version_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _map_version_type map_version;
  using _map_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _map_name_type map_name;
  using _coordinate_revision_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _coordinate_revision_type coordinate_revision;
  using _frame_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _frame_id_type frame_id;
  using _unit_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _unit_type unit;
  using _bounds_type =
    std::array<double, 4>;
  _bounds_type bounds;
  using _geometry_json_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _geometry_json_type geometry_json;

  // setters for named parameter idiom
  Type & set__ready(
    const bool & _arg)
  {
    this->ready = _arg;
    return *this;
  }
  Type & set__not_modified(
    const bool & _arg)
  {
    this->not_modified = _arg;
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
  Type & set__map_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->map_name = _arg;
    return *this;
  }
  Type & set__coordinate_revision(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->coordinate_revision = _arg;
    return *this;
  }
  Type & set__frame_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->frame_id = _arg;
    return *this;
  }
  Type & set__unit(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->unit = _arg;
    return *this;
  }
  Type & set__bounds(
    const std::array<double, 4> & _arg)
  {
    this->bounds = _arg;
    return *this;
  }
  Type & set__geometry_json(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->geometry_json = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    web_navigation_msgs::srv::GetWebMap_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const web_navigation_msgs::srv::GetWebMap_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<web_navigation_msgs::srv::GetWebMap_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<web_navigation_msgs::srv::GetWebMap_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      web_navigation_msgs::srv::GetWebMap_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<web_navigation_msgs::srv::GetWebMap_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      web_navigation_msgs::srv::GetWebMap_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<web_navigation_msgs::srv::GetWebMap_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<web_navigation_msgs::srv::GetWebMap_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<web_navigation_msgs::srv::GetWebMap_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__web_navigation_msgs__srv__GetWebMap_Response
    std::shared_ptr<web_navigation_msgs::srv::GetWebMap_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__web_navigation_msgs__srv__GetWebMap_Response
    std::shared_ptr<web_navigation_msgs::srv::GetWebMap_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetWebMap_Response_ & other) const
  {
    if (this->ready != other.ready) {
      return false;
    }
    if (this->not_modified != other.not_modified) {
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
    if (this->map_name != other.map_name) {
      return false;
    }
    if (this->coordinate_revision != other.coordinate_revision) {
      return false;
    }
    if (this->frame_id != other.frame_id) {
      return false;
    }
    if (this->unit != other.unit) {
      return false;
    }
    if (this->bounds != other.bounds) {
      return false;
    }
    if (this->geometry_json != other.geometry_json) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetWebMap_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetWebMap_Response_

// alias to use template instance with default allocator
using GetWebMap_Response =
  web_navigation_msgs::srv::GetWebMap_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace web_navigation_msgs

namespace web_navigation_msgs
{

namespace srv
{

struct GetWebMap
{
  using Request = web_navigation_msgs::srv::GetWebMap_Request;
  using Response = web_navigation_msgs::srv::GetWebMap_Response;
};

}  // namespace srv

}  // namespace web_navigation_msgs

#endif  // WEB_NAVIGATION_MSGS__SRV__DETAIL__GET_WEB_MAP__STRUCT_HPP_
