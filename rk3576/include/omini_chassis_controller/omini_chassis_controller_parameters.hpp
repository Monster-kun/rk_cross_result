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



namespace omini_chassis_controller {

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
        std::vector<std::string> motor_name = {"right_forward", "left_forward", "right_back", "left_back"};
        std::string drive_command_type = "velocity";
        std::string control_mode = "dual_ackermann";
        double velocity_limit = 10.0;
        struct DualAckermann {
            double limit_pivot = 30.0;
        } dual_ackermann;
        struct AnglePid {
            double p = 2.5;
            double i = 0.0;
            double d = 0.3;
        } angle_pid;
        // for detecting if the parameter struct has been updated
        rclcpp::Time __stamp;
    };
    struct StackParams {
        double velocity_limit = 10.0;
        struct DualAckermann {
            double limit_pivot = 30.0;
        } dual_ackermann;
        struct AnglePid {
            double p = 2.5;
            double i = 0.0;
            double d = 0.3;
        } angle_pid;
    };

  class ParamListener{
  public:
    // throws rclcpp::exceptions::InvalidParameterValueException on initialization if invalid parameter are loaded
    template <typename NodeT>
    ParamListener(NodeT node, std::string const& prefix = "")
    : ParamListener(node->get_node_parameters_interface(), node->get_logger(), prefix) {}

    ParamListener(const std::shared_ptr<rclcpp::node_interfaces::NodeParametersInterface>& parameters_interface,
                  std::string const& prefix = "")
    : ParamListener(parameters_interface, rclcpp::get_logger("omini_chassis_controller"), prefix) {
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
      output.dual_ackermann.limit_pivot = params.dual_ackermann.limit_pivot;
      output.angle_pid.p = params.angle_pid.p;
      output.angle_pid.i = params.angle_pid.i;
      output.angle_pid.d = params.angle_pid.d;
      output.velocity_limit = params.velocity_limit;

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
        if (param.get_name() == (prefix_ + "motor_name")) {
            updated_params.motor_name = param.as_string_array();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "drive_command_type")) {
            if(auto validation_result = one_of<std::string>(param, {"velocity", "effort"});
              !validation_result) {
                return rsl::to_parameter_result_msg(validation_result);
            }
            updated_params.drive_command_type = param.as_string();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "control_mode")) {
            if(auto validation_result = one_of<std::string>(param, {"dual_ackermann", "four_wheel_drive", "test"});
              !validation_result) {
                return rsl::to_parameter_result_msg(validation_result);
            }
            updated_params.control_mode = param.as_string();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "dual_ackermann.limit_pivot")) {
            if(auto validation_result = bounds<double>(param, 10.0, 80.0);
              !validation_result) {
                return rsl::to_parameter_result_msg(validation_result);
            }
            updated_params.dual_ackermann.limit_pivot = param.as_double();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "angle_pid.p")) {
            updated_params.angle_pid.p = param.as_double();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "angle_pid.i")) {
            updated_params.angle_pid.i = param.as_double();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "angle_pid.d")) {
            updated_params.angle_pid.d = param.as_double();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "velocity_limit")) {
            updated_params.velocity_limit = param.as_double();
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
      if (!parameters_interface_->has_parameter(prefix_ + "motor_name")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "motor name";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.motor_name);
          parameters_interface_->declare_parameter(prefix_ + "motor_name", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "drive_command_type")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "cmd type";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.drive_command_type);
          parameters_interface_->declare_parameter(prefix_ + "drive_command_type", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "control_mode")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "control mode for pure pursuit. got four_wheel_drive or dual_ackermann";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.control_mode);
          parameters_interface_->declare_parameter(prefix_ + "control_mode", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "dual_ackermann.limit_pivot")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "rad of limit pivot of dual_ackermann";
          descriptor.read_only = false;
          descriptor.floating_point_range.resize(1);
          descriptor.floating_point_range.at(0).from_value = 10.0;
          descriptor.floating_point_range.at(0).to_value = 80.0;
          auto parameter = to_parameter_value(updated_params.dual_ackermann.limit_pivot);
          parameters_interface_->declare_parameter(prefix_ + "dual_ackermann.limit_pivot", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "angle_pid.p")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "motor name";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.angle_pid.p);
          parameters_interface_->declare_parameter(prefix_ + "angle_pid.p", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "angle_pid.i")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "motor name";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.angle_pid.i);
          parameters_interface_->declare_parameter(prefix_ + "angle_pid.i", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "angle_pid.d")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "motor name";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.angle_pid.d);
          parameters_interface_->declare_parameter(prefix_ + "angle_pid.d", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "velocity_limit")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "motor name";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.velocity_limit);
          parameters_interface_->declare_parameter(prefix_ + "velocity_limit", parameter, descriptor);
      }
      // get parameters and fill struct fields
      rclcpp::Parameter param;
      param = parameters_interface_->get_parameter(prefix_ + "motor_name");
      RCLCPP_DEBUG_STREAM(logger_, (prefix_ + "motor_name") << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.motor_name = param.as_string_array();
      param = parameters_interface_->get_parameter(prefix_ + "drive_command_type");
      RCLCPP_DEBUG_STREAM(logger_, (prefix_ + "drive_command_type") << ": " << param.get_type_name() << " = " << param.value_to_string());
      if(auto validation_result = one_of<std::string>(param, {"velocity", "effort"});
        !validation_result) {
          throw rclcpp::exceptions::InvalidParameterValueException(fmt::format("Invalid value set during initialization for parameter 'drive_command_type': {}", validation_result.error()));
      }
      updated_params.drive_command_type = param.as_string();
      param = parameters_interface_->get_parameter(prefix_ + "control_mode");
      RCLCPP_DEBUG_STREAM(logger_, (prefix_ + "control_mode") << ": " << param.get_type_name() << " = " << param.value_to_string());
      if(auto validation_result = one_of<std::string>(param, {"dual_ackermann", "four_wheel_drive", "test"});
        !validation_result) {
          throw rclcpp::exceptions::InvalidParameterValueException(fmt::format("Invalid value set during initialization for parameter 'control_mode': {}", validation_result.error()));
      }
      updated_params.control_mode = param.as_string();
      param = parameters_interface_->get_parameter(prefix_ + "dual_ackermann.limit_pivot");
      RCLCPP_DEBUG_STREAM(logger_, (prefix_ + "dual_ackermann.limit_pivot") << ": " << param.get_type_name() << " = " << param.value_to_string());
      if(auto validation_result = bounds<double>(param, 10.0, 80.0);
        !validation_result) {
          throw rclcpp::exceptions::InvalidParameterValueException(fmt::format("Invalid value set during initialization for parameter 'dual_ackermann.limit_pivot': {}", validation_result.error()));
      }
      updated_params.dual_ackermann.limit_pivot = param.as_double();
      param = parameters_interface_->get_parameter(prefix_ + "angle_pid.p");
      RCLCPP_DEBUG_STREAM(logger_, (prefix_ + "angle_pid.p") << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.angle_pid.p = param.as_double();
      param = parameters_interface_->get_parameter(prefix_ + "angle_pid.i");
      RCLCPP_DEBUG_STREAM(logger_, (prefix_ + "angle_pid.i") << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.angle_pid.i = param.as_double();
      param = parameters_interface_->get_parameter(prefix_ + "angle_pid.d");
      RCLCPP_DEBUG_STREAM(logger_, (prefix_ + "angle_pid.d") << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.angle_pid.d = param.as_double();
      param = parameters_interface_->get_parameter(prefix_ + "velocity_limit");
      RCLCPP_DEBUG_STREAM(logger_, (prefix_ + "velocity_limit") << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.velocity_limit = param.as_double();


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

} // namespace omini_chassis_controller
