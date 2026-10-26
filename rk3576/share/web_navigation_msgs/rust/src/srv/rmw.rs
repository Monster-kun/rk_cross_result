#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



#[link(name = "web_navigation_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__web_navigation_msgs__srv__GetNavigationExecution_Request() -> *const std::ffi::c_void;
}

#[link(name = "web_navigation_msgs__rosidl_generator_c")]
extern "C" {
    fn web_navigation_msgs__srv__GetNavigationExecution_Request__init(msg: *mut GetNavigationExecution_Request) -> bool;
    fn web_navigation_msgs__srv__GetNavigationExecution_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GetNavigationExecution_Request>, size: usize) -> bool;
    fn web_navigation_msgs__srv__GetNavigationExecution_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GetNavigationExecution_Request>);
    fn web_navigation_msgs__srv__GetNavigationExecution_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GetNavigationExecution_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<GetNavigationExecution_Request>) -> bool;
}

// Corresponds to web_navigation_msgs__srv__GetNavigationExecution_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetNavigationExecution_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub structure_needs_at_least_one_member: u8,

}



impl Default for GetNavigationExecution_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !web_navigation_msgs__srv__GetNavigationExecution_Request__init(&mut msg as *mut _) {
        panic!("Call to web_navigation_msgs__srv__GetNavigationExecution_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GetNavigationExecution_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { web_navigation_msgs__srv__GetNavigationExecution_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { web_navigation_msgs__srv__GetNavigationExecution_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { web_navigation_msgs__srv__GetNavigationExecution_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GetNavigationExecution_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GetNavigationExecution_Request where Self: Sized {
  const TYPE_NAME: &'static str = "web_navigation_msgs/srv/GetNavigationExecution_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__web_navigation_msgs__srv__GetNavigationExecution_Request() }
  }
}


#[link(name = "web_navigation_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__web_navigation_msgs__srv__GetNavigationExecution_Response() -> *const std::ffi::c_void;
}

#[link(name = "web_navigation_msgs__rosidl_generator_c")]
extern "C" {
    fn web_navigation_msgs__srv__GetNavigationExecution_Response__init(msg: *mut GetNavigationExecution_Response) -> bool;
    fn web_navigation_msgs__srv__GetNavigationExecution_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GetNavigationExecution_Response>, size: usize) -> bool;
    fn web_navigation_msgs__srv__GetNavigationExecution_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GetNavigationExecution_Response>);
    fn web_navigation_msgs__srv__GetNavigationExecution_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GetNavigationExecution_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<GetNavigationExecution_Response>) -> bool;
}

// Corresponds to web_navigation_msgs__srv__GetNavigationExecution_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetNavigationExecution_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub instance_id: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub active: bool,

    /// Includes execution/BT cleanup after the goal has reached a terminal state.
    pub execution_running: bool,

    /// Current and pending goals, captured under the same lock.
    pub goals: rosidl_runtime_rs::Sequence<super::super::msg::rmw::NavigationExecution>,

}



impl Default for GetNavigationExecution_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !web_navigation_msgs__srv__GetNavigationExecution_Response__init(&mut msg as *mut _) {
        panic!("Call to web_navigation_msgs__srv__GetNavigationExecution_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GetNavigationExecution_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { web_navigation_msgs__srv__GetNavigationExecution_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { web_navigation_msgs__srv__GetNavigationExecution_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { web_navigation_msgs__srv__GetNavigationExecution_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GetNavigationExecution_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GetNavigationExecution_Response where Self: Sized {
  const TYPE_NAME: &'static str = "web_navigation_msgs/srv/GetNavigationExecution_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__web_navigation_msgs__srv__GetNavigationExecution_Response() }
  }
}


#[link(name = "web_navigation_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__web_navigation_msgs__srv__ControlLease_Request() -> *const std::ffi::c_void;
}

#[link(name = "web_navigation_msgs__rosidl_generator_c")]
extern "C" {
    fn web_navigation_msgs__srv__ControlLease_Request__init(msg: *mut ControlLease_Request) -> bool;
    fn web_navigation_msgs__srv__ControlLease_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ControlLease_Request>, size: usize) -> bool;
    fn web_navigation_msgs__srv__ControlLease_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ControlLease_Request>);
    fn web_navigation_msgs__srv__ControlLease_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ControlLease_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<ControlLease_Request>) -> bool;
}

