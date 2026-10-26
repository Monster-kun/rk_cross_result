#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};




// Corresponds to system_msgs__srv__IsEmergencyStop_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct IsEmergencyStop_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub input: std_msgs::msg::Empty,

}



impl Default for IsEmergencyStop_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::IsEmergencyStop_Request::default())
  }
}

impl rosidl_runtime_rs::Message for IsEmergencyStop_Request {
  type RmwMsg = super::srv::rmw::IsEmergencyStop_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        input: std_msgs::msg::Empty::into_rmw_message(std::borrow::Cow::Owned(msg.input)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        input: std_msgs::msg::Empty::into_rmw_message(std::borrow::Cow::Borrowed(&msg.input)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      input: std_msgs::msg::Empty::from_rmw_message(msg.input),
    }
  }
}


// Corresponds to system_msgs__srv__IsEmergencyStop_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct IsEmergencyStop_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub is_emergency_stop: bool,

}



impl Default for IsEmergencyStop_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::IsEmergencyStop_Response::default())
  }
}

impl rosidl_runtime_rs::Message for IsEmergencyStop_Response {
  type RmwMsg = super::srv::rmw::IsEmergencyStop_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        is_emergency_stop: msg.is_emergency_stop,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      is_emergency_stop: msg.is_emergency_stop,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      is_emergency_stop: msg.is_emergency_stop,
    }
  }
}


// Corresponds to system_msgs__srv__NeedSlowDown_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct NeedSlowDown_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub pose: geometry_msgs::msg::Pose,

}



impl Default for NeedSlowDown_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::NeedSlowDown_Request::default())
  }
}

impl rosidl_runtime_rs::Message for NeedSlowDown_Request {
  type RmwMsg = super::srv::rmw::NeedSlowDown_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        pose: geometry_msgs::msg::Pose::into_rmw_message(std::borrow::Cow::Owned(msg.pose)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        pose: geometry_msgs::msg::Pose::into_rmw_message(std::borrow::Cow::Borrowed(&msg.pose)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      pose: geometry_msgs::msg::Pose::from_rmw_message(msg.pose),
    }
  }
}


// Corresponds to system_msgs__srv__NeedSlowDown_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::NeedSlowDown_Response::default())
  }
}

impl rosidl_runtime_rs::Message for NeedSlowDown_Response {
  type RmwMsg = super::srv::rmw::NeedSlowDown_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        slow_down: msg.slow_down,
        slow_down_ratio: msg.slow_down_ratio,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      slow_down: msg.slow_down,
      slow_down_ratio: msg.slow_down_ratio,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      slow_down: msg.slow_down,
      slow_down_ratio: msg.slow_down_ratio,
    }
  }
}


// Corresponds to system_msgs__srv__ManageLifecycleNodes_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::ManageLifecycleNodes_Request::default())
  }
}

impl rosidl_runtime_rs::Message for ManageLifecycleNodes_Request {
  type RmwMsg = super::srv::rmw::ManageLifecycleNodes_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        command: msg.command,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      command: msg.command,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      command: msg.command,
    }
  }
}


// Corresponds to system_msgs__srv__ManageLifecycleNodes_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ManageLifecycleNodes_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,

}



impl Default for ManageLifecycleNodes_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::ManageLifecycleNodes_Response::default())
  }
}

impl rosidl_runtime_rs::Message for ManageLifecycleNodes_Response {
  type RmwMsg = super::srv::rmw::ManageLifecycleNodes_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        success: msg.success,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      success: msg.success,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      success: msg.success,
    }
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


