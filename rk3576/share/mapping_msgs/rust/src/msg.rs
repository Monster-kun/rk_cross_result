#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



// Corresponds to mapping_msgs__msg__HADMapBin
/// HADMap contents in binary blob format

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct HADMapBin {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,

    /// HADMap format identifier, allows supporting multiple map formats
    pub map_format: u8,

    /// Version of map format. Keep as empty string if unnecssary
    pub format_version: std::string::String,

    /// Version of map. Keep as empty empty if unnecessary
    pub map_version: std::string::String,

    /// Stable deployment map name; content revisions retain this name
    pub map_name: std::string::String,

    /// Binary map data
    pub data: Vec<u8>,

}

impl HADMapBin {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const MAP_FORMAT_LANELET2: u8 = 0;

}


impl Default for HADMapBin {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::HADMapBin::default())
  }
}

impl rosidl_runtime_rs::Message for HADMapBin {
  type RmwMsg = super::msg::rmw::HADMapBin;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        map_format: msg.map_format,
        format_version: msg.format_version.as_str().into(),
        map_version: msg.map_version.as_str().into(),
        map_name: msg.map_name.as_str().into(),
        data: msg.data.into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
      map_format: msg.map_format,
        format_version: msg.format_version.as_str().into(),
        map_version: msg.map_version.as_str().into(),
        map_name: msg.map_name.as_str().into(),
        data: msg.data.as_slice().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      map_format: msg.map_format,
      format_version: msg.format_version.to_string(),
      map_version: msg.map_version.to_string(),
      map_name: msg.map_name.to_string(),
      data: msg.data
          .into_iter()
          .collect(),
    }
  }
}


// Corresponds to mapping_msgs__msg__HADMapSegment
///  A segment of an HADMap which contains one or more MapPrimitives.

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct HADMapSegment {

    // This member is not documented.
    #[allow(missing_docs)]
    pub primitives: Vec<super::msg::MapPrimitive>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub preferred_primitive_id: i64,

}



impl Default for HADMapSegment {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::HADMapSegment::default())
  }
}

impl rosidl_runtime_rs::Message for HADMapSegment {
  type RmwMsg = super::msg::rmw::HADMapSegment;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        primitives: msg.primitives
          .into_iter()
          .map(|elem| super::msg::MapPrimitive::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
        preferred_primitive_id: msg.preferred_primitive_id,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        primitives: msg.primitives
          .iter()
          .map(|elem| super::msg::MapPrimitive::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
      preferred_primitive_id: msg.preferred_primitive_id,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      primitives: msg.primitives
          .into_iter()
          .map(super::msg::MapPrimitive::from_rmw_message)
          .collect(),
      preferred_primitive_id: msg.preferred_primitive_id,
    }
  }
}


// Corresponds to mapping_msgs__msg__MapPrimitive
/// Map primitive information

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MapPrimitive {

    // This member is not documented.
    #[allow(missing_docs)]
    pub id: i64,

    /// Type of primitive, such as lane, polygon, line.
    pub primitive_type: std::string::String,

}



impl Default for MapPrimitive {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::MapPrimitive::default())
  }
}

impl rosidl_runtime_rs::Message for MapPrimitive {
  type RmwMsg = super::msg::rmw::MapPrimitive;

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


// Corresponds to mapping_msgs__msg__MapProjectorInfo
/// define map_projector_type
/// UTM, MGRS, local

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MapProjectorInfo {

    // This member is not documented.
    #[allow(missing_docs)]
    pub type_: std::string::String,

    /// Used for MGRS map
    pub mgrs_grid: std::string::String,

    /// Used for UTM map
    pub map_origin: geographic_msgs::msg::GeoPoint,

}



impl Default for MapProjectorInfo {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::MapProjectorInfo::default())
  }
}

impl rosidl_runtime_rs::Message for MapProjectorInfo {
  type RmwMsg = super::msg::rmw::MapProjectorInfo;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        type_: msg.type_.as_str().into(),
        mgrs_grid: msg.mgrs_grid.as_str().into(),
        map_origin: geographic_msgs::msg::GeoPoint::into_rmw_message(std::borrow::Cow::Owned(msg.map_origin)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        type_: msg.type_.as_str().into(),
        mgrs_grid: msg.mgrs_grid.as_str().into(),
        map_origin: geographic_msgs::msg::GeoPoint::into_rmw_message(std::borrow::Cow::Borrowed(&msg.map_origin)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      type_: msg.type_.to_string(),
      mgrs_grid: msg.mgrs_grid.to_string(),
      map_origin: geographic_msgs::msg::GeoPoint::from_rmw_message(msg.map_origin),
    }
  }
}


