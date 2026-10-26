#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};


#[link(name = "mapping_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__mapping_msgs__msg__HADMapBin() -> *const std::ffi::c_void;
}

#[link(name = "mapping_msgs__rosidl_generator_c")]
extern "C" {
    fn mapping_msgs__msg__HADMapBin__init(msg: *mut HADMapBin) -> bool;
    fn mapping_msgs__msg__HADMapBin__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<HADMapBin>, size: usize) -> bool;
    fn mapping_msgs__msg__HADMapBin__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<HADMapBin>);
    fn mapping_msgs__msg__HADMapBin__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<HADMapBin>, out_seq: *mut rosidl_runtime_rs::Sequence<HADMapBin>) -> bool;
}

// Corresponds to mapping_msgs__msg__HADMapBin
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// HADMap contents in binary blob format

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct HADMapBin {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,

    /// HADMap format identifier, allows supporting multiple map formats
    pub map_format: u8,

    /// Version of map format. Keep as empty string if unnecssary
    pub format_version: rosidl_runtime_rs::String,

    /// Version of map. Keep as empty empty if unnecessary
    pub map_version: rosidl_runtime_rs::String,

    /// Stable deployment map name; content revisions retain this name
    pub map_name: rosidl_runtime_rs::String,

    /// Binary map data
    pub data: rosidl_runtime_rs::Sequence<u8>,

}

impl HADMapBin {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const MAP_FORMAT_LANELET2: u8 = 0;

}


impl Default for HADMapBin {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !mapping_msgs__msg__HADMapBin__init(&mut msg as *mut _) {
        panic!("Call to mapping_msgs__msg__HADMapBin__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for HADMapBin {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mapping_msgs__msg__HADMapBin__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mapping_msgs__msg__HADMapBin__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mapping_msgs__msg__HADMapBin__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for HADMapBin {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for HADMapBin where Self: Sized {
  const TYPE_NAME: &'static str = "mapping_msgs/msg/HADMapBin";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__mapping_msgs__msg__HADMapBin() }
  }
}


#[link(name = "mapping_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__mapping_msgs__msg__HADMapSegment() -> *const std::ffi::c_void;
}

#[link(name = "mapping_msgs__rosidl_generator_c")]
extern "C" {
    fn mapping_msgs__msg__HADMapSegment__init(msg: *mut HADMapSegment) -> bool;
    fn mapping_msgs__msg__HADMapSegment__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<HADMapSegment>, size: usize) -> bool;
    fn mapping_msgs__msg__HADMapSegment__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<HADMapSegment>);
    fn mapping_msgs__msg__HADMapSegment__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<HADMapSegment>, out_seq: *mut rosidl_runtime_rs::Sequence<HADMapSegment>) -> bool;
}

// Corresponds to mapping_msgs__msg__HADMapSegment
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

///  A segment of an HADMap which contains one or more MapPrimitives.

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct HADMapSegment {

    // This member is not documented.
    #[allow(missing_docs)]
    pub primitives: rosidl_runtime_rs::Sequence<super::super::msg::rmw::MapPrimitive>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub preferred_primitive_id: i64,

}



impl Default for HADMapSegment {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !mapping_msgs__msg__HADMapSegment__init(&mut msg as *mut _) {
        panic!("Call to mapping_msgs__msg__HADMapSegment__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for HADMapSegment {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mapping_msgs__msg__HADMapSegment__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mapping_msgs__msg__HADMapSegment__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mapping_msgs__msg__HADMapSegment__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for HADMapSegment {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for HADMapSegment where Self: Sized {
  const TYPE_NAME: &'static str = "mapping_msgs/msg/HADMapSegment";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__mapping_msgs__msg__HADMapSegment() }
  }
}


#[link(name = "mapping_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__mapping_msgs__msg__MapPrimitive() -> *const std::ffi::c_void;
}

#[link(name = "mapping_msgs__rosidl_generator_c")]
extern "C" {
    fn mapping_msgs__msg__MapPrimitive__init(msg: *mut MapPrimitive) -> bool;
    fn mapping_msgs__msg__MapPrimitive__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<MapPrimitive>, size: usize) -> bool;
    fn mapping_msgs__msg__MapPrimitive__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<MapPrimitive>);
    fn mapping_msgs__msg__MapPrimitive__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<MapPrimitive>, out_seq: *mut rosidl_runtime_rs::Sequence<MapPrimitive>) -> bool;
}

// Corresponds to mapping_msgs__msg__MapPrimitive
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// Map primitive information

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MapPrimitive {

    // This member is not documented.
    #[allow(missing_docs)]
    pub id: i64,

    /// Type of primitive, such as lane, polygon, line.
    pub primitive_type: rosidl_runtime_rs::String,

}



impl Default for MapPrimitive {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !mapping_msgs__msg__MapPrimitive__init(&mut msg as *mut _) {
        panic!("Call to mapping_msgs__msg__MapPrimitive__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for MapPrimitive {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mapping_msgs__msg__MapPrimitive__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mapping_msgs__msg__MapPrimitive__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mapping_msgs__msg__MapPrimitive__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for MapPrimitive {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for MapPrimitive where Self: Sized {
  const TYPE_NAME: &'static str = "mapping_msgs/msg/MapPrimitive";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__mapping_msgs__msg__MapPrimitive() }
  }
}


#[link(name = "mapping_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__mapping_msgs__msg__MapProjectorInfo() -> *const std::ffi::c_void;
}

#[link(name = "mapping_msgs__rosidl_generator_c")]
extern "C" {
    fn mapping_msgs__msg__MapProjectorInfo__init(msg: *mut MapProjectorInfo) -> bool;
    fn mapping_msgs__msg__MapProjectorInfo__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<MapProjectorInfo>, size: usize) -> bool;
    fn mapping_msgs__msg__MapProjectorInfo__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<MapProjectorInfo>);
    fn mapping_msgs__msg__MapProjectorInfo__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<MapProjectorInfo>, out_seq: *mut rosidl_runtime_rs::Sequence<MapProjectorInfo>) -> bool;
}

// Corresponds to mapping_msgs__msg__MapProjectorInfo
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// define map_projector_type
/// UTM, MGRS, local

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MapProjectorInfo {

    // This member is not documented.
    #[allow(missing_docs)]
    pub type_: rosidl_runtime_rs::String,

    /// Used for MGRS map
    pub mgrs_grid: rosidl_runtime_rs::String,

    /// Used for UTM map
    pub map_origin: geographic_msgs::msg::rmw::GeoPoint,

}



impl Default for MapProjectorInfo {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !mapping_msgs__msg__MapProjectorInfo__init(&mut msg as *mut _) {
        panic!("Call to mapping_msgs__msg__MapProjectorInfo__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for MapProjectorInfo {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mapping_msgs__msg__MapProjectorInfo__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mapping_msgs__msg__MapProjectorInfo__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mapping_msgs__msg__MapProjectorInfo__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for MapProjectorInfo {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for MapProjectorInfo where Self: Sized {
  const TYPE_NAME: &'static str = "mapping_msgs/msg/MapProjectorInfo";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__mapping_msgs__msg__MapProjectorInfo() }
  }
}


