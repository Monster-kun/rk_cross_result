
#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



// Corresponds to behavior_msgs__action__ComputePathToPose_Goal

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ComputePathToPose_Goal {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal: geometry_msgs::msg::PoseStamped,

    /// Optional fixed start for planning the next leg before reaching its start.
    pub start: geometry_msgs::msg::PoseStamped,


    // This member is not documented.
    #[allow(missing_docs)]
    pub use_start: bool,

    /// Return a private prefetched leg; its caller publishes the active reference.
    pub defer_publication: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub through_goals: Vec<geometry_msgs::msg::PoseStamped>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub loop_goals: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub global_planner_id: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub task_id: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub ros_goal_uuid: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub map_version: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub planning_attempt_id: std::string::String,

}



impl Default for ComputePathToPose_Goal {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::ComputePathToPose_Goal::default())
  }
}

impl rosidl_runtime_rs::Message for ComputePathToPose_Goal {
  type RmwMsg = super::action::rmw::ComputePathToPose_Goal;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal: geometry_msgs::msg::PoseStamped::into_rmw_message(std::borrow::Cow::Owned(msg.goal)).into_owned(),
        start: geometry_msgs::msg::PoseStamped::into_rmw_message(std::borrow::Cow::Owned(msg.start)).into_owned(),
        use_start: msg.use_start,
        defer_publication: msg.defer_publication,
        through_goals: msg.through_goals
          .into_iter()
          .map(|elem| geometry_msgs::msg::PoseStamped::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
        loop_goals: msg.loop_goals,
        global_planner_id: msg.global_planner_id.as_str().into(),
        task_id: msg.task_id.as_str().into(),
        ros_goal_uuid: msg.ros_goal_uuid.as_str().into(),
        map_version: msg.map_version.as_str().into(),
        planning_attempt_id: msg.planning_attempt_id.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal: geometry_msgs::msg::PoseStamped::into_rmw_message(std::borrow::Cow::Borrowed(&msg.goal)).into_owned(),
        start: geometry_msgs::msg::PoseStamped::into_rmw_message(std::borrow::Cow::Borrowed(&msg.start)).into_owned(),
      use_start: msg.use_start,
      defer_publication: msg.defer_publication,
        through_goals: msg.through_goals
          .iter()
          .map(|elem| geometry_msgs::msg::PoseStamped::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
      loop_goals: msg.loop_goals,
        global_planner_id: msg.global_planner_id.as_str().into(),
        task_id: msg.task_id.as_str().into(),
        ros_goal_uuid: msg.ros_goal_uuid.as_str().into(),
        map_version: msg.map_version.as_str().into(),
        planning_attempt_id: msg.planning_attempt_id.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      goal: geometry_msgs::msg::PoseStamped::from_rmw_message(msg.goal),
      start: geometry_msgs::msg::PoseStamped::from_rmw_message(msg.start),
      use_start: msg.use_start,
      defer_publication: msg.defer_publication,
      through_goals: msg.through_goals
          .into_iter()
          .map(geometry_msgs::msg::PoseStamped::from_rmw_message)
          .collect(),
      loop_goals: msg.loop_goals,
      global_planner_id: msg.global_planner_id.to_string(),
      task_id: msg.task_id.to_string(),
      ros_goal_uuid: msg.ros_goal_uuid.to_string(),
      map_version: msg.map_version.to_string(),
      planning_attempt_id: msg.planning_attempt_id.to_string(),
    }
  }
}


// Corresponds to behavior_msgs__action__ComputePathToPose_Result

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ComputePathToPose_Result {

    // This member is not documented.
    #[allow(missing_docs)]
    pub path: planning_msgs::msg::GlobalPath,


    // This member is not documented.
    #[allow(missing_docs)]
    pub error_code: u16,


    // This member is not documented.
    #[allow(missing_docs)]
    pub error_msg: std::string::String,

}



impl Default for ComputePathToPose_Result {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::ComputePathToPose_Result::default())
  }
}

impl rosidl_runtime_rs::Message for ComputePathToPose_Result {
  type RmwMsg = super::action::rmw::ComputePathToPose_Result;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        path: planning_msgs::msg::GlobalPath::into_rmw_message(std::borrow::Cow::Owned(msg.path)).into_owned(),
        error_code: msg.error_code,
        error_msg: msg.error_msg.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        path: planning_msgs::msg::GlobalPath::into_rmw_message(std::borrow::Cow::Borrowed(&msg.path)).into_owned(),
      error_code: msg.error_code,
        error_msg: msg.error_msg.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      path: planning_msgs::msg::GlobalPath::from_rmw_message(msg.path),
      error_code: msg.error_code,
      error_msg: msg.error_msg.to_string(),
    }
  }
}


// Corresponds to behavior_msgs__action__ComputePathToPose_Feedback

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ComputePathToPose_Feedback {

    // This member is not documented.
    #[allow(missing_docs)]
    pub structure_needs_at_least_one_member: u8,

}



impl Default for ComputePathToPose_Feedback {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::ComputePathToPose_Feedback::default())
  }
}

impl rosidl_runtime_rs::Message for ComputePathToPose_Feedback {
  type RmwMsg = super::action::rmw::ComputePathToPose_Feedback;

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


// Corresponds to behavior_msgs__action__ComputePathToPose_FeedbackMessage

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ComputePathToPose_FeedbackMessage {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub feedback: super::action::ComputePathToPose_Feedback,

}



impl Default for ComputePathToPose_FeedbackMessage {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::ComputePathToPose_FeedbackMessage::default())
  }
}

impl rosidl_runtime_rs::Message for ComputePathToPose_FeedbackMessage {
  type RmwMsg = super::action::rmw::ComputePathToPose_FeedbackMessage;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Owned(msg.goal_id)).into_owned(),
        feedback: super::action::ComputePathToPose_Feedback::into_rmw_message(std::borrow::Cow::Owned(msg.feedback)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Borrowed(&msg.goal_id)).into_owned(),
        feedback: super::action::ComputePathToPose_Feedback::into_rmw_message(std::borrow::Cow::Borrowed(&msg.feedback)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      goal_id: unique_identifier_msgs::msg::UUID::from_rmw_message(msg.goal_id),
      feedback: super::action::ComputePathToPose_Feedback::from_rmw_message(msg.feedback),
    }
  }
}


// Corresponds to behavior_msgs__action__NavigateThroughPoses_Goal

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct NavigateThroughPoses_Goal {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goals: Vec<geometry_msgs::msg::PoseStamped>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_pose: geometry_msgs::msg::PoseStamped,


    // This member is not documented.
    #[allow(missing_docs)]
    pub task_id: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub map_version: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub behavior_tree: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub loop_goals: bool,

}



impl Default for NavigateThroughPoses_Goal {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::NavigateThroughPoses_Goal::default())
  }
}

