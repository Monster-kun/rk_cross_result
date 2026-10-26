#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};


#[link(name = "planning_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__planning_msgs__msg__Path() -> *const std::ffi::c_void;
}

#[link(name = "planning_msgs__rosidl_generator_c")]
extern "C" {
    fn planning_msgs__msg__Path__init(msg: *mut Path) -> bool;
    fn planning_msgs__msg__Path__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Path>, size: usize) -> bool;
    fn planning_msgs__msg__Path__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Path>);
    fn planning_msgs__msg__Path__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Path>, out_seq: *mut rosidl_runtime_rs::Sequence<Path>) -> bool;
}

// Corresponds to planning_msgs__msg__Path
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// Contains a PathPoint path and left and right bound.

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Path {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub points: rosidl_runtime_rs::Sequence<super::super::msg::rmw::PathPoint>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub left_bound: rosidl_runtime_rs::Sequence<geometry_msgs::msg::rmw::Point>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub right_bound: rosidl_runtime_rs::Sequence<geometry_msgs::msg::rmw::Point>,

}



impl Default for Path {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !planning_msgs__msg__Path__init(&mut msg as *mut _) {
        panic!("Call to planning_msgs__msg__Path__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Path {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { planning_msgs__msg__Path__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { planning_msgs__msg__Path__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { planning_msgs__msg__Path__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Path {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Path where Self: Sized {
  const TYPE_NAME: &'static str = "planning_msgs/msg/Path";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__planning_msgs__msg__Path() }
  }
}


#[link(name = "planning_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__planning_msgs__msg__PathPoint() -> *const std::ffi::c_void;
}

#[link(name = "planning_msgs__rosidl_generator_c")]
extern "C" {
    fn planning_msgs__msg__PathPoint__init(msg: *mut PathPoint) -> bool;
    fn planning_msgs__msg__PathPoint__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<PathPoint>, size: usize) -> bool;
    fn planning_msgs__msg__PathPoint__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<PathPoint>);
    fn planning_msgs__msg__PathPoint__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<PathPoint>, out_seq: *mut rosidl_runtime_rs::Sequence<PathPoint>) -> bool;
}

// Corresponds to planning_msgs__msg__PathPoint
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// Represents a pose from a lanelet map, contains twist information.

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct PathPoint {

    // This member is not documented.
    #[allow(missing_docs)]
    pub pose: geometry_msgs::msg::rmw::Pose,


    // This member is not documented.
    #[allow(missing_docs)]
    pub longitudinal_velocity_mps: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub lateral_velocity_mps: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub heading_rate_rps: f32,

    /// Denotes that the point is final, doesn't need further updates.
    pub is_final: bool,

}



impl Default for PathPoint {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !planning_msgs__msg__PathPoint__init(&mut msg as *mut _) {
        panic!("Call to planning_msgs__msg__PathPoint__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for PathPoint {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { planning_msgs__msg__PathPoint__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { planning_msgs__msg__PathPoint__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { planning_msgs__msg__PathPoint__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for PathPoint {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for PathPoint where Self: Sized {
  const TYPE_NAME: &'static str = "planning_msgs/msg/PathPoint";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__planning_msgs__msg__PathPoint() }
  }
}


#[link(name = "planning_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__planning_msgs__msg__PathWithLaneId() -> *const std::ffi::c_void;
}

#[link(name = "planning_msgs__rosidl_generator_c")]
extern "C" {
    fn planning_msgs__msg__PathWithLaneId__init(msg: *mut PathWithLaneId) -> bool;
    fn planning_msgs__msg__PathWithLaneId__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<PathWithLaneId>, size: usize) -> bool;
    fn planning_msgs__msg__PathWithLaneId__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<PathWithLaneId>);
    fn planning_msgs__msg__PathWithLaneId__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<PathWithLaneId>, out_seq: *mut rosidl_runtime_rs::Sequence<PathWithLaneId>) -> bool;
}

