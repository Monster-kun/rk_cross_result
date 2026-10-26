#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};




// Corresponds to web_navigation_msgs__srv__GetNavigationExecution_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetNavigationExecution_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub structure_needs_at_least_one_member: u8,

}



impl Default for GetNavigationExecution_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::GetNavigationExecution_Request::default())
  }
}

impl rosidl_runtime_rs::Message for GetNavigationExecution_Request {
  type RmwMsg = super::srv::rmw::GetNavigationExecution_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        structure_needs_at_least_one_member: msg.structure_needs_at_least_one_member,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      structure_needs_at_least_one_member: msg.structure_needs_at_least_one_member,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      structure_needs_at_least_one_member: msg.structure_needs_at_least_one_member,
    }
  }
}


// Corresponds to web_navigation_msgs__srv__GetNavigationExecution_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetNavigationExecution_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub instance_id: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub active: bool,

    /// Includes execution/BT cleanup after the goal has reached a terminal state.
    pub execution_running: bool,

    /// Current and pending goals, captured under the same lock.
    pub goals: Vec<super::msg::NavigationExecution>,

}



impl Default for GetNavigationExecution_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::GetNavigationExecution_Response::default())
  }
}

impl rosidl_runtime_rs::Message for GetNavigationExecution_Response {
  type RmwMsg = super::srv::rmw::GetNavigationExecution_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        instance_id: msg.instance_id.as_str().into(),
        active: msg.active,
        execution_running: msg.execution_running,
        goals: msg.goals
          .into_iter()
          .map(|elem| super::msg::NavigationExecution::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        instance_id: msg.instance_id.as_str().into(),
      active: msg.active,
      execution_running: msg.execution_running,
        goals: msg.goals
          .iter()
          .map(|elem| super::msg::NavigationExecution::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      instance_id: msg.instance_id.to_string(),
      active: msg.active,
      execution_running: msg.execution_running,
      goals: msg.goals
          .into_iter()
          .map(super::msg::NavigationExecution::from_rmw_message)
          .collect(),
    }
  }
}


// Corresponds to web_navigation_msgs__srv__ControlLease_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ControlLease_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub operation: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub session_id: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub device_label: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub manager_boot_id: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub lease_token: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub control_epoch: u64,

}

impl ControlLease_Request {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const ACQUIRE: u8 = 0;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const RENEW: u8 = 1;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const RELEASE: u8 = 2;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const VALIDATE: u8 = 3;

}


impl Default for ControlLease_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::ControlLease_Request::default())
  }
}

impl rosidl_runtime_rs::Message for ControlLease_Request {
  type RmwMsg = super::srv::rmw::ControlLease_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        operation: msg.operation,
        session_id: msg.session_id.as_str().into(),
        device_label: msg.device_label.as_str().into(),
        manager_boot_id: msg.manager_boot_id.as_str().into(),
        lease_token: msg.lease_token.as_str().into(),
        control_epoch: msg.control_epoch,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      operation: msg.operation,
        session_id: msg.session_id.as_str().into(),
        device_label: msg.device_label.as_str().into(),
        manager_boot_id: msg.manager_boot_id.as_str().into(),
        lease_token: msg.lease_token.as_str().into(),
      control_epoch: msg.control_epoch,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      operation: msg.operation,
      session_id: msg.session_id.to_string(),
      device_label: msg.device_label.to_string(),
      manager_boot_id: msg.manager_boot_id.to_string(),
      lease_token: msg.lease_token.to_string(),
      control_epoch: msg.control_epoch,
    }
  }
}


// Corresponds to web_navigation_msgs__srv__ControlLease_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ControlLease_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub code: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub manager_boot_id: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub lease_token: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub control_epoch: u64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub lease_ttl_ms: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub control_held: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub owner_label: std::string::String,

}



impl Default for ControlLease_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::ControlLease_Response::default())
  }
}

