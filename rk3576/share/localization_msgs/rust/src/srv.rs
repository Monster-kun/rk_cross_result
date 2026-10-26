#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};




// Corresponds to localization_msgs__srv__Relocation_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Relocation_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub cloud: sensor_msgs::msg::PointCloud2,


    // This member is not documented.
    #[allow(missing_docs)]
    pub map_name: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub relocation_method: i64,

}



impl Default for Relocation_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::Relocation_Request::default())
  }
}

impl rosidl_runtime_rs::Message for Relocation_Request {
  type RmwMsg = super::srv::rmw::Relocation_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        cloud: sensor_msgs::msg::PointCloud2::into_rmw_message(std::borrow::Cow::Owned(msg.cloud)).into_owned(),
        map_name: msg.map_name.as_str().into(),
        relocation_method: msg.relocation_method,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        cloud: sensor_msgs::msg::PointCloud2::into_rmw_message(std::borrow::Cow::Borrowed(&msg.cloud)).into_owned(),
        map_name: msg.map_name.as_str().into(),
      relocation_method: msg.relocation_method,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      cloud: sensor_msgs::msg::PointCloud2::from_rmw_message(msg.cloud),
      map_name: msg.map_name.to_string(),
      relocation_method: msg.relocation_method,
    }
  }
}


// Corresponds to localization_msgs__srv__Relocation_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Relocation_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub init_pose: geometry_msgs::msg::PoseStamped,


    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,

}



impl Default for Relocation_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::Relocation_Response::default())
  }
}

impl rosidl_runtime_rs::Message for Relocation_Response {
  type RmwMsg = super::srv::rmw::Relocation_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        init_pose: geometry_msgs::msg::PoseStamped::into_rmw_message(std::borrow::Cow::Owned(msg.init_pose)).into_owned(),
        success: msg.success,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        init_pose: geometry_msgs::msg::PoseStamped::into_rmw_message(std::borrow::Cow::Borrowed(&msg.init_pose)).into_owned(),
      success: msg.success,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      init_pose: geometry_msgs::msg::PoseStamped::from_rmw_message(msg.init_pose),
      success: msg.success,
    }
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