// Corresponds to planning_msgs__msg__PathWithLaneId
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// Contains a PathPointWithLaneId path and left and right bound.

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct PathWithLaneId {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub points: rosidl_runtime_rs::Sequence<super::super::msg::rmw::PathPointWithLaneId>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub left_bound: rosidl_runtime_rs::Sequence<geometry_msgs::msg::rmw::Point>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub right_bound: rosidl_runtime_rs::Sequence<geometry_msgs::msg::rmw::Point>,

}



impl Default for PathWithLaneId {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !planning_msgs__msg__PathWithLaneId__init(&mut msg as *mut _) {
        panic!("Call to planning_msgs__msg__PathWithLaneId__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for PathWithLaneId {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { planning_msgs__msg__PathWithLaneId__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { planning_msgs__msg__PathWithLaneId__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { planning_msgs__msg__PathWithLaneId__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for PathWithLaneId {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for PathWithLaneId where Self: Sized {
  const TYPE_NAME: &'static str = "planning_msgs/msg/PathWithLaneId";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__planning_msgs__msg__PathWithLaneId() }
  }
}


#[link(name = "planning_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__planning_msgs__msg__PathPointWithLaneId() -> *const std::ffi::c_void;
}

#[link(name = "planning_msgs__rosidl_generator_c")]
extern "C" {
    fn planning_msgs__msg__PathPointWithLaneId__init(msg: *mut PathPointWithLaneId) -> bool;
    fn planning_msgs__msg__PathPointWithLaneId__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<PathPointWithLaneId>, size: usize) -> bool;
    fn planning_msgs__msg__PathPointWithLaneId__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<PathPointWithLaneId>);
    fn planning_msgs__msg__PathPointWithLaneId__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<PathPointWithLaneId>, out_seq: *mut rosidl_runtime_rs::Sequence<PathPointWithLaneId>) -> bool;
}

// Corresponds to planning_msgs__msg__PathPointWithLaneId
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// Contains a PathPoint and lanelet lane_id information.

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct PathPointWithLaneId {

    // This member is not documented.
    #[allow(missing_docs)]
    pub point: super::super::msg::rmw::PathPoint,

    /// Lanelet lane_id information.
    pub lane_ids: rosidl_runtime_rs::Sequence<i64>,

}



impl Default for PathPointWithLaneId {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !planning_msgs__msg__PathPointWithLaneId__init(&mut msg as *mut _) {
        panic!("Call to planning_msgs__msg__PathPointWithLaneId__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for PathPointWithLaneId {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { planning_msgs__msg__PathPointWithLaneId__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { planning_msgs__msg__PathPointWithLaneId__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { planning_msgs__msg__PathPointWithLaneId__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for PathPointWithLaneId {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for PathPointWithLaneId where Self: Sized {
  const TYPE_NAME: &'static str = "planning_msgs/msg/PathPointWithLaneId";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__planning_msgs__msg__PathPointWithLaneId() }
  }
}


#[link(name = "planning_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__planning_msgs__msg__Trajectory() -> *const std::ffi::c_void;
}

#[link(name = "planning_msgs__rosidl_generator_c")]
extern "C" {
    fn planning_msgs__msg__Trajectory__init(msg: *mut Trajectory) -> bool;
    fn planning_msgs__msg__Trajectory__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Trajectory>, size: usize) -> bool;
    fn planning_msgs__msg__Trajectory__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Trajectory>);
    fn planning_msgs__msg__Trajectory__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Trajectory>, out_seq: *mut rosidl_runtime_rs::Sequence<Trajectory>) -> bool;
}

// Corresponds to planning_msgs__msg__Trajectory
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Trajectory {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub start_time: builtin_interfaces::msg::rmw::Time,


    // This member is not documented.
    #[allow(missing_docs)]
    pub waypoints: rosidl_runtime_rs::Sequence<super::super::msg::rmw::Waypoint>,

}



impl Default for Trajectory {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !planning_msgs__msg__Trajectory__init(&mut msg as *mut _) {
        panic!("Call to planning_msgs__msg__Trajectory__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Trajectory {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { planning_msgs__msg__Trajectory__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { planning_msgs__msg__Trajectory__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { planning_msgs__msg__Trajectory__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Trajectory {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Trajectory where Self: Sized {
  const TYPE_NAME: &'static str = "planning_msgs/msg/Trajectory";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__planning_msgs__msg__Trajectory() }
  }
}


#[link(name = "planning_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__planning_msgs__msg__MincoTraj() -> *const std::ffi::c_void;
}