impl rosidl_runtime_rs::Message for ControlLease_Response {
  type RmwMsg = super::srv::rmw::ControlLease_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        success: msg.success,
        code: msg.code.as_str().into(),
        message: msg.message.as_str().into(),
        manager_boot_id: msg.manager_boot_id.as_str().into(),
        lease_token: msg.lease_token.as_str().into(),
        control_epoch: msg.control_epoch,
        lease_ttl_ms: msg.lease_ttl_ms,
        control_held: msg.control_held,
        owner_label: msg.owner_label.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      success: msg.success,
        code: msg.code.as_str().into(),
        message: msg.message.as_str().into(),
        manager_boot_id: msg.manager_boot_id.as_str().into(),
        lease_token: msg.lease_token.as_str().into(),
      control_epoch: msg.control_epoch,
      lease_ttl_ms: msg.lease_ttl_ms,
      control_held: msg.control_held,
        owner_label: msg.owner_label.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      success: msg.success,
      code: msg.code.to_string(),
      message: msg.message.to_string(),
      manager_boot_id: msg.manager_boot_id.to_string(),
      lease_token: msg.lease_token.to_string(),
      control_epoch: msg.control_epoch,
      lease_ttl_ms: msg.lease_ttl_ms,
      control_held: msg.control_held,
      owner_label: msg.owner_label.to_string(),
    }
  }
}


// Corresponds to web_navigation_msgs__srv__ValidateTarget_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ValidateTarget_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub map_version: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub frame_id: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub x: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub y: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub selected_layer_id: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub suggest_nearest: bool,

}



impl Default for ValidateTarget_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::ValidateTarget_Request::default())
  }
}

impl rosidl_runtime_rs::Message for ValidateTarget_Request {
  type RmwMsg = super::srv::rmw::ValidateTarget_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        map_version: msg.map_version.as_str().into(),
        frame_id: msg.frame_id.as_str().into(),
        x: msg.x,
        y: msg.y,
        selected_layer_id: msg.selected_layer_id.as_str().into(),
        suggest_nearest: msg.suggest_nearest,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        map_version: msg.map_version.as_str().into(),
        frame_id: msg.frame_id.as_str().into(),
      x: msg.x,
      y: msg.y,
        selected_layer_id: msg.selected_layer_id.as_str().into(),
      suggest_nearest: msg.suggest_nearest,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      map_version: msg.map_version.to_string(),
      frame_id: msg.frame_id.to_string(),
      x: msg.x,
      y: msg.y,
      selected_layer_id: msg.selected_layer_id.to_string(),
      suggest_nearest: msg.suggest_nearest,
    }
  }
}


// Corresponds to web_navigation_msgs__srv__ValidateTarget_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ValidateTarget_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub valid: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub code: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub map_version: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub lanelet_ids: Vec<std::string::String>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub x: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub y: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub lanelet_id: std::string::String,

}



impl Default for ValidateTarget_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::ValidateTarget_Response::default())
  }
}

impl rosidl_runtime_rs::Message for ValidateTarget_Response {
  type RmwMsg = super::srv::rmw::ValidateTarget_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        valid: msg.valid,
        code: msg.code.as_str().into(),
        message: msg.message.as_str().into(),
        map_version: msg.map_version.as_str().into(),
        lanelet_ids: msg.lanelet_ids
          .into_iter()
          .map(|elem| elem.as_str().into())
          .collect(),
        x: msg.x,
        y: msg.y,
        lanelet_id: msg.lanelet_id.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      valid: msg.valid,
        code: msg.code.as_str().into(),
        message: msg.message.as_str().into(),
        map_version: msg.map_version.as_str().into(),
        lanelet_ids: msg.lanelet_ids
          .iter()
          .map(|elem| elem.as_str().into())
          .collect(),
      x: msg.x,
      y: msg.y,
        lanelet_id: msg.lanelet_id.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      valid: msg.valid,
      code: msg.code.to_string(),
      message: msg.message.to_string(),
      map_version: msg.map_version.to_string(),
      lanelet_ids: msg.lanelet_ids
          .into_iter()
          .map(|elem| elem.to_string())
          .collect(),
      x: msg.x,
      y: msg.y,
      lanelet_id: msg.lanelet_id.to_string(),
    }
  }
}