// Corresponds to web_navigation_msgs__srv__ControlLease_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ControlLease_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub operation: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub session_id: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub device_label: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub manager_boot_id: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub lease_token: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub control_epoch: u64,

}

impl ControlLease_Request {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const ACQUIRE: u8 = 0;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const RENEW: u8 = 1;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const RELEASE: u8 = 2;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const VALIDATE: u8 = 3;

}


impl Default for ControlLease_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !web_navigation_msgs__srv__ControlLease_Request__init(&mut msg as *mut _) {
        panic!("Call to web_navigation_msgs__srv__ControlLease_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ControlLease_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { web_navigation_msgs__srv__ControlLease_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { web_navigation_msgs__srv__ControlLease_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { web_navigation_msgs__srv__ControlLease_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ControlLease_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ControlLease_Request where Self: Sized {
  const TYPE_NAME: &'static str = "web_navigation_msgs/srv/ControlLease_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__web_navigation_msgs__srv__ControlLease_Request() }
  }
}


#[link(name = "web_navigation_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__web_navigation_msgs__srv__ControlLease_Response() -> *const std::ffi::c_void;
}

#[link(name = "web_navigation_msgs__rosidl_generator_c")]
extern "C" {
    fn web_navigation_msgs__srv__ControlLease_Response__init(msg: *mut ControlLease_Response) -> bool;
    fn web_navigation_msgs__srv__ControlLease_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ControlLease_Response>, size: usize) -> bool;
    fn web_navigation_msgs__srv__ControlLease_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ControlLease_Response>);
    fn web_navigation_msgs__srv__ControlLease_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ControlLease_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<ControlLease_Response>) -> bool;
}

// Corresponds to web_navigation_msgs__srv__ControlLease_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ControlLease_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub code: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub manager_boot_id: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub lease_token: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub control_epoch: u64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub lease_ttl_ms: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub control_held: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub owner_label: rosidl_runtime_rs::String,

}



impl Default for ControlLease_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !web_navigation_msgs__srv__ControlLease_Response__init(&mut msg as *mut _) {
        panic!("Call to web_navigation_msgs__srv__ControlLease_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ControlLease_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { web_navigation_msgs__srv__ControlLease_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { web_navigation_msgs__srv__ControlLease_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { web_navigation_msgs__srv__ControlLease_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ControlLease_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ControlLease_Response where Self: Sized {
  const TYPE_NAME: &'static str = "web_navigation_msgs/srv/ControlLease_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__web_navigation_msgs__srv__ControlLease_Response() }
  }
}


#[link(name = "web_navigation_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__web_navigation_msgs__srv__ValidateTarget_Request() -> *const std::ffi::c_void;
}

#[link(name = "web_navigation_msgs__rosidl_generator_c")]
extern "C" {
    fn web_navigation_msgs__srv__ValidateTarget_Request__init(msg: *mut ValidateTarget_Request) -> bool;
    fn web_navigation_msgs__srv__ValidateTarget_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ValidateTarget_Request>, size: usize) -> bool;
    fn web_navigation_msgs__srv__ValidateTarget_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ValidateTarget_Request>);
    fn web_navigation_msgs__srv__ValidateTarget_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ValidateTarget_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<ValidateTarget_Request>) -> bool;
}

// Corresponds to web_navigation_msgs__srv__ValidateTarget_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ValidateTarget_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub map_version: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub frame_id: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub x: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub y: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub selected_layer_id: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub suggest_nearest: bool,

}



impl Default for ValidateTarget_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !web_navigation_msgs__srv__ValidateTarget_Request__init(&mut msg as *mut _) {
        panic!("Call to web_navigation_msgs__srv__ValidateTarget_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ValidateTarget_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { web_navigation_msgs__srv__ValidateTarget_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { web_navigation_msgs__srv__ValidateTarget_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { web_navigation_msgs__srv__ValidateTarget_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ValidateTarget_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ValidateTarget_Request where Self: Sized {
  const TYPE_NAME: &'static str = "web_navigation_msgs/srv/ValidateTarget_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__web_navigation_msgs__srv__ValidateTarget_Request() }
  }
}


