#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



// Corresponds to planning_msgs__msg__Path
/// Contains a PathPoint path and left and right bound.

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Path {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub points: Vec<super::msg::PathPoint>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub left_bound: Vec<geometry_msgs::msg::Point>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub right_bound: Vec<geometry_msgs::msg::Point>,

}



impl Default for Path {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::Path::default())
  }
}

impl rosidl_runtime_rs::Message for Path {
  type RmwMsg = super::msg::rmw::Path;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        points: msg.points
          .into_iter()
          .map(|elem| super::msg::PathPoint::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
        left_bound: msg.left_bound
          .into_iter()
          .map(|elem| geometry_msgs::msg::Point::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
        right_bound: msg.right_bound
          .into_iter()
          .map(|elem| geometry_msgs::msg::Point::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
        points: msg.points
          .iter()
          .map(|elem| super::msg::PathPoint::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
        left_bound: msg.left_bound
          .iter()
          .map(|elem| geometry_msgs::msg::Point::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
        right_bound: msg.right_bound
          .iter()
          .map(|elem| geometry_msgs::msg::Point::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      points: msg.points
          .into_iter()
          .map(super::msg::PathPoint::from_rmw_message)
          .collect(),
      left_bound: msg.left_bound
          .into_iter()
          .map(geometry_msgs::msg::Point::from_rmw_message)
          .collect(),
      right_bound: msg.right_bound
          .into_iter()
          .map(geometry_msgs::msg::Point::from_rmw_message)
          .collect(),
    }
  }
}


// Corresponds to planning_msgs__msg__PathPoint
/// Represents a pose from a lanelet map, contains twist information.

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct PathPoint {

    // This member is not documented.
    #[allow(missing_docs)]
    pub pose: geometry_msgs::msg::Pose,


    // This member is not documented.
    #[allow(missing_docs)]
    pub longitudinal_velocity_mps: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub lateral_velocity_mps: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub heading_rate_rps: f32,

    /// Denotes that the point is final, doesn't need further updates.
    pub is_final: bool,

}



impl Default for PathPoint {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::PathPoint::default())
  }
}

impl rosidl_runtime_rs::Message for PathPoint {
  type RmwMsg = super::msg::rmw::PathPoint;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        pose: geometry_msgs::msg::Pose::into_rmw_message(std::borrow::Cow::Owned(msg.pose)).into_owned(),
        longitudinal_velocity_mps: msg.longitudinal_velocity_mps,
        lateral_velocity_mps: msg.lateral_velocity_mps,
        heading_rate_rps: msg.heading_rate_rps,
        is_final: msg.is_final,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        pose: geometry_msgs::msg::Pose::into_rmw_message(std::borrow::Cow::Borrowed(&msg.pose)).into_owned(),
      longitudinal_velocity_mps: msg.longitudinal_velocity_mps,
      lateral_velocity_mps: msg.lateral_velocity_mps,
      heading_rate_rps: msg.heading_rate_rps,
      is_final: msg.is_final,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      pose: geometry_msgs::msg::Pose::from_rmw_message(msg.pose),
      longitudinal_velocity_mps: msg.longitudinal_velocity_mps,
      lateral_velocity_mps: msg.lateral_velocity_mps,
      heading_rate_rps: msg.heading_rate_rps,
      is_final: msg.is_final,
    }
  }
}


// Corresponds to planning_msgs__msg__PathWithLaneId
/// Contains a PathPointWithLaneId path and left and right bound.

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct PathWithLaneId {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub points: Vec<super::msg::PathPointWithLaneId>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub left_bound: Vec<geometry_msgs::msg::Point>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub right_bound: Vec<geometry_msgs::msg::Point>,

}



impl Default for PathWithLaneId {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::PathWithLaneId::default())
  }
}

