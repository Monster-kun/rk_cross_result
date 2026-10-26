
#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};


#[link(name = "behavior_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__behavior_msgs__action__ComputePathToPose_Goal() -> *const std::ffi::c_void;
}

#[link(name = "behavior_msgs__rosidl_generator_c")]
extern "C" {
    fn behavior_msgs__action__ComputePathToPose_Goal__init(msg: *mut ComputePathToPose_Goal) -> bool;
    fn behavior_msgs__action__ComputePathToPose_Goal__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ComputePathToPose_Goal>, size: usize) -> bool;
    fn behavior_msgs__action__ComputePathToPose_Goal__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ComputePathToPose_Goal>);
    fn behavior_msgs__action__ComputePathToPose_Goal__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ComputePathToPose_Goal>, out_seq: *mut rosidl_runtime_rs::Sequence<ComputePathToPose_Goal>) -> bool;
}

// Corresponds to behavior_msgs__action__ComputePathToPose_Goal
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ComputePathToPose_Goal {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal: geometry_msgs::msg::rmw::PoseStamped,

    /// Optional fixed start for planning the next leg before reaching its start.
    pub start: geometry_msgs::msg::rmw::PoseStamped,


    // This member is not documented.
    #[allow(missing_docs)]
    pub use_start: bool,

    /// Return a private prefetched leg; its caller publishes the active reference.
    pub defer_publication: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub through_goals: rosidl_runtime_rs::Sequence<geometry_msgs::msg::rmw::PoseStamped>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub loop_goals: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub global_planner_id: rosidl_runtime_rs::String,


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

}



impl Default for ComputePathToPose_Goal {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !behavior_msgs__action__ComputePathToPose_Goal__init(&mut msg as *mut _) {
        panic!("Call to behavior_msgs__action__ComputePathToPose_Goal__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ComputePathToPose_Goal {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { behavior_msgs__action__ComputePathToPose_Goal__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { behavior_msgs__action__ComputePathToPose_Goal__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { behavior_msgs__action__ComputePathToPose_Goal__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ComputePathToPose_Goal {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ComputePathToPose_Goal where Self: Sized {
  const TYPE_NAME: &'static str = "behavior_msgs/action/ComputePathToPose_Goal";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__behavior_msgs__action__ComputePathToPose_Goal() }
  }
}


#[link(name = "behavior_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__behavior_msgs__action__ComputePathToPose_Result() -> *const std::ffi::c_void;
}

#[link(name = "behavior_msgs__rosidl_generator_c")]
extern "C" {
    fn behavior_msgs__action__ComputePathToPose_Result__init(msg: *mut ComputePathToPose_Result) -> bool;
    fn behavior_msgs__action__ComputePathToPose_Result__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ComputePathToPose_Result>, size: usize) -> bool;
    fn behavior_msgs__action__ComputePathToPose_Result__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ComputePathToPose_Result>);
    fn behavior_msgs__action__ComputePathToPose_Result__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ComputePathToPose_Result>, out_seq: *mut rosidl_runtime_rs::Sequence<ComputePathToPose_Result>) -> bool;
}

// Corresponds to behavior_msgs__action__ComputePathToPose_Result
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ComputePathToPose_Result {

    // This member is not documented.
    #[allow(missing_docs)]
    pub path: planning_msgs::msg::rmw::GlobalPath,


    // This member is not documented.
    #[allow(missing_docs)]
    pub error_code: u16,


    // This member is not documented.
    #[allow(missing_docs)]
    pub error_msg: rosidl_runtime_rs::String,

}



impl Default for ComputePathToPose_Result {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !behavior_msgs__action__ComputePathToPose_Result__init(&mut msg as *mut _) {
        panic!("Call to behavior_msgs__action__ComputePathToPose_Result__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ComputePathToPose_Result {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { behavior_msgs__action__ComputePathToPose_Result__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { behavior_msgs__action__ComputePathToPose_Result__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { behavior_msgs__action__ComputePathToPose_Result__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ComputePathToPose_Result {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ComputePathToPose_Result where Self: Sized {
  const TYPE_NAME: &'static str = "behavior_msgs/action/ComputePathToPose_Result";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__behavior_msgs__action__ComputePathToPose_Result() }
  }
}


#[link(name = "behavior_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__behavior_msgs__action__ComputePathToPose_Feedback() -> *const std::ffi::c_void;
}

#[link(name = "behavior_msgs__rosidl_generator_c")]
extern "C" {
    fn behavior_msgs__action__ComputePathToPose_Feedback__init(msg: *mut ComputePathToPose_Feedback) -> bool;
    fn behavior_msgs__action__ComputePathToPose_Feedback__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ComputePathToPose_Feedback>, size: usize) -> bool;
    fn behavior_msgs__action__ComputePathToPose_Feedback__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ComputePathToPose_Feedback>);
    fn behavior_msgs__action__ComputePathToPose_Feedback__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ComputePathToPose_Feedback>, out_seq: *mut rosidl_runtime_rs::Sequence<ComputePathToPose_Feedback>) -> bool;
}

// Corresponds to behavior_msgs__action__ComputePathToPose_Feedback
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ComputePathToPose_Feedback {

    // This member is not documented.
    #[allow(missing_docs)]
    pub structure_needs_at_least_one_member: u8,

}



impl Default for ComputePathToPose_Feedback {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !behavior_msgs__action__ComputePathToPose_Feedback__init(&mut msg as *mut _) {
        panic!("Call to behavior_msgs__action__ComputePathToPose_Feedback__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ComputePathToPose_Feedback {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { behavior_msgs__action__ComputePathToPose_Feedback__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { behavior_msgs__action__ComputePathToPose_Feedback__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { behavior_msgs__action__ComputePathToPose_Feedback__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ComputePathToPose_Feedback {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ComputePathToPose_Feedback where Self: Sized {
  const TYPE_NAME: &'static str = "behavior_msgs/action/ComputePathToPose_Feedback";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__behavior_msgs__action__ComputePathToPose_Feedback() }
  }
}


#[link(name = "behavior_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__behavior_msgs__action__ComputePathToPose_FeedbackMessage() -> *const std::ffi::c_void;
}

#[link(name = "behavior_msgs__rosidl_generator_c")]
extern "C" {
    fn behavior_msgs__action__ComputePathToPose_FeedbackMessage__init(msg: *mut ComputePathToPose_FeedbackMessage) -> bool;
    fn behavior_msgs__action__ComputePathToPose_FeedbackMessage__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ComputePathToPose_FeedbackMessage>, size: usize) -> bool;
    fn behavior_msgs__action__ComputePathToPose_FeedbackMessage__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ComputePathToPose_FeedbackMessage>);
    fn behavior_msgs__action__ComputePathToPose_FeedbackMessage__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ComputePathToPose_FeedbackMessage>, out_seq: *mut rosidl_runtime_rs::Sequence<ComputePathToPose_FeedbackMessage>) -> bool;
}

// Corresponds to behavior_msgs__action__ComputePathToPose_FeedbackMessage
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ComputePathToPose_FeedbackMessage {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub feedback: super::super::action::rmw::ComputePathToPose_Feedback,

}



impl Default for ComputePathToPose_FeedbackMessage {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !behavior_msgs__action__ComputePathToPose_FeedbackMessage__init(&mut msg as *mut _) {
        panic!("Call to behavior_msgs__action__ComputePathToPose_FeedbackMessage__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ComputePathToPose_FeedbackMessage {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { behavior_msgs__action__ComputePathToPose_FeedbackMessage__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { behavior_msgs__action__ComputePathToPose_FeedbackMessage__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { behavior_msgs__action__ComputePathToPose_FeedbackMessage__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ComputePathToPose_FeedbackMessage {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ComputePathToPose_FeedbackMessage where Self: Sized {
  const TYPE_NAME: &'static str = "behavior_msgs/action/ComputePathToPose_FeedbackMessage";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__behavior_msgs__action__ComputePathToPose_FeedbackMessage() }
  }
}


#[link(name = "behavior_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__behavior_msgs__action__NavigateThroughPoses_Goal() -> *const std::ffi::c_void;
}

