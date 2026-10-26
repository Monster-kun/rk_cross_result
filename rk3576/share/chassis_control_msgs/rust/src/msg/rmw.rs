#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};


#[link(name = "chassis_control_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__chassis_control_msgs__msg__Crsf() -> *const std::ffi::c_void;
}

#[link(name = "chassis_control_msgs__rosidl_generator_c")]
extern "C" {
    fn chassis_control_msgs__msg__Crsf__init(msg: *mut Crsf) -> bool;
    fn chassis_control_msgs__msg__Crsf__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Crsf>, size: usize) -> bool;
    fn chassis_control_msgs__msg__Crsf__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Crsf>);
    fn chassis_control_msgs__msg__Crsf__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Crsf>, out_seq: *mut rosidl_runtime_rs::Sequence<Crsf>) -> bool;
}

// Corresponds to chassis_control_msgs__msg__Crsf
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Crsf {

    // This member is not documented.
    #[allow(missing_docs)]
    pub ch1: i16,


    // This member is not documented.
    #[allow(missing_docs)]
    pub ch2: i16,


    // This member is not documented.
    #[allow(missing_docs)]
    pub ch3: i16,


    // This member is not documented.
    #[allow(missing_docs)]
    pub ch4: i16,


    // This member is not documented.
    #[allow(missing_docs)]
    pub ch5: i16,


    // This member is not documented.
    #[allow(missing_docs)]
    pub ch6: i16,


    // This member is not documented.
    #[allow(missing_docs)]
    pub ch7: i16,


    // This member is not documented.
    #[allow(missing_docs)]
    pub ch8: i16,


    // This member is not documented.
    #[allow(missing_docs)]
    pub ch9: i16,


    // This member is not documented.
    #[allow(missing_docs)]
    pub ch10: i16,


    // This member is not documented.
    #[allow(missing_docs)]
    pub ch11: i16,


    // This member is not documented.
    #[allow(missing_docs)]
    pub ch12: i16,


    // This member is not documented.
    #[allow(missing_docs)]
    pub ch13: i16,


    // This member is not documented.
    #[allow(missing_docs)]
    pub ch14: i16,


    // This member is not documented.
    #[allow(missing_docs)]
    pub ch15: i16,


    // This member is not documented.
    #[allow(missing_docs)]
    pub ch16: i16,

}



impl Default for Crsf {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !chassis_control_msgs__msg__Crsf__init(&mut msg as *mut _) {
        panic!("Call to chassis_control_msgs__msg__Crsf__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Crsf {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { chassis_control_msgs__msg__Crsf__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { chassis_control_msgs__msg__Crsf__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { chassis_control_msgs__msg__Crsf__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Crsf {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Crsf where Self: Sized {
  const TYPE_NAME: &'static str = "chassis_control_msgs/msg/Crsf";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__chassis_control_msgs__msg__Crsf() }
  }
}


#[link(name = "chassis_control_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__chassis_control_msgs__msg__Ackcmd() -> *const std::ffi::c_void;
}

#[link(name = "chassis_control_msgs__rosidl_generator_c")]
extern "C" {
    fn chassis_control_msgs__msg__Ackcmd__init(msg: *mut Ackcmd) -> bool;
    fn chassis_control_msgs__msg__Ackcmd__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Ackcmd>, size: usize) -> bool;
    fn chassis_control_msgs__msg__Ackcmd__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Ackcmd>);
    fn chassis_control_msgs__msg__Ackcmd__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Ackcmd>, out_seq: *mut rosidl_runtime_rs::Sequence<Ackcmd>) -> bool;
}

// Corresponds to chassis_control_msgs__msg__Ackcmd
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Ackcmd {

    // This member is not documented.
    #[allow(missing_docs)]
    pub vel: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub steer: f32,

}



impl Default for Ackcmd {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !chassis_control_msgs__msg__Ackcmd__init(&mut msg as *mut _) {
        panic!("Call to chassis_control_msgs__msg__Ackcmd__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Ackcmd {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { chassis_control_msgs__msg__Ackcmd__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { chassis_control_msgs__msg__Ackcmd__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { chassis_control_msgs__msg__Ackcmd__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Ackcmd {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Ackcmd where Self: Sized {
  const TYPE_NAME: &'static str = "chassis_control_msgs/msg/Ackcmd";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__chassis_control_msgs__msg__Ackcmd() }
  }
}


#[link(name = "chassis_control_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__chassis_control_msgs__msg__Ominicmd() -> *const std::ffi::c_void;
}

#[link(name = "chassis_control_msgs__rosidl_generator_c")]
extern "C" {
    fn chassis_control_msgs__msg__Ominicmd__init(msg: *mut Ominicmd) -> bool;
    fn chassis_control_msgs__msg__Ominicmd__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Ominicmd>, size: usize) -> bool;
    fn chassis_control_msgs__msg__Ominicmd__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Ominicmd>);
    fn chassis_control_msgs__msg__Ominicmd__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Ominicmd>, out_seq: *mut rosidl_runtime_rs::Sequence<Ominicmd>) -> bool;
}

// Corresponds to chassis_control_msgs__msg__Ominicmd
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Ominicmd {

    // This member is not documented.
    #[allow(missing_docs)]
    pub x: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub y: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub angle: f32,

}



