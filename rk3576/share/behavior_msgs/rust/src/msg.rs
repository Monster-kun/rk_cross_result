#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



// Corresponds to behavior_msgs__msg__BehaviorTreeLog

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct BehaviorTreeLog {
    /// ROS time that this log message was sent.
    pub timestamp: builtin_interfaces::msg::Time,


    // This member is not documented.
    #[allow(missing_docs)]
    pub event_log: Vec<super::msg::BehaviorTreeStatusChange>,

}



impl Default for BehaviorTreeLog {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::BehaviorTreeLog::default())
  }
}

impl rosidl_runtime_rs::Message for BehaviorTreeLog {
  type RmwMsg = super::msg::rmw::BehaviorTreeLog;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        timestamp: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Owned(msg.timestamp)).into_owned(),
        event_log: msg.event_log
          .into_iter()
          .map(|elem| super::msg::BehaviorTreeStatusChange::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        timestamp: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Borrowed(&msg.timestamp)).into_owned(),
        event_log: msg.event_log
          .iter()
          .map(|elem| super::msg::BehaviorTreeStatusChange::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      timestamp: builtin_interfaces::msg::Time::from_rmw_message(msg.timestamp),
      event_log: msg.event_log
          .into_iter()
          .map(super::msg::BehaviorTreeStatusChange::from_rmw_message)
          .collect(),
    }
  }
}


// Corresponds to behavior_msgs__msg__BehaviorTreeStatusChange

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct BehaviorTreeStatusChange {
    /// internal behavior tree event timestamp. Typically this is wall clock time
    pub timestamp: builtin_interfaces::msg::Time,


    // This member is not documented.
    #[allow(missing_docs)]
    pub node_name: std::string::String,

    /// unique ID for this node
    pub uid: u16,

    /// IDLE, RUNNING, SUCCESS or FAILURE
    pub previous_status: std::string::String,

    /// IDLE, RUNNING, SUCCESS or FAILURE
    pub current_status: std::string::String,

}



impl Default for BehaviorTreeStatusChange {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::BehaviorTreeStatusChange::default())
  }
}

impl rosidl_runtime_rs::Message for BehaviorTreeStatusChange {
  type RmwMsg = super::msg::rmw::BehaviorTreeStatusChange;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        timestamp: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Owned(msg.timestamp)).into_owned(),
        node_name: msg.node_name.as_str().into(),
        uid: msg.uid,
        previous_status: msg.previous_status.as_str().into(),
        current_status: msg.current_status.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        timestamp: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Borrowed(&msg.timestamp)).into_owned(),
        node_name: msg.node_name.as_str().into(),
      uid: msg.uid,
        previous_status: msg.previous_status.as_str().into(),
        current_status: msg.current_status.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      timestamp: builtin_interfaces::msg::Time::from_rmw_message(msg.timestamp),
      node_name: msg.node_name.to_string(),
      uid: msg.uid,
      previous_status: msg.previous_status.to_string(),
      current_status: msg.current_status.to_string(),
    }
  }
}


