#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



#[link(name = "behavior_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__behavior_msgs__srv__IsPathValid_Request() -> *const std::ffi::c_void;
}

#[link(name = "behavior_msgs__rosidl_generator_c")]
extern "C" {
    fn behavior_msgs__srv__IsPathValid_Request__init(msg: *mut IsPathValid_Request) -> bool;
    fn behavior_msgs__srv__IsPathValid_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<IsPathValid_Request>, size: usize) -> bool;
    fn behavior_msgs__srv__IsPathValid_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<IsPathValid_Request>);
    fn behavior_msgs__srv__IsPathValid_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<IsPathValid_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<IsPathValid_Request>) -> bool;
}

// Corresponds to behavior_msgs__srv__IsPathValid_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct IsPathValid_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub check_distance: f32,

}



impl Default for IsPathValid_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !behavior_msgs__srv__IsPathValid_Request__init(&mut msg as *mut _) {
        panic!("Call to behavior_msgs__srv__IsPathValid_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for IsPathValid_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { behavior_msgs__srv__IsPathValid_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { behavior_msgs__srv__IsPathValid_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { behavior_msgs__srv__IsPathValid_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for IsPathValid_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for IsPathValid_Request where Self: Sized {
  const TYPE_NAME: &'static str = "behavior_msgs/srv/IsPathValid_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__behavior_msgs__srv__IsPathValid_Request() }
  }
}


#[link(name = "behavior_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__behavior_msgs__srv__IsPathValid_Response() -> *const std::ffi::c_void;
}

#[link(name = "behavior_msgs__rosidl_generator_c")]
extern "C" {
    fn behavior_msgs__srv__IsPathValid_Response__init(msg: *mut IsPathValid_Response) -> bool;
    fn behavior_msgs__srv__IsPathValid_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<IsPathValid_Response>, size: usize) -> bool;
    fn behavior_msgs__srv__IsPathValid_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<IsPathValid_Response>);
    fn behavior_msgs__srv__IsPathValid_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<IsPathValid_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<IsPathValid_Response>) -> bool;
}

// Corresponds to behavior_msgs__srv__IsPathValid_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct IsPathValid_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub is_valid: bool,

}



impl Default for IsPathValid_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !behavior_msgs__srv__IsPathValid_Response__init(&mut msg as *mut _) {
        panic!("Call to behavior_msgs__srv__IsPathValid_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for IsPathValid_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { behavior_msgs__srv__IsPathValid_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { behavior_msgs__srv__IsPathValid_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { behavior_msgs__srv__IsPathValid_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for IsPathValid_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for IsPathValid_Response where Self: Sized {
  const TYPE_NAME: &'static str = "behavior_msgs/srv/IsPathValid_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__behavior_msgs__srv__IsPathValid_Response() }
  }
}


#[link(name = "behavior_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__behavior_msgs__srv__IsPathCollision_Request() -> *const std::ffi::c_void;
}

#[link(name = "behavior_msgs__rosidl_generator_c")]
extern "C" {
    fn behavior_msgs__srv__IsPathCollision_Request__init(msg: *mut IsPathCollision_Request) -> bool;
    fn behavior_msgs__srv__IsPathCollision_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<IsPathCollision_Request>, size: usize) -> bool;
    fn behavior_msgs__srv__IsPathCollision_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<IsPathCollision_Request>);
    fn behavior_msgs__srv__IsPathCollision_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<IsPathCollision_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<IsPathCollision_Request>) -> bool;
}

// Corresponds to behavior_msgs__srv__IsPathCollision_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct IsPathCollision_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub check_distance: f32,

}



impl Default for IsPathCollision_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !behavior_msgs__srv__IsPathCollision_Request__init(&mut msg as *mut _) {
        panic!("Call to behavior_msgs__srv__IsPathCollision_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for IsPathCollision_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { behavior_msgs__srv__IsPathCollision_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { behavior_msgs__srv__IsPathCollision_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { behavior_msgs__srv__IsPathCollision_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for IsPathCollision_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for IsPathCollision_Request where Self: Sized {
  const TYPE_NAME: &'static str = "behavior_msgs/srv/IsPathCollision_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__behavior_msgs__srv__IsPathCollision_Request() }
  }
}


#[link(name = "behavior_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__behavior_msgs__srv__IsPathCollision_Response() -> *const std::ffi::c_void;
}

#[link(name = "behavior_msgs__rosidl_generator_c")]
extern "C" {
    fn behavior_msgs__srv__IsPathCollision_Response__init(msg: *mut IsPathCollision_Response) -> bool;
    fn behavior_msgs__srv__IsPathCollision_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<IsPathCollision_Response>, size: usize) -> bool;
    fn behavior_msgs__srv__IsPathCollision_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<IsPathCollision_Response>);
    fn behavior_msgs__srv__IsPathCollision_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<IsPathCollision_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<IsPathCollision_Response>) -> bool;
}

// Corresponds to behavior_msgs__srv__IsPathCollision_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct IsPathCollision_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub is_valid: bool,

}



