/*
 * @Author: yaojianming
 * @Date: 2023-07-29 15:29:47
 * @LastEditors: yaojianming youjianming123@qq.com
 * @LastEditTime: 2023-07-30 11:52:04
 * @Description: odometry  
 */
#pragma once 
#include "rclcpp/time.hpp"
#include <cmath>
#include <vector>
#include <eigen3/Eigen/Dense>
#include "rcpputils/rcppmath/rolling_mean_accumulator.hpp" 
//ref:https://github.com/ros-controls/ros2_controllers/blob/master/diff_drive_controller/include/diff_drive_controller/odometry.hpp
namespace omini_chassis_controller
{
class Odometry
{
public:
  explicit Odometry(size_t velocity_rolling_windows_size=10);
  void init(const rclcpp::Time & time);
  bool update(std::vector<Eigen::Vector2d> motors_feedback,
    std::vector<Eigen::Vector2d>motors_pos,const rclcpp::Time& time);
  bool resetOdometry();
  double get_linearx() {return linearx_;};
  double get_lineary() {return lineary_;};
  double get_angulaz() {return angularz_;};
  void set_wheel_radius(double radius) {wheel_radius_ = radius;};
private:
  void integrateExact(double linear,double angular);
  void resetAccumulators();
  rclcpp::Time timestamp_;
  //Current pose;
  double x_; //[m]
  double y_; // [m]
  double heading_; //rad
  //Current velocity;
  double linearx_; // [m/s]
  double lineary_; // [m/s]
  double angularz_; //[rad/s]
  //Wheel kinematic parameters:
  double wheel_radius_; //[m]

  size_t velocity_rolling_window_size_;
  rcppmath::RollingMeanAccumulator<double> linear_accumulatorx_;
  rcppmath::RollingMeanAccumulator<double> linear_accumulatory_;
  rcppmath::RollingMeanAccumulator<double> angular_accumulator_;

};

}
