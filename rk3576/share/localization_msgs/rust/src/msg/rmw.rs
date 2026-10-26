#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};


#[link(name = "localization_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__localization_msgs__msg__PoseVelAccAng() -> *const std::ffi::c_void;
}

#[link(name = "localization_msgs__rosidl_generator_c")]
extern "C" {
    fn localization_msgs__msg__PoseVelAccAng__init(msg: *mut PoseVelAccAng) -> bool;
    fn localization_msgs__msg__PoseVelAccAng__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<PoseVelAccAng>, size: usize) -> bool;
    fn localization_msgs__msg__PoseVelAccAng__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<PoseVelAccAng>);
    fn localization_msgs__msg__PoseVelAccAng__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<PoseVelAccAng>, out_seq: *mut rosidl_runtime_rs::Sequence<PoseVelAccAng>) -> bool;
}

// Corresponds to localization_msgs__msg__PoseVelAccAng
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct PoseVelAccAng {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub pose: geometry_msgs::msg::rmw::Pose,


    // This member is not documented.
    #[allow(missing_docs)]
    pub linear_velocity: geometry_msgs::msg::rmw::Vector3,


    // This member is not documented.
    #[allow(missing_docs)]
    pub linear_acceleration: geometry_msgs::msg::rmw::Vector3,


    // This member is not documented.
    #[allow(missing_docs)]
    pub angular_velocity: geometry_msgs::msg::rmw::Vector3,

}



impl Default for PoseVelAccAng {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !localization_msgs__msg__PoseVelAccAng__init(&mut msg as *mut _) {
        panic!("Call to localization_msgs__msg__PoseVelAccAng__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for PoseVelAccAng {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { localization_msgs__msg__PoseVelAccAng__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { localization_msgs__msg__PoseVelAccAng__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { localization_msgs__msg__PoseVelAccAng__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for PoseVelAccAng {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for PoseVelAccAng where Self: Sized {
  const TYPE_NAME: &'static str = "localization_msgs/msg/PoseVelAccAng";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__localization_msgs__msg__PoseVelAccAng() }
  }
}