#[link(name = "behavior_msgs__rosidl_generator_c")]
extern "C" {
    fn behavior_msgs__action__NavigateThroughPoses_Goal__init(msg: *mut NavigateThroughPoses_Goal) -> bool;
    fn behavior_msgs__action__NavigateThroughPoses_Goal__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<NavigateThroughPoses_Goal>, size: usize) -> bool;
    fn behavior_msgs__action__NavigateThroughPoses_Goal__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<NavigateThroughPoses_Goal>);
    fn behavior_msgs__action__NavigateThroughPoses_Goal__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<NavigateThroughPoses_Goal>, out_seq: *mut rosidl_runtime_rs::Sequence<NavigateThroughPoses_Goal>) -> bool;
}

// Corresponds to behavior_msgs__action__NavigateThroughPoses_Goal
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct NavigateThroughPoses_Goal {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goals: rosidl_runtime_rs::Sequence<geometry_msgs::msg::rmw::PoseStamped>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_pose: geometry_msgs::msg::rmw::PoseStamped,


    // This member is not documented.
    #[allow(missing_docs)]
    pub task_id: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub map_version: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub behavior_tree: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub loop_goals: bool,

}



impl Default for NavigateThroughPoses_Goal {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !behavior_msgs__action__NavigateThroughPoses_Goal__init(&mut msg as *mut _) {
        panic!("Call to behavior_msgs__action__NavigateThroughPoses_Goal__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for NavigateThroughPoses_Goal {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { behavior_msgs__action__NavigateThroughPoses_Goal__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { behavior_msgs__action__NavigateThroughPoses_Goal__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { behavior_msgs__action__NavigateThroughPoses_Goal__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for NavigateThroughPoses_Goal {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for NavigateThroughPoses_Goal where Self: Sized {
  const TYPE_NAME: &'static str = "behavior_msgs/action/NavigateThroughPoses_Goal";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__behavior_msgs__action__NavigateThroughPoses_Goal() }
  }
}


#[link(name = "behavior_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__behavior_msgs__action__NavigateThroughPoses_Result() -> *const std::ffi::c_void;
}

#[link(name = "behavior_msgs__rosidl_generator_c")]
extern "C" {
    fn behavior_msgs__action__NavigateThroughPoses_Result__init(msg: *mut NavigateThroughPoses_Result) -> bool;
    fn behavior_msgs__action__NavigateThroughPoses_Result__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<NavigateThroughPoses_Result>, size: usize) -> bool;
    fn behavior_msgs__action__NavigateThroughPoses_Result__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<NavigateThroughPoses_Result>);
    fn behavior_msgs__action__NavigateThroughPoses_Result__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<NavigateThroughPoses_Result>, out_seq: *mut rosidl_runtime_rs::Sequence<NavigateThroughPoses_Result>) -> bool;
}

// Corresponds to behavior_msgs__action__NavigateThroughPoses_Result
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct NavigateThroughPoses_Result {

    // This member is not documented.
    #[allow(missing_docs)]
    pub error_code: u16,


    // This member is not documented.
    #[allow(missing_docs)]
    pub error_msg: rosidl_runtime_rs::String,

}

impl NavigateThroughPoses_Result {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const NONE: u16 = 0;

}


impl Default for NavigateThroughPoses_Result {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !behavior_msgs__action__NavigateThroughPoses_Result__init(&mut msg as *mut _) {
        panic!("Call to behavior_msgs__action__NavigateThroughPoses_Result__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for NavigateThroughPoses_Result {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { behavior_msgs__action__NavigateThroughPoses_Result__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { behavior_msgs__action__NavigateThroughPoses_Result__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { behavior_msgs__action__NavigateThroughPoses_Result__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for NavigateThroughPoses_Result {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for NavigateThroughPoses_Result where Self: Sized {
  const TYPE_NAME: &'static str = "behavior_msgs/action/NavigateThroughPoses_Result";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__behavior_msgs__action__NavigateThroughPoses_Result() }
  }
}


#[link(name = "behavior_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__behavior_msgs__action__NavigateThroughPoses_Feedback() -> *const std::ffi::c_void;
}

#[link(name = "behavior_msgs__rosidl_generator_c")]
extern "C" {
    fn behavior_msgs__action__NavigateThroughPoses_Feedback__init(msg: *mut NavigateThroughPoses_Feedback) -> bool;
    fn behavior_msgs__action__NavigateThroughPoses_Feedback__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<NavigateThroughPoses_Feedback>, size: usize) -> bool;
    fn behavior_msgs__action__NavigateThroughPoses_Feedback__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<NavigateThroughPoses_Feedback>);
    fn behavior_msgs__action__NavigateThroughPoses_Feedback__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<NavigateThroughPoses_Feedback>, out_seq: *mut rosidl_runtime_rs::Sequence<NavigateThroughPoses_Feedback>) -> bool;
}

// Corresponds to behavior_msgs__action__NavigateThroughPoses_Feedback
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct NavigateThroughPoses_Feedback {

    // This member is not documented.
    #[allow(missing_docs)]
    pub navigation_time: builtin_interfaces::msg::rmw::Duration,


    // This member is not documented.
    #[allow(missing_docs)]
    pub number_of_recoveries: i16,


    // This member is not documented.
    #[allow(missing_docs)]
    pub number_of_goal_remaining: i16,

}



impl Default for NavigateThroughPoses_Feedback {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !behavior_msgs__action__NavigateThroughPoses_Feedback__init(&mut msg as *mut _) {
        panic!("Call to behavior_msgs__action__NavigateThroughPoses_Feedback__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for NavigateThroughPoses_Feedback {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { behavior_msgs__action__NavigateThroughPoses_Feedback__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { behavior_msgs__action__NavigateThroughPoses_Feedback__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { behavior_msgs__action__NavigateThroughPoses_Feedback__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for NavigateThroughPoses_Feedback {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for NavigateThroughPoses_Feedback where Self: Sized {
  const TYPE_NAME: &'static str = "behavior_msgs/action/NavigateThroughPoses_Feedback";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__behavior_msgs__action__NavigateThroughPoses_Feedback() }
  }
}


#[link(name = "behavior_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__behavior_msgs__action__NavigateThroughPoses_FeedbackMessage() -> *const std::ffi::c_void;
}

#[link(name = "behavior_msgs__rosidl_generator_c")]
extern "C" {
    fn behavior_msgs__action__NavigateThroughPoses_FeedbackMessage__init(msg: *mut NavigateThroughPoses_FeedbackMessage) -> bool;
    fn behavior_msgs__action__NavigateThroughPoses_FeedbackMessage__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<NavigateThroughPoses_FeedbackMessage>, size: usize) -> bool;
    fn behavior_msgs__action__NavigateThroughPoses_FeedbackMessage__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<NavigateThroughPoses_FeedbackMessage>);
    fn behavior_msgs__action__NavigateThroughPoses_FeedbackMessage__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<NavigateThroughPoses_FeedbackMessage>, out_seq: *mut rosidl_runtime_rs::Sequence<NavigateThroughPoses_FeedbackMessage>) -> bool;
}

// Corresponds to behavior_msgs__action__NavigateThroughPoses_FeedbackMessage
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct NavigateThroughPoses_FeedbackMessage {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub feedback: super::super::action::rmw::NavigateThroughPoses_Feedback,

}



impl Default for NavigateThroughPoses_FeedbackMessage {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !behavior_msgs__action__NavigateThroughPoses_FeedbackMessage__init(&mut msg as *mut _) {
        panic!("Call to behavior_msgs__action__NavigateThroughPoses_FeedbackMessage__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for NavigateThroughPoses_FeedbackMessage {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { behavior_msgs__action__NavigateThroughPoses_FeedbackMessage__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { behavior_msgs__action__NavigateThroughPoses_FeedbackMessage__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { behavior_msgs__action__NavigateThroughPoses_FeedbackMessage__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for NavigateThroughPoses_FeedbackMessage {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for NavigateThroughPoses_FeedbackMessage where Self: Sized {
  const TYPE_NAME: &'static str = "behavior_msgs/action/NavigateThroughPoses_FeedbackMessage";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__behavior_msgs__action__NavigateThroughPoses_FeedbackMessage() }
  }
}


#[link(name = "behavior_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__behavior_msgs__action__FollowPath_Goal() -> *const std::ffi::c_void;
}

