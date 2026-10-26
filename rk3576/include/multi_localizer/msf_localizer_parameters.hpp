// auto-generated DO NOT EDIT

#pragma once

#include <algorithm>
#include <array>
#include <functional>
#include <limits>
#include <mutex>
#include <rclcpp/node.hpp>
#include <rclcpp_lifecycle/lifecycle_node.hpp>
#include <rclcpp/logger.hpp>
#include <set>
#include <sstream>
#include <string>
#include <type_traits>
#include <utility>
#include <vector>

#include <fmt/core.h>
#include <fmt/format.h>
#include <fmt/ranges.h>

// silence deprecation warnings for parameter_traits, needed for backwards compatibility
#define SILENCE_DEPRECATION_WARNINGS
#include <parameter_traits/parameter_traits.hpp>
#undef SILENCE_DEPRECATION_WARNINGS

#include <rsl/static_string.hpp>
#include <rsl/static_vector.hpp>
#include <rsl/parameter_validators.hpp>



namespace msf_localizer_params {

// Use validators from RSL
using rsl::unique;
using rsl::subset_of;
using rsl::fixed_size;
using rsl::size_gt;
using rsl::size_lt;
using rsl::not_empty;
using rsl::element_bounds;
using rsl::lower_element_bounds;
using rsl::upper_element_bounds;
using rsl::bounds;
using rsl::lt;
using rsl::gt;
using rsl::lt_eq;
using rsl::gt_eq;
using rsl::one_of;
using rsl::to_parameter_result_msg;

// temporarily needed for backwards compatibility for custom validators
using namespace parameter_traits;

template <typename T>
[[nodiscard]] auto to_parameter_value(T value) {
    return rclcpp::ParameterValue(value);
}

template <size_t capacity>
[[nodiscard]] auto to_parameter_value(rsl::StaticString<capacity> const& value) {
    return rclcpp::ParameterValue(rsl::to_string(value));
}

template <typename T, size_t capacity>
[[nodiscard]] auto to_parameter_value(rsl::StaticVector<T, capacity> const& value) {
    return rclcpp::ParameterValue(rsl::to_vector(value));
}
    struct Params {
        struct MainParams {
            bool use_debug_mode = false;
            std::string lidar_topic_name = "/scan";
            std::string imu_topic_name = "/imu/data";
            std::string relocation_map_name = "sim_street";
            bool use_undistorted = true;
            bool use_odom = false;
            double wheel_velocity_ratio = 1.0;
            std::vector<double> extrinsic_Tbl = {1.0, 0.0, 0.0, 0.4, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 1.0};
            std::vector<double> motors_position = {0.3, 0.3, -0.3, 0.3, -0.3, -0.3, 0.3, -0.3};
        } main_params;
        struct EskfParams {
            double imu_dt = 0.01;
            double gyro_var = 0.001;
            double acce_var = 0.01;
            double bias_gyro_var = 0.001;
            double bias_acce_var = 0.001;
            bool update_bias_gyro = true;
            bool update_bias_acce = true;
            double odom_vel_var = 0.5;
            double odom_ang_var = 0.3;
            double odom_span = 0.1;
        } eskf_params;
        struct InitImuParams {
            int64_t imu_rate = 100;
            double init_time_seconds = 1.0;
            double max_static_gyro_var = 0.5;
            double max_static_acce_var = 0.05;
            double gravity_norm = 9.81;
        } init_imu_params;
        struct ScanRegistrationParams {
            std::string registration_type = "FASTCUDAGICP";
            double map_voxel_size = 0.3;
            double scan_voxel_size = 0.2;
            double resolution = 1.0;
            int64_t thread_nums = 4;
        } scan_registration_params;
        // for detecting if the parameter struct has been updated
        rclcpp::Time __stamp;
    };
    struct StackParams {
        struct MainParams {
            bool use_debug_mode = false;
            bool use_undistorted = true;
            bool use_odom = false;
            double wheel_velocity_ratio = 1.0;
        } main_params;
        struct EskfParams {
            double imu_dt = 0.01;
            double gyro_var = 0.001;
            double acce_var = 0.01;
            double bias_gyro_var = 0.001;
            double bias_acce_var = 0.001;
            bool update_bias_gyro = true;
            bool update_bias_acce = true;
            double odom_vel_var = 0.5;
            double odom_ang_var = 0.3;
            double odom_span = 0.1;
        } eskf_params;
        struct InitImuParams {
            int64_t imu_rate = 100;
            double init_time_seconds = 1.0;
            double max_static_gyro_var = 0.5;
            double max_static_acce_var = 0.05;
            double gravity_norm = 9.81;
        } init_imu_params;
        struct ScanRegistrationParams {
            double map_voxel_size = 0.3;
            double scan_voxel_size = 0.2;
            double resolution = 1.0;
            int64_t thread_nums = 4;
        } scan_registration_params;
    };

