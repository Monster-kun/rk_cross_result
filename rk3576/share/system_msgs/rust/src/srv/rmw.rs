#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



#[link(name = "system_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__system_msgs__srv__IsEmergencyStop_Request() -> *const std::ffi::c_void;
}

#[link(name = "system_msgs__rosidl_generator_c")]
extern "C" {
    fn system_msgs__srv__IsEmergencyStop_Request__init(msg: *mut IsEmergencyStop_Request) -> bool;
    fn system_msgs__srv__IsEmergencyStop_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<IsEmergencyStop_Request>, size: usize) -> bool;
    fn system_msgs__srv__IsEmergencyStop_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<IsEmergencyStop_Request>);
    fn system_msgs__srv__IsEmergencyStop_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<IsEmergencyStop_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<IsEmergencyStop_Request>) -> bool;
}

// Corresponds to system_msgs__srv__IsEmergencyStop_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct IsEmergencyStop_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub input: std_msgs::msg::rmw::Empty,

}



impl Default for IsEmergencyStop_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !system_msgs__srv__IsEmergencyStop_Request__init(&mut msg as *mut _) {
        panic!("Call to system_msgs__srv__IsEmergencyStop_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for IsEmergencyStop_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { system_msgs__srv__IsEmergencyStop_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { system_msgs__srv__IsEmergencyStop_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { system_msgs__srv__IsEmergencyStop_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for IsEmergencyStop_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for IsEmergencyStop_Request where Self: Sized {
  const TYPE_NAME: &'static str = "system_msgs/srv/IsEmergencyStop_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__system_msgs__srv__IsEmergencyStop_Request() }
  }
}


#[link(name = "system_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__system_msgs__srv__IsEmergencyStop_Response() -> *const std::ffi::c_void;
}

#[link(name = "system_msgs__rosidl_generator_c")]
extern "C" {
    fn system_msgs__srv__IsEmergencyStop_Response__init(msg: *mut IsEmergencyStop_Response) -> bool;
    fn system_msgs__srv__IsEmergencyStop_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<IsEmergencyStop_Response>, size: usize) -> bool;
    fn system_msgs__srv__IsEmergencyStop_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<IsEmergencyStop_Response>);
    fn system_msgs__srv__IsEmergencyStop_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<IsEmergencyStop_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<IsEmergencyStop_Response>) -> bool;
}

// Corresponds to system_msgs__srv__IsEmergencyStop_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct IsEmergencyStop_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub is_emergency_stop: bool,

}



impl Default for IsEmergencyStop_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !system_msgs__srv__IsEmergencyStop_Response__init(&mut msg as *mut _) {
        panic!("Call to system_msgs__srv__IsEmergencyStop_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for IsEmergencyStop_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { system_msgs__srv__IsEmergencyStop_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { system_msgs__srv__IsEmergencyStop_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { system_msgs__srv__IsEmergencyStop_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for IsEmergencyStop_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for IsEmergencyStop_Response where Self: Sized {
  const TYPE_NAME: &'static str = "system_msgs/srv/IsEmergencyStop_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__system_msgs__srv__IsEmergencyStop_Response() }
  }
}


#[link(name = "system_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__system_msgs__srv__NeedSlowDown_Request() -> *const std::ffi::c_void;
}

#[link(name = "system_msgs__rosidl_generator_c")]
extern "C" {
    fn system_msgs__srv__NeedSlowDown_Request__init(msg: *mut NeedSlowDown_Request) -> bool;
    fn system_msgs__srv__NeedSlowDown_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<NeedSlowDown_Request>, size: usize) -> bool;
    fn system_msgs__srv__NeedSlowDown_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<NeedSlowDown_Request>);
    fn system_msgs__srv__NeedSlowDown_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<NeedSlowDown_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<NeedSlowDown_Request>) -> bool;
}

// Corresponds to system_msgs__srv__NeedSlowDown_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct NeedSlowDown_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub pose: geometry_msgs::msg::rmw::Pose,

}



impl Default for NeedSlowDown_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !system_msgs__srv__NeedSlowDown_Request__init(&mut msg as *mut _) {
        panic!("Call to system_msgs__srv__NeedSlowDown_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for NeedSlowDown_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { system_msgs__srv__NeedSlowDown_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { system_msgs__srv__NeedSlowDown_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { system_msgs__srv__NeedSlowDown_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for NeedSlowDown_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for NeedSlowDown_Request where Self: Sized {
  const TYPE_NAME: &'static str = "system_msgs/srv/NeedSlowDown_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__system_msgs__srv__NeedSlowDown_Request() }
  }
}


#[link(name = "system_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__system_msgs__srv__NeedSlowDown_Response() -> *const std::ffi::c_void;
}

#[link(name = "system_msgs__rosidl_generator_c")]
extern "C" {
    fn system_msgs__srv__NeedSlowDown_Response__init(msg: *mut NeedSlowDown_Response) -> bool;
    fn system_msgs__srv__NeedSlowDown_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<NeedSlowDown_Response>, size: usize) -> bool;
    fn system_msgs__srv__NeedSlowDown_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<NeedSlowDown_Response>);
    fn system_msgs__srv__NeedSlowDown_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<NeedSlowDown_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<NeedSlowDown_Response>) -> bool;
}

// Corresponds to system_msgs__srv__NeedSlowDown_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct NeedSlowDown_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub slow_down: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub slow_down_ratio: f32,

}