impl rosidl_runtime_rs::Message for NavigateThroughPoses_Goal {
  type RmwMsg = super::action::rmw::NavigateThroughPoses_Goal;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goals: msg.goals
          .into_iter()
          .map(|elem| geometry_msgs::msg::PoseStamped::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
        goal_pose: geometry_msgs::msg::PoseStamped::into_rmw_message(std::borrow::Cow::Owned(msg.goal_pose)).into_owned(),
        task_id: msg.task_id.as_str().into(),
        map_version: msg.map_version.as_str().into(),
        behavior_tree: msg.behavior_tree.as_str().into(),
        loop_goals: msg.loop_goals,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goals: msg.goals
          .iter()
          .map(|elem| geometry_msgs::msg::PoseStamped::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
        goal_pose: geometry_msgs::msg::PoseStamped::into_rmw_message(std::borrow::Cow::Borrowed(&msg.goal_pose)).into_owned(),
        task_id: msg.task_id.as_str().into(),
        map_version: msg.map_version.as_str().into(),
        behavior_tree: msg.behavior_tree.as_str().into(),
      loop_goals: msg.loop_goals,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      goals: msg.goals
          .into_iter()
          .map(geometry_msgs::msg::PoseStamped::from_rmw_message)
          .collect(),
      goal_pose: geometry_msgs::msg::PoseStamped::from_rmw_message(msg.goal_pose),
      task_id: msg.task_id.to_string(),
      map_version: msg.map_version.to_string(),
      behavior_tree: msg.behavior_tree.to_string(),
      loop_goals: msg.loop_goals,
    }
  }
}


// Corresponds to behavior_msgs__action__NavigateThroughPoses_Result

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct NavigateThroughPoses_Result {

    // This member is not documented.
    #[allow(missing_docs)]
    pub error_code: u16,


    // This member is not documented.
    #[allow(missing_docs)]
    pub error_msg: std::string::String,

}

impl NavigateThroughPoses_Result {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const NONE: u16 = 0;

}


impl Default for NavigateThroughPoses_Result {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::NavigateThroughPoses_Result::default())
  }
}

impl rosidl_runtime_rs::Message for NavigateThroughPoses_Result {
  type RmwMsg = super::action::rmw::NavigateThroughPoses_Result;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        error_code: msg.error_code,
        error_msg: msg.error_msg.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      error_code: msg.error_code,
        error_msg: msg.error_msg.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      error_code: msg.error_code,
      error_msg: msg.error_msg.to_string(),
    }
  }
}


// Corresponds to behavior_msgs__action__NavigateThroughPoses_Feedback

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct NavigateThroughPoses_Feedback {

    // This member is not documented.
    #[allow(missing_docs)]
    pub navigation_time: builtin_interfaces::msg::Duration,


    // This member is not documented.
    #[allow(missing_docs)]
    pub number_of_recoveries: i16,


    // This member is not documented.
    #[allow(missing_docs)]
    pub number_of_goal_remaining: i16,

}



impl Default for NavigateThroughPoses_Feedback {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::NavigateThroughPoses_Feedback::default())
  }
}

impl rosidl_runtime_rs::Message for NavigateThroughPoses_Feedback {
  type RmwMsg = super::action::rmw::NavigateThroughPoses_Feedback;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        navigation_time: builtin_interfaces::msg::Duration::into_rmw_message(std::borrow::Cow::Owned(msg.navigation_time)).into_owned(),
        number_of_recoveries: msg.number_of_recoveries,
        number_of_goal_remaining: msg.number_of_goal_remaining,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        navigation_time: builtin_interfaces::msg::Duration::into_rmw_message(std::borrow::Cow::Borrowed(&msg.navigation_time)).into_owned(),
      number_of_recoveries: msg.number_of_recoveries,
      number_of_goal_remaining: msg.number_of_goal_remaining,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      navigation_time: builtin_interfaces::msg::Duration::from_rmw_message(msg.navigation_time),
      number_of_recoveries: msg.number_of_recoveries,
      number_of_goal_remaining: msg.number_of_goal_remaining,
    }
  }
}


// Corresponds to behavior_msgs__action__NavigateThroughPoses_FeedbackMessage

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct NavigateThroughPoses_FeedbackMessage {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub feedback: super::action::NavigateThroughPoses_Feedback,

}



impl Default for NavigateThroughPoses_FeedbackMessage {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::NavigateThroughPoses_FeedbackMessage::default())
  }
}

impl rosidl_runtime_rs::Message for NavigateThroughPoses_FeedbackMessage {
  type RmwMsg = super::action::rmw::NavigateThroughPoses_FeedbackMessage;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Owned(msg.goal_id)).into_owned(),
        feedback: super::action::NavigateThroughPoses_Feedback::into_rmw_message(std::borrow::Cow::Owned(msg.feedback)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Borrowed(&msg.goal_id)).into_owned(),
        feedback: super::action::NavigateThroughPoses_Feedback::into_rmw_message(std::borrow::Cow::Borrowed(&msg.feedback)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      goal_id: unique_identifier_msgs::msg::UUID::from_rmw_message(msg.goal_id),
      feedback: super::action::NavigateThroughPoses_Feedback::from_rmw_message(msg.feedback),
    }
  }
}


// Corresponds to behavior_msgs__action__FollowPath_Goal

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct FollowPath_Goal {

    // This member is not documented.
    #[allow(missing_docs)]
    pub path: planning_msgs::msg::GlobalPath,


    // This member is not documented.
    #[allow(missing_docs)]
    pub local_planner_id: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub plan_once: bool,

    /// Keep a pass-through leg alive while the next reference is being prepared.
    pub keep_running: bool,

    /// "distance" or "angle" or "all"
    pub progress_checking_mode: std::string::String,

}



impl Default for FollowPath_Goal {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::FollowPath_Goal::default())
  }
}

impl rosidl_runtime_rs::Message for FollowPath_Goal {
  type RmwMsg = super::action::rmw::FollowPath_Goal;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        path: planning_msgs::msg::GlobalPath::into_rmw_message(std::borrow::Cow::Owned(msg.path)).into_owned(),
        local_planner_id: msg.local_planner_id.as_str().into(),
        plan_once: msg.plan_once,
        keep_running: msg.keep_running,
        progress_checking_mode: msg.progress_checking_mode.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        path: planning_msgs::msg::GlobalPath::into_rmw_message(std::borrow::Cow::Borrowed(&msg.path)).into_owned(),
        local_planner_id: msg.local_planner_id.as_str().into(),
      plan_once: msg.plan_once,
      keep_running: msg.keep_running,
        progress_checking_mode: msg.progress_checking_mode.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      path: planning_msgs::msg::GlobalPath::from_rmw_message(msg.path),
      local_planner_id: msg.local_planner_id.to_string(),
      plan_once: msg.plan_once,
      keep_running: msg.keep_running,
      progress_checking_mode: msg.progress_checking_mode.to_string(),
    }
  }
}


// Corresponds to behavior_msgs__action__FollowPath_Result

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct FollowPath_Result {
    /// result
    pub result: std_msgs::msg::Empty,


    // This member is not documented.
    #[allow(missing_docs)]
    pub error_code: u16,


    // This member is not documented.
    #[allow(missing_docs)]
    pub error_msg: std::string::String,

}

impl FollowPath_Result {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const NONE: u16 = 0;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const UNKNOWN: u16 = 100;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const INVALID_PLANNER: u16 = 101;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const INVALID_PATH: u16 = 102;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const PATIENCE_EXCEEDED: u16 = 103;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const FAILED_TO_MAKE_PROGRESS: u16 = 104;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const NO_VALID_PLAN: u16 = 105;

}


