// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from web_navigation_msgs:msg/NavigationState.idl
// generated code does not contain a copyright notice

#ifndef WEB_NAVIGATION_MSGS__MSG__DETAIL__NAVIGATION_STATE__STRUCT_HPP_
#define WEB_NAVIGATION_MSGS__MSG__DETAIL__NAVIGATION_STATE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"
// Member 'vehicle_pose'
// Member 'effective_endpoint'
#include "geometry_msgs/msg/detail/pose__struct.hpp"
// Member 'linear_velocity'
// Member 'angular_velocity'
#include "geometry_msgs/msg/detail/vector3__struct.hpp"
// Member 'route'
#include "planning_msgs/msg/detail/global_path__struct.hpp"
// Member 'sequence'
#include "web_navigation_msgs/msg/detail/sequence_waypoint__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__web_navigation_msgs__msg__NavigationState __attribute__((deprecated))
#else
# define DEPRECATED__web_navigation_msgs__msg__NavigationState __declspec(deprecated)
#endif

namespace web_navigation_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct NavigationState_
{
  using Type = NavigationState_<ContainerAllocator>;

  explicit NavigationState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    vehicle_pose(_init),
    linear_velocity(_init),
    angular_velocity(_init),
    effective_endpoint(_init),
    route(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->manager_boot_id = "";
      this->state_revision = 0ull;
      this->map_ready = false;
      this->map_version = "";
      this->map_name = "";
      this->frame_id = "";
      this->pose_fresh = false;
      this->navigation_synchronized = false;
      this->control_held = false;
      this->control_owner_label = "";
      this->control_epoch = 0ull;
      this->task_id = "";
      this->ros_goal_uuid = "";
      this->task_status = 0;
      this->task_status_text = "";
      this->request_id = "";
      this->task_device_label = "";
      this->requested_x = 0.0;
      this->requested_y = 0.0;
      this->path_revision = 0ul;
      this->error_code = "";
      this->error_message = "";
      this->sequence_index = 0ul;
      this->sequence_state = "";
      this->sequence_loop = false;
    }
  }

  explicit NavigationState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    manager_boot_id(_alloc),
    map_version(_alloc),
    map_name(_alloc),
    frame_id(_alloc),
    vehicle_pose(_alloc, _init),
    linear_velocity(_alloc, _init),
    angular_velocity(_alloc, _init),
    control_owner_label(_alloc),
    task_id(_alloc),
    ros_goal_uuid(_alloc),
    task_status_text(_alloc),
    request_id(_alloc),
    task_device_label(_alloc),
    effective_endpoint(_alloc, _init),
    route(_alloc, _init),
    error_code(_alloc),
    error_message(_alloc),
    sequence_state(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->manager_boot_id = "";
      this->state_revision = 0ull;
      this->map_ready = false;
      this->map_version = "";
      this->map_name = "";
      this->frame_id = "";
      this->pose_fresh = false;
      this->navigation_synchronized = false;
      this->control_held = false;
      this->control_owner_label = "";
      this->control_epoch = 0ull;
      this->task_id = "";
      this->ros_goal_uuid = "";
      this->task_status = 0;
      this->task_status_text = "";
      this->request_id = "";
      this->task_device_label = "";
      this->requested_x = 0.0;
      this->requested_y = 0.0;
      this->path_revision = 0ul;
      this->error_code = "";
      this->error_message = "";
      this->sequence_index = 0ul;
      this->sequence_state = "";
      this->sequence_loop = false;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _manager_boot_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _manager_boot_id_type manager_boot_id;
  using _state_revision_type =
    uint64_t;
  _state_revision_type state_revision;
  using _map_ready_type =
    bool;
  _map_ready_type map_ready;
  using _map_version_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _map_version_type map_version;
  using _map_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _map_name_type map_name;
  using _frame_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _frame_id_type frame_id;
  using _vehicle_pose_type =
    geometry_msgs::msg::Pose_<ContainerAllocator>;
  _vehicle_pose_type vehicle_pose;
  using _linear_velocity_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _linear_velocity_type linear_velocity;
  using _angular_velocity_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _angular_velocity_type angular_velocity;
  using _pose_fresh_type =
    bool;
  _pose_fresh_type pose_fresh;
  using _navigation_synchronized_type =
    bool;
  _navigation_synchronized_type navigation_synchronized;
  using _control_held_type =
    bool;
  _control_held_type control_held;
  using _control_owner_label_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _control_owner_label_type control_owner_label;
  using _control_epoch_type =
    uint64_t;
  _control_epoch_type control_epoch;
  using _task_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _task_id_type task_id;
  using _ros_goal_uuid_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _ros_goal_uuid_type ros_goal_uuid;
  using _task_status_type =
    uint8_t;
  _task_status_type task_status;
  using _task_status_text_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _task_status_text_type task_status_text;
  using _request_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _request_id_type request_id;
  using _task_device_label_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _task_device_label_type task_device_label;
  using _requested_x_type =
    double;
  _requested_x_type requested_x;
  using _requested_y_type =
    double;
  _requested_y_type requested_y;
  using _effective_endpoint_type =
    geometry_msgs::msg::Pose_<ContainerAllocator>;
  _effective_endpoint_type effective_endpoint;
  using _path_revision_type =
    uint32_t;
  _path_revision_type path_revision;
  using _route_type =
    planning_msgs::msg::GlobalPath_<ContainerAllocator>;
  _route_type route;
  using _error_code_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _error_code_type error_code;
  using _error_message_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _error_message_type error_message;
  using _sequence_type =
    std::vector<web_navigation_msgs::msg::SequenceWaypoint_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<web_navigation_msgs::msg::SequenceWaypoint_<ContainerAllocator>>>;
  _sequence_type sequence;
  using _sequence_index_type =
    uint32_t;
  _sequence_index_type sequence_index;
  using _sequence_state_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _sequence_state_type sequence_state;
  using _sequence_loop_type =
    bool;
  _sequence_loop_type sequence_loop;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__manager_boot_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->manager_boot_id = _arg;
    return *this;
  }
  Type & set__state_revision(
    const uint64_t & _arg)
  {
    this->state_revision = _arg;
    return *this;
  }
  Type & set__map_ready(
    const bool & _arg)
  {
    this->map_ready = _arg;
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
  Type & set__frame_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->frame_id = _arg;
    return *this;
  }
  Type & set__vehicle_pose(
    const geometry_msgs::msg::Pose_<ContainerAllocator> & _arg)
  {
    this->vehicle_pose = _arg;
    return *this;
  }
  Type & set__linear_velocity(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->linear_velocity = _arg;
    return *this;
  }
  Type & set__angular_velocity(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->angular_velocity = _arg;
    return *this;
  }
  Type & set__pose_fresh(
    const bool & _arg)
  {
    this->pose_fresh = _arg;
    return *this;
  }
  Type & set__navigation_synchronized(
    const bool & _arg)
  {
    this->navigation_synchronized = _arg;
    return *this;
  }
  Type & set__control_held(
    const bool & _arg)
  {
    this->control_held = _arg;
    return *this;
  }
  Type & set__control_owner_label(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->control_owner_label = _arg;
    return *this;
  }
  Type & set__control_epoch(
    const uint64_t & _arg)
  {
    this->control_epoch = _arg;
    return *this;
  }
  Type & set__task_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->task_id = _arg;
    return *this;
  }
  Type & set__ros_goal_uuid(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->ros_goal_uuid = _arg;
    return *this;
  }
  Type & set__task_status(
    const uint8_t & _arg)
  {
    this->task_status = _arg;
    return *this;
  }
  Type & set__task_status_text(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->task_status_text = _arg;
    return *this;
  }
  Type & set__request_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->request_id = _arg;
    return *this;
  }
  Type & set__task_device_label(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->task_device_label = _arg;
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
  Type & set__path_revision(
    const uint32_t & _arg)
  {
    this->path_revision = _arg;
    return *this;
  }
  Type & set__route(
    const planning_msgs::msg::GlobalPath_<ContainerAllocator> & _arg)
  {
    this->route = _arg;
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
  Type & set__sequence(
    const std::vector<web_navigation_msgs::msg::SequenceWaypoint_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<web_navigation_msgs::msg::SequenceWaypoint_<ContainerAllocator>>> & _arg)
  {
    this->sequence = _arg;
    return *this;
  }
  Type & set__sequence_index(
    const uint32_t & _arg)
  {
    this->sequence_index = _arg;
    return *this;
  }
  Type & set__sequence_state(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->sequence_state = _arg;
    return *this;
  }
  Type & set__sequence_loop(
    const bool & _arg)
  {
    this->sequence_loop = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t IDLE =
    0u;
  static constexpr uint8_t ACCEPTED =
    1u;
  static constexpr uint8_t PLANNING =
    2u;
  static constexpr uint8_t EXECUTING =
    3u;
  static constexpr uint8_t CANCELING =
    4u;
  static constexpr uint8_t SUCCEEDED =
    5u;
  static constexpr uint8_t FAILED =
    6u;
  static constexpr uint8_t CANCELED =
    7u;
  static constexpr uint8_t REJECTED =
    8u;
  static constexpr uint8_t CANCEL_FAILED =
    9u;
  static constexpr uint8_t UNKNOWN =
    10u;
  static constexpr uint8_t STOPPING =
    11u;
  static constexpr uint8_t WAITING =
    12u;
  static constexpr uint8_t PAUSED =
    13u;

  // pointer types
  using RawPtr =
    web_navigation_msgs::msg::NavigationState_<ContainerAllocator> *;
  using ConstRawPtr =
    const web_navigation_msgs::msg::NavigationState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<web_navigation_msgs::msg::NavigationState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<web_navigation_msgs::msg::NavigationState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      web_navigation_msgs::msg::NavigationState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<web_navigation_msgs::msg::NavigationState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      web_navigation_msgs::msg::NavigationState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<web_navigation_msgs::msg::NavigationState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<web_navigation_msgs::msg::NavigationState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<web_navigation_msgs::msg::NavigationState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__web_navigation_msgs__msg__NavigationState
    std::shared_ptr<web_navigation_msgs::msg::NavigationState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__web_navigation_msgs__msg__NavigationState
    std::shared_ptr<web_navigation_msgs::msg::NavigationState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const NavigationState_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->manager_boot_id != other.manager_boot_id) {
      return false;
    }
    if (this->state_revision != other.state_revision) {
      return false;
    }
    if (this->map_ready != other.map_ready) {
      return false;
    }
    if (this->map_version != other.map_version) {
      return false;
    }
    if (this->map_name != other.map_name) {
      return false;
    }
    if (this->frame_id != other.frame_id) {
      return false;
    }
    if (this->vehicle_pose != other.vehicle_pose) {
      return false;
    }
    if (this->linear_velocity != other.linear_velocity) {
      return false;
    }
    if (this->angular_velocity != other.angular_velocity) {
      return false;
    }
    if (this->pose_fresh != other.pose_fresh) {
      return false;
    }
    if (this->navigation_synchronized != other.navigation_synchronized) {
      return false;
    }
    if (this->control_held != other.control_held) {
      return false;
    }
    if (this->control_owner_label != other.control_owner_label) {
      return false;
    }
    if (this->control_epoch != other.control_epoch) {
      return false;
    }
    if (this->task_id != other.task_id) {
      return false;
    }
    if (this->ros_goal_uuid != other.ros_goal_uuid) {
      return false;
    }
    if (this->task_status != other.task_status) {
      return false;
    }
    if (this->task_status_text != other.task_status_text) {
      return false;
    }
    if (this->request_id != other.request_id) {
      return false;
    }
    if (this->task_device_label != other.task_device_label) {
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
    if (this->path_revision != other.path_revision) {
      return false;
    }
    if (this->route != other.route) {
      return false;
    }
    if (this->error_code != other.error_code) {
      return false;
    }
    if (this->error_message != other.error_message) {
      return false;
    }
    if (this->sequence != other.sequence) {
      return false;
    }
    if (this->sequence_index != other.sequence_index) {
      return false;
    }
    if (this->sequence_state != other.sequence_state) {
      return false;
    }
    if (this->sequence_loop != other.sequence_loop) {
      return false;
    }
    return true;
  }
  bool operator!=(const NavigationState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct NavigationState_

// alias to use template instance with default allocator
using NavigationState =
  web_navigation_msgs::msg::NavigationState_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t NavigationState_<ContainerAllocator>::IDLE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t NavigationState_<ContainerAllocator>::ACCEPTED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t NavigationState_<ContainerAllocator>::PLANNING;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t NavigationState_<ContainerAllocator>::EXECUTING;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t NavigationState_<ContainerAllocator>::CANCELING;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t NavigationState_<ContainerAllocator>::SUCCEEDED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t NavigationState_<ContainerAllocator>::FAILED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t NavigationState_<ContainerAllocator>::CANCELED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t NavigationState_<ContainerAllocator>::REJECTED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t NavigationState_<ContainerAllocator>::CANCEL_FAILED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t NavigationState_<ContainerAllocator>::UNKNOWN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t NavigationState_<ContainerAllocator>::STOPPING;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t NavigationState_<ContainerAllocator>::WAITING;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t NavigationState_<ContainerAllocator>::PAUSED;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace web_navigation_msgs

#endif  // WEB_NAVIGATION_MSGS__MSG__DETAIL__NAVIGATION_STATE__STRUCT_HPP_
