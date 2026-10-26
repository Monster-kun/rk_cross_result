#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};


#[link(name = "behavior_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__behavior_msgs__msg__BehaviorTreeLog() -> *const std::ffi::c_void;
}

#[link(name = "behavior_msgs__rosidl_generator_c")]
extern "C" {
    fn behavior_msgs__msg__BehaviorTreeLog__init(msg: *mut BehaviorTreeLog) -> bool;
    fn behavior_msgs__msg__BehaviorTreeLog__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<BehaviorTreeLog>, size: usize) -> bool;
    fn behavior_msgs__msg__BehaviorTreeLog__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<BehaviorTreeLog>);
    fn behavior_msgs__msg__BehaviorTreeLog__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<BehaviorTreeLog>, out_seq: *mut rosidl_runtime_rs::Sequence<BehaviorTreeLog>) -> bool;
}

// Corresponds to behavior_msgs__msg__BehaviorTreeLog
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct BehaviorTreeLog {
    /// ROS time that this log message was sent.
    pub timestamp: builtin_interfaces::msg::rmw::Time,


    // This member is not documented.
    #[allow(missing_docs)]
    pub event_log: rosidl_runtime_rs::Sequence<super::super::msg::rmw::BehaviorTreeStatusChange>,

}



impl Default for BehaviorTreeLog {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !behavior_msgs__msg__BehaviorTreeLog__init(&mut msg as *mut _) {
        panic!("Call to behavior_msgs__msg__BehaviorTreeLog__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for BehaviorTreeLog {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { behavior_msgs__msg__BehaviorTreeLog__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { behavior_msgs__msg__BehaviorTreeLog__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { behavior_msgs__msg__BehaviorTreeLog__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for BehaviorTreeLog {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for BehaviorTreeLog where Self: Sized {
  const TYPE_NAME: &'static str = "behavior_msgs/msg/BehaviorTreeLog";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__behavior_msgs__msg__BehaviorTreeLog() }
  }
}


#[link(name = "behavior_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__behavior_msgs__msg__BehaviorTreeStatusChange() -> *const std::ffi::c_void;
}

#[link(name = "behavior_msgs__rosidl_generator_c")]
extern "C" {
    fn behavior_msgs__msg__BehaviorTreeStatusChange__init(msg: *mut BehaviorTreeStatusChange) -> bool;
    fn behavior_msgs__msg__BehaviorTreeStatusChange__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<BehaviorTreeStatusChange>, size: usize) -> bool;
    fn behavior_msgs__msg__BehaviorTreeStatusChange__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<BehaviorTreeStatusChange>);
    fn behavior_msgs__msg__BehaviorTreeStatusChange__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<BehaviorTreeStatusChange>, out_seq: *mut rosidl_runtime_rs::Sequence<BehaviorTreeStatusChange>) -> bool;
}

// Corresponds to behavior_msgs__msg__BehaviorTreeStatusChange
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct BehaviorTreeStatusChange {
    /// internal behavior tree event timestamp. Typically this is wall clock time
    pub timestamp: builtin_interfaces::msg::rmw::Time,


    // This member is not documented.
    #[allow(missing_docs)]
    pub node_name: rosidl_runtime_rs::String,

    /// unique ID for this node
    pub uid: u16,

    /// IDLE, RUNNING, SUCCESS or FAILURE
    pub previous_status: rosidl_runtime_rs::String,

    /// IDLE, RUNNING, SUCCESS or FAILURE
    pub current_status: rosidl_runtime_rs::String,

}



impl Default for BehaviorTreeStatusChange {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !behavior_msgs__msg__BehaviorTreeStatusChange__init(&mut msg as *mut _) {
        panic!("Call to behavior_msgs__msg__BehaviorTreeStatusChange__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for BehaviorTreeStatusChange {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { behavior_msgs__msg__BehaviorTreeStatusChange__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { behavior_msgs__msg__BehaviorTreeStatusChange__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { behavior_msgs__msg__BehaviorTreeStatusChange__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for BehaviorTreeStatusChange {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for BehaviorTreeStatusChange where Self: Sized {
  const TYPE_NAME: &'static str = "behavior_msgs/msg/BehaviorTreeStatusChange";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__behavior_msgs__msg__BehaviorTreeStatusChange() }
  }
}