  class ParamListener{
  public:
    // throws rclcpp::exceptions::InvalidParameterValueException on initialization if invalid parameter are loaded
    template <typename NodeT>
    ParamListener(NodeT node, std::string const& prefix = "")
    : ParamListener(node->get_node_parameters_interface(), node->get_logger(), prefix) {}

    ParamListener(const std::shared_ptr<rclcpp::node_interfaces::NodeParametersInterface>& parameters_interface,
                  std::string const& prefix = "")
    : ParamListener(parameters_interface, rclcpp::get_logger("msf_localizer_params"), prefix) {
      RCLCPP_DEBUG(logger_, "ParameterListener: Not using node logger, recommend using other constructors to use a node logger");
    }

    ParamListener(const std::shared_ptr<rclcpp::node_interfaces::NodeParametersInterface>& parameters_interface,
                  rclcpp::Logger logger, std::string const& prefix = "")
    : prefix_{prefix},
      logger_{std::move(logger)} {
      if (!prefix_.empty() && prefix_.back() != '.') {
        prefix_ += ".";
      }

      parameters_interface_ = parameters_interface;
      declare_params();
      auto update_param_cb = [this](const std::vector<rclcpp::Parameter> &parameters){return this->update(parameters);};
      handle_ = parameters_interface_->add_on_set_parameters_callback(update_param_cb);
      clock_ = rclcpp::Clock();
    }

    Params get_params() const{
      std::lock_guard<std::mutex> lock(mutex_);
      return params_;
    }

    /**
     * @brief Tries to update the parsed Params object
     * @param params_in The Params object to update
     * @return true if the Params object was updated, false if it was already up to date or the mutex could not be locked
     * @note This function tries to lock the mutex without blocking, so it can be used in a RT loop
     */
    bool try_update_params(Params & params_in) const {
      std::unique_lock<std::mutex> lock(mutex_, std::try_to_lock);
      if (lock.owns_lock()) {
        if (const bool is_old = params_in.__stamp != params_.__stamp; is_old) {
          params_in = params_;
          return true;
        }
      }
      return false;
    }

    /**
     * @brief Tries to get the current Params object
     * @param params_in The Params object to fill with the current parameters
     * @return true if mutex can be locked, false if mutex could not be locked
     * @note The parameters are only filled, when the mutex can be locked and the params timestamp is different
     * @note This function tries to lock the mutex without blocking, so it can be used in a RT loop
     */
    bool try_get_params(Params & params_in) const {
      if (mutex_.try_lock()) {
        if (const bool is_old = params_in.__stamp != params_.__stamp; is_old) {
          params_in = params_;
        }
        mutex_.unlock();
        return true;
      }
      return false;
    }

    bool is_old(Params const& other) const {
      std::lock_guard<std::mutex> lock(mutex_);
      return params_.__stamp != other.__stamp;
    }