impl Default for FollowPath_Result {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::FollowPath_Result::default())
  }
}

impl rosidl_runtime_rs::Message for FollowPath_Result {
  type RmwMsg = super::action::rmw::FollowPath_Result;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        result: std_msgs::msg::Empty::into_rmw_message(std::borrow::Cow::Owned(msg.result)).into_owned(),
        error_code: msg.error_code,
        error_msg: msg.error_msg.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        result: std_msgs::msg::Empty::into_rmw_message(std::borrow::Cow::Borrowed(&msg.result)).into_owned(),
      error_code: msg.error_code,
        error_msg: msg.error_msg.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      result: std_msgs::msg::Empty::from_rmw_message(msg.result),
      error_code: msg.error_code,
      error_msg: msg.error_msg.to_string(),
    }
  }
}


// Corresponds to behavior_msgs__action__FollowPath_Feedback

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct FollowPath_Feedback {

    // This member is not documented.
    #[allow(missing_docs)]
    pub distance_to_goal: f32,

}



impl Default for FollowPath_Feedback {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::FollowPath_Feedback::default())
  }
}

impl rosidl_runtime_rs::Message for FollowPath_Feedback {
  type RmwMsg = super::action::rmw::FollowPath_Feedback;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        distance_to_goal: msg.distance_to_goal,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      distance_to_goal: msg.distance_to_goal,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      distance_to_goal: msg.distance_to_goal,
    }
  }
}


// Corresponds to behavior_msgs__action__FollowPath_FeedbackMessage

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct FollowPath_FeedbackMessage {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub feedback: super::action::FollowPath_Feedback,

}



impl Default for FollowPath_FeedbackMessage {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::FollowPath_FeedbackMessage::default())
  }
}

impl rosidl_runtime_rs::Message for FollowPath_FeedbackMessage {
  type RmwMsg = super::action::rmw::FollowPath_FeedbackMessage;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Owned(msg.goal_id)).into_owned(),
        feedback: super::action::FollowPath_Feedback::into_rmw_message(std::borrow::Cow::Owned(msg.feedback)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Borrowed(&msg.goal_id)).into_owned(),
        feedback: super::action::FollowPath_Feedback::into_rmw_message(std::borrow::Cow::Borrowed(&msg.feedback)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      goal_id: unique_identifier_msgs::msg::UUID::from_rmw_message(msg.goal_id),
      feedback: super::action::FollowPath_Feedback::from_rmw_message(msg.feedback),
    }
  }
}


// Corresponds to behavior_msgs__action__FollowPoint_Goal

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct FollowPoint_Goal {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal: geometry_msgs::msg::PoseStamped,


    // This member is not documented.
    #[allow(missing_docs)]
    pub local_planner_id: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub plan_once: bool,

    /// "distance" or "angle" or "all"
    pub progress_checking_mode: std::string::String,

}



impl Default for FollowPoint_Goal {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::FollowPoint_Goal::default())
  }
}

impl rosidl_runtime_rs::Message for FollowPoint_Goal {
  type RmwMsg = super::action::rmw::FollowPoint_Goal;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal: geometry_msgs::msg::PoseStamped::into_rmw_message(std::borrow::Cow::Owned(msg.goal)).into_owned(),
        local_planner_id: msg.local_planner_id.as_str().into(),
        plan_once: msg.plan_once,
        progress_checking_mode: msg.progress_checking_mode.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal: geometry_msgs::msg::PoseStamped::into_rmw_message(std::borrow::Cow::Borrowed(&msg.goal)).into_owned(),
        local_planner_id: msg.local_planner_id.as_str().into(),
      plan_once: msg.plan_once,
        progress_checking_mode: msg.progress_checking_mode.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      goal: geometry_msgs::msg::PoseStamped::from_rmw_message(msg.goal),
      local_planner_id: msg.local_planner_id.to_string(),
      plan_once: msg.plan_once,
      progress_checking_mode: msg.progress_checking_mode.to_string(),
    }
  }
}


// Corresponds to behavior_msgs__action__FollowPoint_Result

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct FollowPoint_Result {
    /// result
    pub result: std_msgs::msg::Empty,


    // This member is not documented.
    #[allow(missing_docs)]
    pub error_code: u16,


    // This member is not documented.
    #[allow(missing_docs)]
    pub error_msg: std::string::String,

}

impl FollowPoint_Result {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const NONE: u16 = 0;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const UNKNOWN: u16 = 100;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const INVALID_PLANNER: u16 = 101;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const INVALID_PATH: u16 = 102;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const PATIENCE_EXCEEDED: u16 = 103;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const FAILED_TO_MAKE_PROGRESS: u16 = 104;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const NO_VALID_PLAN: u16 = 105;

}


impl Default for FollowPoint_Result {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::FollowPoint_Result::default())
  }
}

impl rosidl_runtime_rs::Message for FollowPoint_Result {
  type RmwMsg = super::action::rmw::FollowPoint_Result;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        result: std_msgs::msg::Empty::into_rmw_message(std::borrow::Cow::Owned(msg.result)).into_owned(),
        error_code: msg.error_code,
        error_msg: msg.error_msg.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        result: std_msgs::msg::Empty::into_rmw_message(std::borrow::Cow::Borrowed(&msg.result)).into_owned(),
      error_code: msg.error_code,
        error_msg: msg.error_msg.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      result: std_msgs::msg::Empty::from_rmw_message(msg.result),
      error_code: msg.error_code,
      error_msg: msg.error_msg.to_string(),
    }
  }
}


// Corresponds to behavior_msgs__action__FollowPoint_Feedback

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct FollowPoint_Feedback {

    // This member is not documented.
    #[allow(missing_docs)]
    pub distance_to_goal: f32,

}



impl Default for FollowPoint_Feedback {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::FollowPoint_Feedback::default())
  }
}

impl rosidl_runtime_rs::Message for FollowPoint_Feedback {
  type RmwMsg = super::action::rmw::FollowPoint_Feedback;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        distance_to_goal: msg.distance_to_goal,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      distance_to_goal: msg.distance_to_goal,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      distance_to_goal: msg.distance_to_goal,
    }
  }
}


// Corresponds to behavior_msgs__action__FollowPoint_FeedbackMessage

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct FollowPoint_FeedbackMessage {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub feedback: super::action::FollowPoint_Feedback,

}



impl Default for FollowPoint_FeedbackMessage {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::FollowPoint_FeedbackMessage::default())
  }
}

impl rosidl_runtime_rs::Message for FollowPoint_FeedbackMessage {
  type RmwMsg = super::action::rmw::FollowPoint_FeedbackMessage;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Owned(msg.goal_id)).into_owned(),
        feedback: super::action::FollowPoint_Feedback::into_rmw_message(std::borrow::Cow::Owned(msg.feedback)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Borrowed(&msg.goal_id)).into_owned(),
        feedback: super::action::FollowPoint_Feedback::into_rmw_message(std::borrow::Cow::Borrowed(&msg.feedback)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      goal_id: unique_identifier_msgs::msg::UUID::from_rmw_message(msg.goal_id),
      feedback: super::action::FollowPoint_Feedback::from_rmw_message(msg.feedback),
    }
  }
}






