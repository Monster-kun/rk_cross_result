#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};




// Corresponds to behavior_msgs__srv__IsPathValid_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct IsPathValid_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub check_distance: f32,

}



impl Default for IsPathValid_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::IsPathValid_Request::default())
  }
}

impl rosidl_runtime_rs::Message for IsPathValid_Request {
  type RmwMsg = super::srv::rmw::IsPathValid_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        check_distance: msg.check_distance,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      check_distance: msg.check_distance,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      check_distance: msg.check_distance,
    }
  }
}


// Corresponds to behavior_msgs__srv__IsPathValid_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct IsPathValid_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub is_valid: bool,

}



impl Default for IsPathValid_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::IsPathValid_Response::default())
  }
}

impl rosidl_runtime_rs::Message for IsPathValid_Response {
  type RmwMsg = super::srv::rmw::IsPathValid_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        is_valid: msg.is_valid,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      is_valid: msg.is_valid,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      is_valid: msg.is_valid,
    }
  }
}


// Corresponds to behavior_msgs__srv__IsPathCollision_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct IsPathCollision_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub check_distance: f32,

}



impl Default for IsPathCollision_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::IsPathCollision_Request::default())
  }
}

impl rosidl_runtime_rs::Message for IsPathCollision_Request {
  type RmwMsg = super::srv::rmw::IsPathCollision_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        check_distance: msg.check_distance,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      check_distance: msg.check_distance,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      check_distance: msg.check_distance,
    }
  }
}


// Corresponds to behavior_msgs__srv__IsPathCollision_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct IsPathCollision_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub is_valid: bool,

}



impl Default for IsPathCollision_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::IsPathCollision_Response::default())
  }
}

impl rosidl_runtime_rs::Message for IsPathCollision_Response {
  type RmwMsg = super::srv::rmw::IsPathCollision_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        is_valid: msg.is_valid,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      is_valid: msg.is_valid,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      is_valid: msg.is_valid,
    }
  }
}


// Corresponds to behavior_msgs__srv__SelectPlanner_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SelectPlanner_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub planner_selector_id: std::string::String,

}



impl Default for SelectPlanner_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SelectPlanner_Request::default())
  }
}

impl rosidl_runtime_rs::Message for SelectPlanner_Request {
  type RmwMsg = super::srv::rmw::SelectPlanner_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        planner_selector_id: msg.planner_selector_id.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        planner_selector_id: msg.planner_selector_id.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      planner_selector_id: msg.planner_selector_id.to_string(),
    }
  }
}


// Corresponds to behavior_msgs__srv__SelectPlanner_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SelectPlanner_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub local_planner_id: std::string::String,

}



impl Default for SelectPlanner_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SelectPlanner_Response::default())
  }
}

impl rosidl_runtime_rs::Message for SelectPlanner_Response {
  type RmwMsg = super::srv::rmw::SelectPlanner_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        local_planner_id: msg.local_planner_id.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        local_planner_id: msg.local_planner_id.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      local_planner_id: msg.local_planner_id.to_string(),
    }
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