#[link(name = "web_navigation_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__web_navigation_msgs__srv__ValidateTarget_Response() -> *const std::ffi::c_void;
}

#[link(name = "web_navigation_msgs__rosidl_generator_c")]
extern "C" {
    fn web_navigation_msgs__srv__ValidateTarget_Response__init(msg: *mut ValidateTarget_Response) -> bool;
    fn web_navigation_msgs__srv__ValidateTarget_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ValidateTarget_Response>, size: usize) -> bool;
    fn web_navigation_msgs__srv__ValidateTarget_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ValidateTarget_Response>);
    fn web_navigation_msgs__srv__ValidateTarget_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ValidateTarget_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<ValidateTarget_Response>) -> bool;
}

// Corresponds to web_navigation_msgs__srv__ValidateTarget_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ValidateTarget_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub valid: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub code: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub map_version: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub lanelet_ids: rosidl_runtime_rs::Sequence<rosidl_runtime_rs::String>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub x: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub y: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub lanelet_id: rosidl_runtime_rs::String,

}



impl Default for ValidateTarget_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !web_navigation_msgs__srv__ValidateTarget_Response__init(&mut msg as *mut _) {
        panic!("Call to web_navigation_msgs__srv__ValidateTarget_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ValidateTarget_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { web_navigation_msgs__srv__ValidateTarget_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { web_navigation_msgs__srv__ValidateTarget_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { web_navigation_msgs__srv__ValidateTarget_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ValidateTarget_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ValidateTarget_Response where Self: Sized {
  const TYPE_NAME: &'static str = "web_navigation_msgs/srv/ValidateTarget_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__web_navigation_msgs__srv__ValidateTarget_Response() }
  }
}


#[link(name = "web_navigation_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__web_navigation_msgs__srv__SubmitGoal_Request() -> *const std::ffi::c_void;
}

#[link(name = "web_navigation_msgs__rosidl_generator_c")]
extern "C" {
    fn web_navigation_msgs__srv__SubmitGoal_Request__init(msg: *mut SubmitGoal_Request) -> bool;
    fn web_navigation_msgs__srv__SubmitGoal_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SubmitGoal_Request>, size: usize) -> bool;
    fn web_navigation_msgs__srv__SubmitGoal_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SubmitGoal_Request>);
    fn web_navigation_msgs__srv__SubmitGoal_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SubmitGoal_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<SubmitGoal_Request>) -> bool;
}

// Corresponds to web_navigation_msgs__srv__SubmitGoal_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SubmitGoal_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub operation: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub request_id: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub session_id: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub device_label: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub manager_boot_id: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub lease_token: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub control_epoch: u64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub map_version: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub frame_id: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub x: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub y: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub selected_layer_id: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub expected_active_task_id: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub expected_state_revision: u64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub sequence: rosidl_runtime_rs::Sequence<super::super::msg::rmw::SequenceWaypoint>,

}

impl SubmitGoal_Request {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const SUBMIT: u8 = 0;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const REPLACE: u8 = 1;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const CONTINUE: u8 = 2;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const RETRY: u8 = 3;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const SKIP: u8 = 4;

}


impl Default for SubmitGoal_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !web_navigation_msgs__srv__SubmitGoal_Request__init(&mut msg as *mut _) {
        panic!("Call to web_navigation_msgs__srv__SubmitGoal_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SubmitGoal_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { web_navigation_msgs__srv__SubmitGoal_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { web_navigation_msgs__srv__SubmitGoal_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { web_navigation_msgs__srv__SubmitGoal_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SubmitGoal_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SubmitGoal_Request where Self: Sized {
  const TYPE_NAME: &'static str = "web_navigation_msgs/srv/SubmitGoal_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__web_navigation_msgs__srv__SubmitGoal_Request() }
  }
}


#[link(name = "web_navigation_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__web_navigation_msgs__srv__SubmitGoal_Response() -> *const std::ffi::c_void;
}