impl rosidl_runtime_rs::Message for PathWithLaneId {
  type RmwMsg = super::msg::rmw::PathWithLaneId;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        points: msg.points
          .into_iter()
          .map(|elem| super::msg::PathPointWithLaneId::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
        left_bound: msg.left_bound
          .into_iter()
          .map(|elem| geometry_msgs::msg::Point::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
        right_bound: msg.right_bound
          .into_iter()
          .map(|elem| geometry_msgs::msg::Point::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
        points: msg.points
          .iter()
          .map(|elem| super::msg::PathPointWithLaneId::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
        left_bound: msg.left_bound
          .iter()
          .map(|elem| geometry_msgs::msg::Point::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
        right_bound: msg.right_bound
          .iter()
          .map(|elem| geometry_msgs::msg::Point::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      points: msg.points
          .into_iter()
          .map(super::msg::PathPointWithLaneId::from_rmw_message)
          .collect(),
      left_bound: msg.left_bound
          .into_iter()
          .map(geometry_msgs::msg::Point::from_rmw_message)
          .collect(),
      right_bound: msg.right_bound
          .into_iter()
          .map(geometry_msgs::msg::Point::from_rmw_message)
          .collect(),
    }
  }
}


// Corresponds to planning_msgs__msg__PathPointWithLaneId
/// Contains a PathPoint and lanelet lane_id information.

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct PathPointWithLaneId {

    // This member is not documented.
    #[allow(missing_docs)]
    pub point: super::msg::PathPoint,

    /// Lanelet lane_id information.
    pub lane_ids: Vec<i64>,

}



impl Default for PathPointWithLaneId {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::PathPointWithLaneId::default())
  }
}

impl rosidl_runtime_rs::Message for PathPointWithLaneId {
  type RmwMsg = super::msg::rmw::PathPointWithLaneId;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        point: super::msg::PathPoint::into_rmw_message(std::borrow::Cow::Owned(msg.point)).into_owned(),
        lane_ids: msg.lane_ids.into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        point: super::msg::PathPoint::into_rmw_message(std::borrow::Cow::Borrowed(&msg.point)).into_owned(),
        lane_ids: msg.lane_ids.as_slice().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      point: super::msg::PathPoint::from_rmw_message(msg.point),
      lane_ids: msg.lane_ids
          .into_iter()
          .collect(),
    }
  }
}


// Corresponds to planning_msgs__msg__Trajectory

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Trajectory {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub start_time: builtin_interfaces::msg::Time,


    // This member is not documented.
    #[allow(missing_docs)]
    pub waypoints: Vec<super::msg::Waypoint>,

}



impl Default for Trajectory {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::Trajectory::default())
  }
}

impl rosidl_runtime_rs::Message for Trajectory {
  type RmwMsg = super::msg::rmw::Trajectory;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        start_time: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Owned(msg.start_time)).into_owned(),
        waypoints: msg.waypoints
          .into_iter()
          .map(|elem| super::msg::Waypoint::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
        start_time: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Borrowed(&msg.start_time)).into_owned(),
        waypoints: msg.waypoints
          .iter()
          .map(|elem| super::msg::Waypoint::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      start_time: builtin_interfaces::msg::Time::from_rmw_message(msg.start_time),
      waypoints: msg.waypoints
          .into_iter()
          .map(super::msg::Waypoint::from_rmw_message)
          .collect(),
    }
  }
}


// Corresponds to planning_msgs__msg__MincoTraj

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MincoTraj {

    // This member is not documented.
    #[allow(missing_docs)]
    pub start_time: builtin_interfaces::msg::Time,


    // This member is not documented.
    #[allow(missing_docs)]
    pub end_time: f64,

    /// if true, use the normal trajectory
    pub use_init: bool,

    /// target angle
    pub yaw: f64,

    /// minco trajectory
    pub head_x: geometry_msgs::msg::Vector3,


    // This member is not documented.
    #[allow(missing_docs)]
    pub head_y: geometry_msgs::msg::Vector3,


    // This member is not documented.
    #[allow(missing_docs)]
    pub tail_x: geometry_msgs::msg::Vector3,


    // This member is not documented.
    #[allow(missing_docs)]
    pub tail_y: geometry_msgs::msg::Vector3,


    // This member is not documented.
    #[allow(missing_docs)]
    pub t_pts: Vec<f64>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub pos_pts: Vec<geometry_msgs::msg::Point>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub yaw_pts: Vec<f64>,

    /// normal trajectory
    pub waypoints: Vec<super::msg::Waypoint>,

}



impl Default for MincoTraj {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::MincoTraj::default())
  }
}