#[link(name = "planning_msgs__rosidl_generator_c")]
extern "C" {
    fn planning_msgs__msg__MincoTraj__init(msg: *mut MincoTraj) -> bool;
    fn planning_msgs__msg__MincoTraj__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<MincoTraj>, size: usize) -> bool;
    fn planning_msgs__msg__MincoTraj__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<MincoTraj>);
    fn planning_msgs__msg__MincoTraj__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<MincoTraj>, out_seq: *mut rosidl_runtime_rs::Sequence<MincoTraj>) -> bool;
}

// Corresponds to planning_msgs__msg__MincoTraj
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MincoTraj {

    // This member is not documented.
    #[allow(missing_docs)]
    pub start_time: builtin_interfaces::msg::rmw::Time,


    // This member is not documented.
    #[allow(missing_docs)]
    pub end_time: f64,

    /// if true, use the normal trajectory
    pub use_init: bool,

    /// target angle
    pub yaw: f64,

    /// minco trajectory
    pub head_x: geometry_msgs::msg::rmw::Vector3,


    // This member is not documented.
    #[allow(missing_docs)]
    pub head_y: geometry_msgs::msg::rmw::Vector3,


    // This member is not documented.
    #[allow(missing_docs)]
    pub tail_x: geometry_msgs::msg::rmw::Vector3,


    // This member is not documented.
    #[allow(missing_docs)]
    pub tail_y: geometry_msgs::msg::rmw::Vector3,


    // This member is not documented.
    #[allow(missing_docs)]
    pub t_pts: rosidl_runtime_rs::Sequence<f64>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub pos_pts: rosidl_runtime_rs::Sequence<geometry_msgs::msg::rmw::Point>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub yaw_pts: rosidl_runtime_rs::Sequence<f64>,

    /// normal trajectory
    pub waypoints: rosidl_runtime_rs::Sequence<super::super::msg::rmw::Waypoint>,

}



impl Default for MincoTraj {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !planning_msgs__msg__MincoTraj__init(&mut msg as *mut _) {
        panic!("Call to planning_msgs__msg__MincoTraj__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for MincoTraj {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { planning_msgs__msg__MincoTraj__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { planning_msgs__msg__MincoTraj__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { planning_msgs__msg__MincoTraj__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for MincoTraj {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for MincoTraj where Self: Sized {
  const TYPE_NAME: &'static str = "planning_msgs/msg/MincoTraj";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__planning_msgs__msg__MincoTraj() }
  }
}


#[link(name = "planning_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__planning_msgs__msg__Waypoint() -> *const std::ffi::c_void;
}

#[link(name = "planning_msgs__rosidl_generator_c")]
extern "C" {
    fn planning_msgs__msg__Waypoint__init(msg: *mut Waypoint) -> bool;
    fn planning_msgs__msg__Waypoint__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Waypoint>, size: usize) -> bool;
    fn planning_msgs__msg__Waypoint__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Waypoint>);
    fn planning_msgs__msg__Waypoint__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Waypoint>, out_seq: *mut rosidl_runtime_rs::Sequence<Waypoint>) -> bool;
}

// Corresponds to planning_msgs__msg__Waypoint
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Waypoint {

    // This member is not documented.
    #[allow(missing_docs)]
    pub point: geometry_msgs::msg::rmw::Point,


    // This member is not documented.
    #[allow(missing_docs)]
    pub time: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub s: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub theta: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub kappa: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub dkappa: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub ddkappa: f32,

    /// velocity
    pub v: f32,

    /// acceleration
    pub a: f32,

    /// jerk
    pub j: f32,

    /// angular velocity
    pub w: f32,

}