#[link(name = "web_navigation_msgs__rosidl_generator_c")]
extern "C" {
    fn web_navigation_msgs__srv__SubmitGoal_Response__init(msg: *mut SubmitGoal_Response) -> bool;
    fn web_navigation_msgs__srv__SubmitGoal_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SubmitGoal_Response>, size: usize) -> bool;
    fn web_navigation_msgs__srv__SubmitGoal_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SubmitGoal_Response>);
    fn web_navigation_msgs__srv__SubmitGoal_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SubmitGoal_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<SubmitGoal_Response>) -> bool;
}

// Corresponds to web_navigation_msgs__srv__SubmitGoal_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SubmitGoal_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub accepted: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub code: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub request_id: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub task_id: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub task_status: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub state_revision: u64,

}



impl Default for SubmitGoal_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !web_navigation_msgs__srv__SubmitGoal_Response__init(&mut msg as *mut _) {
        panic!("Call to web_navigation_msgs__srv__SubmitGoal_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SubmitGoal_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { web_navigation_msgs__srv__SubmitGoal_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { web_navigation_msgs__srv__SubmitGoal_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { web_navigation_msgs__srv__SubmitGoal_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SubmitGoal_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SubmitGoal_Response where Self: Sized {
  const TYPE_NAME: &'static str = "web_navigation_msgs/srv/SubmitGoal_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__web_navigation_msgs__srv__SubmitGoal_Response() }
  }
}


#[link(name = "web_navigation_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__web_navigation_msgs__srv__CancelTask_Request() -> *const std::ffi::c_void;
}

#[link(name = "web_navigation_msgs__rosidl_generator_c")]
extern "C" {
    fn web_navigation_msgs__srv__CancelTask_Request__init(msg: *mut CancelTask_Request) -> bool;
    fn web_navigation_msgs__srv__CancelTask_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<CancelTask_Request>, size: usize) -> bool;
    fn web_navigation_msgs__srv__CancelTask_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<CancelTask_Request>);
    fn web_navigation_msgs__srv__CancelTask_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<CancelTask_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<CancelTask_Request>) -> bool;
}

// Corresponds to web_navigation_msgs__srv__CancelTask_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct CancelTask_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub request_id: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub task_id: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub session_id: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub manager_boot_id: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub lease_token: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub control_epoch: u64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub expected_state_revision: u64,

}



impl Default for CancelTask_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !web_navigation_msgs__srv__CancelTask_Request__init(&mut msg as *mut _) {
        panic!("Call to web_navigation_msgs__srv__CancelTask_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for CancelTask_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { web_navigation_msgs__srv__CancelTask_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { web_navigation_msgs__srv__CancelTask_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { web_navigation_msgs__srv__CancelTask_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for CancelTask_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for CancelTask_Request where Self: Sized {
  const TYPE_NAME: &'static str = "web_navigation_msgs/srv/CancelTask_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__web_navigation_msgs__srv__CancelTask_Request() }
  }
}


#[link(name = "web_navigation_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__web_navigation_msgs__srv__CancelTask_Response() -> *const std::ffi::c_void;
}

#[link(name = "web_navigation_msgs__rosidl_generator_c")]
extern "C" {
    fn web_navigation_msgs__srv__CancelTask_Response__init(msg: *mut CancelTask_Response) -> bool;
    fn web_navigation_msgs__srv__CancelTask_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<CancelTask_Response>, size: usize) -> bool;
    fn web_navigation_msgs__srv__CancelTask_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<CancelTask_Response>);
    fn web_navigation_msgs__srv__CancelTask_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<CancelTask_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<CancelTask_Response>) -> bool;
}

// Corresponds to web_navigation_msgs__srv__CancelTask_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct CancelTask_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub accepted: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub code: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub request_id: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub task_status: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub state_revision: u64,

}



impl Default for CancelTask_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !web_navigation_msgs__srv__CancelTask_Response__init(&mut msg as *mut _) {
        panic!("Call to web_navigation_msgs__srv__CancelTask_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for CancelTask_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { web_navigation_msgs__srv__CancelTask_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { web_navigation_msgs__srv__CancelTask_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { web_navigation_msgs__srv__CancelTask_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for CancelTask_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for CancelTask_Response where Self: Sized {
  const TYPE_NAME: &'static str = "web_navigation_msgs/srv/CancelTask_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__web_navigation_msgs__srv__CancelTask_Response() }
  }
}