// Corresponds to web_navigation_msgs__srv__SubmitGoal_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SubmitGoal_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub operation: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub request_id: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub session_id: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub device_label: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub manager_boot_id: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub lease_token: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub control_epoch: u64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub map_version: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub frame_id: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub x: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub y: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub selected_layer_id: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub expected_active_task_id: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub expected_state_revision: u64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub sequence: Vec<super::msg::SequenceWaypoint>,

}

impl SubmitGoal_Request {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const SUBMIT: u8 = 0;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const REPLACE: u8 = 1;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const CONTINUE: u8 = 2;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const RETRY: u8 = 3;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const SKIP: u8 = 4;

}


impl Default for SubmitGoal_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SubmitGoal_Request::default())
  }
}

impl rosidl_runtime_rs::Message for SubmitGoal_Request {
  type RmwMsg = super::srv::rmw::SubmitGoal_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        operation: msg.operation,
        request_id: msg.request_id.as_str().into(),
        session_id: msg.session_id.as_str().into(),
        device_label: msg.device_label.as_str().into(),
        manager_boot_id: msg.manager_boot_id.as_str().into(),
        lease_token: msg.lease_token.as_str().into(),
        control_epoch: msg.control_epoch,
        map_version: msg.map_version.as_str().into(),
        frame_id: msg.frame_id.as_str().into(),
        x: msg.x,
        y: msg.y,
        selected_layer_id: msg.selected_layer_id.as_str().into(),
        expected_active_task_id: msg.expected_active_task_id.as_str().into(),
        expected_state_revision: msg.expected_state_revision,
        sequence: msg.sequence
          .into_iter()
          .map(|elem| super::msg::SequenceWaypoint::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      operation: msg.operation,
        request_id: msg.request_id.as_str().into(),
        session_id: msg.session_id.as_str().into(),
        device_label: msg.device_label.as_str().into(),
        manager_boot_id: msg.manager_boot_id.as_str().into(),
        lease_token: msg.lease_token.as_str().into(),
      control_epoch: msg.control_epoch,
        map_version: msg.map_version.as_str().into(),
        frame_id: msg.frame_id.as_str().into(),
      x: msg.x,
      y: msg.y,
        selected_layer_id: msg.selected_layer_id.as_str().into(),
        expected_active_task_id: msg.expected_active_task_id.as_str().into(),
      expected_state_revision: msg.expected_state_revision,
        sequence: msg.sequence
          .iter()
          .map(|elem| super::msg::SequenceWaypoint::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      operation: msg.operation,
      request_id: msg.request_id.to_string(),
      session_id: msg.session_id.to_string(),
      device_label: msg.device_label.to_string(),
      manager_boot_id: msg.manager_boot_id.to_string(),
      lease_token: msg.lease_token.to_string(),
      control_epoch: msg.control_epoch,
      map_version: msg.map_version.to_string(),
      frame_id: msg.frame_id.to_string(),
      x: msg.x,
      y: msg.y,
      selected_layer_id: msg.selected_layer_id.to_string(),
      expected_active_task_id: msg.expected_active_task_id.to_string(),
      expected_state_revision: msg.expected_state_revision,
      sequence: msg.sequence
          .into_iter()
          .map(super::msg::SequenceWaypoint::from_rmw_message)
          .collect(),
    }
  }
}


// Corresponds to web_navigation_msgs__srv__SubmitGoal_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SubmitGoal_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub accepted: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub code: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub request_id: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub task_id: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub task_status: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub state_revision: u64,

}



impl Default for SubmitGoal_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SubmitGoal_Response::default())
  }
}

impl rosidl_runtime_rs::Message for SubmitGoal_Response {
  type RmwMsg = super::srv::rmw::SubmitGoal_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        accepted: msg.accepted,
        code: msg.code.as_str().into(),
        message: msg.message.as_str().into(),
        request_id: msg.request_id.as_str().into(),
        task_id: msg.task_id.as_str().into(),
        task_status: msg.task_status,
        state_revision: msg.state_revision,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      accepted: msg.accepted,
        code: msg.code.as_str().into(),
        message: msg.message.as_str().into(),
        request_id: msg.request_id.as_str().into(),
        task_id: msg.task_id.as_str().into(),
      task_status: msg.task_status,
      state_revision: msg.state_revision,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      accepted: msg.accepted,
      code: msg.code.to_string(),
      message: msg.message.to_string(),
      request_id: msg.request_id.to_string(),
      task_id: msg.task_id.to_string(),
      task_status: msg.task_status,
      state_revision: msg.state_revision,
    }
  }
}


