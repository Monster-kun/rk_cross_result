#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



#[link(name = "localization_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__localization_msgs__srv__Relocation_Request() -> *const std::ffi::c_void;
}

#[link(name = "localization_msgs__rosidl_generator_c")]
extern "C" {
    fn localization_msgs__srv__Relocation_Request__init(msg: *mut Relocation_Request) -> bool;
    fn localization_msgs__srv__Relocation_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Relocation_Request>, size: usize) -> bool;
    fn localization_msgs__srv__Relocation_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Relocation_Request>);
    fn localization_msgs__srv__Relocation_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Relocation_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<Relocation_Request>) -> bool;
}

// Corresponds to localization_msgs__srv__Relocation_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Relocation_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub cloud: sensor_msgs::msg::rmw::PointCloud2,


    // This member is not documented.
    #[allow(missing_docs)]
    pub map_name: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub relocation_method: i64,

}



impl Default for Relocation_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !localization_msgs__srv__Relocation_Request__init(&mut msg as *mut _) {
        panic!("Call to localization_msgs__srv__Relocation_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Relocation_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { localization_msgs__srv__Relocation_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { localization_msgs__srv__Relocation_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { localization_msgs__srv__Relocation_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Relocation_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Relocation_Request where Self: Sized {
  const TYPE_NAME: &'static str = "localization_msgs/srv/Relocation_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__localization_msgs__srv__Relocation_Request() }
  }
}


#[link(name = "localization_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__localization_msgs__srv__Relocation_Response() -> *const std::ffi::c_void;
}

#[link(name = "localization_msgs__rosidl_generator_c")]
extern "C" {
    fn localization_msgs__srv__Relocation_Response__init(msg: *mut Relocation_Response) -> bool;
    fn localization_msgs__srv__Relocation_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Relocation_Response>, size: usize) -> bool;
    fn localization_msgs__srv__Relocation_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Relocation_Response>);
    fn localization_msgs__srv__Relocation_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Relocation_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<Relocation_Response>) -> bool;
}

// Corresponds to localization_msgs__srv__Relocation_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Relocation_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub init_pose: geometry_msgs::msg::rmw::PoseStamped,


    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,

}



impl Default for Relocation_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !localization_msgs__srv__Relocation_Response__init(&mut msg as *mut _) {
        panic!("Call to localization_msgs__srv__Relocation_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Relocation_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { localization_msgs__srv__Relocation_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { localization_msgs__srv__Relocation_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { localization_msgs__srv__Relocation_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Relocation_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Relocation_Response where Self: Sized {
  const TYPE_NAME: &'static str = "localization_msgs/srv/Relocation_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__localization_msgs__srv__Relocation_Response() }
  }
}






#[link(name = "localization_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__localization_msgs__srv__Relocation() -> *const std::ffi::c_void;
}

// Corresponds to localization_msgs__srv__Relocation
#[allow(missing_docs, non_camel_case_types)]
pub struct Relocation;

impl rosidl_runtime_rs::Service for Relocation {
    type Request = Relocation_Request;
    type Response = Relocation_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__localization_msgs__srv__Relocation() }
    }
}