#[link(name = "web_navigation_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__web_navigation_msgs__srv__GetSnapshot_Request() -> *const std::ffi::c_void;
}

#[link(name = "web_navigation_msgs__rosidl_generator_c")]
extern "C" {
    fn web_navigation_msgs__srv__GetSnapshot_Request__init(msg: *mut GetSnapshot_Request) -> bool;
    fn web_navigation_msgs__srv__GetSnapshot_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GetSnapshot_Request>, size: usize) -> bool;
    fn web_navigation_msgs__srv__GetSnapshot_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GetSnapshot_Request>);
    fn web_navigation_msgs__srv__GetSnapshot_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GetSnapshot_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<GetSnapshot_Request>) -> bool;
}

// Corresponds to web_navigation_msgs__srv__GetSnapshot_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetSnapshot_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub structure_needs_at_least_one_member: u8,

}



impl Default for GetSnapshot_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !web_navigation_msgs__srv__GetSnapshot_Request__init(&mut msg as *mut _) {
        panic!("Call to web_navigation_msgs__srv__GetSnapshot_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GetSnapshot_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { web_navigation_msgs__srv__GetSnapshot_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { web_navigation_msgs__srv__GetSnapshot_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { web_navigation_msgs__srv__GetSnapshot_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GetSnapshot_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GetSnapshot_Request where Self: Sized {
  const TYPE_NAME: &'static str = "web_navigation_msgs/srv/GetSnapshot_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__web_navigation_msgs__srv__GetSnapshot_Request() }
  }
}


#[link(name = "web_navigation_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__web_navigation_msgs__srv__GetSnapshot_Response() -> *const std::ffi::c_void;
}

#[link(name = "web_navigation_msgs__rosidl_generator_c")]
extern "C" {
    fn web_navigation_msgs__srv__GetSnapshot_Response__init(msg: *mut GetSnapshot_Response) -> bool;
    fn web_navigation_msgs__srv__GetSnapshot_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GetSnapshot_Response>, size: usize) -> bool;
    fn web_navigation_msgs__srv__GetSnapshot_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GetSnapshot_Response>);
    fn web_navigation_msgs__srv__GetSnapshot_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GetSnapshot_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<GetSnapshot_Response>) -> bool;
}

// Corresponds to web_navigation_msgs__srv__GetSnapshot_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetSnapshot_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub state: super::super::msg::rmw::NavigationState,

}



impl Default for GetSnapshot_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !web_navigation_msgs__srv__GetSnapshot_Response__init(&mut msg as *mut _) {
        panic!("Call to web_navigation_msgs__srv__GetSnapshot_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GetSnapshot_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { web_navigation_msgs__srv__GetSnapshot_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { web_navigation_msgs__srv__GetSnapshot_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { web_navigation_msgs__srv__GetSnapshot_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GetSnapshot_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GetSnapshot_Response where Self: Sized {
  const TYPE_NAME: &'static str = "web_navigation_msgs/srv/GetSnapshot_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__web_navigation_msgs__srv__GetSnapshot_Response() }
  }
}


#[link(name = "web_navigation_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__web_navigation_msgs__srv__GetRequest_Request() -> *const std::ffi::c_void;
}

#[link(name = "web_navigation_msgs__rosidl_generator_c")]
extern "C" {
    fn web_navigation_msgs__srv__GetRequest_Request__init(msg: *mut GetRequest_Request) -> bool;
    fn web_navigation_msgs__srv__GetRequest_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GetRequest_Request>, size: usize) -> bool;
    fn web_navigation_msgs__srv__GetRequest_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GetRequest_Request>);
    fn web_navigation_msgs__srv__GetRequest_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GetRequest_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<GetRequest_Request>) -> bool;
}

// Corresponds to web_navigation_msgs__srv__GetRequest_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetRequest_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub request_id: rosidl_runtime_rs::String,

}