// Corresponds to behavior_msgs__action__ComputePathToPose_SendGoal_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ComputePathToPose_SendGoal_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub goal: super::action::ComputePathToPose_Goal,

}



impl Default for ComputePathToPose_SendGoal_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::ComputePathToPose_SendGoal_Request::default())
  }
}

impl rosidl_runtime_rs::Message for ComputePathToPose_SendGoal_Request {
  type RmwMsg = super::action::rmw::ComputePathToPose_SendGoal_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Owned(msg.goal_id)).into_owned(),
        goal: super::action::ComputePathToPose_Goal::into_rmw_message(std::borrow::Cow::Owned(msg.goal)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Borrowed(&msg.goal_id)).into_owned(),
        goal: super::action::ComputePathToPose_Goal::into_rmw_message(std::borrow::Cow::Borrowed(&msg.goal)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      goal_id: unique_identifier_msgs::msg::UUID::from_rmw_message(msg.goal_id),
      goal: super::action::ComputePathToPose_Goal::from_rmw_message(msg.goal),
    }
  }
}


// Corresponds to behavior_msgs__action__ComputePathToPose_SendGoal_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ComputePathToPose_SendGoal_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub accepted: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub stamp: builtin_interfaces::msg::Time,

}



impl Default for ComputePathToPose_SendGoal_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::ComputePathToPose_SendGoal_Response::default())
  }
}

impl rosidl_runtime_rs::Message for ComputePathToPose_SendGoal_Response {
  type RmwMsg = super::action::rmw::ComputePathToPose_SendGoal_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        accepted: msg.accepted,
        stamp: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Owned(msg.stamp)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      accepted: msg.accepted,
        stamp: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Borrowed(&msg.stamp)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      accepted: msg.accepted,
      stamp: builtin_interfaces::msg::Time::from_rmw_message(msg.stamp),
    }
  }
}


// Corresponds to behavior_msgs__action__ComputePathToPose_GetResult_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ComputePathToPose_GetResult_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::UUID,

}



impl Default for ComputePathToPose_GetResult_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::ComputePathToPose_GetResult_Request::default())
  }
}

impl rosidl_runtime_rs::Message for ComputePathToPose_GetResult_Request {
  type RmwMsg = super::action::rmw::ComputePathToPose_GetResult_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Owned(msg.goal_id)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Borrowed(&msg.goal_id)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      goal_id: unique_identifier_msgs::msg::UUID::from_rmw_message(msg.goal_id),
    }
  }
}


// Corresponds to behavior_msgs__action__ComputePathToPose_GetResult_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ComputePathToPose_GetResult_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub status: i8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub result: super::action::ComputePathToPose_Result,

}



impl Default for ComputePathToPose_GetResult_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::ComputePathToPose_GetResult_Response::default())
  }
}

impl rosidl_runtime_rs::Message for ComputePathToPose_GetResult_Response {
  type RmwMsg = super::action::rmw::ComputePathToPose_GetResult_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        status: msg.status,
        result: super::action::ComputePathToPose_Result::into_rmw_message(std::borrow::Cow::Owned(msg.result)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      status: msg.status,
        result: super::action::ComputePathToPose_Result::into_rmw_message(std::borrow::Cow::Borrowed(&msg.result)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      status: msg.status,
      result: super::action::ComputePathToPose_Result::from_rmw_message(msg.result),
    }
  }
}


// Corresponds to behavior_msgs__action__NavigateThroughPoses_SendGoal_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct NavigateThroughPoses_SendGoal_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub goal: super::action::NavigateThroughPoses_Goal,

}



impl Default for NavigateThroughPoses_SendGoal_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::NavigateThroughPoses_SendGoal_Request::default())
  }
}

impl rosidl_runtime_rs::Message for NavigateThroughPoses_SendGoal_Request {
  type RmwMsg = super::action::rmw::NavigateThroughPoses_SendGoal_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Owned(msg.goal_id)).into_owned(),
        goal: super::action::NavigateThroughPoses_Goal::into_rmw_message(std::borrow::Cow::Owned(msg.goal)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Borrowed(&msg.goal_id)).into_owned(),
        goal: super::action::NavigateThroughPoses_Goal::into_rmw_message(std::borrow::Cow::Borrowed(&msg.goal)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      goal_id: unique_identifier_msgs::msg::UUID::from_rmw_message(msg.goal_id),
      goal: super::action::NavigateThroughPoses_Goal::from_rmw_message(msg.goal),
    }
  }
}


// Corresponds to behavior_msgs__action__NavigateThroughPoses_SendGoal_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct NavigateThroughPoses_SendGoal_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub accepted: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub stamp: builtin_interfaces::msg::Time,

}



impl Default for NavigateThroughPoses_SendGoal_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::NavigateThroughPoses_SendGoal_Response::default())
  }
}

impl rosidl_runtime_rs::Message for NavigateThroughPoses_SendGoal_Response {
  type RmwMsg = super::action::rmw::NavigateThroughPoses_SendGoal_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        accepted: msg.accepted,
        stamp: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Owned(msg.stamp)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      accepted: msg.accepted,
        stamp: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Borrowed(&msg.stamp)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      accepted: msg.accepted,
      stamp: builtin_interfaces::msg::Time::from_rmw_message(msg.stamp),
    }
  }
}


// Corresponds to behavior_msgs__action__NavigateThroughPoses_GetResult_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct NavigateThroughPoses_GetResult_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::UUID,

}



impl Default for NavigateThroughPoses_GetResult_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::NavigateThroughPoses_GetResult_Request::default())
  }
}

impl rosidl_runtime_rs::Message for NavigateThroughPoses_GetResult_Request {
  type RmwMsg = super::action::rmw::NavigateThroughPoses_GetResult_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Owned(msg.goal_id)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Borrowed(&msg.goal_id)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      goal_id: unique_identifier_msgs::msg::UUID::from_rmw_message(msg.goal_id),
    }
  }
}


// Corresponds to behavior_msgs__action__NavigateThroughPoses_GetResult_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct NavigateThroughPoses_GetResult_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub status: i8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub result: super::action::NavigateThroughPoses_Result,

}



impl Default for NavigateThroughPoses_GetResult_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::NavigateThroughPoses_GetResult_Response::default())
  }
}

impl rosidl_runtime_rs::Message for NavigateThroughPoses_GetResult_Response {
  type RmwMsg = super::action::rmw::NavigateThroughPoses_GetResult_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        status: msg.status,
        result: super::action::NavigateThroughPoses_Result::into_rmw_message(std::borrow::Cow::Owned(msg.result)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      status: msg.status,
        result: super::action::NavigateThroughPoses_Result::into_rmw_message(std::borrow::Cow::Borrowed(&msg.result)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      status: msg.status,
      result: super::action::NavigateThroughPoses_Result::from_rmw_message(msg.result),
    }
  }
}


