#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



// Corresponds to bboxes_ex_msgs__msg__BoundingBox

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct BoundingBox {

    // This member is not documented.
    #[allow(missing_docs)]
    pub probability: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub xmin: u16,


    // This member is not documented.
    #[allow(missing_docs)]
    pub ymin: u16,


    // This member is not documented.
    #[allow(missing_docs)]
    pub xmax: u16,


    // This member is not documented.
    #[allow(missing_docs)]
    pub ymax: u16,


    // This member is not documented.
    #[allow(missing_docs)]
    pub id: u16,


    // This member is not documented.
    #[allow(missing_docs)]
    pub img_width: u16,


    // This member is not documented.
    #[allow(missing_docs)]
    pub img_height: u16,


    // This member is not documented.
    #[allow(missing_docs)]
    pub center_dist: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub class_id: std::string::String,

}



impl Default for BoundingBox {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::BoundingBox::default())
  }
}

impl rosidl_runtime_rs::Message for BoundingBox {
  type RmwMsg = super::msg::rmw::BoundingBox;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        probability: msg.probability,
        xmin: msg.xmin,
        ymin: msg.ymin,
        xmax: msg.xmax,
        ymax: msg.ymax,
        id: msg.id,
        img_width: msg.img_width,
        img_height: msg.img_height,
        center_dist: msg.center_dist,
        class_id: msg.class_id.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      probability: msg.probability,
      xmin: msg.xmin,
      ymin: msg.ymin,
      xmax: msg.xmax,
      ymax: msg.ymax,
      id: msg.id,
      img_width: msg.img_width,
      img_height: msg.img_height,
      center_dist: msg.center_dist,
        class_id: msg.class_id.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      probability: msg.probability,
      xmin: msg.xmin,
      ymin: msg.ymin,
      xmax: msg.xmax,
      ymax: msg.ymax,
      id: msg.id,
      img_width: msg.img_width,
      img_height: msg.img_height,
      center_dist: msg.center_dist,
      class_id: msg.class_id.to_string(),
    }
  }
}


// Corresponds to bboxes_ex_msgs__msg__BoundingBoxes

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct BoundingBoxes {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub image_header: std_msgs::msg::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub bounding_boxes: Vec<super::msg::BoundingBox>,

}



impl Default for BoundingBoxes {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::BoundingBoxes::default())
  }
}

impl rosidl_runtime_rs::Message for BoundingBoxes {
  type RmwMsg = super::msg::rmw::BoundingBoxes;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        image_header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.image_header)).into_owned(),
        bounding_boxes: msg.bounding_boxes
          .into_iter()
          .map(|elem| super::msg::BoundingBox::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
        image_header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.image_header)).into_owned(),
        bounding_boxes: msg.bounding_boxes
          .iter()
          .map(|elem| super::msg::BoundingBox::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      image_header: std_msgs::msg::Header::from_rmw_message(msg.image_header),
      bounding_boxes: msg.bounding_boxes
          .into_iter()
          .map(super::msg::BoundingBox::from_rmw_message)
          .collect(),
    }
  }
}