impl Default for GetRequest_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !web_navigation_msgs__srv__GetRequest_Request__init(&mut msg as *mut _) {
        panic!("Call to web_navigation_msgs__srv__GetRequest_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GetRequest_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { web_navigation_msgs__srv__GetRequest_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { web_navigation_msgs__srv__GetRequest_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { web_navigation_msgs__srv__GetRequest_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GetRequest_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GetRequest_Request where Self: Sized {
  const TYPE_NAME: &'static str = "web_navigation_msgs/srv/GetRequest_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__web_navigation_msgs__srv__GetRequest_Request() }
  }
}


#[link(name = "web_navigation_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__web_navigation_msgs__srv__GetRequest_Response() -> *const std::ffi::c_void;
}

#[link(name = "web_navigation_msgs__rosidl_generator_c")]
extern "C" {
    fn web_navigation_msgs__srv__GetRequest_Response__init(msg: *mut GetRequest_Response) -> bool;
    fn web_navigation_msgs__srv__GetRequest_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GetRequest_Response>, size: usize) -> bool;
    fn web_navigation_msgs__srv__GetRequest_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GetRequest_Response>);
    fn web_navigation_msgs__srv__GetRequest_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GetRequest_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<GetRequest_Response>) -> bool;
}

// Corresponds to web_navigation_msgs__srv__GetRequest_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetRequest_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub found: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub accepted: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub code: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub task_id: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub task_status: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub state_revision: u64,

}



impl Default for GetRequest_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !web_navigation_msgs__srv__GetRequest_Response__init(&mut msg as *mut _) {
        panic!("Call to web_navigation_msgs__srv__GetRequest_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GetRequest_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { web_navigation_msgs__srv__GetRequest_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { web_navigation_msgs__srv__GetRequest_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { web_navigation_msgs__srv__GetRequest_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GetRequest_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GetRequest_Response where Self: Sized {
  const TYPE_NAME: &'static str = "web_navigation_msgs/srv/GetRequest_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__web_navigation_msgs__srv__GetRequest_Response() }
  }
}


#[link(name = "web_navigation_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__web_navigation_msgs__srv__GetTask_Request() -> *const std::ffi::c_void;
}

#[link(name = "web_navigation_msgs__rosidl_generator_c")]
extern "C" {
    fn web_navigation_msgs__srv__GetTask_Request__init(msg: *mut GetTask_Request) -> bool;
    fn web_navigation_msgs__srv__GetTask_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GetTask_Request>, size: usize) -> bool;
    fn web_navigation_msgs__srv__GetTask_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GetTask_Request>);
    fn web_navigation_msgs__srv__GetTask_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GetTask_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<GetTask_Request>) -> bool;
}

// Corresponds to web_navigation_msgs__srv__GetTask_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetTask_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub task_id: rosidl_runtime_rs::String,

}



impl Default for GetTask_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !web_navigation_msgs__srv__GetTask_Request__init(&mut msg as *mut _) {
        panic!("Call to web_navigation_msgs__srv__GetTask_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GetTask_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { web_navigation_msgs__srv__GetTask_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { web_navigation_msgs__srv__GetTask_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { web_navigation_msgs__srv__GetTask_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GetTask_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GetTask_Request where Self: Sized {
  const TYPE_NAME: &'static str = "web_navigation_msgs/srv/GetTask_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__web_navigation_msgs__srv__GetTask_Request() }
  }
}


#[link(name = "web_navigation_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__web_navigation_msgs__srv__GetTask_Response() -> *const std::ffi::c_void;
}

#[link(name = "web_navigation_msgs__rosidl_generator_c")]
extern "C" {
    fn web_navigation_msgs__srv__GetTask_Response__init(msg: *mut GetTask_Response) -> bool;
    fn web_navigation_msgs__srv__GetTask_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GetTask_Response>, size: usize) -> bool;
    fn web_navigation_msgs__srv__GetTask_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GetTask_Response>);
    fn web_navigation_msgs__srv__GetTask_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GetTask_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<GetTask_Response>) -> bool;
}