// Corresponds to behavior_msgs__action__FollowPath_SendGoal_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct FollowPath_SendGoal_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub goal: super::action::FollowPath_Goal,

}



impl Default for FollowPath_SendGoal_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::FollowPath_SendGoal_Request::default())
  }
}

impl rosidl_runtime_rs::Message for FollowPath_SendGoal_Request {
  type RmwMsg = super::action::rmw::FollowPath_SendGoal_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Owned(msg.goal_id)).into_owned(),
        goal: super::action::FollowPath_Goal::into_rmw_message(std::borrow::Cow::Owned(msg.goal)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Borrowed(&msg.goal_id)).into_owned(),
        goal: super::action::FollowPath_Goal::into_rmw_message(std::borrow::Cow::Borrowed(&msg.goal)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      goal_id: unique_identifier_msgs::msg::UUID::from_rmw_message(msg.goal_id),
      goal: super::action::FollowPath_Goal::from_rmw_message(msg.goal),
    }
  }
}


// Corresponds to behavior_msgs__action__FollowPath_SendGoal_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct FollowPath_SendGoal_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub accepted: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub stamp: builtin_interfaces::msg::Time,

}



impl Default for FollowPath_SendGoal_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::FollowPath_SendGoal_Response::default())
  }
}

impl rosidl_runtime_rs::Message for FollowPath_SendGoal_Response {
  type RmwMsg = super::action::rmw::FollowPath_SendGoal_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        accepted: msg.accepted,
        stamp: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Owned(msg.stamp)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      accepted: msg.accepted,
        stamp: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Borrowed(&msg.stamp)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      accepted: msg.accepted,
      stamp: builtin_interfaces::msg::Time::from_rmw_message(msg.stamp),
    }
  }
}


// Corresponds to behavior_msgs__action__FollowPath_GetResult_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct FollowPath_GetResult_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::UUID,

}



impl Default for FollowPath_GetResult_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::FollowPath_GetResult_Request::default())
  }
}

impl rosidl_runtime_rs::Message for FollowPath_GetResult_Request {
  type RmwMsg = super::action::rmw::FollowPath_GetResult_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Owned(msg.goal_id)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Borrowed(&msg.goal_id)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      goal_id: unique_identifier_msgs::msg::UUID::from_rmw_message(msg.goal_id),
    }
  }
}


// Corresponds to behavior_msgs__action__FollowPath_GetResult_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct FollowPath_GetResult_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub status: i8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub result: super::action::FollowPath_Result,

}



impl Default for FollowPath_GetResult_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::FollowPath_GetResult_Response::default())
  }
}

impl rosidl_runtime_rs::Message for FollowPath_GetResult_Response {
  type RmwMsg = super::action::rmw::FollowPath_GetResult_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        status: msg.status,
        result: super::action::FollowPath_Result::into_rmw_message(std::borrow::Cow::Owned(msg.result)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      status: msg.status,
        result: super::action::FollowPath_Result::into_rmw_message(std::borrow::Cow::Borrowed(&msg.result)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      status: msg.status,
      result: super::action::FollowPath_Result::from_rmw_message(msg.result),
    }
  }
}


// Corresponds to behavior_msgs__action__FollowPoint_SendGoal_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct FollowPoint_SendGoal_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub goal: super::action::FollowPoint_Goal,

}



impl Default for FollowPoint_SendGoal_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::FollowPoint_SendGoal_Request::default())
  }
}

impl rosidl_runtime_rs::Message for FollowPoint_SendGoal_Request {
  type RmwMsg = super::action::rmw::FollowPoint_SendGoal_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Owned(msg.goal_id)).into_owned(),
        goal: super::action::FollowPoint_Goal::into_rmw_message(std::borrow::Cow::Owned(msg.goal)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Borrowed(&msg.goal_id)).into_owned(),
        goal: super::action::FollowPoint_Goal::into_rmw_message(std::borrow::Cow::Borrowed(&msg.goal)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      goal_id: unique_identifier_msgs::msg::UUID::from_rmw_message(msg.goal_id),
      goal: super::action::FollowPoint_Goal::from_rmw_message(msg.goal),
    }
  }
}


// Corresponds to behavior_msgs__action__FollowPoint_SendGoal_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct FollowPoint_SendGoal_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub accepted: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub stamp: builtin_interfaces::msg::Time,

}



impl Default for FollowPoint_SendGoal_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::FollowPoint_SendGoal_Response::default())
  }
}

impl rosidl_runtime_rs::Message for FollowPoint_SendGoal_Response {
  type RmwMsg = super::action::rmw::FollowPoint_SendGoal_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        accepted: msg.accepted,
        stamp: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Owned(msg.stamp)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      accepted: msg.accepted,
        stamp: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Borrowed(&msg.stamp)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      accepted: msg.accepted,
      stamp: builtin_interfaces::msg::Time::from_rmw_message(msg.stamp),
    }
  }
}


// Corresponds to behavior_msgs__action__FollowPoint_GetResult_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct FollowPoint_GetResult_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::UUID,

}



impl Default for FollowPoint_GetResult_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::FollowPoint_GetResult_Request::default())
  }
}

impl rosidl_runtime_rs::Message for FollowPoint_GetResult_Request {
  type RmwMsg = super::action::rmw::FollowPoint_GetResult_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Owned(msg.goal_id)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Borrowed(&msg.goal_id)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      goal_id: unique_identifier_msgs::msg::UUID::from_rmw_message(msg.goal_id),
    }
  }
}


// Corresponds to behavior_msgs__action__FollowPoint_GetResult_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct FollowPoint_GetResult_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub status: i8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub result: super::action::FollowPoint_Result,

}



impl Default for FollowPoint_GetResult_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::FollowPoint_GetResult_Response::default())
  }
}

impl rosidl_runtime_rs::Message for FollowPoint_GetResult_Response {
  type RmwMsg = super::action::rmw::FollowPoint_GetResult_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        status: msg.status,
        result: super::action::FollowPoint_Result::into_rmw_message(std::borrow::Cow::Owned(msg.result)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      status: msg.status,
        result: super::action::FollowPoint_Result::into_rmw_message(std::borrow::Cow::Borrowed(&msg.result)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      status: msg.status,
      result: super::action::FollowPoint_Result::from_rmw_message(msg.result),
    }
  }
}






#[link(name = "behavior_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__behavior_msgs__action__ComputePathToPose_SendGoal() -> *const std::ffi::c_void;
}

// Corresponds to behavior_msgs__action__ComputePathToPose_SendGoal
#[allow(missing_docs, non_camel_case_types)]
pub struct ComputePathToPose_SendGoal;

impl rosidl_runtime_rs::Service for ComputePathToPose_SendGoal {
    type Request = ComputePathToPose_SendGoal_Request;
    type Response = ComputePathToPose_SendGoal_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__behavior_msgs__action__ComputePathToPose_SendGoal() }
    }
}




#[link(name = "behavior_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__behavior_msgs__action__ComputePathToPose_GetResult() -> *const std::ffi::c_void;
}

// Corresponds to behavior_msgs__action__ComputePathToPose_GetResult
#[allow(missing_docs, non_camel_case_types)]
pub struct ComputePathToPose_GetResult;

