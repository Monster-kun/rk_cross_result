// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from localization_msgs:srv/Relocation.idl
// generated code does not contain a copyright notice

#ifndef LOCALIZATION_MSGS__SRV__DETAIL__RELOCATION__STRUCT_HPP_
#define LOCALIZATION_MSGS__SRV__DETAIL__RELOCATION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'cloud'
#include "sensor_msgs/msg/detail/point_cloud2__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__localization_msgs__srv__Relocation_Request __attribute__((deprecated))
#else
# define DEPRECATED__localization_msgs__srv__Relocation_Request __declspec(deprecated)
#endif

namespace localization_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Relocation_Request_
{
  using Type = Relocation_Request_<ContainerAllocator>;

  explicit Relocation_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : cloud(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->map_name = "";
      this->relocation_method = 0ll;
    }
  }

  explicit Relocation_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : cloud(_alloc, _init),
    map_name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->map_name = "";
      this->relocation_method = 0ll;
    }
  }

  // field types and members
  using _cloud_type =
    sensor_msgs::msg::PointCloud2_<ContainerAllocator>;
  _cloud_type cloud;
  using _map_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _map_name_type map_name;
  using _relocation_method_type =
    int64_t;
  _relocation_method_type relocation_method;

  // setters for named parameter idiom
  Type & set__cloud(
    const sensor_msgs::msg::PointCloud2_<ContainerAllocator> & _arg)
  {
    this->cloud = _arg;
    return *this;
  }
  Type & set__map_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->map_name = _arg;
    return *this;
  }
  Type & set__relocation_method(
    const int64_t & _arg)
  {
    this->relocation_method = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    localization_msgs::srv::Relocation_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const localization_msgs::srv::Relocation_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<localization_msgs::srv::Relocation_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<localization_msgs::srv::Relocation_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      localization_msgs::srv::Relocation_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<localization_msgs::srv::Relocation_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      localization_msgs::srv::Relocation_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<localization_msgs::srv::Relocation_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<localization_msgs::srv::Relocation_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<localization_msgs::srv::Relocation_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__localization_msgs__srv__Relocation_Request
    std::shared_ptr<localization_msgs::srv::Relocation_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__localization_msgs__srv__Relocation_Request
    std::shared_ptr<localization_msgs::srv::Relocation_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Relocation_Request_ & other) const
  {
    if (this->cloud != other.cloud) {
      return false;
    }
    if (this->map_name != other.map_name) {
      return false;
    }
    if (this->relocation_method != other.relocation_method) {
      return false;
    }
    return true;
  }
  bool operator!=(const Relocation_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Relocation_Request_

// alias to use template instance with default allocator
using Relocation_Request =
  localization_msgs::srv::Relocation_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace localization_msgs


// Include directives for member types
// Member 'init_pose'
#include "geometry_msgs/msg/detail/pose_stamped__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__localization_msgs__srv__Relocation_Response __attribute__((deprecated))
#else
# define DEPRECATED__localization_msgs__srv__Relocation_Response __declspec(deprecated)
#endif

namespace localization_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Relocation_Response_
{
  using Type = Relocation_Response_<ContainerAllocator>;

  explicit Relocation_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : init_pose(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  explicit Relocation_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : init_pose(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  // field types and members
  using _init_pose_type =
    geometry_msgs::msg::PoseStamped_<ContainerAllocator>;
  _init_pose_type init_pose;
  using _success_type =
    bool;
  _success_type success;

  // setters for named parameter idiom
  Type & set__init_pose(
    const geometry_msgs::msg::PoseStamped_<ContainerAllocator> & _arg)
  {
    this->init_pose = _arg;
    return *this;
  }
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    localization_msgs::srv::Relocation_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const localization_msgs::srv::Relocation_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<localization_msgs::srv::Relocation_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<localization_msgs::srv::Relocation_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      localization_msgs::srv::Relocation_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<localization_msgs::srv::Relocation_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      localization_msgs::srv::Relocation_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<localization_msgs::srv::Relocation_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<localization_msgs::srv::Relocation_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<localization_msgs::srv::Relocation_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__localization_msgs__srv__Relocation_Response
    std::shared_ptr<localization_msgs::srv::Relocation_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__localization_msgs__srv__Relocation_Response
    std::shared_ptr<localization_msgs::srv::Relocation_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Relocation_Response_ & other) const
  {
    if (this->init_pose != other.init_pose) {
      return false;
    }
    if (this->success != other.success) {
      return false;
    }
    return true;
  }
  bool operator!=(const Relocation_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Relocation_Response_

// alias to use template instance with default allocator
using Relocation_Response =
  localization_msgs::srv::Relocation_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace localization_msgs

namespace localization_msgs
{

namespace srv
{

struct Relocation
{
  using Request = localization_msgs::srv::Relocation_Request;
  using Response = localization_msgs::srv::Relocation_Response;
};

}  // namespace srv

}  // namespace localization_msgs

#endif  // LOCALIZATION_MSGS__SRV__DETAIL__RELOCATION__STRUCT_HPP_
