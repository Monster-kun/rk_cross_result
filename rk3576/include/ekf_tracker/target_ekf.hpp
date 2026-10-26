/**
 * @file target_ekf.hpp
 * @author Junfeng
 * @brief target ekf tracker
 * @version 0.1
 * @date 2024-10-15
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#pragma once

#include <eigen3/Eigen/Core>
#include <eigen3/Eigen/Geometry>
#include <cv_bridge/cv_bridge.h>
#include <rclcpp/rclcpp.hpp>

#include <tf2/utils.h>
#include "tf2_ros/transform_listener.h"
#include "tf2_ros/buffer.h"
#include <tf2/convert.h>
#include <tf2_geometry_msgs/tf2_geometry_msgs.h>

#include "sensor_msgs/msg/image.hpp"
#include <geometry_msgs/msg/point_stamped.hpp>
#include <image_transport/image_transport.hpp>
#include <image_transport/subscriber_filter.hpp>
#include <image_geometry/pinhole_camera_model.h>
#include "bboxes_ex_msgs/msg/bounding_boxes.hpp"
#include <nav_msgs/msg/path.hpp>
#include <nav_msgs/msg/odometry.hpp>

#include "system_utils/node_utils.hpp"

#include <message_filters/subscriber.h>
#include <message_filters/sync_policies/approximate_time.h>
#include <message_filters/sync_policies/exact_time.h>
#include <message_filters/synchronizer.h>

namespace ekf_tracker
{
class Ekf
{
private:
  double dt;
  Eigen::MatrixXd A, B, C;
  Eigen::MatrixXd Qt, Rt;
  Eigen::MatrixXd Sigma, K;
  Eigen::VectorXd x;

  // states: x, y, z, vx, vy, vz   
public:
    Ekf(double _dt) : dt(_dt){
        A.setIdentity(6, 6);
        Sigma.setZero(6, 6);
        B.setZero(6, 3);
        C.setZero(3, 6);
        A(0, 3) = dt;
        A(1, 4) = dt;
        A(2, 5) = dt;
        double t2 = dt * dt / 2;
        B(0, 0) = t2;
        B(1, 1) = t2;
        B(2, 2) = t2;
        B(3, 0) = dt;
        B(4, 1) = dt;
        B(5, 2) = dt;
        C(0, 0) = 1;
        C(1, 1) = 1;
        C(2, 2) = 1;
        K = C;
        Qt.setIdentity(3, 3);
        Rt.setIdentity(3, 3);
        Qt(0, 0) = 4;
        Qt(1, 1) = 4;
        Qt(2, 2) = 1;
        Rt(0, 0) = 0.1;
        Rt(1, 1) = 0.1;
        Rt(2, 2) = 0.1;
        x.setZero(6);        
    }

    inline void predict() 
    {
        x = A * x;
        Sigma = A * Sigma * A.transpose() + B * Qt * B.transpose();
        return;
    }   

    inline void reset(const Eigen::Vector3d& z) 
    {
        x.head(3) = z;
        x.tail(3).setZero();
        Sigma.setZero();
    }    
    
    inline bool checkValid(const Eigen::Vector3d& z) const 
    {
        Eigen::MatrixXd K_tmp = Sigma * C.transpose() * (C * Sigma * C.transpose() + Rt).inverse();
        Eigen::VectorXd x_tmp = x + K_tmp * (z - C * x);
        const double vmax = 2.0;
        if (x_tmp.tail(3).norm() > vmax) {
        return false;
        } else {
        return true;
        }
    }

    inline void update(const Eigen::Vector3d& z) 
    {
        K = Sigma * C.transpose() * (C * Sigma * C.transpose() + Rt).inverse();
        x = x + K * (z - C * x);
        Sigma = Sigma - K * C * Sigma;
    }

    inline const Eigen::Vector3d pos() const {
        return x.head(3);
    }

    inline const Eigen::Vector3d vel() const {
        return x.tail(3);
    }   
};

class TargetEKF : public rclcpp::Node
{
public:
    TargetEKF(const rclcpp::NodeOptions &options);
    ~TargetEKF(){};
private:

    message_filters::Subscriber<sensor_msgs::msg::Image> depth_sub_;
    message_filters::Subscriber<sensor_msgs::msg::CameraInfo> camera_info_sub_;
    message_filters::Subscriber<bboxes_ex_msgs::msg::BoundingBoxes> bboxes_sub_;
    using SyncPolicy = message_filters::sync_policies::ApproximateTime<sensor_msgs::msg::Image, sensor_msgs::msg::CameraInfo, bboxes_ex_msgs::msg::BoundingBoxes>;
    using Synchronizer = message_filters::Synchronizer<SyncPolicy>;
    std::shared_ptr<Synchronizer> sync_;

    rclcpp::Publisher<nav_msgs::msg::Path>::SharedPtr path_pub_;
    rclcpp::Publisher<nav_msgs::msg::Odometry>::SharedPtr odom_pub_;
    
    std::shared_ptr<tf2_ros::Buffer> tf_buffer_;
    std::shared_ptr<tf2_ros::TransformListener> tf_listener_;

    rclcpp::TimerBase::SharedPtr timer_;
    rclcpp::Time last_update_stamp_;
    nav_msgs::msg::Path target_path_;
    bool init_;
    int target_id_;
    void connectCallback();
    void trackCallback(const sensor_msgs::msg::Image::ConstSharedPtr& depth_msg,
                        const sensor_msgs::msg::CameraInfo::ConstSharedPtr& camera_info_msg,
                       const bboxes_ex_msgs::msg::BoundingBoxes::ConstSharedPtr& trackers_msg);
    void timerCallback();

    std::shared_ptr<Ekf> ekf_;
    std::string depth_info_topic_, depth_topic_;
};
}