impl rosidl_runtime_rs::Service for ComputePathToPose_GetResult {
    type Request = ComputePathToPose_GetResult_Request;
    type Response = ComputePathToPose_GetResult_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__behavior_msgs__action__ComputePathToPose_GetResult() }
    }
}




#[link(name = "behavior_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__behavior_msgs__action__NavigateThroughPoses_SendGoal() -> *const std::ffi::c_void;
}

// Corresponds to behavior_msgs__action__NavigateThroughPoses_SendGoal
#[allow(missing_docs, non_camel_case_types)]
pub struct NavigateThroughPoses_SendGoal;

impl rosidl_runtime_rs::Service for NavigateThroughPoses_SendGoal {
    type Request = NavigateThroughPoses_SendGoal_Request;
    type Response = NavigateThroughPoses_SendGoal_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__behavior_msgs__action__NavigateThroughPoses_SendGoal() }
    }
}




#[link(name = "behavior_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__behavior_msgs__action__NavigateThroughPoses_GetResult() -> *const std::ffi::c_void;
}

// Corresponds to behavior_msgs__action__NavigateThroughPoses_GetResult
#[allow(missing_docs, non_camel_case_types)]
pub struct NavigateThroughPoses_GetResult;

impl rosidl_runtime_rs::Service for NavigateThroughPoses_GetResult {
    type Request = NavigateThroughPoses_GetResult_Request;
    type Response = NavigateThroughPoses_GetResult_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__behavior_msgs__action__NavigateThroughPoses_GetResult() }
    }
}




#[link(name = "behavior_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__behavior_msgs__action__FollowPath_SendGoal() -> *const std::ffi::c_void;
}

// Corresponds to behavior_msgs__action__FollowPath_SendGoal
#[allow(missing_docs, non_camel_case_types)]
pub struct FollowPath_SendGoal;

impl rosidl_runtime_rs::Service for FollowPath_SendGoal {
    type Request = FollowPath_SendGoal_Request;
    type Response = FollowPath_SendGoal_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__behavior_msgs__action__FollowPath_SendGoal() }
    }
}




#[link(name = "behavior_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__behavior_msgs__action__FollowPath_GetResult() -> *const std::ffi::c_void;
}

// Corresponds to behavior_msgs__action__FollowPath_GetResult
#[allow(missing_docs, non_camel_case_types)]
pub struct FollowPath_GetResult;

impl rosidl_runtime_rs::Service for FollowPath_GetResult {
    type Request = FollowPath_GetResult_Request;
    type Response = FollowPath_GetResult_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__behavior_msgs__action__FollowPath_GetResult() }
    }
}




#[link(name = "behavior_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__behavior_msgs__action__FollowPoint_SendGoal() -> *const std::ffi::c_void;
}

// Corresponds to behavior_msgs__action__FollowPoint_SendGoal
#[allow(missing_docs, non_camel_case_types)]
pub struct FollowPoint_SendGoal;

impl rosidl_runtime_rs::Service for FollowPoint_SendGoal {
    type Request = FollowPoint_SendGoal_Request;
    type Response = FollowPoint_SendGoal_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__behavior_msgs__action__FollowPoint_SendGoal() }
    }
}




#[link(name = "behavior_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__behavior_msgs__action__FollowPoint_GetResult() -> *const std::ffi::c_void;
}

// Corresponds to behavior_msgs__action__FollowPoint_GetResult
#[allow(missing_docs, non_camel_case_types)]
pub struct FollowPoint_GetResult;

impl rosidl_runtime_rs::Service for FollowPoint_GetResult {
    type Request = FollowPoint_GetResult_Request;
    type Response = FollowPoint_GetResult_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__behavior_msgs__action__FollowPoint_GetResult() }
    }
}






#[link(name = "behavior_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_action_type_support_handle__behavior_msgs__action__ComputePathToPose() -> *const std::ffi::c_void;
}

// Corresponds to behavior_msgs__action__ComputePathToPose
#[allow(missing_docs, non_camel_case_types)]
pub struct ComputePathToPose;

impl rosidl_runtime_rs::Action for ComputePathToPose {
  // --- Associated types for client library users ---
  /// The goal message defined in the action definition.
  type Goal = ComputePathToPose_Goal;

  /// The result message defined in the action definition.
  type Result = ComputePathToPose_Result;

  /// The feedback message defined in the action definition.
  type Feedback = ComputePathToPose_Feedback;

  // --- Associated types for client library implementation ---
  /// The feedback message with generic fields which wraps the feedback message.
  type FeedbackMessage = super::action::ComputePathToPose_FeedbackMessage;

  /// The send_goal service using a wrapped version of the goal message as a request.
  type SendGoalService = super::action::ComputePathToPose_SendGoal;

  /// The generic service to cancel a goal.
  type CancelGoalService = action_msgs::srv::rmw::CancelGoal;

  /// The get_result service using a wrapped version of the result message as a response.
  type GetResultService = super::action::ComputePathToPose_GetResult;

  // --- Methods for client library implementation ---
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_action_type_support_handle__behavior_msgs__action__ComputePathToPose() }
  }

  fn create_goal_request(
    goal_id: &[u8; 16],
    goal: super::action::rmw::ComputePathToPose_Goal,
  ) -> super::action::rmw::ComputePathToPose_SendGoal_Request {
   super::action::rmw::ComputePathToPose_SendGoal_Request {
      goal_id: unique_identifier_msgs::msg::rmw::UUID { uuid: *goal_id },
      goal,
    }
  }

  fn split_goal_request(
    request: super::action::rmw::ComputePathToPose_SendGoal_Request,
  ) -> (
    [u8; 16],
   super::action::rmw::ComputePathToPose_Goal,
  ) {
    (request.goal_id.uuid, request.goal)
  }

  fn create_goal_response(
    accepted: bool,
    stamp: (i32, u32),
  ) -> super::action::rmw::ComputePathToPose_SendGoal_Response {
   super::action::rmw::ComputePathToPose_SendGoal_Response {
      accepted,
      stamp: builtin_interfaces::msg::rmw::Time {
        sec: stamp.0,
        nanosec: stamp.1,
      },
    }
  }

  fn get_goal_response_accepted(
    response: &super::action::rmw::ComputePathToPose_SendGoal_Response,
  ) -> bool {
    response.accepted
  }

  fn get_goal_response_stamp(
    response: &super::action::rmw::ComputePathToPose_SendGoal_Response,
  ) -> (i32, u32) {
    (response.stamp.sec, response.stamp.nanosec)
  }

  fn create_feedback_message(
    goal_id: &[u8; 16],
    feedback: super::action::rmw::ComputePathToPose_Feedback,
  ) -> super::action::rmw::ComputePathToPose_FeedbackMessage {
    let mut message = super::action::rmw::ComputePathToPose_FeedbackMessage::default();
    message.goal_id.uuid = *goal_id;
    message.feedback = feedback;
    message
  }

  fn split_feedback_message(
    feedback: super::action::rmw::ComputePathToPose_FeedbackMessage,
  ) -> (
    [u8; 16],
   super::action::rmw::ComputePathToPose_Feedback,
  ) {
    (feedback.goal_id.uuid, feedback.feedback)
  }

  fn create_result_request(
    goal_id: &[u8; 16],
  ) -> super::action::rmw::ComputePathToPose_GetResult_Request {
   super::action::rmw::ComputePathToPose_GetResult_Request {
      goal_id: unique_identifier_msgs::msg::rmw::UUID { uuid: *goal_id },
    }
  }

  fn get_result_request_uuid(
    request: &super::action::rmw::ComputePathToPose_GetResult_Request,
  ) -> &[u8; 16] {
    &request.goal_id.uuid
  }

  fn create_result_response(
    status: i8,
    result: super::action::rmw::ComputePathToPose_Result,
  ) -> super::action::rmw::ComputePathToPose_GetResult_Response {
   super::action::rmw::ComputePathToPose_GetResult_Response {
      status,
      result,
    }
  }

  fn split_result_response(
    response: super::action::rmw::ComputePathToPose_GetResult_Response
  ) -> (
    i8,
   super::action::rmw::ComputePathToPose_Result,
  ) {
    (response.status, response.result)
  }
}




