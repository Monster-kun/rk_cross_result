#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



// Corresponds to people_msgs__msg__People

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct People {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub people: Vec<super::msg::Person>,

}



impl Default for People {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::People::default())
  }
}

impl rosidl_runtime_rs::Message for People {
  type RmwMsg = super::msg::rmw::People;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        people: msg.people
          .into_iter()
          .map(|elem| super::msg::Person::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
        people: msg.people
          .iter()
          .map(|elem| super::msg::Person::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      people: msg.people
          .into_iter()
          .map(super::msg::Person::from_rmw_message)
          .collect(),
    }
  }
}


// Corresponds to people_msgs__msg__Person

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Person {

    // This member is not documented.
    #[allow(missing_docs)]
    pub name: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub position: geometry_msgs::msg::Point,


    // This member is not documented.
    #[allow(missing_docs)]
    pub velocity: geometry_msgs::msg::Point,


    // This member is not documented.
    #[allow(missing_docs)]
    pub reliability: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub tagnames: Vec<std::string::String>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub tags: Vec<std::string::String>,

}



impl Default for Person {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::Person::default())
  }
}

impl rosidl_runtime_rs::Message for Person {
  type RmwMsg = super::msg::rmw::Person;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        name: msg.name.as_str().into(),
        position: geometry_msgs::msg::Point::into_rmw_message(std::borrow::Cow::Owned(msg.position)).into_owned(),
        velocity: geometry_msgs::msg::Point::into_rmw_message(std::borrow::Cow::Owned(msg.velocity)).into_owned(),
        reliability: msg.reliability,
        tagnames: msg.tagnames
          .into_iter()
          .map(|elem| elem.as_str().into())
          .collect(),
        tags: msg.tags
          .into_iter()
          .map(|elem| elem.as_str().into())
          .collect(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        name: msg.name.as_str().into(),
        position: geometry_msgs::msg::Point::into_rmw_message(std::borrow::Cow::Borrowed(&msg.position)).into_owned(),
        velocity: geometry_msgs::msg::Point::into_rmw_message(std::borrow::Cow::Borrowed(&msg.velocity)).into_owned(),
      reliability: msg.reliability,
        tagnames: msg.tagnames
          .iter()
          .map(|elem| elem.as_str().into())
          .collect(),
        tags: msg.tags
          .iter()
          .map(|elem| elem.as_str().into())
          .collect(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      name: msg.name.to_string(),
      position: geometry_msgs::msg::Point::from_rmw_message(msg.position),
      velocity: geometry_msgs::msg::Point::from_rmw_message(msg.velocity),
      reliability: msg.reliability,
      tagnames: msg.tagnames
          .into_iter()
          .map(|elem| elem.to_string())
          .collect(),
      tags: msg.tags
          .into_iter()
          .map(|elem| elem.to_string())
          .collect(),
    }
  }
}


// Corresponds to people_msgs__msg__PersonStamped

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct PersonStamped {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub person: super::msg::Person,

}



impl Default for PersonStamped {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::PersonStamped::default())
  }
}

impl rosidl_runtime_rs::Message for PersonStamped {
  type RmwMsg = super::msg::rmw::PersonStamped;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        person: super::msg::Person::into_rmw_message(std::borrow::Cow::Owned(msg.person)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
        person: super::msg::Person::into_rmw_message(std::borrow::Cow::Borrowed(&msg.person)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      person: super::msg::Person::from_rmw_message(msg.person),
    }
  }
}


// Corresponds to people_msgs__msg__PositionMeasurement

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct PositionMeasurement {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,

    /// The name of the detector that detected the person (i.e frontalface, profileface)
    pub name: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub object_id: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub pos: geometry_msgs::msg::Point,


    // This member is not documented.
    #[allow(missing_docs)]
    pub reliability: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub covariance: [f64; 9],


    // This member is not documented.
    #[allow(missing_docs)]
    pub initialization: u8,

}



impl Default for PositionMeasurement {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::PositionMeasurement::default())
  }
}

impl rosidl_runtime_rs::Message for PositionMeasurement {
  type RmwMsg = super::msg::rmw::PositionMeasurement;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        name: msg.name.as_str().into(),
        object_id: msg.object_id.as_str().into(),
        pos: geometry_msgs::msg::Point::into_rmw_message(std::borrow::Cow::Owned(msg.pos)).into_owned(),
        reliability: msg.reliability,
        covariance: msg.covariance,
        initialization: msg.initialization,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
        name: msg.name.as_str().into(),
        object_id: msg.object_id.as_str().into(),
        pos: geometry_msgs::msg::Point::into_rmw_message(std::borrow::Cow::Borrowed(&msg.pos)).into_owned(),
      reliability: msg.reliability,
        covariance: msg.covariance,
      initialization: msg.initialization,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      name: msg.name.to_string(),
      object_id: msg.object_id.to_string(),
      pos: geometry_msgs::msg::Point::from_rmw_message(msg.pos),
      reliability: msg.reliability,
      covariance: msg.covariance,
      initialization: msg.initialization,
    }
  }
}


// Corresponds to people_msgs__msg__PositionMeasurementArray

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct PositionMeasurementArray {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,

    /// All of the people found
    pub people: Vec<super::msg::PositionMeasurement>,

    /// The co-occurrence matrix between people
    pub cooccurrence: Vec<f32>,

}



impl Default for PositionMeasurementArray {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::PositionMeasurementArray::default())
  }
}

impl rosidl_runtime_rs::Message for PositionMeasurementArray {
  type RmwMsg = super::msg::rmw::PositionMeasurementArray;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        people: msg.people
          .into_iter()
          .map(|elem| super::msg::PositionMeasurement::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
        cooccurrence: msg.cooccurrence.into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
        people: msg.people
          .iter()
          .map(|elem| super::msg::PositionMeasurement::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
        cooccurrence: msg.cooccurrence.as_slice().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      people: msg.people
          .into_iter()
          .map(super::msg::PositionMeasurement::from_rmw_message)
          .collect(),
      cooccurrence: msg.cooccurrence
          .into_iter()
          .collect(),
    }
  }
}


