#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



// Corresponds to chassis_control_msgs__msg__Crsf

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Crsf {

    // This member is not documented.
    #[allow(missing_docs)]
    pub ch1: i16,


    // This member is not documented.
    #[allow(missing_docs)]
    pub ch2: i16,


    // This member is not documented.
    #[allow(missing_docs)]
    pub ch3: i16,


    // This member is not documented.
    #[allow(missing_docs)]
    pub ch4: i16,


    // This member is not documented.
    #[allow(missing_docs)]
    pub ch5: i16,


    // This member is not documented.
    #[allow(missing_docs)]
    pub ch6: i16,


    // This member is not documented.
    #[allow(missing_docs)]
    pub ch7: i16,


    // This member is not documented.
    #[allow(missing_docs)]
    pub ch8: i16,


    // This member is not documented.
    #[allow(missing_docs)]
    pub ch9: i16,


    // This member is not documented.
    #[allow(missing_docs)]
    pub ch10: i16,


    // This member is not documented.
    #[allow(missing_docs)]
    pub ch11: i16,


    // This member is not documented.
    #[allow(missing_docs)]
    pub ch12: i16,


    // This member is not documented.
    #[allow(missing_docs)]
    pub ch13: i16,


    // This member is not documented.
    #[allow(missing_docs)]
    pub ch14: i16,


    // This member is not documented.
    #[allow(missing_docs)]
    pub ch15: i16,


    // This member is not documented.
    #[allow(missing_docs)]
    pub ch16: i16,

}



impl Default for Crsf {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::Crsf::default())
  }
}

impl rosidl_runtime_rs::Message for Crsf {
  type RmwMsg = super::msg::rmw::Crsf;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        ch1: msg.ch1,
        ch2: msg.ch2,
        ch3: msg.ch3,
        ch4: msg.ch4,
        ch5: msg.ch5,
        ch6: msg.ch6,
        ch7: msg.ch7,
        ch8: msg.ch8,
        ch9: msg.ch9,
        ch10: msg.ch10,
        ch11: msg.ch11,
        ch12: msg.ch12,
        ch13: msg.ch13,
        ch14: msg.ch14,
        ch15: msg.ch15,
        ch16: msg.ch16,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      ch1: msg.ch1,
      ch2: msg.ch2,
      ch3: msg.ch3,
      ch4: msg.ch4,
      ch5: msg.ch5,
      ch6: msg.ch6,
      ch7: msg.ch7,
      ch8: msg.ch8,
      ch9: msg.ch9,
      ch10: msg.ch10,
      ch11: msg.ch11,
      ch12: msg.ch12,
      ch13: msg.ch13,
      ch14: msg.ch14,
      ch15: msg.ch15,
      ch16: msg.ch16,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      ch1: msg.ch1,
      ch2: msg.ch2,
      ch3: msg.ch3,
      ch4: msg.ch4,
      ch5: msg.ch5,
      ch6: msg.ch6,
      ch7: msg.ch7,
      ch8: msg.ch8,
      ch9: msg.ch9,
      ch10: msg.ch10,
      ch11: msg.ch11,
      ch12: msg.ch12,
      ch13: msg.ch13,
      ch14: msg.ch14,
      ch15: msg.ch15,
      ch16: msg.ch16,
    }
  }
}


// Corresponds to chassis_control_msgs__msg__Ackcmd

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Ackcmd {

    // This member is not documented.
    #[allow(missing_docs)]
    pub vel: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub steer: f32,

}



impl Default for Ackcmd {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::Ackcmd::default())
  }
}

impl rosidl_runtime_rs::Message for Ackcmd {
  type RmwMsg = super::msg::rmw::Ackcmd;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        vel: msg.vel,
        steer: msg.steer,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      vel: msg.vel,
      steer: msg.steer,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      vel: msg.vel,
      steer: msg.steer,
    }
  }
}


// Corresponds to chassis_control_msgs__msg__Ominicmd

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Ominicmd {

    // This member is not documented.
    #[allow(missing_docs)]
    pub x: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub y: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub angle: f32,

}



impl Default for Ominicmd {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::Ominicmd::default())
  }
}

impl rosidl_runtime_rs::Message for Ominicmd {
  type RmwMsg = super::msg::rmw::Ominicmd;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        x: msg.x,
        y: msg.y,
        angle: msg.angle,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      x: msg.x,
      y: msg.y,
      angle: msg.angle,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      x: msg.x,
      y: msg.y,
      angle: msg.angle,
    }
  }
}


// Corresponds to chassis_control_msgs__msg__Frenet

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Frenet {

    // This member is not documented.
    #[allow(missing_docs)]
    pub s: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub ds: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub dds: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub l: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub dl: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub ddl: f32,

}



impl Default for Frenet {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::Frenet::default())
  }
}

impl rosidl_runtime_rs::Message for Frenet {
  type RmwMsg = super::msg::rmw::Frenet;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        s: msg.s,
        ds: msg.ds,
        dds: msg.dds,
        l: msg.l,
        dl: msg.dl,
        ddl: msg.ddl,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      s: msg.s,
      ds: msg.ds,
      dds: msg.dds,
      l: msg.l,
      dl: msg.dl,
      ddl: msg.ddl,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      s: msg.s,
      ds: msg.ds,
      dds: msg.dds,
      l: msg.l,
      dl: msg.dl,
      ddl: msg.ddl,
    }
  }
}


// Corresponds to chassis_control_msgs__msg__PurepursuitViz

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct PurepursuitViz {

    // This member is not documented.
    #[allow(missing_docs)]
    pub aimpointx: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub aimpointy: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub velx: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub vely: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub velz: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub ahead: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub currentx: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub currenty: f64,

}



impl Default for PurepursuitViz {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::PurepursuitViz::default())
  }
}

impl rosidl_runtime_rs::Message for PurepursuitViz {
  type RmwMsg = super::msg::rmw::PurepursuitViz;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        aimpointx: msg.aimpointx,
        aimpointy: msg.aimpointy,
        velx: msg.velx,
        vely: msg.vely,
        velz: msg.velz,
        ahead: msg.ahead,
        currentx: msg.currentx,
        currenty: msg.currenty,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      aimpointx: msg.aimpointx,
      aimpointy: msg.aimpointy,
      velx: msg.velx,
      vely: msg.vely,
      velz: msg.velz,
      ahead: msg.ahead,
      currentx: msg.currentx,
      currenty: msg.currenty,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      aimpointx: msg.aimpointx,
      aimpointy: msg.aimpointy,
      velx: msg.velx,
      vely: msg.vely,
      velz: msg.velz,
      ahead: msg.ahead,
      currentx: msg.currentx,
      currenty: msg.currenty,
    }
  }
}


// Corresponds to chassis_control_msgs__msg__Canframe
/// ID is the pivot frame ID

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Canframe {

    // This member is not documented.
    #[allow(missing_docs)]
    pub id: i32,

    /// m/s
    pub dricmd: f32,

    /// rad
    pub pivcmd: f32,

}



impl Default for Canframe {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::Canframe::default())
  }
}

impl rosidl_runtime_rs::Message for Canframe {
  type RmwMsg = super::msg::rmw::Canframe;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        id: msg.id,
        dricmd: msg.dricmd,
        pivcmd: msg.pivcmd,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      id: msg.id,
      dricmd: msg.dricmd,
      pivcmd: msg.pivcmd,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      id: msg.id,
      dricmd: msg.dricmd,
      pivcmd: msg.pivcmd,
    }
  }
}


