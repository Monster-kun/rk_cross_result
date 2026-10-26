/*
 * @Author: yaojianming
 * @Date: 2023-03-31 09:42:35
 * @Last Modified by: yaojianming
 * @Last Modified time: 2023-07-28 14:01:17
 */
#pragma once
#include "hardware_interface/handle.hpp"
#include "controller_interface/controller_interface.hpp"
#include "omini_chassis_controller/visibility_control.h"
#include "omini_chassis_controller/odometry.hpp"
#include "omini_chassis_controller/steering_limits.hpp"
#include "realtime_tools/realtime_buffer.h"
#include <string>
#include <map>
#include "chassis_control_msgs/msg/ominicmd.hpp"
#include "geometry_msgs/msg/twist.hpp"
#include "angle/angle.hpp"
#include "omini_chassis_controller_parameters.hpp"
#include "localization_msgs/msg/pose_vel_acc_ang.hpp"

namespace omini_chassis_controller
{
  using CmdType = chassis_control_msgs::msg::Ominicmd;
  using HMIcmdType = geometry_msgs::msg::Twist;
  using CallbackReturn = rclcpp_lifecycle::node_interfaces::LifecycleNodeInterface::CallbackReturn;
  using LocationType = localization_msgs::msg::PoseVelAccAng;
  class OminiChassisController : public controller_interface::ControllerInterface
  {
  public:
    OMINI_CHASSIS_CONTROLLER_PUBLIC
    OminiChassisController();
    OMINI_CHASSIS_CONTROLLER_PUBLIC
    ~OminiChassisController() = default;
    OMINI_CHASSIS_CONTROLLER_PUBLIC
    controller_interface::CallbackReturn on_init() override;
    OMINI_CHASSIS_CONTROLLER_PUBLIC
    controller_interface::InterfaceConfiguration command_interface_configuration() const override;
    OMINI_CHASSIS_CONTROLLER_PUBLIC
    controller_interface::InterfaceConfiguration state_interface_configuration() const override;
    OMINI_CHASSIS_CONTROLLER_PUBLIC
    controller_interface::return_type update(const rclcpp::Time &time, const rclcpp::Duration &period) override;
    OMINI_CHASSIS_CONTROLLER_PUBLIC
    controller_interface::CallbackReturn on_configure(const rclcpp_lifecycle::State &previous_state) override;
    OMINI_CHASSIS_CONTROLLER_PUBLIC
    controller_interface::CallbackReturn on_activate(const rclcpp_lifecycle::State &previous_state) override;
    OMINI_CHASSIS_CONTROLLER_PUBLIC
    controller_interface::CallbackReturn on_deactivate(const rclcpp_lifecycle::State &previous_state) override;

  protected:
    OMINI_CHASSIS_CONTROLLER_PUBLIC
    void dualackermann(double velocity, double angular);

    OMINI_CHASSIS_CONTROLLER_PUBLIC
    virtual void resetsubptr();
    OMINI_CHASSIS_CONTROLLER_PUBLIC
    void halt();
    OMINI_CHASSIS_CONTROLLER_PUBLIC
    void controlKinematics(double x, double y, double w, double yaw);
    OMINI_CHASSIS_CONTROLLER_PUBLIC
    void controlKinematicsV2(double vx, double vy, double wz, double yaw);    
    OMINI_CHASSIS_CONTROLLER_PUBLIC
    bool limitMotorMaxOutput(double maxvalue);
    OMINI_CHASSIS_CONTROLLER_PUBLIC
    double limitMotorDirection(std::string motorname, double direction, double ERRORvalue);

    OMINI_CHASSIS_CONTROLLER_PUBLIC
    void applyWheelCommands();

    struct MotorHandle
    {
      // pivot
      std::reference_wrapper<const hardware_interface::LoanedStateInterface> pivotfeedback;
      std::reference_wrapper<hardware_interface::LoanedCommandInterface> pivotcommand;
      // drive
      std::reference_wrapper<const hardware_interface::LoanedStateInterface> drivefeedback;
      std::reference_wrapper<hardware_interface::LoanedCommandInterface> drivecommand;
      Eigen::Vector3d motorPositionVehicle;
    };
    struct RobotParam
    {
      double velocity_ratio;
      double wheel_radius;
      double mass;
      double moment_inertia;
      double vehicle_length;
      std::map<std::string, std::vector<double>> pivotmotorlimit;
      std::map<std::string, std::vector<double>> motor_position;
    };

    controller_interface::CallbackReturn configure_motor_handles(
        const std::vector<std::string> &models, std::vector<MotorHandle> &registered_handles);

    RobotParam robot_param_;
    std::vector<MotorHandle> registered_motor_handels_;

    std::string drive_command_type_;
    std::vector<std::string> motor_name_;
    bool is_halted_;

    // angel_pid_paramters

  private:
    Params ctrparams_;
    std::shared_ptr<ParamListener> ctrparam_listener_;
    Odometry odometry_;
    rclcpp::Subscription<CmdType>::SharedPtr cmd_subscriber_;
    realtime_tools::RealtimeBuffer<std::shared_ptr<CmdType>> rt_command_ptr_;
    rclcpp::Subscription<HMIcmdType>::SharedPtr hmicmd_subscriber_;
    realtime_tools::RealtimeBuffer<std::shared_ptr<HMIcmdType>> rt_hmicommand_ptr_;
    rclcpp::Subscription<LocationType>::SharedPtr location_sub_;
    realtime_tools::RealtimeBuffer<std::shared_ptr<LocationType>> rt_location_ptr_;
  };

} // omini_chassis_controller