impl Default for IsPathCollision_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !behavior_msgs__srv__IsPathCollision_Response__init(&mut msg as *mut _) {
        panic!("Call to behavior_msgs__srv__IsPathCollision_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for IsPathCollision_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { behavior_msgs__srv__IsPathCollision_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { behavior_msgs__srv__IsPathCollision_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { behavior_msgs__srv__IsPathCollision_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for IsPathCollision_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for IsPathCollision_Response where Self: Sized {
  const TYPE_NAME: &'static str = "behavior_msgs/srv/IsPathCollision_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__behavior_msgs__srv__IsPathCollision_Response() }
  }
}


#[link(name = "behavior_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__behavior_msgs__srv__SelectPlanner_Request() -> *const std::ffi::c_void;
}

#[link(name = "behavior_msgs__rosidl_generator_c")]
extern "C" {
    fn behavior_msgs__srv__SelectPlanner_Request__init(msg: *mut SelectPlanner_Request) -> bool;
    fn behavior_msgs__srv__SelectPlanner_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SelectPlanner_Request>, size: usize) -> bool;
    fn behavior_msgs__srv__SelectPlanner_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SelectPlanner_Request>);
    fn behavior_msgs__srv__SelectPlanner_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SelectPlanner_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<SelectPlanner_Request>) -> bool;
}

// Corresponds to behavior_msgs__srv__SelectPlanner_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SelectPlanner_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub planner_selector_id: rosidl_runtime_rs::String,

}



impl Default for SelectPlanner_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !behavior_msgs__srv__SelectPlanner_Request__init(&mut msg as *mut _) {
        panic!("Call to behavior_msgs__srv__SelectPlanner_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SelectPlanner_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { behavior_msgs__srv__SelectPlanner_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { behavior_msgs__srv__SelectPlanner_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { behavior_msgs__srv__SelectPlanner_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SelectPlanner_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SelectPlanner_Request where Self: Sized {
  const TYPE_NAME: &'static str = "behavior_msgs/srv/SelectPlanner_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__behavior_msgs__srv__SelectPlanner_Request() }
  }
}


#[link(name = "behavior_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__behavior_msgs__srv__SelectPlanner_Response() -> *const std::ffi::c_void;
}

#[link(name = "behavior_msgs__rosidl_generator_c")]
extern "C" {
    fn behavior_msgs__srv__SelectPlanner_Response__init(msg: *mut SelectPlanner_Response) -> bool;
    fn behavior_msgs__srv__SelectPlanner_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SelectPlanner_Response>, size: usize) -> bool;
    fn behavior_msgs__srv__SelectPlanner_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SelectPlanner_Response>);
    fn behavior_msgs__srv__SelectPlanner_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SelectPlanner_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<SelectPlanner_Response>) -> bool;
}

// Corresponds to behavior_msgs__srv__SelectPlanner_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SelectPlanner_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub local_planner_id: rosidl_runtime_rs::String,

}



impl Default for SelectPlanner_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !behavior_msgs__srv__SelectPlanner_Response__init(&mut msg as *mut _) {
        panic!("Call to behavior_msgs__srv__SelectPlanner_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SelectPlanner_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { behavior_msgs__srv__SelectPlanner_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { behavior_msgs__srv__SelectPlanner_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { behavior_msgs__srv__SelectPlanner_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SelectPlanner_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SelectPlanner_Response where Self: Sized {
  const TYPE_NAME: &'static str = "behavior_msgs/srv/SelectPlanner_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__behavior_msgs__srv__SelectPlanner_Response() }
  }
}






#[link(name = "behavior_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__behavior_msgs__srv__IsPathValid() -> *const std::ffi::c_void;
}

// Corresponds to behavior_msgs__srv__IsPathValid
#[allow(missing_docs, non_camel_case_types)]
pub struct IsPathValid;

impl rosidl_runtime_rs::Service for IsPathValid {
    type Request = IsPathValid_Request;
    type Response = IsPathValid_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__behavior_msgs__srv__IsPathValid() }
    }
}




#[link(name = "behavior_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__behavior_msgs__srv__IsPathCollision() -> *const std::ffi::c_void;
}

// Corresponds to behavior_msgs__srv__IsPathCollision
#[allow(missing_docs, non_camel_case_types)]
pub struct IsPathCollision;

impl rosidl_runtime_rs::Service for IsPathCollision {
    type Request = IsPathCollision_Request;
    type Response = IsPathCollision_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__behavior_msgs__srv__IsPathCollision() }
    }
}




#[link(name = "behavior_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__behavior_msgs__srv__SelectPlanner() -> *const std::ffi::c_void;
}

// Corresponds to behavior_msgs__srv__SelectPlanner
#[allow(missing_docs, non_camel_case_types)]
pub struct SelectPlanner;

impl rosidl_runtime_rs::Service for SelectPlanner {
    type Request = SelectPlanner_Request;
    type Response = SelectPlanner_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__behavior_msgs__srv__SelectPlanner() }
    }
}