impl rosidl_runtime_rs::Message for MincoTraj {
  type RmwMsg = super::msg::rmw::MincoTraj;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        start_time: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Owned(msg.start_time)).into_owned(),
        end_time: msg.end_time,
        use_init: msg.use_init,
        yaw: msg.yaw,
        head_x: geometry_msgs::msg::Vector3::into_rmw_message(std::borrow::Cow::Owned(msg.head_x)).into_owned(),
        head_y: geometry_msgs::msg::Vector3::into_rmw_message(std::borrow::Cow::Owned(msg.head_y)).into_owned(),
        tail_x: geometry_msgs::msg::Vector3::into_rmw_message(std::borrow::Cow::Owned(msg.tail_x)).into_owned(),
        tail_y: geometry_msgs::msg::Vector3::into_rmw_message(std::borrow::Cow::Owned(msg.tail_y)).into_owned(),
        t_pts: msg.t_pts.into(),
        pos_pts: msg.pos_pts
          .into_iter()
          .map(|elem| geometry_msgs::msg::Point::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
        yaw_pts: msg.yaw_pts.into(),
        waypoints: msg.waypoints
          .into_iter()
          .map(|elem| super::msg::Waypoint::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        start_time: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Borrowed(&msg.start_time)).into_owned(),
      end_time: msg.end_time,
      use_init: msg.use_init,
      yaw: msg.yaw,
        head_x: geometry_msgs::msg::Vector3::into_rmw_message(std::borrow::Cow::Borrowed(&msg.head_x)).into_owned(),
        head_y: geometry_msgs::msg::Vector3::into_rmw_message(std::borrow::Cow::Borrowed(&msg.head_y)).into_owned(),
        tail_x: geometry_msgs::msg::Vector3::into_rmw_message(std::borrow::Cow::Borrowed(&msg.tail_x)).into_owned(),
        tail_y: geometry_msgs::msg::Vector3::into_rmw_message(std::borrow::Cow::Borrowed(&msg.tail_y)).into_owned(),
        t_pts: msg.t_pts.as_slice().into(),
        pos_pts: msg.pos_pts
          .iter()
          .map(|elem| geometry_msgs::msg::Point::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
        yaw_pts: msg.yaw_pts.as_slice().into(),
        waypoints: msg.waypoints
          .iter()
          .map(|elem| super::msg::Waypoint::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      start_time: builtin_interfaces::msg::Time::from_rmw_message(msg.start_time),
      end_time: msg.end_time,
      use_init: msg.use_init,
      yaw: msg.yaw,
      head_x: geometry_msgs::msg::Vector3::from_rmw_message(msg.head_x),
      head_y: geometry_msgs::msg::Vector3::from_rmw_message(msg.head_y),
      tail_x: geometry_msgs::msg::Vector3::from_rmw_message(msg.tail_x),
      tail_y: geometry_msgs::msg::Vector3::from_rmw_message(msg.tail_y),
      t_pts: msg.t_pts
          .into_iter()
          .collect(),
      pos_pts: msg.pos_pts
          .into_iter()
          .map(geometry_msgs::msg::Point::from_rmw_message)
          .collect(),
      yaw_pts: msg.yaw_pts
          .into_iter()
          .collect(),
      waypoints: msg.waypoints
          .into_iter()
          .map(super::msg::Waypoint::from_rmw_message)
          .collect(),
    }
  }
}


// Corresponds to planning_msgs__msg__Waypoint

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Waypoint {

    // This member is not documented.
    #[allow(missing_docs)]
    pub point: geometry_msgs::msg::Point,


    // This member is not documented.
    #[allow(missing_docs)]
    pub time: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub s: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub theta: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub kappa: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub dkappa: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub ddkappa: f32,

    /// velocity
    pub v: f32,

    /// acceleration
    pub a: f32,

    /// jerk
    pub j: f32,

    /// angular velocity
    pub w: f32,

}



impl Default for Waypoint {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::Waypoint::default())
  }
}

impl rosidl_runtime_rs::Message for Waypoint {
  type RmwMsg = super::msg::rmw::Waypoint;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        point: geometry_msgs::msg::Point::into_rmw_message(std::borrow::Cow::Owned(msg.point)).into_owned(),
        time: msg.time,
        s: msg.s,
        theta: msg.theta,
        kappa: msg.kappa,
        dkappa: msg.dkappa,
        ddkappa: msg.ddkappa,
        v: msg.v,
        a: msg.a,
        j: msg.j,
        w: msg.w,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        point: geometry_msgs::msg::Point::into_rmw_message(std::borrow::Cow::Borrowed(&msg.point)).into_owned(),
      time: msg.time,
      s: msg.s,
      theta: msg.theta,
      kappa: msg.kappa,
      dkappa: msg.dkappa,
      ddkappa: msg.ddkappa,
      v: msg.v,
      a: msg.a,
      j: msg.j,
      w: msg.w,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      point: geometry_msgs::msg::Point::from_rmw_message(msg.point),
      time: msg.time,
      s: msg.s,
      theta: msg.theta,
      kappa: msg.kappa,
      dkappa: msg.dkappa,
      ddkappa: msg.ddkappa,
      v: msg.v,
      a: msg.a,
      j: msg.j,
      w: msg.w,
    }
  }
}


