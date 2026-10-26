#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



// Corresponds to web_navigation_msgs__msg__SequenceWaypoint

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SequenceWaypoint {

    // This member is not documented.
    #[allow(missing_docs)]
    pub annotation_id: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub name: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub x: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub y: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub lanelet_id: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub stop: bool,

}



impl Default for SequenceWaypoint {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::SequenceWaypoint::default())
  }
}

impl rosidl_runtime_rs::Message for SequenceWaypoint {
  type RmwMsg = super::msg::rmw::SequenceWaypoint;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        annotation_id: msg.annotation_id.as_str().into(),
        name: msg.name.as_str().into(),
        x: msg.x,
        y: msg.y,
        lanelet_id: msg.lanelet_id.as_str().into(),
        stop: msg.stop,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        annotation_id: msg.annotation_id.as_str().into(),
        name: msg.name.as_str().into(),
      x: msg.x,
      y: msg.y,
        lanelet_id: msg.lanelet_id.as_str().into(),
      stop: msg.stop,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      annotation_id: msg.annotation_id.to_string(),
      name: msg.name.to_string(),
      x: msg.x,
      y: msg.y,
      lanelet_id: msg.lanelet_id.to_string(),
      stop: msg.stop,
    }
  }
}


// Corresponds to web_navigation_msgs__msg__NavigationState

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct NavigationState {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub manager_boot_id: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub state_revision: u64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub map_ready: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub map_version: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub map_name: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub frame_id: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub vehicle_pose: geometry_msgs::msg::Pose,


    // This member is not documented.
    #[allow(missing_docs)]
    pub linear_velocity: geometry_msgs::msg::Vector3,


    // This member is not documented.
    #[allow(missing_docs)]
    pub angular_velocity: geometry_msgs::msg::Vector3,


    // This member is not documented.
    #[allow(missing_docs)]
    pub pose_fresh: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub navigation_synchronized: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub control_held: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub control_owner_label: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub control_epoch: u64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub task_id: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub ros_goal_uuid: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub task_status: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub task_status_text: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub request_id: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub task_device_label: std::string::String,


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
    pub path_revision: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub route: planning_msgs::msg::GlobalPath,


    // This member is not documented.
    #[allow(missing_docs)]
    pub error_code: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub error_message: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub sequence: Vec<super::msg::SequenceWaypoint>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub sequence_index: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub sequence_state: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub sequence_loop: bool,

}

impl NavigationState {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const IDLE: u8 = 0;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const ACCEPTED: u8 = 1;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const PLANNING: u8 = 2;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const EXECUTING: u8 = 3;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const CANCELING: u8 = 4;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const SUCCEEDED: u8 = 5;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const FAILED: u8 = 6;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const CANCELED: u8 = 7;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const REJECTED: u8 = 8;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const CANCEL_FAILED: u8 = 9;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const UNKNOWN: u8 = 10;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const STOPPING: u8 = 11;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const WAITING: u8 = 12;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const PAUSED: u8 = 13;

}


impl Default for NavigationState {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::NavigationState::default())
  }
}

