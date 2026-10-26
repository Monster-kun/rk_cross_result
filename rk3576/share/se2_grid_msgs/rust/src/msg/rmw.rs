#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};


#[link(name = "se2_grid_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__se2_grid_msgs__msg__SE2GridInfo() -> *const std::ffi::c_void;
}

#[link(name = "se2_grid_msgs__rosidl_generator_c")]
extern "C" {
    fn se2_grid_msgs__msg__SE2GridInfo__init(msg: *mut SE2GridInfo) -> bool;
    fn se2_grid_msgs__msg__SE2GridInfo__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SE2GridInfo>, size: usize) -> bool;
    fn se2_grid_msgs__msg__SE2GridInfo__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SE2GridInfo>);
    fn se2_grid_msgs__msg__SE2GridInfo__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SE2GridInfo>, out_seq: *mut rosidl_runtime_rs::Sequence<SE2GridInfo>) -> bool;
}

// Corresponds to se2_grid_msgs__msg__SE2GridInfo
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SE2GridInfo {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,

    /// Resolution of the grid in position.
    pub pos_resolution: f64,

    /// Resolution of the grid in yaw.
    pub yaw_resolution: f64,

    /// Length in x-direction.
    pub length_x: f64,

    /// Length in y-direction.
    pub length_y: f64,

    /// Length in yaw-direction.
    pub length_yaw: f64,

    /// Pose of the se2 grid center in the frame defined in `header`.
    pub pose: geometry_msgs::msg::rmw::Pose,

}



impl Default for SE2GridInfo {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !se2_grid_msgs__msg__SE2GridInfo__init(&mut msg as *mut _) {
        panic!("Call to se2_grid_msgs__msg__SE2GridInfo__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SE2GridInfo {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { se2_grid_msgs__msg__SE2GridInfo__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { se2_grid_msgs__msg__SE2GridInfo__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { se2_grid_msgs__msg__SE2GridInfo__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SE2GridInfo {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SE2GridInfo where Self: Sized {
  const TYPE_NAME: &'static str = "se2_grid_msgs/msg/SE2GridInfo";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__se2_grid_msgs__msg__SE2GridInfo() }
  }
}


#[link(name = "se2_grid_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__se2_grid_msgs__msg__SE2Grid() -> *const std::ffi::c_void;
}

#[link(name = "se2_grid_msgs__rosidl_generator_c")]
extern "C" {
    fn se2_grid_msgs__msg__SE2Grid__init(msg: *mut SE2Grid) -> bool;
    fn se2_grid_msgs__msg__SE2Grid__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SE2Grid>, size: usize) -> bool;
    fn se2_grid_msgs__msg__SE2Grid__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SE2Grid>);
    fn se2_grid_msgs__msg__SE2Grid__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SE2Grid>, out_seq: *mut rosidl_runtime_rs::Sequence<SE2Grid>) -> bool;
}

// Corresponds to se2_grid_msgs__msg__SE2Grid
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SE2Grid {

    // This member is not documented.
    #[allow(missing_docs)]
    pub info: super::super::msg::rmw::SE2GridInfo,

    /// layer names.
    pub layers: rosidl_runtime_rs::Sequence<rosidl_runtime_rs::String>,

    /// if has SO(2) info.
    pub has_so2: rosidl_runtime_rs::Sequence<bool>,

    /// Grid map data.
    pub data: rosidl_runtime_rs::Sequence<std_msgs::msg::rmw::Float32MultiArray>,

    /// Row start index (default 0).
    pub start_index_row: u16,

    /// Column start index (default 0).
    pub start_index_col: u16,

}



impl Default for SE2Grid {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !se2_grid_msgs__msg__SE2Grid__init(&mut msg as *mut _) {
        panic!("Call to se2_grid_msgs__msg__SE2Grid__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SE2Grid {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { se2_grid_msgs__msg__SE2Grid__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { se2_grid_msgs__msg__SE2Grid__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { se2_grid_msgs__msg__SE2Grid__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SE2Grid {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SE2Grid where Self: Sized {
  const TYPE_NAME: &'static str = "se2_grid_msgs/msg/SE2Grid";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__se2_grid_msgs__msg__SE2Grid() }
  }
}