#[link(name = "behavior_msgs__rosidl_generator_c")]
extern "C" {
    fn behavior_msgs__action__FollowPath_Goal__init(msg: *mut FollowPath_Goal) -> bool;
    fn behavior_msgs__action__FollowPath_Goal__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<FollowPath_Goal>, size: usize) -> bool;
    fn behavior_msgs__action__FollowPath_Goal__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<FollowPath_Goal>);
    fn behavior_msgs__action__FollowPath_Goal__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<FollowPath_Goal>, out_seq: *mut rosidl_runtime_rs::Sequence<FollowPath_Goal>) -> bool;
}

// Corresponds to behavior_msgs__action__FollowPath_Goal
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct FollowPath_Goal {

    // This member is not documented.
    #[allow(missing_docs)]
    pub path: planning_msgs::msg::rmw::GlobalPath,


    // This member is not documented.
    #[allow(missing_docs)]
    pub local_planner_id: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub plan_once: bool,

    /// Keep a pass-through leg alive while the next reference is being prepared.
    pub keep_running: bool,

    /// "distance" or "angle" or "all"
    pub progress_checking_mode: rosidl_runtime_rs::String,

}



impl Default for FollowPath_Goal {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !behavior_msgs__action__FollowPath_Goal__init(&mut msg as *mut _) {
        panic!("Call to behavior_msgs__action__FollowPath_Goal__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for FollowPath_Goal {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { behavior_msgs__action__FollowPath_Goal__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { behavior_msgs__action__FollowPath_Goal__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { behavior_msgs__action__FollowPath_Goal__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for FollowPath_Goal {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for FollowPath_Goal where Self: Sized {
  const TYPE_NAME: &'static str = "behavior_msgs/action/FollowPath_Goal";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__behavior_msgs__action__FollowPath_Goal() }
  }
}


#[link(name = "behavior_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__behavior_msgs__action__FollowPath_Result() -> *const std::ffi::c_void;
}

#[link(name = "behavior_msgs__rosidl_generator_c")]
extern "C" {
    fn behavior_msgs__action__FollowPath_Result__init(msg: *mut FollowPath_Result) -> bool;
    fn behavior_msgs__action__FollowPath_Result__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<FollowPath_Result>, size: usize) -> bool;
    fn behavior_msgs__action__FollowPath_Result__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<FollowPath_Result>);
    fn behavior_msgs__action__FollowPath_Result__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<FollowPath_Result>, out_seq: *mut rosidl_runtime_rs::Sequence<FollowPath_Result>) -> bool;
}

// Corresponds to behavior_msgs__action__FollowPath_Result
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct FollowPath_Result {
    /// result
    pub result: std_msgs::msg::rmw::Empty,


    // This member is not documented.
    #[allow(missing_docs)]
    pub error_code: u16,


    // This member is not documented.
    #[allow(missing_docs)]
    pub error_msg: rosidl_runtime_rs::String,

}

impl FollowPath_Result {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const NONE: u16 = 0;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const UNKNOWN: u16 = 100;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const INVALID_PLANNER: u16 = 101;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const INVALID_PATH: u16 = 102;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const PATIENCE_EXCEEDED: u16 = 103;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const FAILED_TO_MAKE_PROGRESS: u16 = 104;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const NO_VALID_PLAN: u16 = 105;

}


impl Default for FollowPath_Result {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !behavior_msgs__action__FollowPath_Result__init(&mut msg as *mut _) {
        panic!("Call to behavior_msgs__action__FollowPath_Result__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for FollowPath_Result {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { behavior_msgs__action__FollowPath_Result__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { behavior_msgs__action__FollowPath_Result__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { behavior_msgs__action__FollowPath_Result__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for FollowPath_Result {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for FollowPath_Result where Self: Sized {
  const TYPE_NAME: &'static str = "behavior_msgs/action/FollowPath_Result";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__behavior_msgs__action__FollowPath_Result() }
  }
}


#[link(name = "behavior_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__behavior_msgs__action__FollowPath_Feedback() -> *const std::ffi::c_void;
}

#[link(name = "behavior_msgs__rosidl_generator_c")]
extern "C" {
    fn behavior_msgs__action__FollowPath_Feedback__init(msg: *mut FollowPath_Feedback) -> bool;
    fn behavior_msgs__action__FollowPath_Feedback__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<FollowPath_Feedback>, size: usize) -> bool;
    fn behavior_msgs__action__FollowPath_Feedback__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<FollowPath_Feedback>);
    fn behavior_msgs__action__FollowPath_Feedback__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<FollowPath_Feedback>, out_seq: *mut rosidl_runtime_rs::Sequence<FollowPath_Feedback>) -> bool;
}

// Corresponds to behavior_msgs__action__FollowPath_Feedback
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct FollowPath_Feedback {

    // This member is not documented.
    #[allow(missing_docs)]
    pub distance_to_goal: f32,

}



impl Default for FollowPath_Feedback {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !behavior_msgs__action__FollowPath_Feedback__init(&mut msg as *mut _) {
        panic!("Call to behavior_msgs__action__FollowPath_Feedback__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for FollowPath_Feedback {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { behavior_msgs__action__FollowPath_Feedback__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { behavior_msgs__action__FollowPath_Feedback__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { behavior_msgs__action__FollowPath_Feedback__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for FollowPath_Feedback {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for FollowPath_Feedback where Self: Sized {
  const TYPE_NAME: &'static str = "behavior_msgs/action/FollowPath_Feedback";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__behavior_msgs__action__FollowPath_Feedback() }
  }
}


#[link(name = "behavior_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__behavior_msgs__action__FollowPath_FeedbackMessage() -> *const std::ffi::c_void;
}

#[link(name = "behavior_msgs__rosidl_generator_c")]
extern "C" {
    fn behavior_msgs__action__FollowPath_FeedbackMessage__init(msg: *mut FollowPath_FeedbackMessage) -> bool;
    fn behavior_msgs__action__FollowPath_FeedbackMessage__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<FollowPath_FeedbackMessage>, size: usize) -> bool;
    fn behavior_msgs__action__FollowPath_FeedbackMessage__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<FollowPath_FeedbackMessage>);
    fn behavior_msgs__action__FollowPath_FeedbackMessage__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<FollowPath_FeedbackMessage>, out_seq: *mut rosidl_runtime_rs::Sequence<FollowPath_FeedbackMessage>) -> bool;
}

// Corresponds to behavior_msgs__action__FollowPath_FeedbackMessage
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct FollowPath_FeedbackMessage {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub feedback: super::super::action::rmw::FollowPath_Feedback,

}



impl Default for FollowPath_FeedbackMessage {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !behavior_msgs__action__FollowPath_FeedbackMessage__init(&mut msg as *mut _) {
        panic!("Call to behavior_msgs__action__FollowPath_FeedbackMessage__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for FollowPath_FeedbackMessage {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { behavior_msgs__action__FollowPath_FeedbackMessage__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { behavior_msgs__action__FollowPath_FeedbackMessage__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { behavior_msgs__action__FollowPath_FeedbackMessage__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for FollowPath_FeedbackMessage {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for FollowPath_FeedbackMessage where Self: Sized {
  const TYPE_NAME: &'static str = "behavior_msgs/action/FollowPath_FeedbackMessage";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__behavior_msgs__action__FollowPath_FeedbackMessage() }
  }
}


#[link(name = "behavior_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__behavior_msgs__action__FollowPoint_Goal() -> *const std::ffi::c_void;
}