// Corresponds to web_navigation_msgs__srv__GetTask_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetTask_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub found: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub task_id: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub request_id: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub ros_goal_uuid: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub map_version: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub frame_id: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub status: u8,


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
    pub device_label: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub error_code: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub error_message: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub updated_at: i64,

}



impl Default for GetTask_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !web_navigation_msgs__srv__GetTask_Response__init(&mut msg as *mut _) {
        panic!("Call to web_navigation_msgs__srv__GetTask_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GetTask_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { web_navigation_msgs__srv__GetTask_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { web_navigation_msgs__srv__GetTask_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { web_navigation_msgs__srv__GetTask_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GetTask_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GetTask_Response where Self: Sized {
  const TYPE_NAME: &'static str = "web_navigation_msgs/srv/GetTask_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__web_navigation_msgs__srv__GetTask_Response() }
  }
}


#[link(name = "web_navigation_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__web_navigation_msgs__srv__GetWebMap_Request() -> *const std::ffi::c_void;
}

#[link(name = "web_navigation_msgs__rosidl_generator_c")]
extern "C" {
    fn web_navigation_msgs__srv__GetWebMap_Request__init(msg: *mut GetWebMap_Request) -> bool;
    fn web_navigation_msgs__srv__GetWebMap_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GetWebMap_Request>, size: usize) -> bool;
    fn web_navigation_msgs__srv__GetWebMap_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GetWebMap_Request>);
    fn web_navigation_msgs__srv__GetWebMap_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GetWebMap_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<GetWebMap_Request>) -> bool;
}

// Corresponds to web_navigation_msgs__srv__GetWebMap_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetWebMap_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub if_map_version: rosidl_runtime_rs::String,

}



impl Default for GetWebMap_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !web_navigation_msgs__srv__GetWebMap_Request__init(&mut msg as *mut _) {
        panic!("Call to web_navigation_msgs__srv__GetWebMap_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GetWebMap_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { web_navigation_msgs__srv__GetWebMap_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { web_navigation_msgs__srv__GetWebMap_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { web_navigation_msgs__srv__GetWebMap_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GetWebMap_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GetWebMap_Request where Self: Sized {
  const TYPE_NAME: &'static str = "web_navigation_msgs/srv/GetWebMap_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__web_navigation_msgs__srv__GetWebMap_Request() }
  }
}


#[link(name = "web_navigation_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__web_navigation_msgs__srv__GetWebMap_Response() -> *const std::ffi::c_void;
}

#[link(name = "web_navigation_msgs__rosidl_generator_c")]
extern "C" {
    fn web_navigation_msgs__srv__GetWebMap_Response__init(msg: *mut GetWebMap_Response) -> bool;
    fn web_navigation_msgs__srv__GetWebMap_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GetWebMap_Response>, size: usize) -> bool;
    fn web_navigation_msgs__srv__GetWebMap_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GetWebMap_Response>);
    fn web_navigation_msgs__srv__GetWebMap_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GetWebMap_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<GetWebMap_Response>) -> bool;
}

// Corresponds to web_navigation_msgs__srv__GetWebMap_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetWebMap_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub ready: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub not_modified: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub code: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub map_version: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub map_name: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub coordinate_revision: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub frame_id: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub unit: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub bounds: [f64; 4],


    // This member is not documented.
    #[allow(missing_docs)]
    pub geometry_json: rosidl_runtime_rs::String,

}



impl Default for GetWebMap_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !web_navigation_msgs__srv__GetWebMap_Response__init(&mut msg as *mut _) {
        panic!("Call to web_navigation_msgs__srv__GetWebMap_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GetWebMap_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { web_navigation_msgs__srv__GetWebMap_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { web_navigation_msgs__srv__GetWebMap_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { web_navigation_msgs__srv__GetWebMap_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GetWebMap_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GetWebMap_Response where Self: Sized {
  const TYPE_NAME: &'static str = "web_navigation_msgs/srv/GetWebMap_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__web_navigation_msgs__srv__GetWebMap_Response() }
  }
}






#[link(name = "web_navigation_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__web_navigation_msgs__srv__GetNavigationExecution() -> *const std::ffi::c_void;
}

// Corresponds to web_navigation_msgs__srv__GetNavigationExecution
#[allow(missing_docs, non_camel_case_types)]
pub struct GetNavigationExecution;