impl Default for NeedSlowDown_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !system_msgs__srv__NeedSlowDown_Response__init(&mut msg as *mut _) {
        panic!("Call to system_msgs__srv__NeedSlowDown_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for NeedSlowDown_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { system_msgs__srv__NeedSlowDown_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { system_msgs__srv__NeedSlowDown_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { system_msgs__srv__NeedSlowDown_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for NeedSlowDown_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for NeedSlowDown_Response where Self: Sized {
  const TYPE_NAME: &'static str = "system_msgs/srv/NeedSlowDown_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__system_msgs__srv__NeedSlowDown_Response() }
  }
}


#[link(name = "system_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__system_msgs__srv__ManageLifecycleNodes_Request() -> *const std::ffi::c_void;
}

#[link(name = "system_msgs__rosidl_generator_c")]
extern "C" {
    fn system_msgs__srv__ManageLifecycleNodes_Request__init(msg: *mut ManageLifecycleNodes_Request) -> bool;
    fn system_msgs__srv__ManageLifecycleNodes_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ManageLifecycleNodes_Request>, size: usize) -> bool;
    fn system_msgs__srv__ManageLifecycleNodes_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ManageLifecycleNodes_Request>);
    fn system_msgs__srv__ManageLifecycleNodes_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ManageLifecycleNodes_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<ManageLifecycleNodes_Request>) -> bool;
}

// Corresponds to system_msgs__srv__ManageLifecycleNodes_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ManageLifecycleNodes_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub command: u8,

}

impl ManageLifecycleNodes_Request {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const STARTUP: u8 = 0;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const PAUSE: u8 = 1;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const RESUME: u8 = 2;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const RESET: u8 = 3;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const SHUTDOWN: u8 = 4;

}


impl Default for ManageLifecycleNodes_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !system_msgs__srv__ManageLifecycleNodes_Request__init(&mut msg as *mut _) {
        panic!("Call to system_msgs__srv__ManageLifecycleNodes_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ManageLifecycleNodes_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { system_msgs__srv__ManageLifecycleNodes_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { system_msgs__srv__ManageLifecycleNodes_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { system_msgs__srv__ManageLifecycleNodes_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ManageLifecycleNodes_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ManageLifecycleNodes_Request where Self: Sized {
  const TYPE_NAME: &'static str = "system_msgs/srv/ManageLifecycleNodes_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__system_msgs__srv__ManageLifecycleNodes_Request() }
  }
}


#[link(name = "system_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__system_msgs__srv__ManageLifecycleNodes_Response() -> *const std::ffi::c_void;
}

#[link(name = "system_msgs__rosidl_generator_c")]
extern "C" {
    fn system_msgs__srv__ManageLifecycleNodes_Response__init(msg: *mut ManageLifecycleNodes_Response) -> bool;
    fn system_msgs__srv__ManageLifecycleNodes_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ManageLifecycleNodes_Response>, size: usize) -> bool;
    fn system_msgs__srv__ManageLifecycleNodes_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ManageLifecycleNodes_Response>);
    fn system_msgs__srv__ManageLifecycleNodes_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ManageLifecycleNodes_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<ManageLifecycleNodes_Response>) -> bool;
}

// Corresponds to system_msgs__srv__ManageLifecycleNodes_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ManageLifecycleNodes_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,

}



impl Default for ManageLifecycleNodes_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !system_msgs__srv__ManageLifecycleNodes_Response__init(&mut msg as *mut _) {
        panic!("Call to system_msgs__srv__ManageLifecycleNodes_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ManageLifecycleNodes_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { system_msgs__srv__ManageLifecycleNodes_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { system_msgs__srv__ManageLifecycleNodes_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { system_msgs__srv__ManageLifecycleNodes_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ManageLifecycleNodes_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ManageLifecycleNodes_Response where Self: Sized {
  const TYPE_NAME: &'static str = "system_msgs/srv/ManageLifecycleNodes_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__system_msgs__srv__ManageLifecycleNodes_Response() }
  }
}






#[link(name = "system_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__system_msgs__srv__IsEmergencyStop() -> *const std::ffi::c_void;
}

// Corresponds to system_msgs__srv__IsEmergencyStop
#[allow(missing_docs, non_camel_case_types)]
pub struct IsEmergencyStop;

impl rosidl_runtime_rs::Service for IsEmergencyStop {
    type Request = IsEmergencyStop_Request;
    type Response = IsEmergencyStop_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__system_msgs__srv__IsEmergencyStop() }
    }
}




#[link(name = "system_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__system_msgs__srv__NeedSlowDown() -> *const std::ffi::c_void;
}

// Corresponds to system_msgs__srv__NeedSlowDown
#[allow(missing_docs, non_camel_case_types)]
pub struct NeedSlowDown;

impl rosidl_runtime_rs::Service for NeedSlowDown {
    type Request = NeedSlowDown_Request;
    type Response = NeedSlowDown_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__system_msgs__srv__NeedSlowDown() }
    }
}




#[link(name = "system_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__system_msgs__srv__ManageLifecycleNodes() -> *const std::ffi::c_void;
}

// Corresponds to system_msgs__srv__ManageLifecycleNodes
#[allow(missing_docs, non_camel_case_types)]
pub struct ManageLifecycleNodes;

impl rosidl_runtime_rs::Service for ManageLifecycleNodes {
    type Request = ManageLifecycleNodes_Request;
    type Response = ManageLifecycleNodes_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__system_msgs__srv__ManageLifecycleNodes() }
    }
}