#[link(name = "behavior_msgs__rosidl_generator_c")]
extern "C" {
    fn behavior_msgs__action__FollowPoint_Goal__init(msg: *mut FollowPoint_Goal) -> bool;
    fn behavior_msgs__action__FollowPoint_Goal__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<FollowPoint_Goal>, size: usize) -> bool;
    fn behavior_msgs__action__FollowPoint_Goal__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<FollowPoint_Goal>);
    fn behavior_msgs__action__FollowPoint_Goal__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<FollowPoint_Goal>, out_seq: *mut rosidl_runtime_rs::Sequence<FollowPoint_Goal>) -> bool;
}

// Corresponds to behavior_msgs__action__FollowPoint_Goal
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct FollowPoint_Goal {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal: geometry_msgs::msg::rmw::PoseStamped,


    // This member is not documented.
    #[allow(missing_docs)]
    pub local_planner_id: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub plan_once: bool,

    /// "distance" or "angle" or "all"
    pub progress_checking_mode: rosidl_runtime_rs::String,

}



impl Default for FollowPoint_Goal {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !behavior_msgs__action__FollowPoint_Goal__init(&mut msg as *mut _) {
        panic!("Call to behavior_msgs__action__FollowPoint_Goal__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for FollowPoint_Goal {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { behavior_msgs__action__FollowPoint_Goal__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { behavior_msgs__action__FollowPoint_Goal__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { behavior_msgs__action__FollowPoint_Goal__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for FollowPoint_Goal {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for FollowPoint_Goal where Self: Sized {
  const TYPE_NAME: &'static str = "behavior_msgs/action/FollowPoint_Goal";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__behavior_msgs__action__FollowPoint_Goal() }
  }
}


#[link(name = "behavior_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__behavior_msgs__action__FollowPoint_Result() -> *const std::ffi::c_void;
}

#[link(name = "behavior_msgs__rosidl_generator_c")]
extern "C" {
    fn behavior_msgs__action__FollowPoint_Result__init(msg: *mut FollowPoint_Result) -> bool;
    fn behavior_msgs__action__FollowPoint_Result__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<FollowPoint_Result>, size: usize) -> bool;
    fn behavior_msgs__action__FollowPoint_Result__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<FollowPoint_Result>);
    fn behavior_msgs__action__FollowPoint_Result__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<FollowPoint_Result>, out_seq: *mut rosidl_runtime_rs::Sequence<FollowPoint_Result>) -> bool;
}

// Corresponds to behavior_msgs__action__FollowPoint_Result
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct FollowPoint_Result {
    /// result
    pub result: std_msgs::msg::rmw::Empty,


    // This member is not documented.
    #[allow(missing_docs)]
    pub error_code: u16,


    // This member is not documented.
    #[allow(missing_docs)]
    pub error_msg: rosidl_runtime_rs::String,

}

impl FollowPoint_Result {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const NONE: u16 = 0;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const UNKNOWN: u16 = 100;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const INVALID_PLANNER: u16 = 101;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const INVALID_PATH: u16 = 102;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const PATIENCE_EXCEEDED: u16 = 103;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const FAILED_TO_MAKE_PROGRESS: u16 = 104;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const NO_VALID_PLAN: u16 = 105;

}


impl Default for FollowPoint_Result {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !behavior_msgs__action__FollowPoint_Result__init(&mut msg as *mut _) {
        panic!("Call to behavior_msgs__action__FollowPoint_Result__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for FollowPoint_Result {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { behavior_msgs__action__FollowPoint_Result__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { behavior_msgs__action__FollowPoint_Result__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { behavior_msgs__action__FollowPoint_Result__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for FollowPoint_Result {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for FollowPoint_Result where Self: Sized {
  const TYPE_NAME: &'static str = "behavior_msgs/action/FollowPoint_Result";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__behavior_msgs__action__FollowPoint_Result() }
  }
}


#[link(name = "behavior_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__behavior_msgs__action__FollowPoint_Feedback() -> *const std::ffi::c_void;
}

#[link(name = "behavior_msgs__rosidl_generator_c")]
extern "C" {
    fn behavior_msgs__action__FollowPoint_Feedback__init(msg: *mut FollowPoint_Feedback) -> bool;
    fn behavior_msgs__action__FollowPoint_Feedback__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<FollowPoint_Feedback>, size: usize) -> bool;
    fn behavior_msgs__action__FollowPoint_Feedback__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<FollowPoint_Feedback>);
    fn behavior_msgs__action__FollowPoint_Feedback__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<FollowPoint_Feedback>, out_seq: *mut rosidl_runtime_rs::Sequence<FollowPoint_Feedback>) -> bool;
}

// Corresponds to behavior_msgs__action__FollowPoint_Feedback
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct FollowPoint_Feedback {

    // This member is not documented.
    #[allow(missing_docs)]
    pub distance_to_goal: f32,

}



impl Default for FollowPoint_Feedback {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !behavior_msgs__action__FollowPoint_Feedback__init(&mut msg as *mut _) {
        panic!("Call to behavior_msgs__action__FollowPoint_Feedback__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for FollowPoint_Feedback {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { behavior_msgs__action__FollowPoint_Feedback__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { behavior_msgs__action__FollowPoint_Feedback__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { behavior_msgs__action__FollowPoint_Feedback__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for FollowPoint_Feedback {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for FollowPoint_Feedback where Self: Sized {
  const TYPE_NAME: &'static str = "behavior_msgs/action/FollowPoint_Feedback";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__behavior_msgs__action__FollowPoint_Feedback() }
  }
}


#[link(name = "behavior_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__behavior_msgs__action__FollowPoint_FeedbackMessage() -> *const std::ffi::c_void;
}

#[link(name = "behavior_msgs__rosidl_generator_c")]
extern "C" {
    fn behavior_msgs__action__FollowPoint_FeedbackMessage__init(msg: *mut FollowPoint_FeedbackMessage) -> bool;
    fn behavior_msgs__action__FollowPoint_FeedbackMessage__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<FollowPoint_FeedbackMessage>, size: usize) -> bool;
    fn behavior_msgs__action__FollowPoint_FeedbackMessage__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<FollowPoint_FeedbackMessage>);
    fn behavior_msgs__action__FollowPoint_FeedbackMessage__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<FollowPoint_FeedbackMessage>, out_seq: *mut rosidl_runtime_rs::Sequence<FollowPoint_FeedbackMessage>) -> bool;
}

// Corresponds to behavior_msgs__action__FollowPoint_FeedbackMessage
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct FollowPoint_FeedbackMessage {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub feedback: super::super::action::rmw::FollowPoint_Feedback,

}



impl Default for FollowPoint_FeedbackMessage {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !behavior_msgs__action__FollowPoint_FeedbackMessage__init(&mut msg as *mut _) {
        panic!("Call to behavior_msgs__action__FollowPoint_FeedbackMessage__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for FollowPoint_FeedbackMessage {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { behavior_msgs__action__FollowPoint_FeedbackMessage__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { behavior_msgs__action__FollowPoint_FeedbackMessage__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { behavior_msgs__action__FollowPoint_FeedbackMessage__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for FollowPoint_FeedbackMessage {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for FollowPoint_FeedbackMessage where Self: Sized {
  const TYPE_NAME: &'static str = "behavior_msgs/action/FollowPoint_FeedbackMessage";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__behavior_msgs__action__FollowPoint_FeedbackMessage() }
  }
}




#[link(name = "behavior_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__behavior_msgs__action__ComputePathToPose_SendGoal_Request() -> *const std::ffi::c_void;
}

#[link(name = "behavior_msgs__rosidl_generator_c")]
extern "C" {
    fn behavior_msgs__action__ComputePathToPose_SendGoal_Request__init(msg: *mut ComputePathToPose_SendGoal_Request) -> bool;
    fn behavior_msgs__action__ComputePathToPose_SendGoal_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ComputePathToPose_SendGoal_Request>, size: usize) -> bool;
    fn behavior_msgs__action__ComputePathToPose_SendGoal_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ComputePathToPose_SendGoal_Request>);
    fn behavior_msgs__action__ComputePathToPose_SendGoal_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ComputePathToPose_SendGoal_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<ComputePathToPose_SendGoal_Request>) -> bool;
}