impl Default for Ominicmd {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !chassis_control_msgs__msg__Ominicmd__init(&mut msg as *mut _) {
        panic!("Call to chassis_control_msgs__msg__Ominicmd__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Ominicmd {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { chassis_control_msgs__msg__Ominicmd__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { chassis_control_msgs__msg__Ominicmd__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { chassis_control_msgs__msg__Ominicmd__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Ominicmd {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Ominicmd where Self: Sized {
  const TYPE_NAME: &'static str = "chassis_control_msgs/msg/Ominicmd";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__chassis_control_msgs__msg__Ominicmd() }
  }
}


#[link(name = "chassis_control_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__chassis_control_msgs__msg__Frenet() -> *const std::ffi::c_void;
}

#[link(name = "chassis_control_msgs__rosidl_generator_c")]
extern "C" {
    fn chassis_control_msgs__msg__Frenet__init(msg: *mut Frenet) -> bool;
    fn chassis_control_msgs__msg__Frenet__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Frenet>, size: usize) -> bool;
    fn chassis_control_msgs__msg__Frenet__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Frenet>);
    fn chassis_control_msgs__msg__Frenet__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Frenet>, out_seq: *mut rosidl_runtime_rs::Sequence<Frenet>) -> bool;
}

// Corresponds to chassis_control_msgs__msg__Frenet
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Frenet {

    // This member is not documented.
    #[allow(missing_docs)]
    pub s: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub ds: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub dds: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub l: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub dl: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub ddl: f32,

}



impl Default for Frenet {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !chassis_control_msgs__msg__Frenet__init(&mut msg as *mut _) {
        panic!("Call to chassis_control_msgs__msg__Frenet__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Frenet {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { chassis_control_msgs__msg__Frenet__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { chassis_control_msgs__msg__Frenet__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { chassis_control_msgs__msg__Frenet__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Frenet {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Frenet where Self: Sized {
  const TYPE_NAME: &'static str = "chassis_control_msgs/msg/Frenet";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__chassis_control_msgs__msg__Frenet() }
  }
}


#[link(name = "chassis_control_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__chassis_control_msgs__msg__PurepursuitViz() -> *const std::ffi::c_void;
}

#[link(name = "chassis_control_msgs__rosidl_generator_c")]
extern "C" {
    fn chassis_control_msgs__msg__PurepursuitViz__init(msg: *mut PurepursuitViz) -> bool;
    fn chassis_control_msgs__msg__PurepursuitViz__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<PurepursuitViz>, size: usize) -> bool;
    fn chassis_control_msgs__msg__PurepursuitViz__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<PurepursuitViz>);
    fn chassis_control_msgs__msg__PurepursuitViz__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<PurepursuitViz>, out_seq: *mut rosidl_runtime_rs::Sequence<PurepursuitViz>) -> bool;
}

// Corresponds to chassis_control_msgs__msg__PurepursuitViz
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct PurepursuitViz {

    // This member is not documented.
    #[allow(missing_docs)]
    pub aimpointx: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub aimpointy: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub velx: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub vely: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub velz: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub ahead: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub currentx: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub currenty: f64,

}



impl Default for PurepursuitViz {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !chassis_control_msgs__msg__PurepursuitViz__init(&mut msg as *mut _) {
        panic!("Call to chassis_control_msgs__msg__PurepursuitViz__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for PurepursuitViz {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { chassis_control_msgs__msg__PurepursuitViz__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { chassis_control_msgs__msg__PurepursuitViz__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { chassis_control_msgs__msg__PurepursuitViz__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for PurepursuitViz {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for PurepursuitViz where Self: Sized {
  const TYPE_NAME: &'static str = "chassis_control_msgs/msg/PurepursuitViz";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__chassis_control_msgs__msg__PurepursuitViz() }
  }
}


#[link(name = "chassis_control_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__chassis_control_msgs__msg__Canframe() -> *const std::ffi::c_void;
}

#[link(name = "chassis_control_msgs__rosidl_generator_c")]
extern "C" {
    fn chassis_control_msgs__msg__Canframe__init(msg: *mut Canframe) -> bool;
    fn chassis_control_msgs__msg__Canframe__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Canframe>, size: usize) -> bool;
    fn chassis_control_msgs__msg__Canframe__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Canframe>);
    fn chassis_control_msgs__msg__Canframe__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Canframe>, out_seq: *mut rosidl_runtime_rs::Sequence<Canframe>) -> bool;
}

// Corresponds to chassis_control_msgs__msg__Canframe
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// ID is the pivot frame ID

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Canframe {

    // This member is not documented.
    #[allow(missing_docs)]
    pub id: i32,

    /// m/s
    pub dricmd: f32,

    /// rad
    pub pivcmd: f32,

}



impl Default for Canframe {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !chassis_control_msgs__msg__Canframe__init(&mut msg as *mut _) {
        panic!("Call to chassis_control_msgs__msg__Canframe__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Canframe {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { chassis_control_msgs__msg__Canframe__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { chassis_control_msgs__msg__Canframe__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { chassis_control_msgs__msg__Canframe__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Canframe {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Canframe where Self: Sized {
  const TYPE_NAME: &'static str = "chassis_control_msgs/msg/Canframe";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__chassis_control_msgs__msg__Canframe() }
  }
}


