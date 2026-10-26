/*
 * @Author: yaojianming
 * @Date: 2023-07-27 10:33:32
 * @LastEditors: yaojianming youjianming123@qq.com
 * @LastEditTime: 2023-07-30 15:42:56
 * @FilePath: /vscode_ros2_workspace-humble/src/autorunning/control/pure_pursuit_controller/include/pure_pursuit_controller/pure_pursuit_controller.hpp
 * @Description: 
 */
#pragma once
#include "omini_chassis_controller/omini_chassis_controller.hpp"
#include "hardware_interface/types/hardware_interface_type_values.hpp"
#include "controller_interface/controller_interface.hpp"
#include "pure_pursuit_controller/visibility_control.h"
#include <tf2/buffer_core.h>
#include <tf2_ros/transform_listener.h>
#include <tf2_geometry_msgs/tf2_geometry_msgs.h>
#include <geometry_msgs/msg/transform_stamped.h>
#include <geometry_msgs/msg/pose_stamped.h>
#include "rclcpp/rclcpp.hpp"
#include "planning_msgs/msg/trajectory.hpp"
#include "chassis_control_msgs/msg/purepursuit_viz.hpp"
#include "angle/angle.hpp"
#include "pure_pursuit_controller_parameters.hpp"
#include "localization_msgs/msg/pose_vel_acc_ang.hpp"

namespace pure_pursuit_controller
{
using LaneType=planning_msgs::msg::Trajectory;
using PointType=planning_msgs::msg::Waypoint;
using LocationType=localization_msgs::msg::PoseVelAccAng;
class DataPublisher : public rclcpp::Node
{
public:
  DataPublisher();
  void PubData(chassis_control_msgs::msg::PurepursuitViz msg);
private:
  rclcpp::Publisher<chassis_control_msgs::msg::PurepursuitViz>::SharedPtr aimpoint_pub_;
};

class PurePursuitController :public omini_chassis_controller::OminiChassisController
{
public:
  Pure_Pursuit_Controller_PUBLIC
  PurePursuitController();
  Pure_Pursuit_Controller_PUBLIC
  controller_interface::CallbackReturn on_configure(const rclcpp_lifecycle::State & previous_state) override;
  Pure_Pursuit_Controller_PUBLIC
  controller_interface::return_type update(const rclcpp::Time & time, const rclcpp::Duration & period) override;

protected:
  Pure_Pursuit_Controller_PUBLIC
  void resetsubptr() override;

  double ahead_distance_;
  std::shared_ptr<DataPublisher> datapub_ptr_;
  
private:
  double velocity_limit_;
  double velocity_ratio_;
  std::shared_ptr<ParamListener> ctrparam_listener_;
  Params ctrparams_;
  rclcpp::Subscription<LaneType>::SharedPtr lane_sub_;
  realtime_tools::RealtimeBuffer<std::shared_ptr<LaneType>> rt_lane_ptr_;
  rclcpp::Subscription<LocationType>::SharedPtr location_sub_;  
  realtime_tools::RealtimeBuffer<std::shared_ptr<LocationType>> rt_location_ptr_; 
};


}
