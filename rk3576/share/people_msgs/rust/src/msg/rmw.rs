#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};


#[link(name = "people_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__people_msgs__msg__People() -> *const std::ffi::c_void;
}

#[link(name = "people_msgs__rosidl_generator_c")]
extern "C" {
    fn people_msgs__msg__People__init(msg: *mut People) -> bool;
    fn people_msgs__msg__People__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<People>, size: usize) -> bool;
    fn people_msgs__msg__People__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<People>);
    fn people_msgs__msg__People__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<People>, out_seq: *mut rosidl_runtime_rs::Sequence<People>) -> bool;
}

// Corresponds to people_msgs__msg__People
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct People {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub people: rosidl_runtime_rs::Sequence<super::super::msg::rmw::Person>,

}



impl Default for People {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !people_msgs__msg__People__init(&mut msg as *mut _) {
        panic!("Call to people_msgs__msg__People__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for People {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { people_msgs__msg__People__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { people_msgs__msg__People__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { people_msgs__msg__People__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for People {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for People where Self: Sized {
  const TYPE_NAME: &'static str = "people_msgs/msg/People";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__people_msgs__msg__People() }
  }
}


#[link(name = "people_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__people_msgs__msg__Person() -> *const std::ffi::c_void;
}

#[link(name = "people_msgs__rosidl_generator_c")]
extern "C" {
    fn people_msgs__msg__Person__init(msg: *mut Person) -> bool;
    fn people_msgs__msg__Person__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Person>, size: usize) -> bool;
    fn people_msgs__msg__Person__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Person>);
    fn people_msgs__msg__Person__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Person>, out_seq: *mut rosidl_runtime_rs::Sequence<Person>) -> bool;
}

// Corresponds to people_msgs__msg__Person
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Person {

    // This member is not documented.
    #[allow(missing_docs)]
    pub name: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub position: geometry_msgs::msg::rmw::Point,


    // This member is not documented.
    #[allow(missing_docs)]
    pub velocity: geometry_msgs::msg::rmw::Point,


    // This member is not documented.
    #[allow(missing_docs)]
    pub reliability: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub tagnames: rosidl_runtime_rs::Sequence<rosidl_runtime_rs::String>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub tags: rosidl_runtime_rs::Sequence<rosidl_runtime_rs::String>,

}



impl Default for Person {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !people_msgs__msg__Person__init(&mut msg as *mut _) {
        panic!("Call to people_msgs__msg__Person__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Person {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { people_msgs__msg__Person__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { people_msgs__msg__Person__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { people_msgs__msg__Person__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Person {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Person where Self: Sized {
  const TYPE_NAME: &'static str = "people_msgs/msg/Person";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__people_msgs__msg__Person() }
  }
}


#[link(name = "people_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__people_msgs__msg__PersonStamped() -> *const std::ffi::c_void;
}

#[link(name = "people_msgs__rosidl_generator_c")]
extern "C" {
    fn people_msgs__msg__PersonStamped__init(msg: *mut PersonStamped) -> bool;
    fn people_msgs__msg__PersonStamped__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<PersonStamped>, size: usize) -> bool;
    fn people_msgs__msg__PersonStamped__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<PersonStamped>);
    fn people_msgs__msg__PersonStamped__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<PersonStamped>, out_seq: *mut rosidl_runtime_rs::Sequence<PersonStamped>) -> bool;
}

// Corresponds to people_msgs__msg__PersonStamped
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct PersonStamped {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub person: super::super::msg::rmw::Person,

}



impl Default for PersonStamped {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !people_msgs__msg__PersonStamped__init(&mut msg as *mut _) {
        panic!("Call to people_msgs__msg__PersonStamped__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for PersonStamped {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { people_msgs__msg__PersonStamped__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { people_msgs__msg__PersonStamped__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { people_msgs__msg__PersonStamped__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for PersonStamped {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for PersonStamped where Self: Sized {
  const TYPE_NAME: &'static str = "people_msgs/msg/PersonStamped";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__people_msgs__msg__PersonStamped() }
  }
}


#[link(name = "people_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__people_msgs__msg__PositionMeasurement() -> *const std::ffi::c_void;
}

#[link(name = "people_msgs__rosidl_generator_c")]
extern "C" {
    fn people_msgs__msg__PositionMeasurement__init(msg: *mut PositionMeasurement) -> bool;
    fn people_msgs__msg__PositionMeasurement__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<PositionMeasurement>, size: usize) -> bool;
    fn people_msgs__msg__PositionMeasurement__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<PositionMeasurement>);
    fn people_msgs__msg__PositionMeasurement__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<PositionMeasurement>, out_seq: *mut rosidl_runtime_rs::Sequence<PositionMeasurement>) -> bool;
}

// Corresponds to people_msgs__msg__PositionMeasurement
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct PositionMeasurement {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,

    /// The name of the detector that detected the person (i.e frontalface, profileface)
    pub name: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub object_id: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub pos: geometry_msgs::msg::rmw::Point,


    // This member is not documented.
    #[allow(missing_docs)]
    pub reliability: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub covariance: [f64; 9],


    // This member is not documented.
    #[allow(missing_docs)]
    pub initialization: u8,

}



impl Default for PositionMeasurement {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !people_msgs__msg__PositionMeasurement__init(&mut msg as *mut _) {
        panic!("Call to people_msgs__msg__PositionMeasurement__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for PositionMeasurement {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { people_msgs__msg__PositionMeasurement__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { people_msgs__msg__PositionMeasurement__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { people_msgs__msg__PositionMeasurement__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for PositionMeasurement {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for PositionMeasurement where Self: Sized {
  const TYPE_NAME: &'static str = "people_msgs/msg/PositionMeasurement";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__people_msgs__msg__PositionMeasurement() }
  }
}


#[link(name = "people_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__people_msgs__msg__PositionMeasurementArray() -> *const std::ffi::c_void;
}

#[link(name = "people_msgs__rosidl_generator_c")]
extern "C" {
    fn people_msgs__msg__PositionMeasurementArray__init(msg: *mut PositionMeasurementArray) -> bool;
    fn people_msgs__msg__PositionMeasurementArray__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<PositionMeasurementArray>, size: usize) -> bool;
    fn people_msgs__msg__PositionMeasurementArray__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<PositionMeasurementArray>);
    fn people_msgs__msg__PositionMeasurementArray__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<PositionMeasurementArray>, out_seq: *mut rosidl_runtime_rs::Sequence<PositionMeasurementArray>) -> bool;
}

// Corresponds to people_msgs__msg__PositionMeasurementArray
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct PositionMeasurementArray {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,

    /// All of the people found
    pub people: rosidl_runtime_rs::Sequence<super::super::msg::rmw::PositionMeasurement>,

    /// The co-occurrence matrix between people
    pub cooccurrence: rosidl_runtime_rs::Sequence<f32>,

}



impl Default for PositionMeasurementArray {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !people_msgs__msg__PositionMeasurementArray__init(&mut msg as *mut _) {
        panic!("Call to people_msgs__msg__PositionMeasurementArray__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for PositionMeasurementArray {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { people_msgs__msg__PositionMeasurementArray__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { people_msgs__msg__PositionMeasurementArray__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { people_msgs__msg__PositionMeasurementArray__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for PositionMeasurementArray {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for PositionMeasurementArray where Self: Sized {
  const TYPE_NAME: &'static str = "people_msgs/msg/PositionMeasurementArray";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__people_msgs__msg__PositionMeasurementArray() }
  }
}


