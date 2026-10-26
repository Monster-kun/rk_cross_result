#pragma once
#include "omini_chassis_controller/omini_chassis_controller.hpp"
#include "hardware_interface/types/hardware_interface_type_values.hpp"
#include "controller_interface/controller_interface.hpp"
#include "rclcpp/rclcpp.hpp"
#include "dualackermann_controller/visibility_control.h"
#include "geometry_msgs/msg/twist.hpp"
#include "dualackermann_controller_parameters.hpp"



namespace dualackermann_controller
{
using CmdType=geometry_msgs::msg::Twist;

class DualackermannController:public omini_chassis_controller::OminiChassisController
{
public:
  Dualackermann_Controller_PUBLIC
  DualackermannController();
  Dualackermann_Controller_PUBLIC
  controller_interface::CallbackReturn on_configure(const rclcpp_lifecycle::State & previous_state) override;
  Dualackermann_Controller_PUBLIC
  controller_interface::return_type update(const rclcpp::Time& time, const rclcpp::Duration& period) override;
protected:
  Dualackermann_Controller_PUBLIC
  void resetsubptr() override;
  void dualackermannKinematic(double velocity,double angular);
private:
  std::shared_ptr<ParamListener> ctrparam_listener_;
  Params ctrparams_;

  rclcpp::Subscription<CmdType>::SharedPtr cmd_subscriber_;
  realtime_tools::RealtimeBuffer<std::shared_ptr<CmdType>> rt_command_ptr_;



};
}