// Corresponds to web_navigation_msgs__srv__CancelTask_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct CancelTask_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub request_id: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub task_id: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub session_id: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub manager_boot_id: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub lease_token: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub control_epoch: u64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub expected_state_revision: u64,

}



impl Default for CancelTask_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::CancelTask_Request::default())
  }
}

impl rosidl_runtime_rs::Message for CancelTask_Request {
  type RmwMsg = super::srv::rmw::CancelTask_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        request_id: msg.request_id.as_str().into(),
        task_id: msg.task_id.as_str().into(),
        session_id: msg.session_id.as_str().into(),
        manager_boot_id: msg.manager_boot_id.as_str().into(),
        lease_token: msg.lease_token.as_str().into(),
        control_epoch: msg.control_epoch,
        expected_state_revision: msg.expected_state_revision,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        request_id: msg.request_id.as_str().into(),
        task_id: msg.task_id.as_str().into(),
        session_id: msg.session_id.as_str().into(),
        manager_boot_id: msg.manager_boot_id.as_str().into(),
        lease_token: msg.lease_token.as_str().into(),
      control_epoch: msg.control_epoch,
      expected_state_revision: msg.expected_state_revision,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      request_id: msg.request_id.to_string(),
      task_id: msg.task_id.to_string(),
      session_id: msg.session_id.to_string(),
      manager_boot_id: msg.manager_boot_id.to_string(),
      lease_token: msg.lease_token.to_string(),
      control_epoch: msg.control_epoch,
      expected_state_revision: msg.expected_state_revision,
    }
  }
}


// Corresponds to web_navigation_msgs__srv__CancelTask_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct CancelTask_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub accepted: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub code: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub request_id: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub task_status: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub state_revision: u64,

}



impl Default for CancelTask_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::CancelTask_Response::default())
  }
}

impl rosidl_runtime_rs::Message for CancelTask_Response {
  type RmwMsg = super::srv::rmw::CancelTask_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        accepted: msg.accepted,
        code: msg.code.as_str().into(),
        message: msg.message.as_str().into(),
        request_id: msg.request_id.as_str().into(),
        task_status: msg.task_status,
        state_revision: msg.state_revision,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      accepted: msg.accepted,
        code: msg.code.as_str().into(),
        message: msg.message.as_str().into(),
        request_id: msg.request_id.as_str().into(),
      task_status: msg.task_status,
      state_revision: msg.state_revision,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      accepted: msg.accepted,
      code: msg.code.to_string(),
      message: msg.message.to_string(),
      request_id: msg.request_id.to_string(),
      task_status: msg.task_status,
      state_revision: msg.state_revision,
    }
  }
}


// Corresponds to web_navigation_msgs__srv__GetSnapshot_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetSnapshot_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub structure_needs_at_least_one_member: u8,

}



impl Default for GetSnapshot_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::GetSnapshot_Request::default())
  }
}

impl rosidl_runtime_rs::Message for GetSnapshot_Request {
  type RmwMsg = super::srv::rmw::GetSnapshot_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        structure_needs_at_least_one_member: msg.structure_needs_at_least_one_member,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      structure_needs_at_least_one_member: msg.structure_needs_at_least_one_member,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      structure_needs_at_least_one_member: msg.structure_needs_at_least_one_member,
    }
  }
}


// Corresponds to web_navigation_msgs__srv__GetSnapshot_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetSnapshot_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub state: super::msg::NavigationState,

}



impl Default for GetSnapshot_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::GetSnapshot_Response::default())
  }
}

