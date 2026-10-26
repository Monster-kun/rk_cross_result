#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



// Corresponds to se2_grid_msgs__msg__SE2GridInfo

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SE2GridInfo {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,

    /// Resolution of the grid in position.
    pub pos_resolution: f64,

    /// Resolution of the grid in yaw.
    pub yaw_resolution: f64,

    /// Length in x-direction.
    pub length_x: f64,

    /// Length in y-direction.
    pub length_y: f64,

    /// Length in yaw-direction.
    pub length_yaw: f64,

    /// Pose of the se2 grid center in the frame defined in `header`.
    pub pose: geometry_msgs::msg::Pose,

}



impl Default for SE2GridInfo {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::SE2GridInfo::default())
  }
}

impl rosidl_runtime_rs::Message for SE2GridInfo {
  type RmwMsg = super::msg::rmw::SE2GridInfo;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        pos_resolution: msg.pos_resolution,
        yaw_resolution: msg.yaw_resolution,
        length_x: msg.length_x,
        length_y: msg.length_y,
        length_yaw: msg.length_yaw,
        pose: geometry_msgs::msg::Pose::into_rmw_message(std::borrow::Cow::Owned(msg.pose)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
      pos_resolution: msg.pos_resolution,
      yaw_resolution: msg.yaw_resolution,
      length_x: msg.length_x,
      length_y: msg.length_y,
      length_yaw: msg.length_yaw,
        pose: geometry_msgs::msg::Pose::into_rmw_message(std::borrow::Cow::Borrowed(&msg.pose)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      pos_resolution: msg.pos_resolution,
      yaw_resolution: msg.yaw_resolution,
      length_x: msg.length_x,
      length_y: msg.length_y,
      length_yaw: msg.length_yaw,
      pose: geometry_msgs::msg::Pose::from_rmw_message(msg.pose),
    }
  }
}


// Corresponds to se2_grid_msgs__msg__SE2Grid

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SE2Grid {

    // This member is not documented.
    #[allow(missing_docs)]
    pub info: super::msg::SE2GridInfo,

    /// layer names.
    pub layers: Vec<std::string::String>,

    /// if has SO(2) info.
    pub has_so2: Vec<bool>,

    /// Grid map data.
    pub data: Vec<std_msgs::msg::Float32MultiArray>,

    /// Row start index (default 0).
    pub start_index_row: u16,

    /// Column start index (default 0).
    pub start_index_col: u16,

}



impl Default for SE2Grid {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::SE2Grid::default())
  }
}

impl rosidl_runtime_rs::Message for SE2Grid {
  type RmwMsg = super::msg::rmw::SE2Grid;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        info: super::msg::SE2GridInfo::into_rmw_message(std::borrow::Cow::Owned(msg.info)).into_owned(),
        layers: msg.layers
          .into_iter()
          .map(|elem| elem.as_str().into())
          .collect(),
        has_so2: msg.has_so2.into(),
        data: msg.data
          .into_iter()
          .map(|elem| std_msgs::msg::Float32MultiArray::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
        start_index_row: msg.start_index_row,
        start_index_col: msg.start_index_col,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        info: super::msg::SE2GridInfo::into_rmw_message(std::borrow::Cow::Borrowed(&msg.info)).into_owned(),
        layers: msg.layers
          .iter()
          .map(|elem| elem.as_str().into())
          .collect(),
        has_so2: msg.has_so2.as_slice().into(),
        data: msg.data
          .iter()
          .map(|elem| std_msgs::msg::Float32MultiArray::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
      start_index_row: msg.start_index_row,
      start_index_col: msg.start_index_col,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      info: super::msg::SE2GridInfo::from_rmw_message(msg.info),
      layers: msg.layers
          .into_iter()
          .map(|elem| elem.to_string())
          .collect(),
      has_so2: msg.has_so2
          .into_iter()
          .collect(),
      data: msg.data
          .into_iter()
          .map(std_msgs::msg::Float32MultiArray::from_rmw_message)
          .collect(),
      start_index_row: msg.start_index_row,
      start_index_col: msg.start_index_col,
    }
  }
}