// Corresponds to behavior_msgs__action__ComputePathToPose_SendGoal_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ComputePathToPose_SendGoal_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub goal: super::super::action::rmw::ComputePathToPose_Goal,

}



impl Default for ComputePathToPose_SendGoal_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !behavior_msgs__action__ComputePathToPose_SendGoal_Request__init(&mut msg as *mut _) {
        panic!("Call to behavior_msgs__action__ComputePathToPose_SendGoal_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ComputePathToPose_SendGoal_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { behavior_msgs__action__ComputePathToPose_SendGoal_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { behavior_msgs__action__ComputePathToPose_SendGoal_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { behavior_msgs__action__ComputePathToPose_SendGoal_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ComputePathToPose_SendGoal_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ComputePathToPose_SendGoal_Request where Self: Sized {
  const TYPE_NAME: &'static str = "behavior_msgs/action/ComputePathToPose_SendGoal_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__behavior_msgs__action__ComputePathToPose_SendGoal_Request() }
  }
}


#[link(name = "behavior_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__behavior_msgs__action__ComputePathToPose_SendGoal_Response() -> *const std::ffi::c_void;
}

#[link(name = "behavior_msgs__rosidl_generator_c")]
extern "C" {
    fn behavior_msgs__action__ComputePathToPose_SendGoal_Response__init(msg: *mut ComputePathToPose_SendGoal_Response) -> bool;
    fn behavior_msgs__action__ComputePathToPose_SendGoal_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ComputePathToPose_SendGoal_Response>, size: usize) -> bool;
    fn behavior_msgs__action__ComputePathToPose_SendGoal_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ComputePathToPose_SendGoal_Response>);
    fn behavior_msgs__action__ComputePathToPose_SendGoal_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ComputePathToPose_SendGoal_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<ComputePathToPose_SendGoal_Response>) -> bool;
}

// Corresponds to behavior_msgs__action__ComputePathToPose_SendGoal_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ComputePathToPose_SendGoal_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub accepted: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub stamp: builtin_interfaces::msg::rmw::Time,

}



impl Default for ComputePathToPose_SendGoal_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !behavior_msgs__action__ComputePathToPose_SendGoal_Response__init(&mut msg as *mut _) {
        panic!("Call to behavior_msgs__action__ComputePathToPose_SendGoal_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ComputePathToPose_SendGoal_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { behavior_msgs__action__ComputePathToPose_SendGoal_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { behavior_msgs__action__ComputePathToPose_SendGoal_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { behavior_msgs__action__ComputePathToPose_SendGoal_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ComputePathToPose_SendGoal_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ComputePathToPose_SendGoal_Response where Self: Sized {
  const TYPE_NAME: &'static str = "behavior_msgs/action/ComputePathToPose_SendGoal_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__behavior_msgs__action__ComputePathToPose_SendGoal_Response() }
  }
}


#[link(name = "behavior_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__behavior_msgs__action__ComputePathToPose_GetResult_Request() -> *const std::ffi::c_void;
}

#[link(name = "behavior_msgs__rosidl_generator_c")]
extern "C" {
    fn behavior_msgs__action__ComputePathToPose_GetResult_Request__init(msg: *mut ComputePathToPose_GetResult_Request) -> bool;
    fn behavior_msgs__action__ComputePathToPose_GetResult_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ComputePathToPose_GetResult_Request>, size: usize) -> bool;
    fn behavior_msgs__action__ComputePathToPose_GetResult_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ComputePathToPose_GetResult_Request>);
    fn behavior_msgs__action__ComputePathToPose_GetResult_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ComputePathToPose_GetResult_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<ComputePathToPose_GetResult_Request>) -> bool;
}

// Corresponds to behavior_msgs__action__ComputePathToPose_GetResult_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ComputePathToPose_GetResult_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,

}



impl Default for ComputePathToPose_GetResult_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !behavior_msgs__action__ComputePathToPose_GetResult_Request__init(&mut msg as *mut _) {
        panic!("Call to behavior_msgs__action__ComputePathToPose_GetResult_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ComputePathToPose_GetResult_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { behavior_msgs__action__ComputePathToPose_GetResult_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { behavior_msgs__action__ComputePathToPose_GetResult_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { behavior_msgs__action__ComputePathToPose_GetResult_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ComputePathToPose_GetResult_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ComputePathToPose_GetResult_Request where Self: Sized {
  const TYPE_NAME: &'static str = "behavior_msgs/action/ComputePathToPose_GetResult_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__behavior_msgs__action__ComputePathToPose_GetResult_Request() }
  }
}


#[link(name = "behavior_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__behavior_msgs__action__ComputePathToPose_GetResult_Response() -> *const std::ffi::c_void;
}

#[link(name = "behavior_msgs__rosidl_generator_c")]
extern "C" {
    fn behavior_msgs__action__ComputePathToPose_GetResult_Response__init(msg: *mut ComputePathToPose_GetResult_Response) -> bool;
    fn behavior_msgs__action__ComputePathToPose_GetResult_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ComputePathToPose_GetResult_Response>, size: usize) -> bool;
    fn behavior_msgs__action__ComputePathToPose_GetResult_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ComputePathToPose_GetResult_Response>);
    fn behavior_msgs__action__ComputePathToPose_GetResult_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ComputePathToPose_GetResult_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<ComputePathToPose_GetResult_Response>) -> bool;
}

// Corresponds to behavior_msgs__action__ComputePathToPose_GetResult_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ComputePathToPose_GetResult_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub status: i8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub result: super::super::action::rmw::ComputePathToPose_Result,

}



impl Default for ComputePathToPose_GetResult_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !behavior_msgs__action__ComputePathToPose_GetResult_Response__init(&mut msg as *mut _) {
        panic!("Call to behavior_msgs__action__ComputePathToPose_GetResult_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ComputePathToPose_GetResult_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { behavior_msgs__action__ComputePathToPose_GetResult_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { behavior_msgs__action__ComputePathToPose_GetResult_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { behavior_msgs__action__ComputePathToPose_GetResult_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ComputePathToPose_GetResult_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ComputePathToPose_GetResult_Response where Self: Sized {
  const TYPE_NAME: &'static str = "behavior_msgs/action/ComputePathToPose_GetResult_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__behavior_msgs__action__ComputePathToPose_GetResult_Response() }
  }
}


#[link(name = "behavior_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__behavior_msgs__action__NavigateThroughPoses_SendGoal_Request() -> *const std::ffi::c_void;
}

#[link(name = "behavior_msgs__rosidl_generator_c")]
extern "C" {
    fn behavior_msgs__action__NavigateThroughPoses_SendGoal_Request__init(msg: *mut NavigateThroughPoses_SendGoal_Request) -> bool;
    fn behavior_msgs__action__NavigateThroughPoses_SendGoal_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<NavigateThroughPoses_SendGoal_Request>, size: usize) -> bool;
    fn behavior_msgs__action__NavigateThroughPoses_SendGoal_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<NavigateThroughPoses_SendGoal_Request>);
    fn behavior_msgs__action__NavigateThroughPoses_SendGoal_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<NavigateThroughPoses_SendGoal_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<NavigateThroughPoses_SendGoal_Request>) -> bool;
}

// Corresponds to behavior_msgs__action__NavigateThroughPoses_SendGoal_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct NavigateThroughPoses_SendGoal_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub goal: super::super::action::rmw::NavigateThroughPoses_Goal,

}