impl rosidl_runtime_rs::Message for NavigationState {
  type RmwMsg = super::msg::rmw::NavigationState;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        manager_boot_id: msg.manager_boot_id.as_str().into(),
        state_revision: msg.state_revision,
        map_ready: msg.map_ready,
        map_version: msg.map_version.as_str().into(),
        map_name: msg.map_name.as_str().into(),
        frame_id: msg.frame_id.as_str().into(),
        vehicle_pose: geometry_msgs::msg::Pose::into_rmw_message(std::borrow::Cow::Owned(msg.vehicle_pose)).into_owned(),
        linear_velocity: geometry_msgs::msg::Vector3::into_rmw_message(std::borrow::Cow::Owned(msg.linear_velocity)).into_owned(),
        angular_velocity: geometry_msgs::msg::Vector3::into_rmw_message(std::borrow::Cow::Owned(msg.angular_velocity)).into_owned(),
        pose_fresh: msg.pose_fresh,
        navigation_synchronized: msg.navigation_synchronized,
        control_held: msg.control_held,
        control_owner_label: msg.control_owner_label.as_str().into(),
        control_epoch: msg.control_epoch,
        task_id: msg.task_id.as_str().into(),
        ros_goal_uuid: msg.ros_goal_uuid.as_str().into(),
        task_status: msg.task_status,
        task_status_text: msg.task_status_text.as_str().into(),
        request_id: msg.request_id.as_str().into(),
        task_device_label: msg.task_device_label.as_str().into(),
        requested_x: msg.requested_x,
        requested_y: msg.requested_y,
        effective_endpoint: geometry_msgs::msg::Pose::into_rmw_message(std::borrow::Cow::Owned(msg.effective_endpoint)).into_owned(),
        path_revision: msg.path_revision,
        route: planning_msgs::msg::GlobalPath::into_rmw_message(std::borrow::Cow::Owned(msg.route)).into_owned(),
        error_code: msg.error_code.as_str().into(),
        error_message: msg.error_message.as_str().into(),
        sequence: msg.sequence
          .into_iter()
          .map(|elem| super::msg::SequenceWaypoint::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
        sequence_index: msg.sequence_index,
        sequence_state: msg.sequence_state.as_str().into(),
        sequence_loop: msg.sequence_loop,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
        manager_boot_id: msg.manager_boot_id.as_str().into(),
      state_revision: msg.state_revision,
      map_ready: msg.map_ready,
        map_version: msg.map_version.as_str().into(),
        map_name: msg.map_name.as_str().into(),
        frame_id: msg.frame_id.as_str().into(),
        vehicle_pose: geometry_msgs::msg::Pose::into_rmw_message(std::borrow::Cow::Borrowed(&msg.vehicle_pose)).into_owned(),
        linear_velocity: geometry_msgs::msg::Vector3::into_rmw_message(std::borrow::Cow::Borrowed(&msg.linear_velocity)).into_owned(),
        angular_velocity: geometry_msgs::msg::Vector3::into_rmw_message(std::borrow::Cow::Borrowed(&msg.angular_velocity)).into_owned(),
      pose_fresh: msg.pose_fresh,
      navigation_synchronized: msg.navigation_synchronized,
      control_held: msg.control_held,
        control_owner_label: msg.control_owner_label.as_str().into(),
      control_epoch: msg.control_epoch,
        task_id: msg.task_id.as_str().into(),
        ros_goal_uuid: msg.ros_goal_uuid.as_str().into(),
      task_status: msg.task_status,
        task_status_text: msg.task_status_text.as_str().into(),
        request_id: msg.request_id.as_str().into(),
        task_device_label: msg.task_device_label.as_str().into(),
      requested_x: msg.requested_x,
      requested_y: msg.requested_y,
        effective_endpoint: geometry_msgs::msg::Pose::into_rmw_message(std::borrow::Cow::Borrowed(&msg.effective_endpoint)).into_owned(),
      path_revision: msg.path_revision,
        route: planning_msgs::msg::GlobalPath::into_rmw_message(std::borrow::Cow::Borrowed(&msg.route)).into_owned(),
        error_code: msg.error_code.as_str().into(),
        error_message: msg.error_message.as_str().into(),
        sequence: msg.sequence
          .iter()
          .map(|elem| super::msg::SequenceWaypoint::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
      sequence_index: msg.sequence_index,
        sequence_state: msg.sequence_state.as_str().into(),
      sequence_loop: msg.sequence_loop,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      manager_boot_id: msg.manager_boot_id.to_string(),
      state_revision: msg.state_revision,
      map_ready: msg.map_ready,
      map_version: msg.map_version.to_string(),
      map_name: msg.map_name.to_string(),
      frame_id: msg.frame_id.to_string(),
      vehicle_pose: geometry_msgs::msg::Pose::from_rmw_message(msg.vehicle_pose),
      linear_velocity: geometry_msgs::msg::Vector3::from_rmw_message(msg.linear_velocity),
      angular_velocity: geometry_msgs::msg::Vector3::from_rmw_message(msg.angular_velocity),
      pose_fresh: msg.pose_fresh,
      navigation_synchronized: msg.navigation_synchronized,
      control_held: msg.control_held,
      control_owner_label: msg.control_owner_label.to_string(),
      control_epoch: msg.control_epoch,
      task_id: msg.task_id.to_string(),
      ros_goal_uuid: msg.ros_goal_uuid.to_string(),
      task_status: msg.task_status,
      task_status_text: msg.task_status_text.to_string(),
      request_id: msg.request_id.to_string(),
      task_device_label: msg.task_device_label.to_string(),
      requested_x: msg.requested_x,
      requested_y: msg.requested_y,
      effective_endpoint: geometry_msgs::msg::Pose::from_rmw_message(msg.effective_endpoint),
      path_revision: msg.path_revision,
      route: planning_msgs::msg::GlobalPath::from_rmw_message(msg.route),
      error_code: msg.error_code.to_string(),
      error_message: msg.error_message.to_string(),
      sequence: msg.sequence
          .into_iter()
          .map(super::msg::SequenceWaypoint::from_rmw_message)
          .collect(),
      sequence_index: msg.sequence_index,
      sequence_state: msg.sequence_state.to_string(),
      sequence_loop: msg.sequence_loop,
    }
  }
}