impl rosidl_runtime_rs::Message for GetSnapshot_Response {
  type RmwMsg = super::srv::rmw::GetSnapshot_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        state: super::msg::NavigationState::into_rmw_message(std::borrow::Cow::Owned(msg.state)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        state: super::msg::NavigationState::into_rmw_message(std::borrow::Cow::Borrowed(&msg.state)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      state: super::msg::NavigationState::from_rmw_message(msg.state),
    }
  }
}


// Corresponds to web_navigation_msgs__srv__GetRequest_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetRequest_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub request_id: std::string::String,

}



impl Default for GetRequest_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::GetRequest_Request::default())
  }
}

impl rosidl_runtime_rs::Message for GetRequest_Request {
  type RmwMsg = super::srv::rmw::GetRequest_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        request_id: msg.request_id.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        request_id: msg.request_id.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      request_id: msg.request_id.to_string(),
    }
  }
}


// Corresponds to web_navigation_msgs__srv__GetRequest_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetRequest_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub found: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub accepted: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub code: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub task_id: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub task_status: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub state_revision: u64,

}



impl Default for GetRequest_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::GetRequest_Response::default())
  }
}

impl rosidl_runtime_rs::Message for GetRequest_Response {
  type RmwMsg = super::srv::rmw::GetRequest_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        found: msg.found,
        accepted: msg.accepted,
        code: msg.code.as_str().into(),
        message: msg.message.as_str().into(),
        task_id: msg.task_id.as_str().into(),
        task_status: msg.task_status,
        state_revision: msg.state_revision,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      found: msg.found,
      accepted: msg.accepted,
        code: msg.code.as_str().into(),
        message: msg.message.as_str().into(),
        task_id: msg.task_id.as_str().into(),
      task_status: msg.task_status,
      state_revision: msg.state_revision,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      found: msg.found,
      accepted: msg.accepted,
      code: msg.code.to_string(),
      message: msg.message.to_string(),
      task_id: msg.task_id.to_string(),
      task_status: msg.task_status,
      state_revision: msg.state_revision,
    }
  }
}


// Corresponds to web_navigation_msgs__srv__GetTask_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetTask_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub task_id: std::string::String,

}



impl Default for GetTask_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::GetTask_Request::default())
  }
}

impl rosidl_runtime_rs::Message for GetTask_Request {
  type RmwMsg = super::srv::rmw::GetTask_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        task_id: msg.task_id.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        task_id: msg.task_id.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      task_id: msg.task_id.to_string(),
    }
  }
}


// Corresponds to web_navigation_msgs__srv__GetTask_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetTask_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub found: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub task_id: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub request_id: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub ros_goal_uuid: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub map_version: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub frame_id: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub status: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub requested_x: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub requested_y: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub effective_endpoint: geometry_msgs::msg::Pose,


    // This member is not documented.
    #[allow(missing_docs)]
    pub device_label: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub error_code: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub error_message: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub updated_at: i64,

}



impl Default for GetTask_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::GetTask_Response::default())
  }
}

