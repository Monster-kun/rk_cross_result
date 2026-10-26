#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};


#[link(name = "web_navigation_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__web_navigation_msgs__msg__SequenceWaypoint() -> *const std::ffi::c_void;
}

#[link(name = "web_navigation_msgs__rosidl_generator_c")]
extern "C" {
    fn web_navigation_msgs__msg__SequenceWaypoint__init(msg: *mut SequenceWaypoint) -> bool;
    fn web_navigation_msgs__msg__SequenceWaypoint__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SequenceWaypoint>, size: usize) -> bool;
    fn web_navigation_msgs__msg__SequenceWaypoint__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SequenceWaypoint>);
    fn web_navigation_msgs__msg__SequenceWaypoint__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SequenceWaypoint>, out_seq: *mut rosidl_runtime_rs::Sequence<SequenceWaypoint>) -> bool;
}

// Corresponds to web_navigation_msgs__msg__SequenceWaypoint
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SequenceWaypoint {

    // This member is not documented.
    #[allow(missing_docs)]
    pub annotation_id: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub name: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub x: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub y: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub lanelet_id: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub stop: bool,

}



impl Default for SequenceWaypoint {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !web_navigation_msgs__msg__SequenceWaypoint__init(&mut msg as *mut _) {
        panic!("Call to web_navigation_msgs__msg__SequenceWaypoint__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SequenceWaypoint {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { web_navigation_msgs__msg__SequenceWaypoint__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { web_navigation_msgs__msg__SequenceWaypoint__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { web_navigation_msgs__msg__SequenceWaypoint__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SequenceWaypoint {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SequenceWaypoint where Self: Sized {
  const TYPE_NAME: &'static str = "web_navigation_msgs/msg/SequenceWaypoint";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__web_navigation_msgs__msg__SequenceWaypoint() }
  }
}


#[link(name = "web_navigation_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__web_navigation_msgs__msg__NavigationState() -> *const std::ffi::c_void;
}

#[link(name = "web_navigation_msgs__rosidl_generator_c")]
extern "C" {
    fn web_navigation_msgs__msg__NavigationState__init(msg: *mut NavigationState) -> bool;
    fn web_navigation_msgs__msg__NavigationState__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<NavigationState>, size: usize) -> bool;
    fn web_navigation_msgs__msg__NavigationState__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<NavigationState>);
    fn web_navigation_msgs__msg__NavigationState__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<NavigationState>, out_seq: *mut rosidl_runtime_rs::Sequence<NavigationState>) -> bool;
}

// Corresponds to web_navigation_msgs__msg__NavigationState
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct NavigationState {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub manager_boot_id: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub state_revision: u64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub map_ready: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub map_version: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub map_name: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub frame_id: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub vehicle_pose: geometry_msgs::msg::rmw::Pose,


    // This member is not documented.
    #[allow(missing_docs)]
    pub linear_velocity: geometry_msgs::msg::rmw::Vector3,


    // This member is not documented.
    #[allow(missing_docs)]
    pub angular_velocity: geometry_msgs::msg::rmw::Vector3,


    // This member is not documented.
    #[allow(missing_docs)]
    pub pose_fresh: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub navigation_synchronized: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub control_held: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub control_owner_label: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub control_epoch: u64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub task_id: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub ros_goal_uuid: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub task_status: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub task_status_text: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub request_id: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub task_device_label: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub requested_x: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub requested_y: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub effective_endpoint: geometry_msgs::msg::rmw::Pose,


    // This member is not documented.
    #[allow(missing_docs)]
    pub path_revision: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub route: planning_msgs::msg::rmw::GlobalPath,


    // This member is not documented.
    #[allow(missing_docs)]
    pub error_code: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub error_message: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub sequence: rosidl_runtime_rs::Sequence<super::super::msg::rmw::SequenceWaypoint>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub sequence_index: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub sequence_state: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub sequence_loop: bool,

}

impl NavigationState {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const IDLE: u8 = 0;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const ACCEPTED: u8 = 1;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const PLANNING: u8 = 2;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const EXECUTING: u8 = 3;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const CANCELING: u8 = 4;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const SUCCEEDED: u8 = 5;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const FAILED: u8 = 6;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const CANCELED: u8 = 7;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const REJECTED: u8 = 8;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const CANCEL_FAILED: u8 = 9;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const UNKNOWN: u8 = 10;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const STOPPING: u8 = 11;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const WAITING: u8 = 12;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const PAUSED: u8 = 13;

}


impl Default for NavigationState {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !web_navigation_msgs__msg__NavigationState__init(&mut msg as *mut _) {
        panic!("Call to web_navigation_msgs__msg__NavigationState__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for NavigationState {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { web_navigation_msgs__msg__NavigationState__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { web_navigation_msgs__msg__NavigationState__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { web_navigation_msgs__msg__NavigationState__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for NavigationState {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for NavigationState where Self: Sized {
  const TYPE_NAME: &'static str = "web_navigation_msgs/msg/NavigationState";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__web_navigation_msgs__msg__NavigationState() }
  }
}


#[link(name = "web_navigation_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__web_navigation_msgs__msg__RvizGoalFeedback() -> *const std::ffi::c_void;
}