impl Default for Waypoint {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !planning_msgs__msg__Waypoint__init(&mut msg as *mut _) {
        panic!("Call to planning_msgs__msg__Waypoint__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Waypoint {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { planning_msgs__msg__Waypoint__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { planning_msgs__msg__Waypoint__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { planning_msgs__msg__Waypoint__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Waypoint {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Waypoint where Self: Sized {
  const TYPE_NAME: &'static str = "planning_msgs/msg/Waypoint";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__planning_msgs__msg__Waypoint() }
  }
}


#[link(name = "planning_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__planning_msgs__msg__LaneletPrimitive() -> *const std::ffi::c_void;
}

#[link(name = "planning_msgs__rosidl_generator_c")]
extern "C" {
    fn planning_msgs__msg__LaneletPrimitive__init(msg: *mut LaneletPrimitive) -> bool;
    fn planning_msgs__msg__LaneletPrimitive__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<LaneletPrimitive>, size: usize) -> bool;
    fn planning_msgs__msg__LaneletPrimitive__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<LaneletPrimitive>);
    fn planning_msgs__msg__LaneletPrimitive__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<LaneletPrimitive>, out_seq: *mut rosidl_runtime_rs::Sequence<LaneletPrimitive>) -> bool;
}

// Corresponds to planning_msgs__msg__LaneletPrimitive
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct LaneletPrimitive {

    // This member is not documented.
    #[allow(missing_docs)]
    pub id: i64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub primitive_type: rosidl_runtime_rs::String,

}



impl Default for LaneletPrimitive {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !planning_msgs__msg__LaneletPrimitive__init(&mut msg as *mut _) {
        panic!("Call to planning_msgs__msg__LaneletPrimitive__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for LaneletPrimitive {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { planning_msgs__msg__LaneletPrimitive__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { planning_msgs__msg__LaneletPrimitive__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { planning_msgs__msg__LaneletPrimitive__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for LaneletPrimitive {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for LaneletPrimitive where Self: Sized {
  const TYPE_NAME: &'static str = "planning_msgs/msg/LaneletPrimitive";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__planning_msgs__msg__LaneletPrimitive() }
  }
}


#[link(name = "planning_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__planning_msgs__msg__LaneletRoute() -> *const std::ffi::c_void;
}

#[link(name = "planning_msgs__rosidl_generator_c")]
extern "C" {
    fn planning_msgs__msg__LaneletRoute__init(msg: *mut LaneletRoute) -> bool;
    fn planning_msgs__msg__LaneletRoute__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<LaneletRoute>, size: usize) -> bool;
    fn planning_msgs__msg__LaneletRoute__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<LaneletRoute>);
    fn planning_msgs__msg__LaneletRoute__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<LaneletRoute>, out_seq: *mut rosidl_runtime_rs::Sequence<LaneletRoute>) -> bool;
}

// Corresponds to planning_msgs__msg__LaneletRoute
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct LaneletRoute {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub start_pose: geometry_msgs::msg::rmw::Pose,


    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_pose: geometry_msgs::msg::rmw::Pose,


    // This member is not documented.
    #[allow(missing_docs)]
    pub segments: rosidl_runtime_rs::Sequence<super::super::msg::rmw::LaneletSegment>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub uuid: unique_identifier_msgs::msg::rmw::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub allow_modification: bool,

}



impl Default for LaneletRoute {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !planning_msgs__msg__LaneletRoute__init(&mut msg as *mut _) {
        panic!("Call to planning_msgs__msg__LaneletRoute__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for LaneletRoute {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { planning_msgs__msg__LaneletRoute__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { planning_msgs__msg__LaneletRoute__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { planning_msgs__msg__LaneletRoute__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for LaneletRoute {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for LaneletRoute where Self: Sized {
  const TYPE_NAME: &'static str = "planning_msgs/msg/LaneletRoute";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__planning_msgs__msg__LaneletRoute() }
  }
}


#[link(name = "planning_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__planning_msgs__msg__LaneletSegment() -> *const std::ffi::c_void;
}