// Corresponds to web_navigation_msgs__msg__RvizGoalFeedback

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct RvizGoalFeedback {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub manager_boot_id: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub status: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub request_id: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub task_id: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub code: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub staged_waypoints: u32,

}

impl RvizGoalFeedback {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const STAGED: u8 = 0;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const ACCEPTED: u8 = 1;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const REJECTED: u8 = 2;

}


impl Default for RvizGoalFeedback {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::RvizGoalFeedback::default())
  }
}

impl rosidl_runtime_rs::Message for RvizGoalFeedback {
  type RmwMsg = super::msg::rmw::RvizGoalFeedback;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        manager_boot_id: msg.manager_boot_id.as_str().into(),
        status: msg.status,
        request_id: msg.request_id.as_str().into(),
        task_id: msg.task_id.as_str().into(),
        code: msg.code.as_str().into(),
        message: msg.message.as_str().into(),
        staged_waypoints: msg.staged_waypoints,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
        manager_boot_id: msg.manager_boot_id.as_str().into(),
      status: msg.status,
        request_id: msg.request_id.as_str().into(),
        task_id: msg.task_id.as_str().into(),
        code: msg.code.as_str().into(),
        message: msg.message.as_str().into(),
      staged_waypoints: msg.staged_waypoints,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      manager_boot_id: msg.manager_boot_id.to_string(),
      status: msg.status,
      request_id: msg.request_id.to_string(),
      task_id: msg.task_id.to_string(),
      code: msg.code.to_string(),
      message: msg.message.to_string(),
      staged_waypoints: msg.staged_waypoints,
    }
  }
}


// Corresponds to web_navigation_msgs__msg__PlanningEvent

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct PlanningEvent {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,


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


    // This member is not documented.
    #[allow(missing_docs)]
    pub status: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub path_revision: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub effective_endpoint: geometry_msgs::msg::Pose,


    // This member is not documented.
    #[allow(missing_docs)]
    pub error_code: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub error_message: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub path: planning_msgs::msg::GlobalPath,

}

impl PlanningEvent {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const STARTED: u8 = 0;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const SUCCEEDED: u8 = 1;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const FAILED: u8 = 2;

}


impl Default for PlanningEvent {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::PlanningEvent::default())
  }
}