// Corresponds to planning_msgs__msg__LaneletPrimitive

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct LaneletPrimitive {

    // This member is not documented.
    #[allow(missing_docs)]
    pub id: i64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub primitive_type: std::string::String,

}



impl Default for LaneletPrimitive {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::LaneletPrimitive::default())
  }
}

impl rosidl_runtime_rs::Message for LaneletPrimitive {
  type RmwMsg = super::msg::rmw::LaneletPrimitive;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        id: msg.id,
        primitive_type: msg.primitive_type.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      id: msg.id,
        primitive_type: msg.primitive_type.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      id: msg.id,
      primitive_type: msg.primitive_type.to_string(),
    }
  }
}


// Corresponds to planning_msgs__msg__LaneletRoute

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct LaneletRoute {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub start_pose: geometry_msgs::msg::Pose,


    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_pose: geometry_msgs::msg::Pose,


    // This member is not documented.
    #[allow(missing_docs)]
    pub segments: Vec<super::msg::LaneletSegment>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub uuid: unique_identifier_msgs::msg::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub allow_modification: bool,

}



impl Default for LaneletRoute {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::LaneletRoute::default())
  }
}

impl rosidl_runtime_rs::Message for LaneletRoute {
  type RmwMsg = super::msg::rmw::LaneletRoute;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        start_pose: geometry_msgs::msg::Pose::into_rmw_message(std::borrow::Cow::Owned(msg.start_pose)).into_owned(),
        goal_pose: geometry_msgs::msg::Pose::into_rmw_message(std::borrow::Cow::Owned(msg.goal_pose)).into_owned(),
        segments: msg.segments
          .into_iter()
          .map(|elem| super::msg::LaneletSegment::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
        uuid: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Owned(msg.uuid)).into_owned(),
        allow_modification: msg.allow_modification,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
        start_pose: geometry_msgs::msg::Pose::into_rmw_message(std::borrow::Cow::Borrowed(&msg.start_pose)).into_owned(),
        goal_pose: geometry_msgs::msg::Pose::into_rmw_message(std::borrow::Cow::Borrowed(&msg.goal_pose)).into_owned(),
        segments: msg.segments
          .iter()
          .map(|elem| super::msg::LaneletSegment::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
        uuid: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Borrowed(&msg.uuid)).into_owned(),
      allow_modification: msg.allow_modification,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      start_pose: geometry_msgs::msg::Pose::from_rmw_message(msg.start_pose),
      goal_pose: geometry_msgs::msg::Pose::from_rmw_message(msg.goal_pose),
      segments: msg.segments
          .into_iter()
          .map(super::msg::LaneletSegment::from_rmw_message)
          .collect(),
      uuid: unique_identifier_msgs::msg::UUID::from_rmw_message(msg.uuid),
      allow_modification: msg.allow_modification,
    }
  }
}


// Corresponds to planning_msgs__msg__LaneletSegment

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct LaneletSegment {

    // This member is not documented.
    #[allow(missing_docs)]
    pub preferred_primitive: super::msg::LaneletPrimitive,


    // This member is not documented.
    #[allow(missing_docs)]
    pub primitives: Vec<super::msg::LaneletPrimitive>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub left_bound: super::msg::LaneletPrimitive,


    // This member is not documented.
    #[allow(missing_docs)]
    pub right_bound: super::msg::LaneletPrimitive,


    // This member is not documented.
    #[allow(missing_docs)]
    pub is_inverted: bool,

}



impl Default for LaneletSegment {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::LaneletSegment::default())
  }
}

impl rosidl_runtime_rs::Message for LaneletSegment {
  type RmwMsg = super::msg::rmw::LaneletSegment;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        preferred_primitive: super::msg::LaneletPrimitive::into_rmw_message(std::borrow::Cow::Owned(msg.preferred_primitive)).into_owned(),
        primitives: msg.primitives
          .into_iter()
          .map(|elem| super::msg::LaneletPrimitive::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
        left_bound: super::msg::LaneletPrimitive::into_rmw_message(std::borrow::Cow::Owned(msg.left_bound)).into_owned(),
        right_bound: super::msg::LaneletPrimitive::into_rmw_message(std::borrow::Cow::Owned(msg.right_bound)).into_owned(),
        is_inverted: msg.is_inverted,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        preferred_primitive: super::msg::LaneletPrimitive::into_rmw_message(std::borrow::Cow::Borrowed(&msg.preferred_primitive)).into_owned(),
        primitives: msg.primitives
          .iter()
          .map(|elem| super::msg::LaneletPrimitive::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
        left_bound: super::msg::LaneletPrimitive::into_rmw_message(std::borrow::Cow::Borrowed(&msg.left_bound)).into_owned(),
        right_bound: super::msg::LaneletPrimitive::into_rmw_message(std::borrow::Cow::Borrowed(&msg.right_bound)).into_owned(),
      is_inverted: msg.is_inverted,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      preferred_primitive: super::msg::LaneletPrimitive::from_rmw_message(msg.preferred_primitive),
      primitives: msg.primitives
          .into_iter()
          .map(super::msg::LaneletPrimitive::from_rmw_message)
          .collect(),
      left_bound: super::msg::LaneletPrimitive::from_rmw_message(msg.left_bound),
      right_bound: super::msg::LaneletPrimitive::from_rmw_message(msg.right_bound),
      is_inverted: msg.is_inverted,
    }
  }
}