#[link(name = "behavior_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_action_type_support_handle__behavior_msgs__action__NavigateThroughPoses() -> *const std::ffi::c_void;
}

// Corresponds to behavior_msgs__action__NavigateThroughPoses
#[allow(missing_docs, non_camel_case_types)]
pub struct NavigateThroughPoses;

impl rosidl_runtime_rs::Action for NavigateThroughPoses {
  // --- Associated types for client library users ---
  /// The goal message defined in the action definition.
  type Goal = NavigateThroughPoses_Goal;

  /// The result message defined in the action definition.
  type Result = NavigateThroughPoses_Result;

  /// The feedback message defined in the action definition.
  type Feedback = NavigateThroughPoses_Feedback;

  // --- Associated types for client library implementation ---
  /// The feedback message with generic fields which wraps the feedback message.
  type FeedbackMessage = super::action::NavigateThroughPoses_FeedbackMessage;

  /// The send_goal service using a wrapped version of the goal message as a request.
  type SendGoalService = super::action::NavigateThroughPoses_SendGoal;

  /// The generic service to cancel a goal.
  type CancelGoalService = action_msgs::srv::rmw::CancelGoal;

  /// The get_result service using a wrapped version of the result message as a response.
  type GetResultService = super::action::NavigateThroughPoses_GetResult;

  // --- Methods for client library implementation ---
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_action_type_support_handle__behavior_msgs__action__NavigateThroughPoses() }
  }

  fn create_goal_request(
    goal_id: &[u8; 16],
    goal: super::action::rmw::NavigateThroughPoses_Goal,
  ) -> super::action::rmw::NavigateThroughPoses_SendGoal_Request {
   super::action::rmw::NavigateThroughPoses_SendGoal_Request {
      goal_id: unique_identifier_msgs::msg::rmw::UUID { uuid: *goal_id },
      goal,
    }
  }

  fn split_goal_request(
    request: super::action::rmw::NavigateThroughPoses_SendGoal_Request,
  ) -> (
    [u8; 16],
   super::action::rmw::NavigateThroughPoses_Goal,
  ) {
    (request.goal_id.uuid, request.goal)
  }

  fn create_goal_response(
    accepted: bool,
    stamp: (i32, u32),
  ) -> super::action::rmw::NavigateThroughPoses_SendGoal_Response {
   super::action::rmw::NavigateThroughPoses_SendGoal_Response {
      accepted,
      stamp: builtin_interfaces::msg::rmw::Time {
        sec: stamp.0,
        nanosec: stamp.1,
      },
    }
  }

  fn get_goal_response_accepted(
    response: &super::action::rmw::NavigateThroughPoses_SendGoal_Response,
  ) -> bool {
    response.accepted
  }

  fn get_goal_response_stamp(
    response: &super::action::rmw::NavigateThroughPoses_SendGoal_Response,
  ) -> (i32, u32) {
    (response.stamp.sec, response.stamp.nanosec)
  }

  fn create_feedback_message(
    goal_id: &[u8; 16],
    feedback: super::action::rmw::NavigateThroughPoses_Feedback,
  ) -> super::action::rmw::NavigateThroughPoses_FeedbackMessage {
    let mut message = super::action::rmw::NavigateThroughPoses_FeedbackMessage::default();
    message.goal_id.uuid = *goal_id;
    message.feedback = feedback;
    message
  }

  fn split_feedback_message(
    feedback: super::action::rmw::NavigateThroughPoses_FeedbackMessage,
  ) -> (
    [u8; 16],
   super::action::rmw::NavigateThroughPoses_Feedback,
  ) {
    (feedback.goal_id.uuid, feedback.feedback)
  }

  fn create_result_request(
    goal_id: &[u8; 16],
  ) -> super::action::rmw::NavigateThroughPoses_GetResult_Request {
   super::action::rmw::NavigateThroughPoses_GetResult_Request {
      goal_id: unique_identifier_msgs::msg::rmw::UUID { uuid: *goal_id },
    }
  }

  fn get_result_request_uuid(
    request: &super::action::rmw::NavigateThroughPoses_GetResult_Request,
  ) -> &[u8; 16] {
    &request.goal_id.uuid
  }

  fn create_result_response(
    status: i8,
    result: super::action::rmw::NavigateThroughPoses_Result,
  ) -> super::action::rmw::NavigateThroughPoses_GetResult_Response {
   super::action::rmw::NavigateThroughPoses_GetResult_Response {
      status,
      result,
    }
  }

  fn split_result_response(
    response: super::action::rmw::NavigateThroughPoses_GetResult_Response
  ) -> (
    i8,
   super::action::rmw::NavigateThroughPoses_Result,
  ) {
    (response.status, response.result)
  }
}




#[link(name = "behavior_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_action_type_support_handle__behavior_msgs__action__FollowPath() -> *const std::ffi::c_void;
}

// Corresponds to behavior_msgs__action__FollowPath
#[allow(missing_docs, non_camel_case_types)]
pub struct FollowPath;

impl rosidl_runtime_rs::Action for FollowPath {
  // --- Associated types for client library users ---
  /// The goal message defined in the action definition.
  type Goal = FollowPath_Goal;

  /// The result message defined in the action definition.
  type Result = FollowPath_Result;

  /// The feedback message defined in the action definition.
  type Feedback = FollowPath_Feedback;

  // --- Associated types for client library implementation ---
  /// The feedback message with generic fields which wraps the feedback message.
  type FeedbackMessage = super::action::FollowPath_FeedbackMessage;

  /// The send_goal service using a wrapped version of the goal message as a request.
  type SendGoalService = super::action::FollowPath_SendGoal;

  /// The generic service to cancel a goal.
  type CancelGoalService = action_msgs::srv::rmw::CancelGoal;

  /// The get_result service using a wrapped version of the result message as a response.
  type GetResultService = super::action::FollowPath_GetResult;

