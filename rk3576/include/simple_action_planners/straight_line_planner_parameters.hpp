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



namespace straight_line_planner_parameters {

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
        double lidar_leaf_size = 0.1;
        std::vector<double> lidar_cutoff_height = {-0.2, 0.5};
        double lidar_cutoff_range = 6.0;
        std::vector<double> lidar_offset = {0.38, 0.0, 0.0};
        double ort_voxel_size = 0.2;
        int64_t ort_max_points = 10;
        double ort_map_size = 15.0;
        double max_distance = 2.0;
        double desire_velocity = 0.5;
        // for detecting if the parameter struct has been updated
        rclcpp::Time __stamp;
    };
    struct StackParams {
        double lidar_leaf_size = 0.1;
        double lidar_cutoff_range = 6.0;
        double ort_voxel_size = 0.2;
        int64_t ort_max_points = 10;
        double ort_map_size = 15.0;
        double max_distance = 2.0;
        double desire_velocity = 0.5;
    };

  class ParamListener{
  public:
    // throws rclcpp::exceptions::InvalidParameterValueException on initialization if invalid parameter are loaded
    template <typename NodeT>
    ParamListener(NodeT node, std::string const& prefix = "")
    : ParamListener(node->get_node_parameters_interface(), node->get_logger(), prefix) {}

    ParamListener(const std::shared_ptr<rclcpp::node_interfaces::NodeParametersInterface>& parameters_interface,
                  std::string const& prefix = "")
    : ParamListener(parameters_interface, rclcpp::get_logger("straight_line_planner_parameters"), prefix) {
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
      output.lidar_leaf_size = params.lidar_leaf_size;
      output.lidar_cutoff_range = params.lidar_cutoff_range;
      output.ort_voxel_size = params.ort_voxel_size;
      output.ort_max_points = params.ort_max_points;
      output.ort_map_size = params.ort_map_size;
      output.max_distance = params.max_distance;
      output.desire_velocity = params.desire_velocity;

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
        if (param.get_name() == (prefix_ + "lidar_leaf_size")) {
            updated_params.lidar_leaf_size = param.as_double();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "lidar_cutoff_height")) {
            updated_params.lidar_cutoff_height = param.as_double_array();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "lidar_cutoff_range")) {
            updated_params.lidar_cutoff_range = param.as_double();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "lidar_offset")) {
            updated_params.lidar_offset = param.as_double_array();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "ort_voxel_size")) {
            updated_params.ort_voxel_size = param.as_double();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "ort_max_points")) {
            updated_params.ort_max_points = param.as_int();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "ort_map_size")) {
            updated_params.ort_map_size = param.as_double();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "max_distance")) {
            updated_params.max_distance = param.as_double();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "desire_velocity")) {
            updated_params.desire_velocity = param.as_double();
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
      if (!parameters_interface_->has_parameter(prefix_ + "lidar_leaf_size")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "lidar downsample size";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.lidar_leaf_size);
          parameters_interface_->declare_parameter(prefix_ + "lidar_leaf_size", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "lidar_cutoff_height")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "lidar cutoff height range";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.lidar_cutoff_height);
          parameters_interface_->declare_parameter(prefix_ + "lidar_cutoff_height", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "lidar_cutoff_range")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "lidar cutoff range";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.lidar_cutoff_range);
          parameters_interface_->declare_parameter(prefix_ + "lidar_cutoff_range", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "lidar_offset")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "lidar offset, real [0.4, 0.0, 0.0], fake[0.31, 0.0, 0.29]";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.lidar_offset);
          parameters_interface_->declare_parameter(prefix_ + "lidar_offset", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "ort_voxel_size")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "ort voxel size";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.ort_voxel_size);
          parameters_interface_->declare_parameter(prefix_ + "ort_voxel_size", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "ort_max_points")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "max points in each voxel";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.ort_max_points);
          parameters_interface_->declare_parameter(prefix_ + "ort_max_points", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "ort_map_size")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "ort map size 2d";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.ort_map_size);
          parameters_interface_->declare_parameter(prefix_ + "ort_map_size", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "max_distance")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "max distance to goal";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.max_distance);
          parameters_interface_->declare_parameter(prefix_ + "max_distance", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "desire_velocity")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "desire speed";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.desire_velocity);
          parameters_interface_->declare_parameter(prefix_ + "desire_velocity", parameter, descriptor);
      }
      // get parameters and fill struct fields
      rclcpp::Parameter param;
      param = parameters_interface_->get_parameter(prefix_ + "lidar_leaf_size");
      RCLCPP_DEBUG_STREAM(logger_, (prefix_ + "lidar_leaf_size") << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.lidar_leaf_size = param.as_double();
      param = parameters_interface_->get_parameter(prefix_ + "lidar_cutoff_height");
      RCLCPP_DEBUG_STREAM(logger_, (prefix_ + "lidar_cutoff_height") << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.lidar_cutoff_height = param.as_double_array();
      param = parameters_interface_->get_parameter(prefix_ + "lidar_cutoff_range");
      RCLCPP_DEBUG_STREAM(logger_, (prefix_ + "lidar_cutoff_range") << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.lidar_cutoff_range = param.as_double();
      param = parameters_interface_->get_parameter(prefix_ + "lidar_offset");
      RCLCPP_DEBUG_STREAM(logger_, (prefix_ + "lidar_offset") << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.lidar_offset = param.as_double_array();
      param = parameters_interface_->get_parameter(prefix_ + "ort_voxel_size");
      RCLCPP_DEBUG_STREAM(logger_, (prefix_ + "ort_voxel_size") << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.ort_voxel_size = param.as_double();
      param = parameters_interface_->get_parameter(prefix_ + "ort_max_points");
      RCLCPP_DEBUG_STREAM(logger_, (prefix_ + "ort_max_points") << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.ort_max_points = param.as_int();
      param = parameters_interface_->get_parameter(prefix_ + "ort_map_size");
      RCLCPP_DEBUG_STREAM(logger_, (prefix_ + "ort_map_size") << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.ort_map_size = param.as_double();
      param = parameters_interface_->get_parameter(prefix_ + "max_distance");
      RCLCPP_DEBUG_STREAM(logger_, (prefix_ + "max_distance") << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.max_distance = param.as_double();
      param = parameters_interface_->get_parameter(prefix_ + "desire_velocity");
      RCLCPP_DEBUG_STREAM(logger_, (prefix_ + "desire_velocity") << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.desire_velocity = param.as_double();


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

} // namespace straight_line_planner_parameters