impl Default for NavigateThroughPoses_SendGoal_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !behavior_msgs__action__NavigateThroughPoses_SendGoal_Request__init(&mut msg as *mut _) {
        panic!("Call to behavior_msgs__action__NavigateThroughPoses_SendGoal_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for NavigateThroughPoses_SendGoal_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { behavior_msgs__action__NavigateThroughPoses_SendGoal_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { behavior_msgs__action__NavigateThroughPoses_SendGoal_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { behavior_msgs__action__NavigateThroughPoses_SendGoal_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for NavigateThroughPoses_SendGoal_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for NavigateThroughPoses_SendGoal_Request where Self: Sized {
  const TYPE_NAME: &'static str = "behavior_msgs/action/NavigateThroughPoses_SendGoal_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__behavior_msgs__action__NavigateThroughPoses_SendGoal_Request() }
  }
}


#[link(name = "behavior_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__behavior_msgs__action__NavigateThroughPoses_SendGoal_Response() -> *const std::ffi::c_void;
}

#[link(name = "behavior_msgs__rosidl_generator_c")]
extern "C" {
    fn behavior_msgs__action__NavigateThroughPoses_SendGoal_Response__init(msg: *mut NavigateThroughPoses_SendGoal_Response) -> bool;
    fn behavior_msgs__action__NavigateThroughPoses_SendGoal_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<NavigateThroughPoses_SendGoal_Response>, size: usize) -> bool;
    fn behavior_msgs__action__NavigateThroughPoses_SendGoal_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<NavigateThroughPoses_SendGoal_Response>);
    fn behavior_msgs__action__NavigateThroughPoses_SendGoal_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<NavigateThroughPoses_SendGoal_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<NavigateThroughPoses_SendGoal_Response>) -> bool;
}

// Corresponds to behavior_msgs__action__NavigateThroughPoses_SendGoal_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct NavigateThroughPoses_SendGoal_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub accepted: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub stamp: builtin_interfaces::msg::rmw::Time,

}



impl Default for NavigateThroughPoses_SendGoal_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !behavior_msgs__action__NavigateThroughPoses_SendGoal_Response__init(&mut msg as *mut _) {
        panic!("Call to behavior_msgs__action__NavigateThroughPoses_SendGoal_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for NavigateThroughPoses_SendGoal_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { behavior_msgs__action__NavigateThroughPoses_SendGoal_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { behavior_msgs__action__NavigateThroughPoses_SendGoal_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { behavior_msgs__action__NavigateThroughPoses_SendGoal_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for NavigateThroughPoses_SendGoal_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for NavigateThroughPoses_SendGoal_Response where Self: Sized {
  const TYPE_NAME: &'static str = "behavior_msgs/action/NavigateThroughPoses_SendGoal_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__behavior_msgs__action__NavigateThroughPoses_SendGoal_Response() }
  }
}


#[link(name = "behavior_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__behavior_msgs__action__NavigateThroughPoses_GetResult_Request() -> *const std::ffi::c_void;
}

#[link(name = "behavior_msgs__rosidl_generator_c")]
extern "C" {
    fn behavior_msgs__action__NavigateThroughPoses_GetResult_Request__init(msg: *mut NavigateThroughPoses_GetResult_Request) -> bool;
    fn behavior_msgs__action__NavigateThroughPoses_GetResult_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<NavigateThroughPoses_GetResult_Request>, size: usize) -> bool;
    fn behavior_msgs__action__NavigateThroughPoses_GetResult_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<NavigateThroughPoses_GetResult_Request>);
    fn behavior_msgs__action__NavigateThroughPoses_GetResult_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<NavigateThroughPoses_GetResult_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<NavigateThroughPoses_GetResult_Request>) -> bool;
}

// Corresponds to behavior_msgs__action__NavigateThroughPoses_GetResult_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct NavigateThroughPoses_GetResult_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,

}



impl Default for NavigateThroughPoses_GetResult_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !behavior_msgs__action__NavigateThroughPoses_GetResult_Request__init(&mut msg as *mut _) {
        panic!("Call to behavior_msgs__action__NavigateThroughPoses_GetResult_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for NavigateThroughPoses_GetResult_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { behavior_msgs__action__NavigateThroughPoses_GetResult_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { behavior_msgs__action__NavigateThroughPoses_GetResult_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { behavior_msgs__action__NavigateThroughPoses_GetResult_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for NavigateThroughPoses_GetResult_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for NavigateThroughPoses_GetResult_Request where Self: Sized {
  const TYPE_NAME: &'static str = "behavior_msgs/action/NavigateThroughPoses_GetResult_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__behavior_msgs__action__NavigateThroughPoses_GetResult_Request() }
  }
}


#[link(name = "behavior_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__behavior_msgs__action__NavigateThroughPoses_GetResult_Response() -> *const std::ffi::c_void;
}

#[link(name = "behavior_msgs__rosidl_generator_c")]
extern "C" {
    fn behavior_msgs__action__NavigateThroughPoses_GetResult_Response__init(msg: *mut NavigateThroughPoses_GetResult_Response) -> bool;
    fn behavior_msgs__action__NavigateThroughPoses_GetResult_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<NavigateThroughPoses_GetResult_Response>, size: usize) -> bool;
    fn behavior_msgs__action__NavigateThroughPoses_GetResult_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<NavigateThroughPoses_GetResult_Response>);
    fn behavior_msgs__action__NavigateThroughPoses_GetResult_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<NavigateThroughPoses_GetResult_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<NavigateThroughPoses_GetResult_Response>) -> bool;
}

// Corresponds to behavior_msgs__action__NavigateThroughPoses_GetResult_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct NavigateThroughPoses_GetResult_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub status: i8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub result: super::super::action::rmw::NavigateThroughPoses_Result,

}



impl Default for NavigateThroughPoses_GetResult_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !behavior_msgs__action__NavigateThroughPoses_GetResult_Response__init(&mut msg as *mut _) {
        panic!("Call to behavior_msgs__action__NavigateThroughPoses_GetResult_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for NavigateThroughPoses_GetResult_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { behavior_msgs__action__NavigateThroughPoses_GetResult_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { behavior_msgs__action__NavigateThroughPoses_GetResult_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { behavior_msgs__action__NavigateThroughPoses_GetResult_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for NavigateThroughPoses_GetResult_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for NavigateThroughPoses_GetResult_Response where Self: Sized {
  const TYPE_NAME: &'static str = "behavior_msgs/action/NavigateThroughPoses_GetResult_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__behavior_msgs__action__NavigateThroughPoses_GetResult_Response() }
  }
}


#[link(name = "behavior_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__behavior_msgs__action__FollowPath_SendGoal_Request() -> *const std::ffi::c_void;
}

#[link(name = "behavior_msgs__rosidl_generator_c")]
extern "C" {
    fn behavior_msgs__action__FollowPath_SendGoal_Request__init(msg: *mut FollowPath_SendGoal_Request) -> bool;
    fn behavior_msgs__action__FollowPath_SendGoal_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<FollowPath_SendGoal_Request>, size: usize) -> bool;
    fn behavior_msgs__action__FollowPath_SendGoal_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<FollowPath_SendGoal_Request>);
    fn behavior_msgs__action__FollowPath_SendGoal_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<FollowPath_SendGoal_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<FollowPath_SendGoal_Request>) -> bool;
}

// Corresponds to behavior_msgs__action__FollowPath_SendGoal_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct FollowPath_SendGoal_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub goal: super::super::action::rmw::FollowPath_Goal,

}



impl Default for FollowPath_SendGoal_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !behavior_msgs__action__FollowPath_SendGoal_Request__init(&mut msg as *mut _) {
        panic!("Call to behavior_msgs__action__FollowPath_SendGoal_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for FollowPath_SendGoal_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { behavior_msgs__action__FollowPath_SendGoal_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { behavior_msgs__action__FollowPath_SendGoal_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { behavior_msgs__action__FollowPath_SendGoal_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for FollowPath_SendGoal_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for FollowPath_SendGoal_Request where Self: Sized {
  const TYPE_NAME: &'static str = "behavior_msgs/action/FollowPath_SendGoal_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__behavior_msgs__action__FollowPath_SendGoal_Request() }
  }
}


#[link(name = "behavior_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__behavior_msgs__action__FollowPath_SendGoal_Response() -> *const std::ffi::c_void;
}

