

#ifndef SUPER_LIO_RELOCATION_H_
#define SUPER_LIO_RELOCATION_H_


#include <cstdint>
#include <future>
#include <limits>
#include <optional>
#include <thread>

#include "super_lio.h"


namespace LI2Sup{

class SuperLIOReLoc : public SuperLIO {
public:
  SuperLIOReLoc(){
    BASIC::V3 init_t = BASIC::V3(g_init_px, g_init_py, g_init_pz);
    Eigen::Matrix3d init_R = (Eigen::AngleAxisd(g_init_yaw / 180 * M_PI, Eigen::Vector3d::UnitZ()) *
                              Eigen::AngleAxisd(g_init_pitch /180 * M_PI, Eigen::Vector3d::UnitY()) *
                              Eigen::AngleAxisd(g_init_roll / 180 * M_PI, Eigen::Vector3d::UnitX())).toRotationMatrix();
                
    BASIC::M3 init_R2 = init_R.cast<BASIC::scalar>();             
      
    re_init_pose_ = BASIC::SE3(BASIC::SO3(init_R2), init_t);
  };
  ~SuperLIOReLoc() override;

  void init() override;
  void process();

private:
  struct RegistrationResult {
    std::uint64_t generation{0};
    double reference_time{0.0};
    Eigen::Matrix4f transform{Eigen::Matrix4f::Identity()};
    bool converged{false};
    double fitness{std::numeric_limits<double>::infinity()};
    double elapsed_sec{0.0};
    double test_delay_elapsed_sec{0.0};
    std::string error;
  };

  bool beforeProcess() override;
  void onPropagationFailure(ESKF::PredictStatus status) override;
  bool kf_init() override;
  bool map_init() override;
  void UpdateMap() override;
  void Output() override;
  void startRegistration(const BASIC::M4& initial_guess);
  void resetInitializationAttempt();

private:
  BASIC::CloudPtr init_obs_data_;
  bool flg_get_init_guess_ = false;
  int bad_match_frames_ = 0;
  BASIC::SE3 re_init_pose_;
  std::size_t init_imu_count_{0};
  std::size_t init_frame_count_{0};
  BASIC::V3 init_mean_gyro_{BASIC::V3::Zero()};
  BASIC::V3 init_mean_acc_{BASIC::V3::Zero()};
  bool registration_active_{false};
  bool registration_timed_out_{false};
  std::future<RegistrationResult> registration_future_;
  std::thread registration_thread_;
  std::optional<RegistrationResult> registration_result_;
  std::uint64_t registration_generation_{0};
  std::uint64_t registration_buffer_epoch_{0};
  double registration_reference_time_{0.0};
  double registration_started_at_{0.0};
  IMUData registration_seed_imu_;
  BASIC::V3 registration_mean_gyro_{BASIC::V3::Zero()};
  BASIC::V3 registration_mean_acc_{BASIC::V3::Zero()};
};

} // namespace END.

#endif