#[link(name = "planning_msgs__rosidl_generator_c")]
extern "C" {
    fn planning_msgs__msg__LaneletSegment__init(msg: *mut LaneletSegment) -> bool;
    fn planning_msgs__msg__LaneletSegment__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<LaneletSegment>, size: usize) -> bool;
    fn planning_msgs__msg__LaneletSegment__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<LaneletSegment>);
    fn planning_msgs__msg__LaneletSegment__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<LaneletSegment>, out_seq: *mut rosidl_runtime_rs::Sequence<LaneletSegment>) -> bool;
}

// Corresponds to planning_msgs__msg__LaneletSegment
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct LaneletSegment {

    // This member is not documented.
    #[allow(missing_docs)]
    pub preferred_primitive: super::super::msg::rmw::LaneletPrimitive,


    // This member is not documented.
    #[allow(missing_docs)]
    pub primitives: rosidl_runtime_rs::Sequence<super::super::msg::rmw::LaneletPrimitive>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub left_bound: super::super::msg::rmw::LaneletPrimitive,


    // This member is not documented.
    #[allow(missing_docs)]
    pub right_bound: super::super::msg::rmw::LaneletPrimitive,


    // This member is not documented.
    #[allow(missing_docs)]
    pub is_inverted: bool,

}



impl Default for LaneletSegment {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !planning_msgs__msg__LaneletSegment__init(&mut msg as *mut _) {
        panic!("Call to planning_msgs__msg__LaneletSegment__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for LaneletSegment {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { planning_msgs__msg__LaneletSegment__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { planning_msgs__msg__LaneletSegment__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { planning_msgs__msg__LaneletSegment__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for LaneletSegment {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for LaneletSegment where Self: Sized {
  const TYPE_NAME: &'static str = "planning_msgs/msg/LaneletSegment";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__planning_msgs__msg__LaneletSegment() }
  }
}


#[link(name = "planning_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__planning_msgs__msg__GlobalPath() -> *const std::ffi::c_void;
}

#[link(name = "planning_msgs__rosidl_generator_c")]
extern "C" {
    fn planning_msgs__msg__GlobalPath__init(msg: *mut GlobalPath) -> bool;
    fn planning_msgs__msg__GlobalPath__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GlobalPath>, size: usize) -> bool;
    fn planning_msgs__msg__GlobalPath__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GlobalPath>);
    fn planning_msgs__msg__GlobalPath__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GlobalPath>, out_seq: *mut rosidl_runtime_rs::Sequence<GlobalPath>) -> bool;
}

// Corresponds to planning_msgs__msg__GlobalPath
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GlobalPath {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub main_trajectory: super::super::msg::rmw::Trajectory,


    // This member is not documented.
    #[allow(missing_docs)]
    pub left_bound: rosidl_runtime_rs::Sequence<geometry_msgs::msg::rmw::Point>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub right_bound: rosidl_runtime_rs::Sequence<geometry_msgs::msg::rmw::Point>,

    /// Path progress (metres from the first trajectory waypoint) for each boundary point.
    /// These keep each boundary point attached to its position along the route.
    pub left_bound_s: rosidl_runtime_rs::Sequence<f64>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub right_bound_s: rosidl_runtime_rs::Sequence<f64>,

    /// Ordered intermediate endpoints that must be reached before the final goal.
    pub checkpoint_indices: rosidl_runtime_rs::Sequence<u32>,

    /// Repeat the closed suffix beginning at loop_start_index without ending FollowPath.
    pub loop_: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub loop_start_index: u32,

    /// Bounds are resampled independently; their cycle offsets are not waypoint indices.
    pub loop_left_bound_start_index: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub loop_right_bound_start_index: u32,

}



impl Default for GlobalPath {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !planning_msgs__msg__GlobalPath__init(&mut msg as *mut _) {
        panic!("Call to planning_msgs__msg__GlobalPath__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GlobalPath {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { planning_msgs__msg__GlobalPath__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { planning_msgs__msg__GlobalPath__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { planning_msgs__msg__GlobalPath__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GlobalPath {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GlobalPath where Self: Sized {
  const TYPE_NAME: &'static str = "planning_msgs/msg/GlobalPath";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__planning_msgs__msg__GlobalPath() }
  }
}