#[link(name = "web_navigation_msgs__rosidl_generator_c")]
extern "C" {
    fn web_navigation_msgs__msg__RvizGoalFeedback__init(msg: *mut RvizGoalFeedback) -> bool;
    fn web_navigation_msgs__msg__RvizGoalFeedback__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<RvizGoalFeedback>, size: usize) -> bool;
    fn web_navigation_msgs__msg__RvizGoalFeedback__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<RvizGoalFeedback>);
    fn web_navigation_msgs__msg__RvizGoalFeedback__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<RvizGoalFeedback>, out_seq: *mut rosidl_runtime_rs::Sequence<RvizGoalFeedback>) -> bool;
}

// Corresponds to web_navigation_msgs__msg__RvizGoalFeedback
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct RvizGoalFeedback {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub manager_boot_id: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub status: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub request_id: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub task_id: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub code: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub staged_waypoints: u32,

}

impl RvizGoalFeedback {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const STAGED: u8 = 0;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const ACCEPTED: u8 = 1;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const REJECTED: u8 = 2;

}


impl Default for RvizGoalFeedback {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !web_navigation_msgs__msg__RvizGoalFeedback__init(&mut msg as *mut _) {
        panic!("Call to web_navigation_msgs__msg__RvizGoalFeedback__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for RvizGoalFeedback {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { web_navigation_msgs__msg__RvizGoalFeedback__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { web_navigation_msgs__msg__RvizGoalFeedback__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { web_navigation_msgs__msg__RvizGoalFeedback__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for RvizGoalFeedback {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for RvizGoalFeedback where Self: Sized {
  const TYPE_NAME: &'static str = "web_navigation_msgs/msg/RvizGoalFeedback";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__web_navigation_msgs__msg__RvizGoalFeedback() }
  }
}


#[link(name = "web_navigation_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__web_navigation_msgs__msg__PlanningEvent() -> *const std::ffi::c_void;
}

#[link(name = "web_navigation_msgs__rosidl_generator_c")]
extern "C" {
    fn web_navigation_msgs__msg__PlanningEvent__init(msg: *mut PlanningEvent) -> bool;
    fn web_navigation_msgs__msg__PlanningEvent__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<PlanningEvent>, size: usize) -> bool;
    fn web_navigation_msgs__msg__PlanningEvent__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<PlanningEvent>);
    fn web_navigation_msgs__msg__PlanningEvent__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<PlanningEvent>, out_seq: *mut rosidl_runtime_rs::Sequence<PlanningEvent>) -> bool;
}

// Corresponds to web_navigation_msgs__msg__PlanningEvent
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct PlanningEvent {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub task_id: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub ros_goal_uuid: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub map_version: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub planning_attempt_id: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub status: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub path_revision: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub effective_endpoint: geometry_msgs::msg::rmw::Pose,


    // This member is not documented.
    #[allow(missing_docs)]
    pub error_code: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub error_message: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub path: planning_msgs::msg::rmw::GlobalPath,

}

impl PlanningEvent {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const STARTED: u8 = 0;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const SUCCEEDED: u8 = 1;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const FAILED: u8 = 2;

}


impl Default for PlanningEvent {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !web_navigation_msgs__msg__PlanningEvent__init(&mut msg as *mut _) {
        panic!("Call to web_navigation_msgs__msg__PlanningEvent__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for PlanningEvent {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { web_navigation_msgs__msg__PlanningEvent__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { web_navigation_msgs__msg__PlanningEvent__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { web_navigation_msgs__msg__PlanningEvent__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for PlanningEvent {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for PlanningEvent where Self: Sized {
  const TYPE_NAME: &'static str = "web_navigation_msgs/msg/PlanningEvent";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__web_navigation_msgs__msg__PlanningEvent() }
  }
}


#[link(name = "web_navigation_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__web_navigation_msgs__msg__NavigationExecution() -> *const std::ffi::c_void;
}

#[link(name = "web_navigation_msgs__rosidl_generator_c")]
extern "C" {
    fn web_navigation_msgs__msg__NavigationExecution__init(msg: *mut NavigationExecution) -> bool;
    fn web_navigation_msgs__msg__NavigationExecution__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<NavigationExecution>, size: usize) -> bool;
    fn web_navigation_msgs__msg__NavigationExecution__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<NavigationExecution>);
    fn web_navigation_msgs__msg__NavigationExecution__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<NavigationExecution>, out_seq: *mut rosidl_runtime_rs::Sequence<NavigationExecution>) -> bool;
}

// Corresponds to web_navigation_msgs__msg__NavigationExecution
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// One active goal in the navigator's atomic execution snapshot.

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct NavigationExecution {

    // This member is not documented.
    #[allow(missing_docs)]
    pub ros_goal_uuid: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub task_id: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub map_version: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub status: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub goals: rosidl_runtime_rs::Sequence<geometry_msgs::msg::rmw::PoseStamped>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub endpoint: geometry_msgs::msg::rmw::PoseStamped,

}



impl Default for NavigationExecution {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !web_navigation_msgs__msg__NavigationExecution__init(&mut msg as *mut _) {
        panic!("Call to web_navigation_msgs__msg__NavigationExecution__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for NavigationExecution {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { web_navigation_msgs__msg__NavigationExecution__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { web_navigation_msgs__msg__NavigationExecution__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { web_navigation_msgs__msg__NavigationExecution__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for NavigationExecution {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for NavigationExecution where Self: Sized {
  const TYPE_NAME: &'static str = "web_navigation_msgs/msg/NavigationExecution";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__web_navigation_msgs__msg__NavigationExecution() }
  }
}