#[link(name = "behavior_msgs__rosidl_generator_c")]
extern "C" {
    fn behavior_msgs__action__FollowPath_SendGoal_Response__init(msg: *mut FollowPath_SendGoal_Response) -> bool;
    fn behavior_msgs__action__FollowPath_SendGoal_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<FollowPath_SendGoal_Response>, size: usize) -> bool;
    fn behavior_msgs__action__FollowPath_SendGoal_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<FollowPath_SendGoal_Response>);
    fn behavior_msgs__action__FollowPath_SendGoal_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<FollowPath_SendGoal_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<FollowPath_SendGoal_Response>) -> bool;
}

// Corresponds to behavior_msgs__action__FollowPath_SendGoal_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct FollowPath_SendGoal_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub accepted: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub stamp: builtin_interfaces::msg::rmw::Time,

}



impl Default for FollowPath_SendGoal_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !behavior_msgs__action__FollowPath_SendGoal_Response__init(&mut msg as *mut _) {
        panic!("Call to behavior_msgs__action__FollowPath_SendGoal_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for FollowPath_SendGoal_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { behavior_msgs__action__FollowPath_SendGoal_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { behavior_msgs__action__FollowPath_SendGoal_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { behavior_msgs__action__FollowPath_SendGoal_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for FollowPath_SendGoal_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for FollowPath_SendGoal_Response where Self: Sized {
  const TYPE_NAME: &'static str = "behavior_msgs/action/FollowPath_SendGoal_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__behavior_msgs__action__FollowPath_SendGoal_Response() }
  }
}


#[link(name = "behavior_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__behavior_msgs__action__FollowPath_GetResult_Request() -> *const std::ffi::c_void;
}

#[link(name = "behavior_msgs__rosidl_generator_c")]
extern "C" {
    fn behavior_msgs__action__FollowPath_GetResult_Request__init(msg: *mut FollowPath_GetResult_Request) -> bool;
    fn behavior_msgs__action__FollowPath_GetResult_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<FollowPath_GetResult_Request>, size: usize) -> bool;
    fn behavior_msgs__action__FollowPath_GetResult_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<FollowPath_GetResult_Request>);
    fn behavior_msgs__action__FollowPath_GetResult_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<FollowPath_GetResult_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<FollowPath_GetResult_Request>) -> bool;
}

// Corresponds to behavior_msgs__action__FollowPath_GetResult_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct FollowPath_GetResult_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,

}



impl Default for FollowPath_GetResult_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !behavior_msgs__action__FollowPath_GetResult_Request__init(&mut msg as *mut _) {
        panic!("Call to behavior_msgs__action__FollowPath_GetResult_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for FollowPath_GetResult_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { behavior_msgs__action__FollowPath_GetResult_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { behavior_msgs__action__FollowPath_GetResult_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { behavior_msgs__action__FollowPath_GetResult_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for FollowPath_GetResult_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for FollowPath_GetResult_Request where Self: Sized {
  const TYPE_NAME: &'static str = "behavior_msgs/action/FollowPath_GetResult_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__behavior_msgs__action__FollowPath_GetResult_Request() }
  }
}


#[link(name = "behavior_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__behavior_msgs__action__FollowPath_GetResult_Response() -> *const std::ffi::c_void;
}

#[link(name = "behavior_msgs__rosidl_generator_c")]
extern "C" {
    fn behavior_msgs__action__FollowPath_GetResult_Response__init(msg: *mut FollowPath_GetResult_Response) -> bool;
    fn behavior_msgs__action__FollowPath_GetResult_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<FollowPath_GetResult_Response>, size: usize) -> bool;
    fn behavior_msgs__action__FollowPath_GetResult_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<FollowPath_GetResult_Response>);
    fn behavior_msgs__action__FollowPath_GetResult_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<FollowPath_GetResult_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<FollowPath_GetResult_Response>) -> bool;
}

// Corresponds to behavior_msgs__action__FollowPath_GetResult_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct FollowPath_GetResult_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub status: i8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub result: super::super::action::rmw::FollowPath_Result,

}



impl Default for FollowPath_GetResult_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !behavior_msgs__action__FollowPath_GetResult_Response__init(&mut msg as *mut _) {
        panic!("Call to behavior_msgs__action__FollowPath_GetResult_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for FollowPath_GetResult_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { behavior_msgs__action__FollowPath_GetResult_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { behavior_msgs__action__FollowPath_GetResult_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { behavior_msgs__action__FollowPath_GetResult_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for FollowPath_GetResult_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for FollowPath_GetResult_Response where Self: Sized {
  const TYPE_NAME: &'static str = "behavior_msgs/action/FollowPath_GetResult_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__behavior_msgs__action__FollowPath_GetResult_Response() }
  }
}


#[link(name = "behavior_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__behavior_msgs__action__FollowPoint_SendGoal_Request() -> *const std::ffi::c_void;
}

#[link(name = "behavior_msgs__rosidl_generator_c")]
extern "C" {
    fn behavior_msgs__action__FollowPoint_SendGoal_Request__init(msg: *mut FollowPoint_SendGoal_Request) -> bool;
    fn behavior_msgs__action__FollowPoint_SendGoal_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<FollowPoint_SendGoal_Request>, size: usize) -> bool;
    fn behavior_msgs__action__FollowPoint_SendGoal_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<FollowPoint_SendGoal_Request>);
    fn behavior_msgs__action__FollowPoint_SendGoal_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<FollowPoint_SendGoal_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<FollowPoint_SendGoal_Request>) -> bool;
}

// Corresponds to behavior_msgs__action__FollowPoint_SendGoal_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct FollowPoint_SendGoal_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub goal: super::super::action::rmw::FollowPoint_Goal,

}



impl Default for FollowPoint_SendGoal_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !behavior_msgs__action__FollowPoint_SendGoal_Request__init(&mut msg as *mut _) {
        panic!("Call to behavior_msgs__action__FollowPoint_SendGoal_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for FollowPoint_SendGoal_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { behavior_msgs__action__FollowPoint_SendGoal_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { behavior_msgs__action__FollowPoint_SendGoal_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { behavior_msgs__action__FollowPoint_SendGoal_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for FollowPoint_SendGoal_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for FollowPoint_SendGoal_Request where Self: Sized {
  const TYPE_NAME: &'static str = "behavior_msgs/action/FollowPoint_SendGoal_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__behavior_msgs__action__FollowPoint_SendGoal_Request() }
  }
}


#[link(name = "behavior_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__behavior_msgs__action__FollowPoint_SendGoal_Response() -> *const std::ffi::c_void;
}

#[link(name = "behavior_msgs__rosidl_generator_c")]
extern "C" {
    fn behavior_msgs__action__FollowPoint_SendGoal_Response__init(msg: *mut FollowPoint_SendGoal_Response) -> bool;
    fn behavior_msgs__action__FollowPoint_SendGoal_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<FollowPoint_SendGoal_Response>, size: usize) -> bool;
    fn behavior_msgs__action__FollowPoint_SendGoal_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<FollowPoint_SendGoal_Response>);
    fn behavior_msgs__action__FollowPoint_SendGoal_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<FollowPoint_SendGoal_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<FollowPoint_SendGoal_Response>) -> bool;
}

// Corresponds to behavior_msgs__action__FollowPoint_SendGoal_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct FollowPoint_SendGoal_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub accepted: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub stamp: builtin_interfaces::msg::rmw::Time,

}



impl Default for FollowPoint_SendGoal_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !behavior_msgs__action__FollowPoint_SendGoal_Response__init(&mut msg as *mut _) {
        panic!("Call to behavior_msgs__action__FollowPoint_SendGoal_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for FollowPoint_SendGoal_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { behavior_msgs__action__FollowPoint_SendGoal_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { behavior_msgs__action__FollowPoint_SendGoal_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { behavior_msgs__action__FollowPoint_SendGoal_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for FollowPoint_SendGoal_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for FollowPoint_SendGoal_Response where Self: Sized {
  const TYPE_NAME: &'static str = "behavior_msgs/action/FollowPoint_SendGoal_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__behavior_msgs__action__FollowPoint_SendGoal_Response() }
  }
}