    StackParams get_stack_params() {
      Params params = get_params();
      StackParams output;
      output.main_params.use_debug_mode = params.main_params.use_debug_mode;
      output.main_params.use_undistorted = params.main_params.use_undistorted;
      output.main_params.use_odom = params.main_params.use_odom;
      output.main_params.wheel_velocity_ratio = params.main_params.wheel_velocity_ratio;
      output.eskf_params.imu_dt = params.eskf_params.imu_dt;
      output.eskf_params.gyro_var = params.eskf_params.gyro_var;
      output.eskf_params.acce_var = params.eskf_params.acce_var;
      output.eskf_params.bias_gyro_var = params.eskf_params.bias_gyro_var;
      output.eskf_params.bias_acce_var = params.eskf_params.bias_acce_var;
      output.eskf_params.update_bias_gyro = params.eskf_params.update_bias_gyro;
      output.eskf_params.update_bias_acce = params.eskf_params.update_bias_acce;
      output.eskf_params.odom_vel_var = params.eskf_params.odom_vel_var;
      output.eskf_params.odom_ang_var = params.eskf_params.odom_ang_var;
      output.eskf_params.odom_span = params.eskf_params.odom_span;
      output.init_imu_params.imu_rate = params.init_imu_params.imu_rate;
      output.init_imu_params.init_time_seconds = params.init_imu_params.init_time_seconds;
      output.init_imu_params.max_static_gyro_var = params.init_imu_params.max_static_gyro_var;
      output.init_imu_params.max_static_acce_var = params.init_imu_params.max_static_acce_var;
      output.init_imu_params.gravity_norm = params.init_imu_params.gravity_norm;
      output.scan_registration_params.map_voxel_size = params.scan_registration_params.map_voxel_size;
      output.scan_registration_params.scan_voxel_size = params.scan_registration_params.scan_voxel_size;
      output.scan_registration_params.resolution = params.scan_registration_params.resolution;
      output.scan_registration_params.thread_nums = params.scan_registration_params.thread_nums;

      return output;
    }

    void refresh_dynamic_parameters() {
      auto updated_params = get_params();
      // TODO remove any destroyed dynamic parameters

      // declare any new dynamic parameters
      rclcpp::Parameter param;

    }