impl rosidl_runtime_rs::Message for GetTask_Response {
  type RmwMsg = super::srv::rmw::GetTask_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        found: msg.found,
        task_id: msg.task_id.as_str().into(),
        request_id: msg.request_id.as_str().into(),
        ros_goal_uuid: msg.ros_goal_uuid.as_str().into(),
        map_version: msg.map_version.as_str().into(),
        frame_id: msg.frame_id.as_str().into(),
        status: msg.status,
        requested_x: msg.requested_x,
        requested_y: msg.requested_y,
        effective_endpoint: geometry_msgs::msg::Pose::into_rmw_message(std::borrow::Cow::Owned(msg.effective_endpoint)).into_owned(),
        device_label: msg.device_label.as_str().into(),
        error_code: msg.error_code.as_str().into(),
        error_message: msg.error_message.as_str().into(),
        updated_at: msg.updated_at,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      found: msg.found,
        task_id: msg.task_id.as_str().into(),
        request_id: msg.request_id.as_str().into(),
        ros_goal_uuid: msg.ros_goal_uuid.as_str().into(),
        map_version: msg.map_version.as_str().into(),
        frame_id: msg.frame_id.as_str().into(),
      status: msg.status,
      requested_x: msg.requested_x,
      requested_y: msg.requested_y,
        effective_endpoint: geometry_msgs::msg::Pose::into_rmw_message(std::borrow::Cow::Borrowed(&msg.effective_endpoint)).into_owned(),
        device_label: msg.device_label.as_str().into(),
        error_code: msg.error_code.as_str().into(),
        error_message: msg.error_message.as_str().into(),
      updated_at: msg.updated_at,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      found: msg.found,
      task_id: msg.task_id.to_string(),
      request_id: msg.request_id.to_string(),
      ros_goal_uuid: msg.ros_goal_uuid.to_string(),
      map_version: msg.map_version.to_string(),
      frame_id: msg.frame_id.to_string(),
      status: msg.status,
      requested_x: msg.requested_x,
      requested_y: msg.requested_y,
      effective_endpoint: geometry_msgs::msg::Pose::from_rmw_message(msg.effective_endpoint),
      device_label: msg.device_label.to_string(),
      error_code: msg.error_code.to_string(),
      error_message: msg.error_message.to_string(),
      updated_at: msg.updated_at,
    }
  }
}


// Corresponds to web_navigation_msgs__srv__GetWebMap_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetWebMap_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub if_map_version: std::string::String,

}



impl Default for GetWebMap_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::GetWebMap_Request::default())
  }
}

impl rosidl_runtime_rs::Message for GetWebMap_Request {
  type RmwMsg = super::srv::rmw::GetWebMap_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        if_map_version: msg.if_map_version.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        if_map_version: msg.if_map_version.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      if_map_version: msg.if_map_version.to_string(),
    }
  }
}


// Corresponds to web_navigation_msgs__srv__GetWebMap_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetWebMap_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub ready: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub not_modified: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub code: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub map_version: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub map_name: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub coordinate_revision: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub frame_id: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub unit: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub bounds: [f64; 4],


    // This member is not documented.
    #[allow(missing_docs)]
    pub geometry_json: std::string::String,

}



impl Default for GetWebMap_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::GetWebMap_Response::default())
  }
}

impl rosidl_runtime_rs::Message for GetWebMap_Response {
  type RmwMsg = super::srv::rmw::GetWebMap_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        ready: msg.ready,
        not_modified: msg.not_modified,
        code: msg.code.as_str().into(),
        message: msg.message.as_str().into(),
        map_version: msg.map_version.as_str().into(),
        map_name: msg.map_name.as_str().into(),
        coordinate_revision: msg.coordinate_revision.as_str().into(),
        frame_id: msg.frame_id.as_str().into(),
        unit: msg.unit.as_str().into(),
        bounds: msg.bounds,
        geometry_json: msg.geometry_json.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      ready: msg.ready,
      not_modified: msg.not_modified,
        code: msg.code.as_str().into(),
        message: msg.message.as_str().into(),
        map_version: msg.map_version.as_str().into(),
        map_name: msg.map_name.as_str().into(),
        coordinate_revision: msg.coordinate_revision.as_str().into(),
        frame_id: msg.frame_id.as_str().into(),
        unit: msg.unit.as_str().into(),
        bounds: msg.bounds,
        geometry_json: msg.geometry_json.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      ready: msg.ready,
      not_modified: msg.not_modified,
      code: msg.code.to_string(),
      message: msg.message.to_string(),
      map_version: msg.map_version.to_string(),
      map_name: msg.map_name.to_string(),
      coordinate_revision: msg.coordinate_revision.to_string(),
      frame_id: msg.frame_id.to_string(),
      unit: msg.unit.to_string(),
      bounds: msg.bounds,
      geometry_json: msg.geometry_json.to_string(),
    }
  }
}






#[link(name = "web_navigation_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__web_navigation_msgs__srv__GetNavigationExecution() -> *const std::ffi::c_void;
}

// Corresponds to web_navigation_msgs__srv__GetNavigationExecution
#[allow(missing_docs, non_camel_case_types)]
pub struct GetNavigationExecution;

