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



namespace lanelet2_planner_parameters {

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
        bool debug = false;
        double reference_speed = 1.5;
        bool allow_lane_change = true;
        bool allow_lane_invert = true;
        double w_smooth = 10.0;
        double w_ref = 5.0;
        double w_length = 10.0;
        bool test_mode = false;
        // for detecting if the parameter struct has been updated
        rclcpp::Time __stamp;
    };
    struct StackParams {
        bool debug = false;
        double reference_speed = 1.5;
        bool allow_lane_change = true;
        bool allow_lane_invert = true;
        double w_smooth = 10.0;
        double w_ref = 5.0;
        double w_length = 10.0;
        bool test_mode = false;
    };

  class ParamListener{
  public:
    // throws rclcpp::exceptions::InvalidParameterValueException on initialization if invalid parameter are loaded
    template <typename NodeT>
    ParamListener(NodeT node, std::string const& prefix = "")
    : ParamListener(node->get_node_parameters_interface(), node->get_logger(), prefix) {}

    ParamListener(const std::shared_ptr<rclcpp::node_interfaces::NodeParametersInterface>& parameters_interface,
                  std::string const& prefix = "")
    : ParamListener(parameters_interface, rclcpp::get_logger("lanelet2_planner_parameters"), prefix) {
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
      output.debug = params.debug;
      output.reference_speed = params.reference_speed;
      output.allow_lane_change = params.allow_lane_change;
      output.allow_lane_invert = params.allow_lane_invert;
      output.w_smooth = params.w_smooth;
      output.w_ref = params.w_ref;
      output.w_length = params.w_length;
      output.test_mode = params.test_mode;

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
        if (param.get_name() == (prefix_ + "debug")) {
            updated_params.debug = param.as_bool();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "reference_speed")) {
            updated_params.reference_speed = param.as_double();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "allow_lane_change")) {
            updated_params.allow_lane_change = param.as_bool();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "allow_lane_invert")) {
            updated_params.allow_lane_invert = param.as_bool();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "w_smooth")) {
            updated_params.w_smooth = param.as_double();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "w_ref")) {
            updated_params.w_ref = param.as_double();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "w_length")) {
            updated_params.w_length = param.as_double();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "test_mode")) {
            updated_params.test_mode = param.as_bool();
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
      if (!parameters_interface_->has_parameter(prefix_ + "debug")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "debug mode";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.debug);
          parameters_interface_->declare_parameter(prefix_ + "debug", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "reference_speed")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "reference speed";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.reference_speed);
          parameters_interface_->declare_parameter(prefix_ + "reference_speed", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "allow_lane_change")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "legacy compatibility parameter; lanelet routes use mapped lateral connections";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.allow_lane_change);
          parameters_interface_->declare_parameter(prefix_ + "allow_lane_change", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "allow_lane_invert")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "legacy compatibility parameter; lanelet routes are bidirectional";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.allow_lane_invert);
          parameters_interface_->declare_parameter(prefix_ + "allow_lane_invert", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "w_smooth")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "smooth weight";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.w_smooth);
          parameters_interface_->declare_parameter(prefix_ + "w_smooth", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "w_ref")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "reference weight";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.w_ref);
          parameters_interface_->declare_parameter(prefix_ + "w_ref", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "w_length")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "length weight";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.w_length);
          parameters_interface_->declare_parameter(prefix_ + "w_length", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "test_mode")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "test mode";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.test_mode);
          parameters_interface_->declare_parameter(prefix_ + "test_mode", parameter, descriptor);
      }
      // get parameters and fill struct fields
      rclcpp::Parameter param;
      param = parameters_interface_->get_parameter(prefix_ + "debug");
      RCLCPP_DEBUG_STREAM(logger_, (prefix_ + "debug") << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.debug = param.as_bool();
      param = parameters_interface_->get_parameter(prefix_ + "reference_speed");
      RCLCPP_DEBUG_STREAM(logger_, (prefix_ + "reference_speed") << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.reference_speed = param.as_double();
      param = parameters_interface_->get_parameter(prefix_ + "allow_lane_change");
      RCLCPP_DEBUG_STREAM(logger_, (prefix_ + "allow_lane_change") << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.allow_lane_change = param.as_bool();
      param = parameters_interface_->get_parameter(prefix_ + "allow_lane_invert");
      RCLCPP_DEBUG_STREAM(logger_, (prefix_ + "allow_lane_invert") << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.allow_lane_invert = param.as_bool();
      param = parameters_interface_->get_parameter(prefix_ + "w_smooth");
      RCLCPP_DEBUG_STREAM(logger_, (prefix_ + "w_smooth") << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.w_smooth = param.as_double();
      param = parameters_interface_->get_parameter(prefix_ + "w_ref");
      RCLCPP_DEBUG_STREAM(logger_, (prefix_ + "w_ref") << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.w_ref = param.as_double();
      param = parameters_interface_->get_parameter(prefix_ + "w_length");
      RCLCPP_DEBUG_STREAM(logger_, (prefix_ + "w_length") << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.w_length = param.as_double();
      param = parameters_interface_->get_parameter(prefix_ + "test_mode");
      RCLCPP_DEBUG_STREAM(logger_, (prefix_ + "test_mode") << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.test_mode = param.as_bool();


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

} // namespace lanelet2_planner_parameters
