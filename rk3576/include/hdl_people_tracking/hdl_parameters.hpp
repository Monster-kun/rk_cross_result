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



namespace hdl_parameters {

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
        std::string input_info = "lidar";
        std::string depth_topic = "/depth/image_raw";
        std::string depth_info_topic = "/depth/camera_info";
        double downsample_resolution = 0.2;
        std::vector<int64_t> cluster_pts_range = {20, 2048};
        std::vector<double> cluster_min_size = {0.2, 0.2, 0.3};
        std::vector<double> cluster_max_size = {1.2, 1.2, 1.8};
        bool enable_classification = false;
        double remove_trace_thresh = 1.0;
        double human_radius = 0.8;
        // for detecting if the parameter struct has been updated
        rclcpp::Time __stamp;
    };
    struct StackParams {
        double downsample_resolution = 0.2;
        bool enable_classification = false;
        double remove_trace_thresh = 1.0;
        double human_radius = 0.8;
    };

  class ParamListener{
  public:
    // throws rclcpp::exceptions::InvalidParameterValueException on initialization if invalid parameter are loaded
    template <typename NodeT>
    ParamListener(NodeT node, std::string const& prefix = "")
    : ParamListener(node->get_node_parameters_interface(), node->get_logger(), prefix) {}

    ParamListener(const std::shared_ptr<rclcpp::node_interfaces::NodeParametersInterface>& parameters_interface,
                  std::string const& prefix = "")
    : ParamListener(parameters_interface, rclcpp::get_logger("hdl_parameters"), prefix) {
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
      output.downsample_resolution = params.downsample_resolution;
      output.enable_classification = params.enable_classification;
      output.remove_trace_thresh = params.remove_trace_thresh;
      output.human_radius = params.human_radius;

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
        if (param.get_name() == (prefix_ + "input_info")) {
            updated_params.input_info = param.as_string();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "depth_topic")) {
            updated_params.depth_topic = param.as_string();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "depth_info_topic")) {
            updated_params.depth_info_topic = param.as_string();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "downsample_resolution")) {
            updated_params.downsample_resolution = param.as_double();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "cluster_pts_range")) {
            updated_params.cluster_pts_range = param.as_integer_array();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "cluster_min_size")) {
            updated_params.cluster_min_size = param.as_double_array();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "cluster_max_size")) {
            updated_params.cluster_max_size = param.as_double_array();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "enable_classification")) {
            updated_params.enable_classification = param.as_bool();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "remove_trace_thresh")) {
            updated_params.remove_trace_thresh = param.as_double();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "human_radius")) {
            updated_params.human_radius = param.as_double();
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
      if (!parameters_interface_->has_parameter(prefix_ + "input_info")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "lidar, yolo";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.input_info);
          parameters_interface_->declare_parameter(prefix_ + "input_info", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "depth_topic")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "depth image topic";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.depth_topic);
          parameters_interface_->declare_parameter(prefix_ + "depth_topic", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "depth_info_topic")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "depth camera info";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.depth_info_topic);
          parameters_interface_->declare_parameter(prefix_ + "depth_info_topic", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "downsample_resolution")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "downsample resolution";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.downsample_resolution);
          parameters_interface_->declare_parameter(prefix_ + "downsample_resolution", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "cluster_pts_range")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "min and max number of cluster points";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.cluster_pts_range);
          parameters_interface_->declare_parameter(prefix_ + "cluster_pts_range", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "cluster_min_size")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "min cluster size";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.cluster_min_size);
          parameters_interface_->declare_parameter(prefix_ + "cluster_min_size", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "cluster_max_size")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "max cluster size";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.cluster_max_size);
          parameters_interface_->declare_parameter(prefix_ + "cluster_max_size", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "enable_classification")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "enable classification";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.enable_classification);
          parameters_interface_->declare_parameter(prefix_ + "enable_classification", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "remove_trace_thresh")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "remove trace threshold";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.remove_trace_thresh);
          parameters_interface_->declare_parameter(prefix_ + "remove_trace_thresh", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "human_radius")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "human radius";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.human_radius);
          parameters_interface_->declare_parameter(prefix_ + "human_radius", parameter, descriptor);
      }
      // get parameters and fill struct fields
      rclcpp::Parameter param;
      param = parameters_interface_->get_parameter(prefix_ + "input_info");
      RCLCPP_DEBUG_STREAM(logger_, (prefix_ + "input_info") << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.input_info = param.as_string();
      param = parameters_interface_->get_parameter(prefix_ + "depth_topic");
      RCLCPP_DEBUG_STREAM(logger_, (prefix_ + "depth_topic") << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.depth_topic = param.as_string();
      param = parameters_interface_->get_parameter(prefix_ + "depth_info_topic");
      RCLCPP_DEBUG_STREAM(logger_, (prefix_ + "depth_info_topic") << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.depth_info_topic = param.as_string();
      param = parameters_interface_->get_parameter(prefix_ + "downsample_resolution");
      RCLCPP_DEBUG_STREAM(logger_, (prefix_ + "downsample_resolution") << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.downsample_resolution = param.as_double();
      param = parameters_interface_->get_parameter(prefix_ + "cluster_pts_range");
      RCLCPP_DEBUG_STREAM(logger_, (prefix_ + "cluster_pts_range") << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.cluster_pts_range = param.as_integer_array();
      param = parameters_interface_->get_parameter(prefix_ + "cluster_min_size");
      RCLCPP_DEBUG_STREAM(logger_, (prefix_ + "cluster_min_size") << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.cluster_min_size = param.as_double_array();
      param = parameters_interface_->get_parameter(prefix_ + "cluster_max_size");
      RCLCPP_DEBUG_STREAM(logger_, (prefix_ + "cluster_max_size") << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.cluster_max_size = param.as_double_array();
      param = parameters_interface_->get_parameter(prefix_ + "enable_classification");
      RCLCPP_DEBUG_STREAM(logger_, (prefix_ + "enable_classification") << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.enable_classification = param.as_bool();
      param = parameters_interface_->get_parameter(prefix_ + "remove_trace_thresh");
      RCLCPP_DEBUG_STREAM(logger_, (prefix_ + "remove_trace_thresh") << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.remove_trace_thresh = param.as_double();
      param = parameters_interface_->get_parameter(prefix_ + "human_radius");
      RCLCPP_DEBUG_STREAM(logger_, (prefix_ + "human_radius") << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.human_radius = param.as_double();


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

} // namespace hdl_parameters