  // --- Methods for client library implementation ---
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_action_type_support_handle__behavior_msgs__action__FollowPath() }
  }

  fn create_goal_request(
    goal_id: &[u8; 16],
    goal: super::action::rmw::FollowPath_Goal,
  ) -> super::action::rmw::FollowPath_SendGoal_Request {
   super::action::rmw::FollowPath_SendGoal_Request {
      goal_id: unique_identifier_msgs::msg::rmw::UUID { uuid: *goal_id },
      goal,
    }
  }

  fn split_goal_request(
    request: super::action::rmw::FollowPath_SendGoal_Request,
  ) -> (
    [u8; 16],
   super::action::rmw::FollowPath_Goal,
  ) {
    (request.goal_id.uuid, request.goal)
  }

  fn create_goal_response(
    accepted: bool,
    stamp: (i32, u32),
  ) -> super::action::rmw::FollowPath_SendGoal_Response {
   super::action::rmw::FollowPath_SendGoal_Response {
      accepted,
      stamp: builtin_interfaces::msg::rmw::Time {
        sec: stamp.0,
        nanosec: stamp.1,
      },
    }
  }

  fn get_goal_response_accepted(
    response: &super::action::rmw::FollowPath_SendGoal_Response,
  ) -> bool {
    response.accepted
  }

  fn get_goal_response_stamp(
    response: &super::action::rmw::FollowPath_SendGoal_Response,
  ) -> (i32, u32) {
    (response.stamp.sec, response.stamp.nanosec)
  }

  fn create_feedback_message(
    goal_id: &[u8; 16],
    feedback: super::action::rmw::FollowPath_Feedback,
  ) -> super::action::rmw::FollowPath_FeedbackMessage {
    let mut message = super::action::rmw::FollowPath_FeedbackMessage::default();
    message.goal_id.uuid = *goal_id;
    message.feedback = feedback;
    message
  }

  fn split_feedback_message(
    feedback: super::action::rmw::FollowPath_FeedbackMessage,
  ) -> (
    [u8; 16],
   super::action::rmw::FollowPath_Feedback,
  ) {
    (feedback.goal_id.uuid, feedback.feedback)
  }

  fn create_result_request(
    goal_id: &[u8; 16],
  ) -> super::action::rmw::FollowPath_GetResult_Request {
   super::action::rmw::FollowPath_GetResult_Request {
      goal_id: unique_identifier_msgs::msg::rmw::UUID { uuid: *goal_id },
    }
  }

  fn get_result_request_uuid(
    request: &super::action::rmw::FollowPath_GetResult_Request,
  ) -> &[u8; 16] {
    &request.goal_id.uuid
  }

  fn create_result_response(
    status: i8,
    result: super::action::rmw::FollowPath_Result,
  ) -> super::action::rmw::FollowPath_GetResult_Response {
   super::action::rmw::FollowPath_GetResult_Response {
      status,
      result,
    }
  }

  fn split_result_response(
    response: super::action::rmw::FollowPath_GetResult_Response
  ) -> (
    i8,
   super::action::rmw::FollowPath_Result,
  ) {
    (response.status, response.result)
  }
}




#[link(name = "behavior_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_action_type_support_handle__behavior_msgs__action__FollowPoint() -> *const std::ffi::c_void;
}

// Corresponds to behavior_msgs__action__FollowPoint
#[allow(missing_docs, non_camel_case_types)]
pub struct FollowPoint;

impl rosidl_runtime_rs::Action for FollowPoint {
  // --- Associated types for client library users ---
  /// The goal message defined in the action definition.
  type Goal = FollowPoint_Goal;

  /// The result message defined in the action definition.
  type Result = FollowPoint_Result;

  /// The feedback message defined in the action definition.
  type Feedback = FollowPoint_Feedback;

  // --- Associated types for client library implementation ---
  /// The feedback message with generic fields which wraps the feedback message.
  type FeedbackMessage = super::action::FollowPoint_FeedbackMessage;

  /// The send_goal service using a wrapped version of the goal message as a request.
  type SendGoalService = super::action::FollowPoint_SendGoal;

  /// The generic service to cancel a goal.
  type CancelGoalService = action_msgs::srv::rmw::CancelGoal;

  /// The get_result service using a wrapped version of the result message as a response.
  type GetResultService = super::action::FollowPoint_GetResult;

  // --- Methods for client library implementation ---
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_action_type_support_handle__behavior_msgs__action__FollowPoint() }
  }

  fn create_goal_request(
    goal_id: &[u8; 16],
    goal: super::action::rmw::FollowPoint_Goal,
  ) -> super::action::rmw::FollowPoint_SendGoal_Request {
   super::action::rmw::FollowPoint_SendGoal_Request {
      goal_id: unique_identifier_msgs::msg::rmw::UUID { uuid: *goal_id },
      goal,
    }
  }

  fn split_goal_request(
    request: super::action::rmw::FollowPoint_SendGoal_Request,
  ) -> (
    [u8; 16],
   super::action::rmw::FollowPoint_Goal,
  ) {
    (request.goal_id.uuid, request.goal)
  }

  fn create_goal_response(
    accepted: bool,
    stamp: (i32, u32),
  ) -> super::action::rmw::FollowPoint_SendGoal_Response {
   super::action::rmw::FollowPoint_SendGoal_Response {
      accepted,
      stamp: builtin_interfaces::msg::rmw::Time {
        sec: stamp.0,
        nanosec: stamp.1,
      },
    }
  }

  fn get_goal_response_accepted(
    response: &super::action::rmw::FollowPoint_SendGoal_Response,
  ) -> bool {
    response.accepted
  }

  fn get_goal_response_stamp(
    response: &super::action::rmw::FollowPoint_SendGoal_Response,
  ) -> (i32, u32) {
    (response.stamp.sec, response.stamp.nanosec)
  }

  fn create_feedback_message(
    goal_id: &[u8; 16],
    feedback: super::action::rmw::FollowPoint_Feedback,
  ) -> super::action::rmw::FollowPoint_FeedbackMessage {
    let mut message = super::action::rmw::FollowPoint_FeedbackMessage::default();
    message.goal_id.uuid = *goal_id;
    message.feedback = feedback;
    message
  }

  fn split_feedback_message(
    feedback: super::action::rmw::FollowPoint_FeedbackMessage,
  ) -> (
    [u8; 16],
   super::action::rmw::FollowPoint_Feedback,
  ) {
    (feedback.goal_id.uuid, feedback.feedback)
  }

  fn create_result_request(
    goal_id: &[u8; 16],
  ) -> super::action::rmw::FollowPoint_GetResult_Request {
   super::action::rmw::FollowPoint_GetResult_Request {
      goal_id: unique_identifier_msgs::msg::rmw::UUID { uuid: *goal_id },
    }
  }

  fn get_result_request_uuid(
    request: &super::action::rmw::FollowPoint_GetResult_Request,
  ) -> &[u8; 16] {
    &request.goal_id.uuid
  }

  fn create_result_response(
    status: i8,
    result: super::action::rmw::FollowPoint_Result,
  ) -> super::action::rmw::FollowPoint_GetResult_Response {
   super::action::rmw::FollowPoint_GetResult_Response {
      status,
      result,
    }
  }

  fn split_result_response(
    response: super::action::rmw::FollowPoint_GetResult_Response
  ) -> (
    i8,
   super::action::rmw::FollowPoint_Result,
  ) {
    (response.status, response.result)
  }
}


