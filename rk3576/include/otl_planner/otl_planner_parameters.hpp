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



namespace otl_planner_parameters {

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
        double maximum_curvature = 1.2;
        double min_obstacle_height = 0.2;
        double obstacle_inflation_distance = 0.5;
        double clearance_distance = 0.3;
        double clearance_weight = 15.0;
        double lidar_leaf_size = 0.1;
        std::vector<double> lidar_range = {-0.3, 3.0};
        std::vector<double> lidar_offset = {0.4, 0.0, 0.0};
        double plan_distance = 6.0;
        double sdf_threshold = 0.0;
        double intensity_threshold = 1.0;
        double min_path_range = 2.0;
        double x_offset = 6.0;
        double y_offset = 6.0;
        double voxel_size = 0.05;
        std::vector<double> map_size = {15.0, 15.0, 1.0};
        int64_t max_iteration = 500;
        double weight_smooth = 3000.0;
        double weight_ref = 5.0;
        double max_iter_distance = 0.6;
        double maximum_velocity = 1.5;
        double maximum_acceleration = 1.0;
        // for detecting if the parameter struct has been updated
        rclcpp::Time __stamp;
    };
    struct StackParams {
        double maximum_curvature = 1.2;
        double min_obstacle_height = 0.2;
        double obstacle_inflation_distance = 0.5;
        double clearance_distance = 0.3;
        double clearance_weight = 15.0;
        double lidar_leaf_size = 0.1;
        double plan_distance = 6.0;
        double sdf_threshold = 0.0;
        double intensity_threshold = 1.0;
        double min_path_range = 2.0;
        double x_offset = 6.0;
        double y_offset = 6.0;
        double voxel_size = 0.05;
        int64_t max_iteration = 500;
        double weight_smooth = 3000.0;
        double weight_ref = 5.0;
        double max_iter_distance = 0.6;
        double maximum_velocity = 1.5;
        double maximum_acceleration = 1.0;
    };

  class ParamListener{
  public:
    // throws rclcpp::exceptions::InvalidParameterValueException on initialization if invalid parameter are loaded
    template <typename NodeT>
    ParamListener(NodeT node, std::string const& prefix = "")
    : ParamListener(node->get_node_parameters_interface(), node->get_logger(), prefix) {}

    ParamListener(const std::shared_ptr<rclcpp::node_interfaces::NodeParametersInterface>& parameters_interface,
                  std::string const& prefix = "")
    : ParamListener(parameters_interface, rclcpp::get_logger("otl_planner_parameters"), prefix) {
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
      output.maximum_curvature = params.maximum_curvature;
      output.min_obstacle_height = params.min_obstacle_height;
      output.obstacle_inflation_distance = params.obstacle_inflation_distance;
      output.clearance_distance = params.clearance_distance;
      output.clearance_weight = params.clearance_weight;
      output.lidar_leaf_size = params.lidar_leaf_size;
      output.plan_distance = params.plan_distance;
      output.sdf_threshold = params.sdf_threshold;
      output.intensity_threshold = params.intensity_threshold;
      output.min_path_range = params.min_path_range;
      output.x_offset = params.x_offset;
      output.y_offset = params.y_offset;
      output.voxel_size = params.voxel_size;
      output.max_iteration = params.max_iteration;
      output.weight_smooth = params.weight_smooth;
      output.weight_ref = params.weight_ref;
      output.max_iter_distance = params.max_iter_distance;
      output.maximum_velocity = params.maximum_velocity;
      output.maximum_acceleration = params.maximum_acceleration;

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
        if (param.get_name() == (prefix_ + "maximum_curvature")) {
            if(auto validation_result = gt<double>(param, 0.0);
              !validation_result) {
                return rsl::to_parameter_result_msg(validation_result);
            }
            updated_params.maximum_curvature = param.as_double();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "min_obstacle_height")) {
            if(auto validation_result = bounds<double>(param, -0.3, 1.0);
              !validation_result) {
                return rsl::to_parameter_result_msg(validation_result);
            }
            updated_params.min_obstacle_height = param.as_double();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "obstacle_inflation_distance")) {
            if(auto validation_result = gt_eq<double>(param, 0.0);
              !validation_result) {
                return rsl::to_parameter_result_msg(validation_result);
            }
            updated_params.obstacle_inflation_distance = param.as_double();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "clearance_distance")) {
            if(auto validation_result = gt_eq<double>(param, 0.0);
              !validation_result) {
                return rsl::to_parameter_result_msg(validation_result);
            }
            updated_params.clearance_distance = param.as_double();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "clearance_weight")) {
            if(auto validation_result = gt_eq<double>(param, 0.0);
              !validation_result) {
                return rsl::to_parameter_result_msg(validation_result);
            }
            updated_params.clearance_weight = param.as_double();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "lidar_leaf_size")) {
            updated_params.lidar_leaf_size = param.as_double();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "lidar_range")) {
            updated_params.lidar_range = param.as_double_array();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "lidar_offset")) {
            updated_params.lidar_offset = param.as_double_array();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "plan_distance")) {
            updated_params.plan_distance = param.as_double();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "sdf_threshold")) {
            updated_params.sdf_threshold = param.as_double();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "intensity_threshold")) {
            updated_params.intensity_threshold = param.as_double();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "min_path_range")) {
            updated_params.min_path_range = param.as_double();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "x_offset")) {
            updated_params.x_offset = param.as_double();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "y_offset")) {
            updated_params.y_offset = param.as_double();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "voxel_size")) {
            updated_params.voxel_size = param.as_double();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "map_size")) {
            updated_params.map_size = param.as_double_array();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "max_iteration")) {
            updated_params.max_iteration = param.as_int();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "weight_smooth")) {
            updated_params.weight_smooth = param.as_double();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "weight_ref")) {
            updated_params.weight_ref = param.as_double();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "max_iter_distance")) {
            updated_params.max_iter_distance = param.as_double();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "maximum_velocity")) {
            updated_params.maximum_velocity = param.as_double();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "maximum_acceleration")) {
            updated_params.maximum_acceleration = param.as_double();
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
      if (!parameters_interface_->has_parameter(prefix_ + "maximum_curvature")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "Maximum absolute path curvature (1/metre) for candidates and optimized paths. 1.2 corresponds to a minimum turning radius of about 0.83 m; restart after changing.";
          descriptor.read_only = true;
          descriptor.floating_point_range.resize(1);
          descriptor.floating_point_range.at(0).from_value = std::nextafter(0.0, std::numeric_limits<double>::infinity());
          descriptor.floating_point_range.at(0).to_value = std::numeric_limits<double>::max();
          auto parameter = to_parameter_value(updated_params.maximum_curvature);
          parameters_interface_->declare_parameter(prefix_ + "maximum_curvature", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "min_obstacle_height")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "Minimum obstacle Z in the motion-compensated planning base_link frame (metres). Filters source points and clips downward inflation; restart after changing.";
          descriptor.read_only = true;
          descriptor.floating_point_range.resize(1);
          descriptor.floating_point_range.at(0).from_value = -0.3;
          descriptor.floating_point_range.at(0).to_value = 1.0;
          auto parameter = to_parameter_value(updated_params.min_obstacle_height);
          parameters_interface_->declare_parameter(prefix_ + "min_obstacle_height", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "obstacle_inflation_distance")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "Shared square obstacle inflation in X/Y (metres per side). Zero disables horizontal inflation. Sole collision margin, applied once and shared by centreline filtering and optimization without lateral offsets; restart the planner after changing it.";
          descriptor.read_only = true;
          descriptor.floating_point_range.resize(1);
          descriptor.floating_point_range.at(0).from_value = 0.0;
          descriptor.floating_point_range.at(0).to_value = std::numeric_limits<double>::max();
          auto parameter = to_parameter_value(updated_params.obstacle_inflation_distance);
          parameters_interface_->declare_parameter(prefix_ + "obstacle_inflation_distance", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "clearance_distance")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "Soft clearance preference outside the already inflated XY cells, evaluated over the first 2 m. Does not change collision geometry.";
          descriptor.read_only = true;
          descriptor.floating_point_range.resize(1);
          descriptor.floating_point_range.at(0).from_value = 0.0;
          descriptor.floating_point_range.at(0).to_value = std::numeric_limits<double>::max();
          auto parameter = to_parameter_value(updated_params.clearance_distance);
          parameters_interface_->declare_parameter(prefix_ + "clearance_distance", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "clearance_weight")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "Weight of the shared mean/peak squared normalized clearance deficit in candidate and optimizer-result selection. Zero disables the preference.";
          descriptor.read_only = true;
          descriptor.floating_point_range.resize(1);
          descriptor.floating_point_range.at(0).from_value = 0.0;
          descriptor.floating_point_range.at(0).to_value = std::numeric_limits<double>::max();
          auto parameter = to_parameter_value(updated_params.clearance_weight);
          parameters_interface_->declare_parameter(prefix_ + "clearance_weight", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "lidar_leaf_size")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "lidar downsample size";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.lidar_leaf_size);
          parameters_interface_->declare_parameter(prefix_ + "lidar_leaf_size", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "lidar_range")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "lidar cutoff range";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.lidar_range);
          parameters_interface_->declare_parameter(prefix_ + "lidar_range", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "lidar_offset")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "lidar offset, real [0.4, 0.0, 0.0], fake[0.31, 0.0, 0.29]";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.lidar_offset);
          parameters_interface_->declare_parameter(prefix_ + "lidar_offset", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "plan_distance")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "opl planenr plan distance";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.plan_distance);
          parameters_interface_->declare_parameter(prefix_ + "plan_distance", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "sdf_threshold")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "sdf threshold for obstacle exclusion";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.sdf_threshold);
          parameters_interface_->declare_parameter(prefix_ + "sdf_threshold", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "intensity_threshold")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "intensity threshold of each path";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.intensity_threshold);
          parameters_interface_->declare_parameter(prefix_ + "intensity_threshold", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "min_path_range")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "mininum path range";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.min_path_range);
          parameters_interface_->declare_parameter(prefix_ + "min_path_range", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "x_offset")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "x offset of the plan grid";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.x_offset);
          parameters_interface_->declare_parameter(prefix_ + "x_offset", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "y_offset")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "y offset of the plan grid";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.y_offset);
          parameters_interface_->declare_parameter(prefix_ + "y_offset", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "voxel_size")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "voxel size";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.voxel_size);
          parameters_interface_->declare_parameter(prefix_ + "voxel_size", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "map_size")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "occ map size 2d";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.map_size);
          parameters_interface_->declare_parameter(prefix_ + "map_size", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "max_iteration")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "maximum iteration number";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.max_iteration);
          parameters_interface_->declare_parameter(prefix_ + "max_iteration", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "weight_smooth")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "smooth weight";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.weight_smooth);
          parameters_interface_->declare_parameter(prefix_ + "weight_smooth", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "weight_ref")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "reference weight";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.weight_ref);
          parameters_interface_->declare_parameter(prefix_ + "weight_ref", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "max_iter_distance")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "corridor expansion limit around the fixed initial path point; not an obstacle clearance";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.max_iter_distance);
          parameters_interface_->declare_parameter(prefix_ + "max_iter_distance", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "maximum_velocity")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "maximum velocity";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.maximum_velocity);
          parameters_interface_->declare_parameter(prefix_ + "maximum_velocity", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "maximum_acceleration")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "maximum acceleration";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.maximum_acceleration);
          parameters_interface_->declare_parameter(prefix_ + "maximum_acceleration", parameter, descriptor);
      }
      // get parameters and fill struct fields
      rclcpp::Parameter param;
      param = parameters_interface_->get_parameter(prefix_ + "maximum_curvature");
      RCLCPP_DEBUG_STREAM(logger_, (prefix_ + "maximum_curvature") << ": " << param.get_type_name() << " = " << param.value_to_string());
      if(auto validation_result = gt<double>(param, 0.0);
        !validation_result) {
          throw rclcpp::exceptions::InvalidParameterValueException(fmt::format("Invalid value set during initialization for parameter 'maximum_curvature': {}", validation_result.error()));
      }
      updated_params.maximum_curvature = param.as_double();
      param = parameters_interface_->get_parameter(prefix_ + "min_obstacle_height");
      RCLCPP_DEBUG_STREAM(logger_, (prefix_ + "min_obstacle_height") << ": " << param.get_type_name() << " = " << param.value_to_string());
      if(auto validation_result = bounds<double>(param, -0.3, 1.0);
        !validation_result) {
          throw rclcpp::exceptions::InvalidParameterValueException(fmt::format("Invalid value set during initialization for parameter 'min_obstacle_height': {}", validation_result.error()));
      }
      updated_params.min_obstacle_height = param.as_double();
      param = parameters_interface_->get_parameter(prefix_ + "obstacle_inflation_distance");
      RCLCPP_DEBUG_STREAM(logger_, (prefix_ + "obstacle_inflation_distance") << ": " << param.get_type_name() << " = " << param.value_to_string());
      if(auto validation_result = gt_eq<double>(param, 0.0);
        !validation_result) {
          throw rclcpp::exceptions::InvalidParameterValueException(fmt::format("Invalid value set during initialization for parameter 'obstacle_inflation_distance': {}", validation_result.error()));
      }
      updated_params.obstacle_inflation_distance = param.as_double();
      param = parameters_interface_->get_parameter(prefix_ + "clearance_distance");
      RCLCPP_DEBUG_STREAM(logger_, (prefix_ + "clearance_distance") << ": " << param.get_type_name() << " = " << param.value_to_string());
      if(auto validation_result = gt_eq<double>(param, 0.0);
        !validation_result) {
          throw rclcpp::exceptions::InvalidParameterValueException(fmt::format("Invalid value set during initialization for parameter 'clearance_distance': {}", validation_result.error()));
      }
      updated_params.clearance_distance = param.as_double();
      param = parameters_interface_->get_parameter(prefix_ + "clearance_weight");
      RCLCPP_DEBUG_STREAM(logger_, (prefix_ + "clearance_weight") << ": " << param.get_type_name() << " = " << param.value_to_string());
      if(auto validation_result = gt_eq<double>(param, 0.0);
        !validation_result) {
          throw rclcpp::exceptions::InvalidParameterValueException(fmt::format("Invalid value set during initialization for parameter 'clearance_weight': {}", validation_result.error()));
      }
      updated_params.clearance_weight = param.as_double();
      param = parameters_interface_->get_parameter(prefix_ + "lidar_leaf_size");
      RCLCPP_DEBUG_STREAM(logger_, (prefix_ + "lidar_leaf_size") << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.lidar_leaf_size = param.as_double();
      param = parameters_interface_->get_parameter(prefix_ + "lidar_range");
      RCLCPP_DEBUG_STREAM(logger_, (prefix_ + "lidar_range") << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.lidar_range = param.as_double_array();
      param = parameters_interface_->get_parameter(prefix_ + "lidar_offset");
      RCLCPP_DEBUG_STREAM(logger_, (prefix_ + "lidar_offset") << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.lidar_offset = param.as_double_array();
      param = parameters_interface_->get_parameter(prefix_ + "plan_distance");
      RCLCPP_DEBUG_STREAM(logger_, (prefix_ + "plan_distance") << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.plan_distance = param.as_double();
      param = parameters_interface_->get_parameter(prefix_ + "sdf_threshold");
      RCLCPP_DEBUG_STREAM(logger_, (prefix_ + "sdf_threshold") << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.sdf_threshold = param.as_double();
      param = parameters_interface_->get_parameter(prefix_ + "intensity_threshold");
      RCLCPP_DEBUG_STREAM(logger_, (prefix_ + "intensity_threshold") << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.intensity_threshold = param.as_double();
      param = parameters_interface_->get_parameter(prefix_ + "min_path_range");
      RCLCPP_DEBUG_STREAM(logger_, (prefix_ + "min_path_range") << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.min_path_range = param.as_double();
      param = parameters_interface_->get_parameter(prefix_ + "x_offset");
      RCLCPP_DEBUG_STREAM(logger_, (prefix_ + "x_offset") << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.x_offset = param.as_double();
      param = parameters_interface_->get_parameter(prefix_ + "y_offset");
      RCLCPP_DEBUG_STREAM(logger_, (prefix_ + "y_offset") << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.y_offset = param.as_double();
      param = parameters_interface_->get_parameter(prefix_ + "voxel_size");
      RCLCPP_DEBUG_STREAM(logger_, (prefix_ + "voxel_size") << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.voxel_size = param.as_double();
      param = parameters_interface_->get_parameter(prefix_ + "map_size");
      RCLCPP_DEBUG_STREAM(logger_, (prefix_ + "map_size") << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.map_size = param.as_double_array();
      param = parameters_interface_->get_parameter(prefix_ + "max_iteration");
      RCLCPP_DEBUG_STREAM(logger_, (prefix_ + "max_iteration") << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.max_iteration = param.as_int();
      param = parameters_interface_->get_parameter(prefix_ + "weight_smooth");
      RCLCPP_DEBUG_STREAM(logger_, (prefix_ + "weight_smooth") << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.weight_smooth = param.as_double();
      param = parameters_interface_->get_parameter(prefix_ + "weight_ref");
      RCLCPP_DEBUG_STREAM(logger_, (prefix_ + "weight_ref") << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.weight_ref = param.as_double();
      param = parameters_interface_->get_parameter(prefix_ + "max_iter_distance");
      RCLCPP_DEBUG_STREAM(logger_, (prefix_ + "max_iter_distance") << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.max_iter_distance = param.as_double();
      param = parameters_interface_->get_parameter(prefix_ + "maximum_velocity");
      RCLCPP_DEBUG_STREAM(logger_, (prefix_ + "maximum_velocity") << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.maximum_velocity = param.as_double();
      param = parameters_interface_->get_parameter(prefix_ + "maximum_acceleration");
      RCLCPP_DEBUG_STREAM(logger_, (prefix_ + "maximum_acceleration") << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.maximum_acceleration = param.as_double();


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

} // namespace otl_planner_parameters