impl rosidl_runtime_rs::Message for PlanningEvent {
  type RmwMsg = super::msg::rmw::PlanningEvent;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        task_id: msg.task_id.as_str().into(),
        ros_goal_uuid: msg.ros_goal_uuid.as_str().into(),
        map_version: msg.map_version.as_str().into(),
        planning_attempt_id: msg.planning_attempt_id.as_str().into(),
        status: msg.status,
        path_revision: msg.path_revision,
        effective_endpoint: geometry_msgs::msg::Pose::into_rmw_message(std::borrow::Cow::Owned(msg.effective_endpoint)).into_owned(),
        error_code: msg.error_code.as_str().into(),
        error_message: msg.error_message.as_str().into(),
        path: planning_msgs::msg::GlobalPath::into_rmw_message(std::borrow::Cow::Owned(msg.path)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
        task_id: msg.task_id.as_str().into(),
        ros_goal_uuid: msg.ros_goal_uuid.as_str().into(),
        map_version: msg.map_version.as_str().into(),
        planning_attempt_id: msg.planning_attempt_id.as_str().into(),
      status: msg.status,
      path_revision: msg.path_revision,
        effective_endpoint: geometry_msgs::msg::Pose::into_rmw_message(std::borrow::Cow::Borrowed(&msg.effective_endpoint)).into_owned(),
        error_code: msg.error_code.as_str().into(),
        error_message: msg.error_message.as_str().into(),
        path: planning_msgs::msg::GlobalPath::into_rmw_message(std::borrow::Cow::Borrowed(&msg.path)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      task_id: msg.task_id.to_string(),
      ros_goal_uuid: msg.ros_goal_uuid.to_string(),
      map_version: msg.map_version.to_string(),
      planning_attempt_id: msg.planning_attempt_id.to_string(),
      status: msg.status,
      path_revision: msg.path_revision,
      effective_endpoint: geometry_msgs::msg::Pose::from_rmw_message(msg.effective_endpoint),
      error_code: msg.error_code.to_string(),
      error_message: msg.error_message.to_string(),
      path: planning_msgs::msg::GlobalPath::from_rmw_message(msg.path),
    }
  }
}


// Corresponds to web_navigation_msgs__msg__NavigationExecution
/// One active goal in the navigator's atomic execution snapshot.

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct NavigationExecution {

    // This member is not documented.
    #[allow(missing_docs)]
    pub ros_goal_uuid: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub task_id: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub map_version: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub status: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub goals: Vec<geometry_msgs::msg::PoseStamped>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub endpoint: geometry_msgs::msg::PoseStamped,

}



impl Default for NavigationExecution {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::NavigationExecution::default())
  }
}

impl rosidl_runtime_rs::Message for NavigationExecution {
  type RmwMsg = super::msg::rmw::NavigationExecution;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        ros_goal_uuid: msg.ros_goal_uuid.as_str().into(),
        task_id: msg.task_id.as_str().into(),
        map_version: msg.map_version.as_str().into(),
        status: msg.status,
        goals: msg.goals
          .into_iter()
          .map(|elem| geometry_msgs::msg::PoseStamped::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
        endpoint: geometry_msgs::msg::PoseStamped::into_rmw_message(std::borrow::Cow::Owned(msg.endpoint)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        ros_goal_uuid: msg.ros_goal_uuid.as_str().into(),
        task_id: msg.task_id.as_str().into(),
        map_version: msg.map_version.as_str().into(),
      status: msg.status,
        goals: msg.goals
          .iter()
          .map(|elem| geometry_msgs::msg::PoseStamped::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
        endpoint: geometry_msgs::msg::PoseStamped::into_rmw_message(std::borrow::Cow::Borrowed(&msg.endpoint)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      ros_goal_uuid: msg.ros_goal_uuid.to_string(),
      task_id: msg.task_id.to_string(),
      map_version: msg.map_version.to_string(),
      status: msg.status,
      goals: msg.goals
          .into_iter()
          .map(geometry_msgs::msg::PoseStamped::from_rmw_message)
          .collect(),
      endpoint: geometry_msgs::msg::PoseStamped::from_rmw_message(msg.endpoint),
    }
  }
}


