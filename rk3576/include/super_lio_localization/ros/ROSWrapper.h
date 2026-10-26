
#ifndef ROSWRAPPER_HPP_
#define ROSWRAPPER_HPP_

#include <deque>
#include <vector>
#include <chrono>
#include <cstdint>

#include <pcl/point_types.h>
#include <pcl/point_cloud.h>

#include <rclcpp/rclcpp.hpp>
#include <rclcpp/callback_group.hpp>
#include <tf2_ros/transform_broadcaster.h>
#include <geometry_msgs/msg/transform_stamped.hpp>

#include <sensor_msgs/msg/imu.hpp>
#include <nav_msgs/msg/path.hpp>
#include <nav_msgs/msg/odometry.hpp>
#include <sensor_msgs/msg/point_cloud2.hpp>
#include <visualization_msgs/msg/marker.hpp>
#include <geometry_msgs/msg/point.hpp>
#include <geometry_msgs/msg/pose_stamped.hpp>
#include <geometry_msgs/msg/pose_with_covariance_stamped.hpp>
#include <visualization_msgs/msg/marker_array.hpp>
#include <pcl_conversions/pcl_conversions.h>

/// msgs
#include "super_lio_localization/msg/cloud_pose.hpp"
#include "super_lio_localization/msg/cloud_pose2.hpp"
#include "localization_msgs/msg/pose_vel_acc_ang.hpp"
#include "localization_msgs/srv/relocation.hpp"
#include "system_utils/relocation_policy.hpp"


#include "lio/params.h"
#include "basic/alias.h"
#include "basic/logs.h"
#include "basic/Manifold.h"
#include "common/ds.h"

#include "lio/ESKF.h"
#include "OctVoxMap/OctVoxMap.hpp"


namespace LI2Sup{

void LoadParamFromRos(rclcpp::Node& node);

class ROSWrapper : public rclcpp::Node {
public:
  explicit ROSWrapper(const rclcpp::NodeOptions& options = rclcpp::NodeOptions());
  ~ROSWrapper(){};
  using Ptr = std::shared_ptr<ROSWrapper>;
  enum class ReplayCheckStatus { Ready, WaitForData, Invalid };
  struct ReplayCheck {
    ReplayCheckStatus status{ReplayCheckStatus::WaitForData};
    std::string reason;
    std::size_t imu_count{0};
    std::size_t scan_count{0};
    double covered_until{0.0};
    double max_gap{0.0};
  };
  void startSensorInputs();
  bool sync_measure(MeasureGroup&);

  void setESKF(ESKF::Ptr& eskf) { eskf_ = eskf;}

  void clear(){
    lidar_buffer_.clear();
    imu_buffer_.clear();
    lidar_pushed_ = false;
    last_timestamp_imu_ = -1.0;
    last_timestamp_lidar_ = -1.0;
  }

  void pub_odom(const NavState&);
  void pub_project_scan(const BASIC::CloudPtr& cloud_imu, const NavState& state,
                        const LidarData& raw_scan);
  void pub_mapping_scan(const BASIC::CloudPtr& cloud_imu, const NavState& state);
  void pub_cloud_world(const BASIC::CloudPtr& pc, double time);
  void pub_cloud2planner(const BASIC::CloudPtr& pc, double time);
  void pub_cloud_world_pose(const BASIC::CloudPtr& pc, 
                            const NavState& state);
  void pub_cloud_body_pose(const BASIC::CloudPtr& pc, 
                           const NavState& state);
  void pub_cloud_body_pose( const BASIC::VV3& pc_body,
                            const NavState& state);  
  void pub_processing_time(double time, double current_time, double mean_time, double std_time);

  void set_global_map(const BASIC::CloudPtr& global_map);

  void set_initial_data(BASIC::SE3& init_pose, bool& flg_get_init_guess, bool flg_finish_init = false);
  void retryRelocation(const char* reason = "local registration failed");
  bool hasInitialGuess() const { return relocation_guess_set_; }
  bool setTrackingValid(bool valid);
  bool trackingValid() const { return tracking_valid_; }
  bool initializationExpired() const {
    return relocation_policy_.timedOut(system_utils::RelocationPolicy::Clock::now());
  }
  bool consumeInitializationReset() {
    const bool reset = initialization_reset_requested_;
    initialization_reset_requested_ = false;
    return reset;
  }
  int minCorrespondences() const { return min_correspondences_; }
  int maxBadFrames() const { return max_bad_frames_; }
  double maxImuGapSec() const { return max_imu_gap_sec_; }
  double testRegistrationDelaySec() const { return test_registration_delay_sec_; }
  double registrationTimeoutSec() const { return registration_timeout_sec_; }
  std::uint64_t generation() const { return generation_; }
  std::uint64_t bufferEpoch() const { return buffer_epoch_; }
  ReplayCheck prepareReplay(double reference_time, const IMUData& seed_imu);
  std::string bufferSummary() const;
  void restartRelocation(BASIC::SE3& init_pose, bool& new_guess);

  rclcpp::CallbackGroup::SharedPtr getSensorCallbackGroup() {
    return cb_sensor_;
  }

private:
  void imuHandler(const sensor_msgs::msg::Imu::SharedPtr msg);
  void stdMsgHandler(const sensor_msgs::msg::PointCloud2::SharedPtr msg);