#[link(name = "behavior_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__behavior_msgs__action__FollowPoint_GetResult_Request() -> *const std::ffi::c_void;
}

#[link(name = "behavior_msgs__rosidl_generator_c")]
extern "C" {
    fn behavior_msgs__action__FollowPoint_GetResult_Request__init(msg: *mut FollowPoint_GetResult_Request) -> bool;
    fn behavior_msgs__action__FollowPoint_GetResult_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<FollowPoint_GetResult_Request>, size: usize) -> bool;
    fn behavior_msgs__action__FollowPoint_GetResult_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<FollowPoint_GetResult_Request>);
    fn behavior_msgs__action__FollowPoint_GetResult_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<FollowPoint_GetResult_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<FollowPoint_GetResult_Request>) -> bool;
}

// Corresponds to behavior_msgs__action__FollowPoint_GetResult_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct FollowPoint_GetResult_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,

}



impl Default for FollowPoint_GetResult_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !behavior_msgs__action__FollowPoint_GetResult_Request__init(&mut msg as *mut _) {
        panic!("Call to behavior_msgs__action__FollowPoint_GetResult_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for FollowPoint_GetResult_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { behavior_msgs__action__FollowPoint_GetResult_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { behavior_msgs__action__FollowPoint_GetResult_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { behavior_msgs__action__FollowPoint_GetResult_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for FollowPoint_GetResult_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for FollowPoint_GetResult_Request where Self: Sized {
  const TYPE_NAME: &'static str = "behavior_msgs/action/FollowPoint_GetResult_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__behavior_msgs__action__FollowPoint_GetResult_Request() }
  }
}


#[link(name = "behavior_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__behavior_msgs__action__FollowPoint_GetResult_Response() -> *const std::ffi::c_void;
}

#[link(name = "behavior_msgs__rosidl_generator_c")]
extern "C" {
    fn behavior_msgs__action__FollowPoint_GetResult_Response__init(msg: *mut FollowPoint_GetResult_Response) -> bool;
    fn behavior_msgs__action__FollowPoint_GetResult_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<FollowPoint_GetResult_Response>, size: usize) -> bool;
    fn behavior_msgs__action__FollowPoint_GetResult_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<FollowPoint_GetResult_Response>);
    fn behavior_msgs__action__FollowPoint_GetResult_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<FollowPoint_GetResult_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<FollowPoint_GetResult_Response>) -> bool;
}

// Corresponds to behavior_msgs__action__FollowPoint_GetResult_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct FollowPoint_GetResult_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub status: i8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub result: super::super::action::rmw::FollowPoint_Result,

}



impl Default for FollowPoint_GetResult_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !behavior_msgs__action__FollowPoint_GetResult_Response__init(&mut msg as *mut _) {
        panic!("Call to behavior_msgs__action__FollowPoint_GetResult_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for FollowPoint_GetResult_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { behavior_msgs__action__FollowPoint_GetResult_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { behavior_msgs__action__FollowPoint_GetResult_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { behavior_msgs__action__FollowPoint_GetResult_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for FollowPoint_GetResult_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for FollowPoint_GetResult_Response where Self: Sized {
  const TYPE_NAME: &'static str = "behavior_msgs/action/FollowPoint_GetResult_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__behavior_msgs__action__FollowPoint_GetResult_Response() }
  }
}






#[link(name = "behavior_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__behavior_msgs__action__ComputePathToPose_SendGoal() -> *const std::ffi::c_void;
}

// Corresponds to behavior_msgs__action__ComputePathToPose_SendGoal
#[allow(missing_docs, non_camel_case_types)]
pub struct ComputePathToPose_SendGoal;

impl rosidl_runtime_rs::Service for ComputePathToPose_SendGoal {
    type Request = ComputePathToPose_SendGoal_Request;
    type Response = ComputePathToPose_SendGoal_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__behavior_msgs__action__ComputePathToPose_SendGoal() }
    }
}




#[link(name = "behavior_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__behavior_msgs__action__ComputePathToPose_GetResult() -> *const std::ffi::c_void;
}

// Corresponds to behavior_msgs__action__ComputePathToPose_GetResult
#[allow(missing_docs, non_camel_case_types)]
pub struct ComputePathToPose_GetResult;

impl rosidl_runtime_rs::Service for ComputePathToPose_GetResult {
    type Request = ComputePathToPose_GetResult_Request;
    type Response = ComputePathToPose_GetResult_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__behavior_msgs__action__ComputePathToPose_GetResult() }
    }
}




#[link(name = "behavior_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__behavior_msgs__action__NavigateThroughPoses_SendGoal() -> *const std::ffi::c_void;
}

// Corresponds to behavior_msgs__action__NavigateThroughPoses_SendGoal
#[allow(missing_docs, non_camel_case_types)]
pub struct NavigateThroughPoses_SendGoal;

impl rosidl_runtime_rs::Service for NavigateThroughPoses_SendGoal {
    type Request = NavigateThroughPoses_SendGoal_Request;
    type Response = NavigateThroughPoses_SendGoal_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__behavior_msgs__action__NavigateThroughPoses_SendGoal() }
    }
}




#[link(name = "behavior_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__behavior_msgs__action__NavigateThroughPoses_GetResult() -> *const std::ffi::c_void;
}

// Corresponds to behavior_msgs__action__NavigateThroughPoses_GetResult
#[allow(missing_docs, non_camel_case_types)]
pub struct NavigateThroughPoses_GetResult;

impl rosidl_runtime_rs::Service for NavigateThroughPoses_GetResult {
    type Request = NavigateThroughPoses_GetResult_Request;
    type Response = NavigateThroughPoses_GetResult_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__behavior_msgs__action__NavigateThroughPoses_GetResult() }
    }
}




#[link(name = "behavior_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__behavior_msgs__action__FollowPath_SendGoal() -> *const std::ffi::c_void;
}

// Corresponds to behavior_msgs__action__FollowPath_SendGoal
#[allow(missing_docs, non_camel_case_types)]
pub struct FollowPath_SendGoal;

impl rosidl_runtime_rs::Service for FollowPath_SendGoal {
    type Request = FollowPath_SendGoal_Request;
    type Response = FollowPath_SendGoal_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__behavior_msgs__action__FollowPath_SendGoal() }
    }
}




#[link(name = "behavior_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__behavior_msgs__action__FollowPath_GetResult() -> *const std::ffi::c_void;
}

// Corresponds to behavior_msgs__action__FollowPath_GetResult
#[allow(missing_docs, non_camel_case_types)]
pub struct FollowPath_GetResult;

impl rosidl_runtime_rs::Service for FollowPath_GetResult {
    type Request = FollowPath_GetResult_Request;
    type Response = FollowPath_GetResult_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__behavior_msgs__action__FollowPath_GetResult() }
    }
}




#[link(name = "behavior_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__behavior_msgs__action__FollowPoint_SendGoal() -> *const std::ffi::c_void;
}

// Corresponds to behavior_msgs__action__FollowPoint_SendGoal
#[allow(missing_docs, non_camel_case_types)]
pub struct FollowPoint_SendGoal;

impl rosidl_runtime_rs::Service for FollowPoint_SendGoal {
    type Request = FollowPoint_SendGoal_Request;
    type Response = FollowPoint_SendGoal_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__behavior_msgs__action__FollowPoint_SendGoal() }
    }
}




#[link(name = "behavior_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__behavior_msgs__action__FollowPoint_GetResult() -> *const std::ffi::c_void;
}

// Corresponds to behavior_msgs__action__FollowPoint_GetResult
#[allow(missing_docs, non_camel_case_types)]
pub struct FollowPoint_GetResult;

impl rosidl_runtime_rs::Service for FollowPoint_GetResult {
    type Request = FollowPoint_GetResult_Request;
    type Response = FollowPoint_GetResult_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__behavior_msgs__action__FollowPoint_GetResult() }
    }
}