impl rosidl_runtime_rs::Service for GetNavigationExecution {
    type Request = GetNavigationExecution_Request;
    type Response = GetNavigationExecution_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__web_navigation_msgs__srv__GetNavigationExecution() }
    }
}




#[link(name = "web_navigation_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__web_navigation_msgs__srv__ControlLease() -> *const std::ffi::c_void;
}

// Corresponds to web_navigation_msgs__srv__ControlLease
#[allow(missing_docs, non_camel_case_types)]
pub struct ControlLease;

impl rosidl_runtime_rs::Service for ControlLease {
    type Request = ControlLease_Request;
    type Response = ControlLease_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__web_navigation_msgs__srv__ControlLease() }
    }
}




#[link(name = "web_navigation_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__web_navigation_msgs__srv__ValidateTarget() -> *const std::ffi::c_void;
}

// Corresponds to web_navigation_msgs__srv__ValidateTarget
#[allow(missing_docs, non_camel_case_types)]
pub struct ValidateTarget;

impl rosidl_runtime_rs::Service for ValidateTarget {
    type Request = ValidateTarget_Request;
    type Response = ValidateTarget_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__web_navigation_msgs__srv__ValidateTarget() }
    }
}




#[link(name = "web_navigation_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__web_navigation_msgs__srv__SubmitGoal() -> *const std::ffi::c_void;
}

// Corresponds to web_navigation_msgs__srv__SubmitGoal
#[allow(missing_docs, non_camel_case_types)]
pub struct SubmitGoal;

impl rosidl_runtime_rs::Service for SubmitGoal {
    type Request = SubmitGoal_Request;
    type Response = SubmitGoal_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__web_navigation_msgs__srv__SubmitGoal() }
    }
}




#[link(name = "web_navigation_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__web_navigation_msgs__srv__CancelTask() -> *const std::ffi::c_void;
}

// Corresponds to web_navigation_msgs__srv__CancelTask
#[allow(missing_docs, non_camel_case_types)]
pub struct CancelTask;

impl rosidl_runtime_rs::Service for CancelTask {
    type Request = CancelTask_Request;
    type Response = CancelTask_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__web_navigation_msgs__srv__CancelTask() }
    }
}




#[link(name = "web_navigation_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__web_navigation_msgs__srv__GetSnapshot() -> *const std::ffi::c_void;
}

// Corresponds to web_navigation_msgs__srv__GetSnapshot
#[allow(missing_docs, non_camel_case_types)]
pub struct GetSnapshot;

impl rosidl_runtime_rs::Service for GetSnapshot {
    type Request = GetSnapshot_Request;
    type Response = GetSnapshot_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__web_navigation_msgs__srv__GetSnapshot() }
    }
}




#[link(name = "web_navigation_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__web_navigation_msgs__srv__GetRequest() -> *const std::ffi::c_void;
}

// Corresponds to web_navigation_msgs__srv__GetRequest
#[allow(missing_docs, non_camel_case_types)]
pub struct GetRequest;

impl rosidl_runtime_rs::Service for GetRequest {
    type Request = GetRequest_Request;
    type Response = GetRequest_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__web_navigation_msgs__srv__GetRequest() }
    }
}




#[link(name = "web_navigation_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__web_navigation_msgs__srv__GetTask() -> *const std::ffi::c_void;
}

// Corresponds to web_navigation_msgs__srv__GetTask
#[allow(missing_docs, non_camel_case_types)]
pub struct GetTask;

impl rosidl_runtime_rs::Service for GetTask {
    type Request = GetTask_Request;
    type Response = GetTask_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__web_navigation_msgs__srv__GetTask() }
    }
}




#[link(name = "web_navigation_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__web_navigation_msgs__srv__GetWebMap() -> *const std::ffi::c_void;
}

// Corresponds to web_navigation_msgs__srv__GetWebMap
#[allow(missing_docs, non_camel_case_types)]
pub struct GetWebMap;

impl rosidl_runtime_rs::Service for GetWebMap {
    type Request = GetWebMap_Request;
    type Response = GetWebMap_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__web_navigation_msgs__srv__GetWebMap() }
    }
}