  void setupParams();
  void setupIO();
  void publishProjectState(const BASIC::V3& position_imu, const BASIC::M3& rotation_imu,
                           const BASIC::V3& velocity_imu, const BASIC::V3& angular_velocity_imu,
                           const BASIC::V3& acceleration_imu, double stamp);
  void requestRelocation();
  void clearRelocationRequest();
  void logRelocationState(const char* reason);

private:
  rclcpp::CallbackGroup::SharedPtr cb_sensor_;
  rclcpp::Subscription<sensor_msgs::msg::Imu>::SharedPtr sub_imu_;
  rclcpp::Subscription<sensor_msgs::msg::PointCloud2>::SharedPtr sub_lidar_std_;
  double last_input_scan_end_{-1.0};

  std::size_t imu_qos_depth_{3000};
  std::size_t scan_qos_depth_{300};
  std::size_t imu_buffer_max_count_{3000};
  std::size_t scan_buffer_max_count_{300};
  double buffer_window_sec_{30.0};
  double max_imu_gap_sec_{0.2};
  double test_registration_delay_sec_{0.0};
  double registration_timeout_sec_{30.0};
  std::uint64_t imu_overflow_count_{0};
  std::uint64_t scan_overflow_count_{0};
  std::uint64_t buffer_epoch_{0};
  // Backend initialization epoch; distinct from policy service-request tokens.
  // Every accepted guess, retry and new episode invalidates older worker results.
  std::uint64_t generation_{0};
  std::size_t max_imu_buffer_size_{0};
  std::size_t max_scan_buffer_size_{0};

  std::deque<IMUData>   imu_buffer_;
  std::deque<LidarData> lidar_buffer_;
  bool lidar_pushed_ = false;
  double last_timestamp_imu_ = -1.0;
  double last_timestamp_lidar_ = -1.0;

  ESKF::Ptr eskf_{nullptr};
  bool project_mode_{false};
  bool mapping_mode_{false};
  bool tracking_valid_{false};
  int min_correspondences_{20};
  int max_bad_frames_{5};
  std::string scan_frame_id_;
  std::string base_frame_id_;
  std::string map_frame_id_;
  std::string imu_frame_id_;
  std::string point_time_field_;
  std::string scan_timestamp_source_;
  double point_time_scale_{1.0};
  BASIC::SE3 T_imu_base_;
  BASIC::V3 last_imu_acc_ = BASIC::V3::Zero();
  BASIC::V3 last_imu_gyro_ = BASIC::V3::Zero();
  int relocation_method_{2};
  std::string relocation_map_name_;
  system_utils::RelocationPolicy relocation_policy_;
  int64_t relocation_request_id_{-1};
  bool relocation_guess_set_{false};
  bool filter_initialized_{false};
  bool initialization_reset_requested_{false};
  BASIC::SE3* initial_pose_{nullptr};
  bool* initial_pose_received_{nullptr};
  sensor_msgs::msg::PointCloud2::SharedPtr latest_scan_;
  std::chrono::steady_clock::time_point last_scan_received_{};
  std::chrono::steady_clock::time_point last_imu_received_{};
  double last_status_stamp_{-1.0};
  rclcpp::Client<localization_msgs::srv::Relocation>::SharedPtr relocation_client_;
  rclcpp::TimerBase::SharedPtr relocation_timer_;
  rclcpp::Subscription<geometry_msgs::msg::PoseWithCovarianceStamped>::SharedPtr initial_pose_sub_;
  rclcpp::Publisher<localization_msgs::msg::PoseVelAccAng>::SharedPtr project_status_pub_;
  rclcpp::Publisher<sensor_msgs::msg::PointCloud2>::SharedPtr project_scan_pub_;
  rclcpp::Publisher<geometry_msgs::msg::PoseStamped>::SharedPtr project_lidar_pose_pub_;
  rclcpp::Publisher<geometry_msgs::msg::PoseStamped>::SharedPtr project_imu_pose_pub_;
  rclcpp::Publisher<sensor_msgs::msg::PointCloud2>::SharedPtr mapping_scan_pub_;
  rclcpp::Publisher<nav_msgs::msg::Odometry>::SharedPtr mapping_odom_pub_;

  nav_msgs::msg::Path path_;
  geometry_msgs::msg::PoseStamped msg2uav_;
  sensor_msgs::msg::PointCloud2 global_map_msg_;
  std::shared_ptr<tf2_ros::TransformBroadcaster> tf_broadcaster_;

  BASIC::V3 last_path_point_ = BASIC::V3(0, 0, -100);

/// output.
private:
  rclcpp::Publisher<nav_msgs::msg::Odometry>::SharedPtr pub_odom_;       /// lidar fre --> IMU frame
  rclcpp::Publisher<nav_msgs::msg::Odometry>::SharedPtr pub_imu_odom_;   /// IMU fre   --> IMU frame
  rclcpp::Publisher<nav_msgs::msg::Odometry>::SharedPtr pub_robo_odom_;  /// IMU fre   --> Robot frame
  rclcpp::Publisher<nav_msgs::msg::Path>::SharedPtr pub_path_;
  rclcpp::Publisher<sensor_msgs::msg::PointCloud2>::SharedPtr pub_cloud_world_;
};

} // namespace END.

#endif