// Corresponds to planning_msgs__msg__GlobalPath

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GlobalPath {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub main_trajectory: super::msg::Trajectory,


    // This member is not documented.
    #[allow(missing_docs)]
    pub left_bound: Vec<geometry_msgs::msg::Point>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub right_bound: Vec<geometry_msgs::msg::Point>,

    /// Path progress (metres from the first trajectory waypoint) for each boundary point.
    /// These keep each boundary point attached to its position along the route.
    pub left_bound_s: Vec<f64>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub right_bound_s: Vec<f64>,

    /// Ordered intermediate endpoints that must be reached before the final goal.
    pub checkpoint_indices: Vec<u32>,

    /// Repeat the closed suffix beginning at loop_start_index without ending FollowPath.
    pub loop_: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub loop_start_index: u32,

    /// Bounds are resampled independently; their cycle offsets are not waypoint indices.
    pub loop_left_bound_start_index: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub loop_right_bound_start_index: u32,

}



impl Default for GlobalPath {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::GlobalPath::default())
  }
}

impl rosidl_runtime_rs::Message for GlobalPath {
  type RmwMsg = super::msg::rmw::GlobalPath;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        main_trajectory: super::msg::Trajectory::into_rmw_message(std::borrow::Cow::Owned(msg.main_trajectory)).into_owned(),
        left_bound: msg.left_bound
          .into_iter()
          .map(|elem| geometry_msgs::msg::Point::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
        right_bound: msg.right_bound
          .into_iter()
          .map(|elem| geometry_msgs::msg::Point::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
        left_bound_s: msg.left_bound_s.into(),
        right_bound_s: msg.right_bound_s.into(),
        checkpoint_indices: msg.checkpoint_indices.into(),
        loop_: msg.loop_,
        loop_start_index: msg.loop_start_index,
        loop_left_bound_start_index: msg.loop_left_bound_start_index,
        loop_right_bound_start_index: msg.loop_right_bound_start_index,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
        main_trajectory: super::msg::Trajectory::into_rmw_message(std::borrow::Cow::Borrowed(&msg.main_trajectory)).into_owned(),
        left_bound: msg.left_bound
          .iter()
          .map(|elem| geometry_msgs::msg::Point::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
        right_bound: msg.right_bound
          .iter()
          .map(|elem| geometry_msgs::msg::Point::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
        left_bound_s: msg.left_bound_s.as_slice().into(),
        right_bound_s: msg.right_bound_s.as_slice().into(),
        checkpoint_indices: msg.checkpoint_indices.as_slice().into(),
      loop_: msg.loop_,
      loop_start_index: msg.loop_start_index,
      loop_left_bound_start_index: msg.loop_left_bound_start_index,
      loop_right_bound_start_index: msg.loop_right_bound_start_index,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      main_trajectory: super::msg::Trajectory::from_rmw_message(msg.main_trajectory),
      left_bound: msg.left_bound
          .into_iter()
          .map(geometry_msgs::msg::Point::from_rmw_message)
          .collect(),
      right_bound: msg.right_bound
          .into_iter()
          .map(geometry_msgs::msg::Point::from_rmw_message)
          .collect(),
      left_bound_s: msg.left_bound_s
          .into_iter()
          .collect(),
      right_bound_s: msg.right_bound_s
          .into_iter()
          .collect(),
      checkpoint_indices: msg.checkpoint_indices
          .into_iter()
          .collect(),
      loop_: msg.loop_,
      loop_start_index: msg.loop_start_index,
      loop_left_bound_start_index: msg.loop_left_bound_start_index,
      loop_right_bound_start_index: msg.loop_right_bound_start_index,
    }
  }
}