impl rosidl_runtime_rs::Service for GetNavigationExecution {
    type Request = GetNavigationExecution_Request;
    type Response = GetNavigationExecution_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__web_navigation_msgs__srv__GetNavigationExecution() }
    }
}




#[link(name = "web_navigation_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__web_navigation_msgs__srv__ControlLease() -> *const std::ffi::c_void;
}

// Corresponds to web_navigation_msgs__srv__ControlLease
#[allow(missing_docs, non_camel_case_types)]
pub struct ControlLease;

impl rosidl_runtime_rs::Service for ControlLease {
    type Request = ControlLease_Request;
    type Response = ControlLease_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__web_navigation_msgs__srv__ControlLease() }
    }
}




#[link(name = "web_navigation_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__web_navigation_msgs__srv__ValidateTarget() -> *const std::ffi::c_void;
}

// Corresponds to web_navigation_msgs__srv__ValidateTarget
#[allow(missing_docs, non_camel_case_types)]
pub struct ValidateTarget;

impl rosidl_runtime_rs::Service for ValidateTarget {
    type Request = ValidateTarget_Request;
    type Response = ValidateTarget_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__web_navigation_msgs__srv__ValidateTarget() }
    }
}




#[link(name = "web_navigation_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__web_navigation_msgs__srv__SubmitGoal() -> *const std::ffi::c_void;
}

// Corresponds to web_navigation_msgs__srv__SubmitGoal
#[allow(missing_docs, non_camel_case_types)]
pub struct SubmitGoal;

impl rosidl_runtime_rs::Service for SubmitGoal {
    type Request = SubmitGoal_Request;
    type Response = SubmitGoal_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__web_navigation_msgs__srv__SubmitGoal() }
    }
}




#[link(name = "web_navigation_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__web_navigation_msgs__srv__CancelTask() -> *const std::ffi::c_void;
}

// Corresponds to web_navigation_msgs__srv__CancelTask
#[allow(missing_docs, non_camel_case_types)]
pub struct CancelTask;

impl rosidl_runtime_rs::Service for CancelTask {
    type Request = CancelTask_Request;
    type Response = CancelTask_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__web_navigation_msgs__srv__CancelTask() }
    }
}




#[link(name = "web_navigation_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__web_navigation_msgs__srv__GetSnapshot() -> *const std::ffi::c_void;
}

// Corresponds to web_navigation_msgs__srv__GetSnapshot
#[allow(missing_docs, non_camel_case_types)]
pub struct GetSnapshot;

impl rosidl_runtime_rs::Service for GetSnapshot {
    type Request = GetSnapshot_Request;
    type Response = GetSnapshot_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__web_navigation_msgs__srv__GetSnapshot() }
    }
}




#[link(name = "web_navigation_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__web_navigation_msgs__srv__GetRequest() -> *const std::ffi::c_void;
}

// Corresponds to web_navigation_msgs__srv__GetRequest
#[allow(missing_docs, non_camel_case_types)]
pub struct GetRequest;

impl rosidl_runtime_rs::Service for GetRequest {
    type Request = GetRequest_Request;
    type Response = GetRequest_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__web_navigation_msgs__srv__GetRequest() }
    }
}




#[link(name = "web_navigation_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__web_navigation_msgs__srv__GetTask() -> *const std::ffi::c_void;
}

// Corresponds to web_navigation_msgs__srv__GetTask
#[allow(missing_docs, non_camel_case_types)]
pub struct GetTask;

impl rosidl_runtime_rs::Service for GetTask {
    type Request = GetTask_Request;
    type Response = GetTask_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__web_navigation_msgs__srv__GetTask() }
    }
}




#[link(name = "web_navigation_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__web_navigation_msgs__srv__GetWebMap() -> *const std::ffi::c_void;
}

// Corresponds to web_navigation_msgs__srv__GetWebMap
#[allow(missing_docs, non_camel_case_types)]
pub struct GetWebMap;

impl rosidl_runtime_rs::Service for GetWebMap {
    type Request = GetWebMap_Request;
    type Response = GetWebMap_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__web_navigation_msgs__srv__GetWebMap() }
    }
}