    rcl_interfaces::msg::SetParametersResult update(const std::vector<rclcpp::Parameter> &parameters) {
      auto updated_params = get_params();

      for (const auto &param: parameters) {
        if (param.get_name() == (prefix_ + "main_params.use_debug_mode")) {
            updated_params.main_params.use_debug_mode = param.as_bool();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "main_params.lidar_topic_name")) {
            updated_params.main_params.lidar_topic_name = param.as_string();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "main_params.imu_topic_name")) {
            updated_params.main_params.imu_topic_name = param.as_string();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "main_params.relocation_map_name")) {
            updated_params.main_params.relocation_map_name = param.as_string();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "main_params.use_undistorted")) {
            updated_params.main_params.use_undistorted = param.as_bool();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "main_params.use_odom")) {
            updated_params.main_params.use_odom = param.as_bool();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "main_params.wheel_velocity_ratio")) {
            updated_params.main_params.wheel_velocity_ratio = param.as_double();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "main_params.extrinsic_Tbl")) {
            updated_params.main_params.extrinsic_Tbl = param.as_double_array();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "main_params.motors_position")) {
            updated_params.main_params.motors_position = param.as_double_array();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "eskf_params.imu_dt")) {
            updated_params.eskf_params.imu_dt = param.as_double();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "eskf_params.gyro_var")) {
            updated_params.eskf_params.gyro_var = param.as_double();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "eskf_params.acce_var")) {
            updated_params.eskf_params.acce_var = param.as_double();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "eskf_params.bias_gyro_var")) {
            updated_params.eskf_params.bias_gyro_var = param.as_double();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "eskf_params.bias_acce_var")) {
            updated_params.eskf_params.bias_acce_var = param.as_double();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "eskf_params.update_bias_gyro")) {
            updated_params.eskf_params.update_bias_gyro = param.as_bool();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "eskf_params.update_bias_acce")) {
            updated_params.eskf_params.update_bias_acce = param.as_bool();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "eskf_params.odom_vel_var")) {
            updated_params.eskf_params.odom_vel_var = param.as_double();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "eskf_params.odom_ang_var")) {
            updated_params.eskf_params.odom_ang_var = param.as_double();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "eskf_params.odom_span")) {
            updated_params.eskf_params.odom_span = param.as_double();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "init_imu_params.imu_rate")) {
            updated_params.init_imu_params.imu_rate = param.as_int();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "init_imu_params.init_time_seconds")) {
            updated_params.init_imu_params.init_time_seconds = param.as_double();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "init_imu_params.max_static_gyro_var")) {
            updated_params.init_imu_params.max_static_gyro_var = param.as_double();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "init_imu_params.max_static_acce_var")) {
            updated_params.init_imu_params.max_static_acce_var = param.as_double();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "init_imu_params.gravity_norm")) {
            updated_params.init_imu_params.gravity_norm = param.as_double();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "scan_registration_params.registration_type")) {
            updated_params.scan_registration_params.registration_type = param.as_string();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "scan_registration_params.map_voxel_size")) {
            updated_params.scan_registration_params.map_voxel_size = param.as_double();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "scan_registration_params.scan_voxel_size")) {
            updated_params.scan_registration_params.scan_voxel_size = param.as_double();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "scan_registration_params.resolution")) {
            updated_params.scan_registration_params.resolution = param.as_double();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "scan_registration_params.thread_nums")) {
            updated_params.scan_registration_params.thread_nums = param.as_int();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
      }

      updated_params.__stamp = clock_.now();
      update_internal_params(updated_params);
      if (user_callback_) {
         user_callback_(updated_params);
      }
      return rsl::to_parameter_result_msg({});
    }

    void declare_params(){
      auto updated_params = get_params();
      // declare all parameters and give default values to non-required ones
      if (!parameters_interface_->has_parameter(prefix_ + "main_params.use_debug_mode")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "debug mode";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.main_params.use_debug_mode);
          parameters_interface_->declare_parameter(prefix_ + "main_params.use_debug_mode", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "main_params.lidar_topic_name")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "Now fix the topic name is /scan";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.main_params.lidar_topic_name);
          parameters_interface_->declare_parameter(prefix_ + "main_params.lidar_topic_name", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "main_params.imu_topic_name")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "/imu/data /fake_imu/data";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.main_params.imu_topic_name);
          parameters_interface_->declare_parameter(prefix_ + "main_params.imu_topic_name", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "main_params.relocation_map_name")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "for relocation";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.main_params.relocation_map_name);
          parameters_interface_->declare_parameter(prefix_ + "main_params.relocation_map_name", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "main_params.use_undistorted")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "lidar point cloud distortion removal";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.main_params.use_undistorted);
          parameters_interface_->declare_parameter(prefix_ + "main_params.use_undistorted", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "main_params.use_odom")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "use odom";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.main_params.use_odom);
          parameters_interface_->declare_parameter(prefix_ + "main_params.use_odom", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "main_params.wheel_velocity_ratio")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "sim 0.1, real 1";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.main_params.wheel_velocity_ratio);
          parameters_interface_->declare_parameter(prefix_ + "main_params.wheel_velocity_ratio", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "main_params.extrinsic_Tbl")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "lidar -> base_link";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.main_params.extrinsic_Tbl);
          parameters_interface_->declare_parameter(prefix_ + "main_params.extrinsic_Tbl", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "main_params.motors_position")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "motors_position , left front, left back, right back, right front";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.main_params.motors_position);
          parameters_interface_->declare_parameter(prefix_ + "main_params.motors_position", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "eskf_params.imu_dt")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "imu rate";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.eskf_params.imu_dt);
          parameters_interface_->declare_parameter(prefix_ + "eskf_params.imu_dt", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "eskf_params.gyro_var")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "gyro_var 0.000001";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.eskf_params.gyro_var);
          parameters_interface_->declare_parameter(prefix_ + "eskf_params.gyro_var", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "eskf_params.acce_var")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "acce_var 0.01";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.eskf_params.acce_var);
          parameters_interface_->declare_parameter(prefix_ + "eskf_params.acce_var", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "eskf_params.bias_gyro_var")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "bias_gyro_var 0.0000001";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.eskf_params.bias_gyro_var);
          parameters_interface_->declare_parameter(prefix_ + "eskf_params.bias_gyro_var", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "eskf_params.bias_acce_var")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "bias_acce_var 0.0001";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.eskf_params.bias_acce_var);
          parameters_interface_->declare_parameter(prefix_ + "eskf_params.bias_acce_var", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "eskf_params.update_bias_gyro")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "update_bias_gyro";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.eskf_params.update_bias_gyro);
          parameters_interface_->declare_parameter(prefix_ + "eskf_params.update_bias_gyro", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "eskf_params.update_bias_acce")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "update_bias_gyro";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.eskf_params.update_bias_acce);
          parameters_interface_->declare_parameter(prefix_ + "eskf_params.update_bias_acce", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "eskf_params.odom_vel_var")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "odom_vel_var";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.eskf_params.odom_vel_var);
          parameters_interface_->declare_parameter(prefix_ + "eskf_params.odom_vel_var", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "eskf_params.odom_ang_var")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "odom_ang_var";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.eskf_params.odom_ang_var);
          parameters_interface_->declare_parameter(prefix_ + "eskf_params.odom_ang_var", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "eskf_params.odom_span")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "odom_span";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.eskf_params.odom_span);
          parameters_interface_->declare_parameter(prefix_ + "eskf_params.odom_span", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "init_imu_params.imu_rate")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "imu_rate";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.init_imu_params.imu_rate);
          parameters_interface_->declare_parameter(prefix_ + "init_imu_params.imu_rate", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "init_imu_params.init_time_seconds")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "init_time_seconds";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.init_imu_params.init_time_seconds);
          parameters_interface_->declare_parameter(prefix_ + "init_imu_params.init_time_seconds", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "init_imu_params.max_static_gyro_var")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "max_static_gyro_var";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.init_imu_params.max_static_gyro_var);
          parameters_interface_->declare_parameter(prefix_ + "init_imu_params.max_static_gyro_var", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "init_imu_params.max_static_acce_var")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "max_static_acce_var";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.init_imu_params.max_static_acce_var);
          parameters_interface_->declare_parameter(prefix_ + "init_imu_params.max_static_acce_var", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "init_imu_params.gravity_norm")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "gravity_norm";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.init_imu_params.gravity_norm);
          parameters_interface_->declare_parameter(prefix_ + "init_imu_params.gravity_norm", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "scan_registration_params.registration_type")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = " ICP, GICP, GICPOMP,FASTGICP, FASTVGICP, FASTCUDAGICP, NDT, NDTOMP";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.scan_registration_params.registration_type);
          parameters_interface_->declare_parameter(prefix_ + "scan_registration_params.registration_type", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "scan_registration_params.map_voxel_size")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "map_voxel_size";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.scan_registration_params.map_voxel_size);
          parameters_interface_->declare_parameter(prefix_ + "scan_registration_params.map_voxel_size", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "scan_registration_params.scan_voxel_size")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "scan_voxel_size";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.scan_registration_params.scan_voxel_size);
          parameters_interface_->declare_parameter(prefix_ + "scan_registration_params.scan_voxel_size", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "scan_registration_params.resolution")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "resolution";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.scan_registration_params.resolution);
          parameters_interface_->declare_parameter(prefix_ + "scan_registration_params.resolution", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "scan_registration_params.thread_nums")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "thread_nums";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.scan_registration_params.thread_nums);
          parameters_interface_->declare_parameter(prefix_ + "scan_registration_params.thread_nums", parameter, descriptor);
      }
      // get parameters and fill struct fields
      rclcpp::Parameter param;
      param = parameters_interface_->get_parameter(prefix_ + "main_params.use_debug_mode");
      RCLCPP_DEBUG_STREAM(logger_, (prefix_ + "main_params.use_debug_mode") << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.main_params.use_debug_mode = param.as_bool();
      param = parameters_interface_->get_parameter(prefix_ + "main_params.lidar_topic_name");
      RCLCPP_DEBUG_STREAM(logger_, (prefix_ + "main_params.lidar_topic_name") << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.main_params.lidar_topic_name = param.as_string();
      param = parameters_interface_->get_parameter(prefix_ + "main_params.imu_topic_name");
      RCLCPP_DEBUG_STREAM(logger_, (prefix_ + "main_params.imu_topic_name") << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.main_params.imu_topic_name = param.as_string();
      param = parameters_interface_->get_parameter(prefix_ + "main_params.relocation_map_name");
      RCLCPP_DEBUG_STREAM(logger_, (prefix_ + "main_params.relocation_map_name") << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.main_params.relocation_map_name = param.as_string();
      param = parameters_interface_->get_parameter(prefix_ + "main_params.use_undistorted");
      RCLCPP_DEBUG_STREAM(logger_, (prefix_ + "main_params.use_undistorted") << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.main_params.use_undistorted = param.as_bool();
      param = parameters_interface_->get_parameter(prefix_ + "main_params.use_odom");
      RCLCPP_DEBUG_STREAM(logger_, (prefix_ + "main_params.use_odom") << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.main_params.use_odom = param.as_bool();
      param = parameters_interface_->get_parameter(prefix_ + "main_params.wheel_velocity_ratio");
      RCLCPP_DEBUG_STREAM(logger_, (prefix_ + "main_params.wheel_velocity_ratio") << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.main_params.wheel_velocity_ratio = param.as_double();
      param = parameters_interface_->get_parameter(prefix_ + "main_params.extrinsic_Tbl");
      RCLCPP_DEBUG_STREAM(logger_, (prefix_ + "main_params.extrinsic_Tbl") << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.main_params.extrinsic_Tbl = param.as_double_array();
      param = parameters_interface_->get_parameter(prefix_ + "main_params.motors_position");
      RCLCPP_DEBUG_STREAM(logger_, (prefix_ + "main_params.motors_position") << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.main_params.motors_position = param.as_double_array();
      param = parameters_interface_->get_parameter(prefix_ + "eskf_params.imu_dt");
      RCLCPP_DEBUG_STREAM(logger_, (prefix_ + "eskf_params.imu_dt") << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.eskf_params.imu_dt = param.as_double();
      param = parameters_interface_->get_parameter(prefix_ + "eskf_params.gyro_var");
      RCLCPP_DEBUG_STREAM(logger_, (prefix_ + "eskf_params.gyro_var") << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.eskf_params.gyro_var = param.as_double();
      param = parameters_interface_->get_parameter(prefix_ + "eskf_params.acce_var");
      RCLCPP_DEBUG_STREAM(logger_, (prefix_ + "eskf_params.acce_var") << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.eskf_params.acce_var = param.as_double();
      param = parameters_interface_->get_parameter(prefix_ + "eskf_params.bias_gyro_var");
      RCLCPP_DEBUG_STREAM(logger_, (prefix_ + "eskf_params.bias_gyro_var") << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.eskf_params.bias_gyro_var = param.as_double();
      param = parameters_interface_->get_parameter(prefix_ + "eskf_params.bias_acce_var");
      RCLCPP_DEBUG_STREAM(logger_, (prefix_ + "eskf_params.bias_acce_var") << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.eskf_params.bias_acce_var = param.as_double();
      param = parameters_interface_->get_parameter(prefix_ + "eskf_params.update_bias_gyro");
      RCLCPP_DEBUG_STREAM(logger_, (prefix_ + "eskf_params.update_bias_gyro") << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.eskf_params.update_bias_gyro = param.as_bool();
      param = parameters_interface_->get_parameter(prefix_ + "eskf_params.update_bias_acce");
      RCLCPP_DEBUG_STREAM(logger_, (prefix_ + "eskf_params.update_bias_acce") << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.eskf_params.update_bias_acce = param.as_bool();
      param = parameters_interface_->get_parameter(prefix_ + "eskf_params.odom_vel_var");
      RCLCPP_DEBUG_STREAM(logger_, (prefix_ + "eskf_params.odom_vel_var") << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.eskf_params.odom_vel_var = param.as_double();
      param = parameters_interface_->get_parameter(prefix_ + "eskf_params.odom_ang_var");
      RCLCPP_DEBUG_STREAM(logger_, (prefix_ + "eskf_params.odom_ang_var") << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.eskf_params.odom_ang_var = param.as_double();
      param = parameters_interface_->get_parameter(prefix_ + "eskf_params.odom_span");
      RCLCPP_DEBUG_STREAM(logger_, (prefix_ + "eskf_params.odom_span") << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.eskf_params.odom_span = param.as_double();
      param = parameters_interface_->get_parameter(prefix_ + "init_imu_params.imu_rate");
      RCLCPP_DEBUG_STREAM(logger_, (prefix_ + "init_imu_params.imu_rate") << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.init_imu_params.imu_rate = param.as_int();
      param = parameters_interface_->get_parameter(prefix_ + "init_imu_params.init_time_seconds");
      RCLCPP_DEBUG_STREAM(logger_, (prefix_ + "init_imu_params.init_time_seconds") << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.init_imu_params.init_time_seconds = param.as_double();
      param = parameters_interface_->get_parameter(prefix_ + "init_imu_params.max_static_gyro_var");
      RCLCPP_DEBUG_STREAM(logger_, (prefix_ + "init_imu_params.max_static_gyro_var") << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.init_imu_params.max_static_gyro_var = param.as_double();
      param = parameters_interface_->get_parameter(prefix_ + "init_imu_params.max_static_acce_var");
      RCLCPP_DEBUG_STREAM(logger_, (prefix_ + "init_imu_params.max_static_acce_var") << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.init_imu_params.max_static_acce_var = param.as_double();
      param = parameters_interface_->get_parameter(prefix_ + "init_imu_params.gravity_norm");
      RCLCPP_DEBUG_STREAM(logger_, (prefix_ + "init_imu_params.gravity_norm") << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.init_imu_params.gravity_norm = param.as_double();
      param = parameters_interface_->get_parameter(prefix_ + "scan_registration_params.registration_type");
      RCLCPP_DEBUG_STREAM(logger_, (prefix_ + "scan_registration_params.registration_type") << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.scan_registration_params.registration_type = param.as_string();
      param = parameters_interface_->get_parameter(prefix_ + "scan_registration_params.map_voxel_size");
      RCLCPP_DEBUG_STREAM(logger_, (prefix_ + "scan_registration_params.map_voxel_size") << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.scan_registration_params.map_voxel_size = param.as_double();
      param = parameters_interface_->get_parameter(prefix_ + "scan_registration_params.scan_voxel_size");
      RCLCPP_DEBUG_STREAM(logger_, (prefix_ + "scan_registration_params.scan_voxel_size") << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.scan_registration_params.scan_voxel_size = param.as_double();
      param = parameters_interface_->get_parameter(prefix_ + "scan_registration_params.resolution");
      RCLCPP_DEBUG_STREAM(logger_, (prefix_ + "scan_registration_params.resolution") << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.scan_registration_params.resolution = param.as_double();
      param = parameters_interface_->get_parameter(prefix_ + "scan_registration_params.thread_nums");
      RCLCPP_DEBUG_STREAM(logger_, (prefix_ + "scan_registration_params.thread_nums") << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.scan_registration_params.thread_nums = param.as_int();


      updated_params.__stamp = clock_.now();
      update_internal_params(updated_params);
    }

    using userParameterUpdateCB = std::function<void(const Params&)>;
    void setUserCallback(const userParameterUpdateCB& callback){
      user_callback_ = callback;
    }

    void clearUserCallback(){
      user_callback_ = {};
    }

    private:
      void update_internal_params(Params updated_params) {
        std::lock_guard<std::mutex> lock(mutex_);
        params_ = std::move(updated_params);
      }

      std::string prefix_;
      Params params_;
      rclcpp::Clock clock_;
      std::shared_ptr<rclcpp::node_interfaces::OnSetParametersCallbackHandle> handle_;
      std::shared_ptr<rclcpp::node_interfaces::NodeParametersInterface> parameters_interface_;
      userParameterUpdateCB user_callback_;

      rclcpp::Logger logger_;
      std::mutex mutable mutex_;
  };

} // namespace msf_localizer_params
