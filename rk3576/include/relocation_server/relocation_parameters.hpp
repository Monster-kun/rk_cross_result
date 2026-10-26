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



namespace relocation_params {

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
        struct ScParams {
            double max_radius = 80.0;
            double max_theta = 360.0;
            int64_t num_rings = 20;
            int64_t num_sectors = 60;
            int64_t indexing_interval = 1;
            int64_t min_key_frame_seq_distance = 100;
            int64_t num_candidates = 10;
            double fast_alignment_search_ratio = 0.1;
            double scan_context_distance_thresh = 0.25;
            double lidar_height = 0.0;
            bool map_refinement_enable = true;
            int64_t max_refinement_candidates = 3;
            double candidate_merge_distance = 2.0;
            double candidate_merge_height = 1.0;
            double candidate_merge_angle_deg = 20.0;
            double ambiguity_score_margin = 0.03;
            double floor_ambiguity_score_margin = 0.1;
            double ambiguity_translation = 2.0;
        } sc_params;
        struct MapRefinementParams {
            double max_query_range = 70.0;
            double cache_grid_size = 5.0;
            int64_t cache_capacity = 4;
            int64_t ndt_max_iterations = 20;
            double ndt_step_size = 0.2;
            int64_t icp_max_iterations = 20;
            double icp_correspondence_distance = 1.0;
            double max_translation_delta = 8.0;
            double max_rotation_delta_deg = 30.0;
            double correspondence_distance = 0.75;
            double min_inlier_ratio = 0.65;
            double max_inlier_rmse = 0.35;
            int64_t sector_count = 12;
            int64_t min_occupied_sectors = 4;
            int64_t min_points_per_sector = 3;
            double min_sector_coverage = 0.6;
        } map_refinement_params;
        struct BtcParams {
            bool is_high_fly = false;
            bool parallel_stl_enable = true;
            int64_t parallel_stl_min_size = 256;
            int64_t skip_near_num = -1;
            double score_threshold = 0.15;
        } btc_params;
        struct NdtParams {
            double resolution = 1.0;
            double step_size = 0.1;
            double transformation_epsilon = 0.01;
            int64_t max_iterations = 40;
            int64_t num_threads = 4;
            int64_t neighborhood = 2;
            double source_leaf_size = 0.5;
            double target_leaf_size = 0.5;
            int64_t min_points = 50;
            double max_fitness = 2.0;
        } ndt_params;
        struct Bbs3DParams {
            std::vector<double> min_rpy = {-0.02, -0.02, 0.0};
            std::vector<double> max_rpy = {0.02, 0.02, 6.28};
            double score_threshold_percentage = 0.9;
            double tar_leaf_size = 0.1;
            double src_leaf_size = 2.0;
            double min_scan_range = 0.0;
            double max_scan_range = 100.0;
            int64_t timeout_msec = 0;
            int64_t num_threads = 4;
        } bbs3d_params;
        // for detecting if the parameter struct has been updated
        rclcpp::Time __stamp;
    };
    struct StackParams {
        struct ScParams {
            double max_radius = 80.0;
            double max_theta = 360.0;
            int64_t num_rings = 20;
            int64_t num_sectors = 60;
            int64_t indexing_interval = 1;
            int64_t min_key_frame_seq_distance = 100;
            int64_t num_candidates = 10;
            double fast_alignment_search_ratio = 0.1;
            double scan_context_distance_thresh = 0.25;
            double lidar_height = 0.0;
            bool map_refinement_enable = true;
            int64_t max_refinement_candidates = 3;
            double candidate_merge_distance = 2.0;
            double candidate_merge_height = 1.0;
            double candidate_merge_angle_deg = 20.0;
            double ambiguity_score_margin = 0.03;
            double floor_ambiguity_score_margin = 0.1;
            double ambiguity_translation = 2.0;
        } sc_params;
        struct MapRefinementParams {
            double max_query_range = 70.0;
            double cache_grid_size = 5.0;
            int64_t cache_capacity = 4;
            int64_t ndt_max_iterations = 20;
            double ndt_step_size = 0.2;
            int64_t icp_max_iterations = 20;
            double icp_correspondence_distance = 1.0;
            double max_translation_delta = 8.0;
            double max_rotation_delta_deg = 30.0;
            double correspondence_distance = 0.75;
            double min_inlier_ratio = 0.65;
            double max_inlier_rmse = 0.35;
            int64_t sector_count = 12;
            int64_t min_occupied_sectors = 4;
            int64_t min_points_per_sector = 3;
            double min_sector_coverage = 0.6;
        } map_refinement_params;
        struct BtcParams {
            bool is_high_fly = false;
            bool parallel_stl_enable = true;
            int64_t parallel_stl_min_size = 256;
            int64_t skip_near_num = -1;
            double score_threshold = 0.15;
        } btc_params;
        struct NdtParams {
            double resolution = 1.0;
            double step_size = 0.1;
            double transformation_epsilon = 0.01;
            int64_t max_iterations = 40;
            int64_t num_threads = 4;
            int64_t neighborhood = 2;
            double source_leaf_size = 0.5;
            double target_leaf_size = 0.5;
            int64_t min_points = 50;
            double max_fitness = 2.0;
        } ndt_params;
        struct Bbs3DParams {
            double score_threshold_percentage = 0.9;
            double tar_leaf_size = 0.1;
            double src_leaf_size = 2.0;
            double min_scan_range = 0.0;
            double max_scan_range = 100.0;
            int64_t timeout_msec = 0;
            int64_t num_threads = 4;
        } bbs3d_params;
    };

  class ParamListener{
  public:
    // throws rclcpp::exceptions::InvalidParameterValueException on initialization if invalid parameter are loaded
    template <typename NodeT>
    ParamListener(NodeT node, std::string const& prefix = "")
    : ParamListener(node->get_node_parameters_interface(), node->get_logger(), prefix) {}

    ParamListener(const std::shared_ptr<rclcpp::node_interfaces::NodeParametersInterface>& parameters_interface,
                  std::string const& prefix = "")
    : ParamListener(parameters_interface, rclcpp::get_logger("relocation_params"), prefix) {
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
      output.sc_params.max_radius = params.sc_params.max_radius;
      output.sc_params.max_theta = params.sc_params.max_theta;
      output.sc_params.num_rings = params.sc_params.num_rings;
      output.sc_params.num_sectors = params.sc_params.num_sectors;
      output.sc_params.indexing_interval = params.sc_params.indexing_interval;
      output.sc_params.min_key_frame_seq_distance = params.sc_params.min_key_frame_seq_distance;
      output.sc_params.num_candidates = params.sc_params.num_candidates;
      output.sc_params.fast_alignment_search_ratio = params.sc_params.fast_alignment_search_ratio;
      output.sc_params.scan_context_distance_thresh = params.sc_params.scan_context_distance_thresh;
      output.sc_params.lidar_height = params.sc_params.lidar_height;
      output.sc_params.map_refinement_enable = params.sc_params.map_refinement_enable;
      output.sc_params.max_refinement_candidates = params.sc_params.max_refinement_candidates;
      output.sc_params.candidate_merge_distance = params.sc_params.candidate_merge_distance;
      output.sc_params.candidate_merge_height = params.sc_params.candidate_merge_height;
      output.sc_params.candidate_merge_angle_deg = params.sc_params.candidate_merge_angle_deg;
      output.sc_params.ambiguity_score_margin = params.sc_params.ambiguity_score_margin;
      output.sc_params.floor_ambiguity_score_margin = params.sc_params.floor_ambiguity_score_margin;
      output.sc_params.ambiguity_translation = params.sc_params.ambiguity_translation;
      output.map_refinement_params.max_query_range = params.map_refinement_params.max_query_range;
      output.map_refinement_params.cache_grid_size = params.map_refinement_params.cache_grid_size;
      output.map_refinement_params.cache_capacity = params.map_refinement_params.cache_capacity;
      output.map_refinement_params.ndt_max_iterations = params.map_refinement_params.ndt_max_iterations;
      output.map_refinement_params.ndt_step_size = params.map_refinement_params.ndt_step_size;
      output.map_refinement_params.icp_max_iterations = params.map_refinement_params.icp_max_iterations;
      output.map_refinement_params.icp_correspondence_distance = params.map_refinement_params.icp_correspondence_distance;
      output.map_refinement_params.max_translation_delta = params.map_refinement_params.max_translation_delta;
      output.map_refinement_params.max_rotation_delta_deg = params.map_refinement_params.max_rotation_delta_deg;
      output.map_refinement_params.correspondence_distance = params.map_refinement_params.correspondence_distance;
      output.map_refinement_params.min_inlier_ratio = params.map_refinement_params.min_inlier_ratio;
      output.map_refinement_params.max_inlier_rmse = params.map_refinement_params.max_inlier_rmse;
      output.map_refinement_params.sector_count = params.map_refinement_params.sector_count;
      output.map_refinement_params.min_occupied_sectors = params.map_refinement_params.min_occupied_sectors;
      output.map_refinement_params.min_points_per_sector = params.map_refinement_params.min_points_per_sector;
      output.map_refinement_params.min_sector_coverage = params.map_refinement_params.min_sector_coverage;
      output.btc_params.is_high_fly = params.btc_params.is_high_fly;
      output.btc_params.parallel_stl_enable = params.btc_params.parallel_stl_enable;
      output.btc_params.parallel_stl_min_size = params.btc_params.parallel_stl_min_size;
      output.btc_params.skip_near_num = params.btc_params.skip_near_num;
      output.btc_params.score_threshold = params.btc_params.score_threshold;
      output.ndt_params.resolution = params.ndt_params.resolution;
      output.ndt_params.step_size = params.ndt_params.step_size;
      output.ndt_params.transformation_epsilon = params.ndt_params.transformation_epsilon;
      output.ndt_params.max_iterations = params.ndt_params.max_iterations;
      output.ndt_params.num_threads = params.ndt_params.num_threads;
      output.ndt_params.neighborhood = params.ndt_params.neighborhood;
      output.ndt_params.source_leaf_size = params.ndt_params.source_leaf_size;
      output.ndt_params.target_leaf_size = params.ndt_params.target_leaf_size;
      output.ndt_params.min_points = params.ndt_params.min_points;
      output.ndt_params.max_fitness = params.ndt_params.max_fitness;
      output.bbs3d_params.score_threshold_percentage = params.bbs3d_params.score_threshold_percentage;
      output.bbs3d_params.tar_leaf_size = params.bbs3d_params.tar_leaf_size;
      output.bbs3d_params.src_leaf_size = params.bbs3d_params.src_leaf_size;
      output.bbs3d_params.min_scan_range = params.bbs3d_params.min_scan_range;
      output.bbs3d_params.max_scan_range = params.bbs3d_params.max_scan_range;
      output.bbs3d_params.timeout_msec = params.bbs3d_params.timeout_msec;
      output.bbs3d_params.num_threads = params.bbs3d_params.num_threads;

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
        if (param.get_name() == (prefix_ + "sc_params.max_radius")) {
            updated_params.sc_params.max_radius = param.as_double();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "sc_params.max_theta")) {
            updated_params.sc_params.max_theta = param.as_double();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "sc_params.num_rings")) {
            updated_params.sc_params.num_rings = param.as_int();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "sc_params.num_sectors")) {
            updated_params.sc_params.num_sectors = param.as_int();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "sc_params.indexing_interval")) {
            updated_params.sc_params.indexing_interval = param.as_int();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "sc_params.min_key_frame_seq_distance")) {
            updated_params.sc_params.min_key_frame_seq_distance = param.as_int();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "sc_params.num_candidates")) {
            updated_params.sc_params.num_candidates = param.as_int();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "sc_params.fast_alignment_search_ratio")) {
            updated_params.sc_params.fast_alignment_search_ratio = param.as_double();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "sc_params.scan_context_distance_thresh")) {
            updated_params.sc_params.scan_context_distance_thresh = param.as_double();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "sc_params.lidar_height")) {
            updated_params.sc_params.lidar_height = param.as_double();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "sc_params.map_refinement_enable")) {
            updated_params.sc_params.map_refinement_enable = param.as_bool();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "sc_params.max_refinement_candidates")) {
            updated_params.sc_params.max_refinement_candidates = param.as_int();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "sc_params.candidate_merge_distance")) {
            updated_params.sc_params.candidate_merge_distance = param.as_double();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "sc_params.candidate_merge_height")) {
            updated_params.sc_params.candidate_merge_height = param.as_double();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "sc_params.candidate_merge_angle_deg")) {
            updated_params.sc_params.candidate_merge_angle_deg = param.as_double();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "sc_params.ambiguity_score_margin")) {
            updated_params.sc_params.ambiguity_score_margin = param.as_double();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "sc_params.floor_ambiguity_score_margin")) {
            updated_params.sc_params.floor_ambiguity_score_margin = param.as_double();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "sc_params.ambiguity_translation")) {
            updated_params.sc_params.ambiguity_translation = param.as_double();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "map_refinement_params.max_query_range")) {
            updated_params.map_refinement_params.max_query_range = param.as_double();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "map_refinement_params.cache_grid_size")) {
            updated_params.map_refinement_params.cache_grid_size = param.as_double();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "map_refinement_params.cache_capacity")) {
            updated_params.map_refinement_params.cache_capacity = param.as_int();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "map_refinement_params.ndt_max_iterations")) {
            updated_params.map_refinement_params.ndt_max_iterations = param.as_int();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "map_refinement_params.ndt_step_size")) {
            updated_params.map_refinement_params.ndt_step_size = param.as_double();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "map_refinement_params.icp_max_iterations")) {
            updated_params.map_refinement_params.icp_max_iterations = param.as_int();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "map_refinement_params.icp_correspondence_distance")) {
            updated_params.map_refinement_params.icp_correspondence_distance = param.as_double();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "map_refinement_params.max_translation_delta")) {
            updated_params.map_refinement_params.max_translation_delta = param.as_double();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "map_refinement_params.max_rotation_delta_deg")) {
            updated_params.map_refinement_params.max_rotation_delta_deg = param.as_double();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "map_refinement_params.correspondence_distance")) {
            updated_params.map_refinement_params.correspondence_distance = param.as_double();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "map_refinement_params.min_inlier_ratio")) {
            updated_params.map_refinement_params.min_inlier_ratio = param.as_double();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "map_refinement_params.max_inlier_rmse")) {
            updated_params.map_refinement_params.max_inlier_rmse = param.as_double();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "map_refinement_params.sector_count")) {
            updated_params.map_refinement_params.sector_count = param.as_int();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "map_refinement_params.min_occupied_sectors")) {
            updated_params.map_refinement_params.min_occupied_sectors = param.as_int();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "map_refinement_params.min_points_per_sector")) {
            updated_params.map_refinement_params.min_points_per_sector = param.as_int();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "map_refinement_params.min_sector_coverage")) {
            updated_params.map_refinement_params.min_sector_coverage = param.as_double();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "btc_params.is_high_fly")) {
            updated_params.btc_params.is_high_fly = param.as_bool();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "btc_params.parallel_stl_enable")) {
            updated_params.btc_params.parallel_stl_enable = param.as_bool();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "btc_params.parallel_stl_min_size")) {
            updated_params.btc_params.parallel_stl_min_size = param.as_int();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "btc_params.skip_near_num")) {
            updated_params.btc_params.skip_near_num = param.as_int();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "btc_params.score_threshold")) {
            updated_params.btc_params.score_threshold = param.as_double();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "ndt_params.resolution")) {
            updated_params.ndt_params.resolution = param.as_double();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "ndt_params.step_size")) {
            updated_params.ndt_params.step_size = param.as_double();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "ndt_params.transformation_epsilon")) {
            updated_params.ndt_params.transformation_epsilon = param.as_double();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "ndt_params.max_iterations")) {
            updated_params.ndt_params.max_iterations = param.as_int();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "ndt_params.num_threads")) {
            updated_params.ndt_params.num_threads = param.as_int();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "ndt_params.neighborhood")) {
            updated_params.ndt_params.neighborhood = param.as_int();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "ndt_params.source_leaf_size")) {
            updated_params.ndt_params.source_leaf_size = param.as_double();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "ndt_params.target_leaf_size")) {
            updated_params.ndt_params.target_leaf_size = param.as_double();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "ndt_params.min_points")) {
            updated_params.ndt_params.min_points = param.as_int();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "ndt_params.max_fitness")) {
            updated_params.ndt_params.max_fitness = param.as_double();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "bbs3d_params.min_rpy")) {
            updated_params.bbs3d_params.min_rpy = param.as_double_array();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "bbs3d_params.max_rpy")) {
            updated_params.bbs3d_params.max_rpy = param.as_double_array();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "bbs3d_params.score_threshold_percentage")) {
            updated_params.bbs3d_params.score_threshold_percentage = param.as_double();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "bbs3d_params.tar_leaf_size")) {
            updated_params.bbs3d_params.tar_leaf_size = param.as_double();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "bbs3d_params.src_leaf_size")) {
            updated_params.bbs3d_params.src_leaf_size = param.as_double();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "bbs3d_params.min_scan_range")) {
            updated_params.bbs3d_params.min_scan_range = param.as_double();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "bbs3d_params.max_scan_range")) {
            updated_params.bbs3d_params.max_scan_range = param.as_double();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "bbs3d_params.timeout_msec")) {
            updated_params.bbs3d_params.timeout_msec = param.as_int();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "bbs3d_params.num_threads")) {
            updated_params.bbs3d_params.num_threads = param.as_int();
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
      if (!parameters_interface_->has_parameter(prefix_ + "sc_params.max_radius")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "max_radius";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.sc_params.max_radius);
          parameters_interface_->declare_parameter(prefix_ + "sc_params.max_radius", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "sc_params.max_theta")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "max_theta";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.sc_params.max_theta);
          parameters_interface_->declare_parameter(prefix_ + "sc_params.max_theta", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "sc_params.num_rings")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "num_rings";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.sc_params.num_rings);
          parameters_interface_->declare_parameter(prefix_ + "sc_params.num_rings", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "sc_params.num_sectors")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "num_sectors";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.sc_params.num_sectors);
          parameters_interface_->declare_parameter(prefix_ + "sc_params.num_sectors", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "sc_params.indexing_interval")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "indexing_interval";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.sc_params.indexing_interval);
          parameters_interface_->declare_parameter(prefix_ + "sc_params.indexing_interval", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "sc_params.min_key_frame_seq_distance")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "min_key_frame_seq_distance";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.sc_params.min_key_frame_seq_distance);
          parameters_interface_->declare_parameter(prefix_ + "sc_params.min_key_frame_seq_distance", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "sc_params.num_candidates")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "num_candidates";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.sc_params.num_candidates);
          parameters_interface_->declare_parameter(prefix_ + "sc_params.num_candidates", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "sc_params.fast_alignment_search_ratio")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "fast_alignment_search_ratio";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.sc_params.fast_alignment_search_ratio);
          parameters_interface_->declare_parameter(prefix_ + "sc_params.fast_alignment_search_ratio", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "sc_params.scan_context_distance_thresh")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "scan_context_distance_thresh";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.sc_params.scan_context_distance_thresh);
          parameters_interface_->declare_parameter(prefix_ + "sc_params.scan_context_distance_thresh", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "sc_params.lidar_height")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "height offset used when building the SC database";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.sc_params.lidar_height);
          parameters_interface_->declare_parameter(prefix_ + "sc_params.lidar_height", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "sc_params.map_refinement_enable")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "refine SC candidates against cached map submaps; false restores historical-frame NDT";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.sc_params.map_refinement_enable);
          parameters_interface_->declare_parameter(prefix_ + "sc_params.map_refinement_enable", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "sc_params.max_refinement_candidates")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "maximum SC seeds geometrically refined per request, including failed representatives";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.sc_params.max_refinement_candidates);
          parameters_interface_->declare_parameter(prefix_ + "sc_params.max_refinement_candidates", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "sc_params.candidate_merge_distance")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "translation distance in meters for merging seeds after a representative passes";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.sc_params.candidate_merge_distance);
          parameters_interface_->declare_parameter(prefix_ + "sc_params.candidate_merge_distance", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "sc_params.candidate_merge_height")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "maximum height difference for merging seeds or verified hypotheses, meters";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.sc_params.candidate_merge_height);
          parameters_interface_->declare_parameter(prefix_ + "sc_params.candidate_merge_height", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "sc_params.candidate_merge_angle_deg")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "rotation distance in degrees for merging pose hypotheses";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.sc_params.candidate_merge_angle_deg);
          parameters_interface_->declare_parameter(prefix_ + "sc_params.candidate_merge_angle_deg", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "sc_params.ambiguity_score_margin")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "reject distinct verified locations whose geometric scores differ by at most this value";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.sc_params.ambiguity_score_margin);
          parameters_interface_->declare_parameter(prefix_ + "sc_params.ambiguity_score_margin", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "sc_params.floor_ambiguity_score_margin")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "larger required geometric score separation for competing floor hypotheses";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.sc_params.floor_ambiguity_score_margin);
          parameters_interface_->declare_parameter(prefix_ + "sc_params.floor_ambiguity_score_margin", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "sc_params.ambiguity_translation")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "distance distinguishing verified locations for ambiguity rejection, meters";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.sc_params.ambiguity_translation);
          parameters_interface_->declare_parameter(prefix_ + "sc_params.ambiguity_translation", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "map_refinement_params.max_query_range")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "query range used by map refinement and overlap verification, meters";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.map_refinement_params.max_query_range);
          parameters_interface_->declare_parameter(prefix_ + "map_refinement_params.max_query_range", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "map_refinement_params.cache_grid_size")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "spacing of cached submap centers, meters";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.map_refinement_params.cache_grid_size);
          parameters_interface_->declare_parameter(prefix_ + "map_refinement_params.cache_grid_size", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "map_refinement_params.cache_capacity")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "maximum cached submaps including NDT distributions and verification trees";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.map_refinement_params.cache_capacity);
          parameters_interface_->declare_parameter(prefix_ + "map_refinement_params.cache_capacity", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "map_refinement_params.ndt_max_iterations")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "first NDT stage before ICP; capped seeds continue from ICP within the shared NDT iteration budget";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.map_refinement_params.ndt_max_iterations);
          parameters_interface_->declare_parameter(prefix_ + "map_refinement_params.ndt_max_iterations", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "map_refinement_params.ndt_step_size")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "map NDT line-search step before fine ICP; legacy SC/BTC retain ndt_params.step_size";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.map_refinement_params.ndt_step_size);
          parameters_interface_->declare_parameter(prefix_ + "map_refinement_params.ndt_step_size", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "map_refinement_params.icp_max_iterations")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "fine ICP iterations after coarse NDT; zero disables ICP";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.map_refinement_params.icp_max_iterations);
          parameters_interface_->declare_parameter(prefix_ + "map_refinement_params.icp_max_iterations", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "map_refinement_params.icp_correspondence_distance")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "maximum fine ICP correspondence distance, meters";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.map_refinement_params.icp_correspondence_distance);
          parameters_interface_->declare_parameter(prefix_ + "map_refinement_params.icp_correspondence_distance", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "map_refinement_params.max_translation_delta")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "maximum accepted translation correction; also expands submap coverage, meters";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.map_refinement_params.max_translation_delta);
          parameters_interface_->declare_parameter(prefix_ + "map_refinement_params.max_translation_delta", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "map_refinement_params.max_rotation_delta_deg")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "maximum accepted rotation correction from the retrieved pose, degrees";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.map_refinement_params.max_rotation_delta_deg);
          parameters_interface_->declare_parameter(prefix_ + "map_refinement_params.max_rotation_delta_deg", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "map_refinement_params.correspondence_distance")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "maximum Euclidean correspondence distance for overlap and RMSE, meters";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.map_refinement_params.correspondence_distance);
          parameters_interface_->declare_parameter(prefix_ + "map_refinement_params.correspondence_distance", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "map_refinement_params.min_inlier_ratio")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "minimum fraction of all prepared query points with a map correspondence";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.map_refinement_params.min_inlier_ratio);
          parameters_interface_->declare_parameter(prefix_ + "map_refinement_params.min_inlier_ratio", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "map_refinement_params.max_inlier_rmse")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "maximum RMS Euclidean inlier distance, meters";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.map_refinement_params.max_inlier_rmse);
          parameters_interface_->declare_parameter(prefix_ + "map_refinement_params.max_inlier_rmse", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "map_refinement_params.sector_count")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "azimuth bins for query-relative correspondence coverage";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.map_refinement_params.sector_count);
          parameters_interface_->declare_parameter(prefix_ + "map_refinement_params.sector_count", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "map_refinement_params.min_occupied_sectors")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "minimum occupied query bins for usable spatial support";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.map_refinement_params.min_occupied_sectors);
          parameters_interface_->declare_parameter(prefix_ + "map_refinement_params.min_occupied_sectors", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "map_refinement_params.min_points_per_sector")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "minimum prepared query points defining an occupied bin";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.map_refinement_params.min_points_per_sector);
          parameters_interface_->declare_parameter(prefix_ + "map_refinement_params.min_points_per_sector", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "map_refinement_params.min_sector_coverage")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "minimum fraction of occupied bins satisfying the inlier ratio";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.map_refinement_params.min_sector_coverage);
          parameters_interface_->declare_parameter(prefix_ + "map_refinement_params.min_sector_coverage", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "btc_params.is_high_fly")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "use high flight BTC descriptor settings";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.btc_params.is_high_fly);
          parameters_interface_->declare_parameter(prefix_ + "btc_params.is_high_fly", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "btc_params.parallel_stl_enable")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "enable parallel BTC descriptor matching";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.btc_params.parallel_stl_enable);
          parameters_interface_->declare_parameter(prefix_ + "btc_params.parallel_stl_enable", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "btc_params.parallel_stl_min_size")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "minimum work size for parallel BTC matching";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.btc_params.parallel_stl_min_size);
          parameters_interface_->declare_parameter(prefix_ + "btc_params.parallel_stl_min_size", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "btc_params.skip_near_num")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "disable temporal neighbor exclusion for offline query";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.btc_params.skip_near_num);
          parameters_interface_->declare_parameter(prefix_ + "btc_params.skip_near_num", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "btc_params.score_threshold")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "minimum BTC geometric verification score";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.btc_params.score_threshold);
          parameters_interface_->declare_parameter(prefix_ + "btc_params.score_threshold", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "ndt_params.resolution")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "NDT resolution in meters";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.ndt_params.resolution);
          parameters_interface_->declare_parameter(prefix_ + "ndt_params.resolution", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "ndt_params.step_size")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "NDT optimizer step size";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.ndt_params.step_size);
          parameters_interface_->declare_parameter(prefix_ + "ndt_params.step_size", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "ndt_params.transformation_epsilon")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "NDT convergence epsilon";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.ndt_params.transformation_epsilon);
          parameters_interface_->declare_parameter(prefix_ + "ndt_params.transformation_epsilon", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "ndt_params.max_iterations")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "NDT maximum iterations";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.ndt_params.max_iterations);
          parameters_interface_->declare_parameter(prefix_ + "ndt_params.max_iterations", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "ndt_params.num_threads")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "NDT OpenMP thread count";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.ndt_params.num_threads);
          parameters_interface_->declare_parameter(prefix_ + "ndt_params.num_threads", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "ndt_params.neighborhood")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "0 KDTREE, 1 DIRECT26, 2 DIRECT7, 3 DIRECT1";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.ndt_params.neighborhood);
          parameters_interface_->declare_parameter(prefix_ + "ndt_params.neighborhood", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "ndt_params.source_leaf_size")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "source voxel leaf size; zero disables downsampling";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.ndt_params.source_leaf_size);
          parameters_interface_->declare_parameter(prefix_ + "ndt_params.source_leaf_size", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "ndt_params.target_leaf_size")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "target voxel leaf size; zero disables downsampling";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.ndt_params.target_leaf_size);
          parameters_interface_->declare_parameter(prefix_ + "ndt_params.target_leaf_size", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "ndt_params.min_points")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "minimum source and target points for NDT";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.ndt_params.min_points);
          parameters_interface_->declare_parameter(prefix_ + "ndt_params.min_points", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "ndt_params.max_fitness")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "maximum NDT fitness for BTC and legacy SC; map SC uses overlap and RMSE instead";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.ndt_params.max_fitness);
          parameters_interface_->declare_parameter(prefix_ + "ndt_params.max_fitness", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "bbs3d_params.min_rpy")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "min_rpy";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.bbs3d_params.min_rpy);
          parameters_interface_->declare_parameter(prefix_ + "bbs3d_params.min_rpy", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "bbs3d_params.max_rpy")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "max_rpy";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.bbs3d_params.max_rpy);
          parameters_interface_->declare_parameter(prefix_ + "bbs3d_params.max_rpy", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "bbs3d_params.score_threshold_percentage")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "score_threshold_percentage";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.bbs3d_params.score_threshold_percentage);
          parameters_interface_->declare_parameter(prefix_ + "bbs3d_params.score_threshold_percentage", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "bbs3d_params.tar_leaf_size")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "tar_leaf_size";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.bbs3d_params.tar_leaf_size);
          parameters_interface_->declare_parameter(prefix_ + "bbs3d_params.tar_leaf_size", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "bbs3d_params.src_leaf_size")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "src_leaf_size";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.bbs3d_params.src_leaf_size);
          parameters_interface_->declare_parameter(prefix_ + "bbs3d_params.src_leaf_size", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "bbs3d_params.min_scan_range")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "min_scan_range";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.bbs3d_params.min_scan_range);
          parameters_interface_->declare_parameter(prefix_ + "bbs3d_params.min_scan_range", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "bbs3d_params.max_scan_range")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "max_scan_range";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.bbs3d_params.max_scan_range);
          parameters_interface_->declare_parameter(prefix_ + "bbs3d_params.max_scan_range", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "bbs3d_params.timeout_msec")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "timeout_msec";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.bbs3d_params.timeout_msec);
          parameters_interface_->declare_parameter(prefix_ + "bbs3d_params.timeout_msec", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "bbs3d_params.num_threads")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "num_threads";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.bbs3d_params.num_threads);
          parameters_interface_->declare_parameter(prefix_ + "bbs3d_params.num_threads", parameter, descriptor);
      }
      // get parameters and fill struct fields
      rclcpp::Parameter param;
      param = parameters_interface_->get_parameter(prefix_ + "sc_params.max_radius");
      RCLCPP_DEBUG_STREAM(logger_, (prefix_ + "sc_params.max_radius") << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.sc_params.max_radius = param.as_double();
      param = parameters_interface_->get_parameter(prefix_ + "sc_params.max_theta");
      RCLCPP_DEBUG_STREAM(logger_, (prefix_ + "sc_params.max_theta") << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.sc_params.max_theta = param.as_double();
      param = parameters_interface_->get_parameter(prefix_ + "sc_params.num_rings");
      RCLCPP_DEBUG_STREAM(logger_, (prefix_ + "sc_params.num_rings") << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.sc_params.num_rings = param.as_int();
      param = parameters_interface_->get_parameter(prefix_ + "sc_params.num_sectors");
      RCLCPP_DEBUG_STREAM(logger_, (prefix_ + "sc_params.num_sectors") << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.sc_params.num_sectors = param.as_int();
      param = parameters_interface_->get_parameter(prefix_ + "sc_params.indexing_interval");
      RCLCPP_DEBUG_STREAM(logger_, (prefix_ + "sc_params.indexing_interval") << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.sc_params.indexing_interval = param.as_int();
      param = parameters_interface_->get_parameter(prefix_ + "sc_params.min_key_frame_seq_distance");
      RCLCPP_DEBUG_STREAM(logger_, (prefix_ + "sc_params.min_key_frame_seq_distance") << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.sc_params.min_key_frame_seq_distance = param.as_int();
      param = parameters_interface_->get_parameter(prefix_ + "sc_params.num_candidates");
      RCLCPP_DEBUG_STREAM(logger_, (prefix_ + "sc_params.num_candidates") << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.sc_params.num_candidates = param.as_int();
      param = parameters_interface_->get_parameter(prefix_ + "sc_params.fast_alignment_search_ratio");
      RCLCPP_DEBUG_STREAM(logger_, (prefix_ + "sc_params.fast_alignment_search_ratio") << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.sc_params.fast_alignment_search_ratio = param.as_double();
      param = parameters_interface_->get_parameter(prefix_ + "sc_params.scan_context_distance_thresh");
      RCLCPP_DEBUG_STREAM(logger_, (prefix_ + "sc_params.scan_context_distance_thresh") << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.sc_params.scan_context_distance_thresh = param.as_double();
      param = parameters_interface_->get_parameter(prefix_ + "sc_params.lidar_height");
      RCLCPP_DEBUG_STREAM(logger_, (prefix_ + "sc_params.lidar_height") << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.sc_params.lidar_height = param.as_double();
      param = parameters_interface_->get_parameter(prefix_ + "sc_params.map_refinement_enable");
      RCLCPP_DEBUG_STREAM(logger_, (prefix_ + "sc_params.map_refinement_enable") << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.sc_params.map_refinement_enable = param.as_bool();
      param = parameters_interface_->get_parameter(prefix_ + "sc_params.max_refinement_candidates");
      RCLCPP_DEBUG_STREAM(logger_, (prefix_ + "sc_params.max_refinement_candidates") << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.sc_params.max_refinement_candidates = param.as_int();
      param = parameters_interface_->get_parameter(prefix_ + "sc_params.candidate_merge_distance");
      RCLCPP_DEBUG_STREAM(logger_, (prefix_ + "sc_params.candidate_merge_distance") << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.sc_params.candidate_merge_distance = param.as_double();
      param = parameters_interface_->get_parameter(prefix_ + "sc_params.candidate_merge_height");
      RCLCPP_DEBUG_STREAM(logger_, (prefix_ + "sc_params.candidate_merge_height") << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.sc_params.candidate_merge_height = param.as_double();
      param = parameters_interface_->get_parameter(prefix_ + "sc_params.candidate_merge_angle_deg");
      RCLCPP_DEBUG_STREAM(logger_, (prefix_ + "sc_params.candidate_merge_angle_deg") << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.sc_params.candidate_merge_angle_deg = param.as_double();
      param = parameters_interface_->get_parameter(prefix_ + "sc_params.ambiguity_score_margin");
      RCLCPP_DEBUG_STREAM(logger_, (prefix_ + "sc_params.ambiguity_score_margin") << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.sc_params.ambiguity_score_margin = param.as_double();
      param = parameters_interface_->get_parameter(prefix_ + "sc_params.floor_ambiguity_score_margin");
      RCLCPP_DEBUG_STREAM(logger_, (prefix_ + "sc_params.floor_ambiguity_score_margin") << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.sc_params.floor_ambiguity_score_margin = param.as_double();
      param = parameters_interface_->get_parameter(prefix_ + "sc_params.ambiguity_translation");
      RCLCPP_DEBUG_STREAM(logger_, (prefix_ + "sc_params.ambiguity_translation") << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.sc_params.ambiguity_translation = param.as_double();
      param = parameters_interface_->get_parameter(prefix_ + "map_refinement_params.max_query_range");
      RCLCPP_DEBUG_STREAM(logger_, (prefix_ + "map_refinement_params.max_query_range") << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.map_refinement_params.max_query_range = param.as_double();
      param = parameters_interface_->get_parameter(prefix_ + "map_refinement_params.cache_grid_size");
      RCLCPP_DEBUG_STREAM(logger_, (prefix_ + "map_refinement_params.cache_grid_size") << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.map_refinement_params.cache_grid_size = param.as_double();
      param = parameters_interface_->get_parameter(prefix_ + "map_refinement_params.cache_capacity");
      RCLCPP_DEBUG_STREAM(logger_, (prefix_ + "map_refinement_params.cache_capacity") << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.map_refinement_params.cache_capacity = param.as_int();
      param = parameters_interface_->get_parameter(prefix_ + "map_refinement_params.ndt_max_iterations");
      RCLCPP_DEBUG_STREAM(logger_, (prefix_ + "map_refinement_params.ndt_max_iterations") << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.map_refinement_params.ndt_max_iterations = param.as_int();
      param = parameters_interface_->get_parameter(prefix_ + "map_refinement_params.ndt_step_size");
      RCLCPP_DEBUG_STREAM(logger_, (prefix_ + "map_refinement_params.ndt_step_size") << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.map_refinement_params.ndt_step_size = param.as_double();
      param = parameters_interface_->get_parameter(prefix_ + "map_refinement_params.icp_max_iterations");
      RCLCPP_DEBUG_STREAM(logger_, (prefix_ + "map_refinement_params.icp_max_iterations") << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.map_refinement_params.icp_max_iterations = param.as_int();
      param = parameters_interface_->get_parameter(prefix_ + "map_refinement_params.icp_correspondence_distance");
      RCLCPP_DEBUG_STREAM(logger_, (prefix_ + "map_refinement_params.icp_correspondence_distance") << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.map_refinement_params.icp_correspondence_distance = param.as_double();
      param = parameters_interface_->get_parameter(prefix_ + "map_refinement_params.max_translation_delta");
      RCLCPP_DEBUG_STREAM(logger_, (prefix_ + "map_refinement_params.max_translation_delta") << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.map_refinement_params.max_translation_delta = param.as_double();
      param = parameters_interface_->get_parameter(prefix_ + "map_refinement_params.max_rotation_delta_deg");
      RCLCPP_DEBUG_STREAM(logger_, (prefix_ + "map_refinement_params.max_rotation_delta_deg") << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.map_refinement_params.max_rotation_delta_deg = param.as_double();
      param = parameters_interface_->get_parameter(prefix_ + "map_refinement_params.correspondence_distance");
      RCLCPP_DEBUG_STREAM(logger_, (prefix_ + "map_refinement_params.correspondence_distance") << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.map_refinement_params.correspondence_distance = param.as_double();
      param = parameters_interface_->get_parameter(prefix_ + "map_refinement_params.min_inlier_ratio");
      RCLCPP_DEBUG_STREAM(logger_, (prefix_ + "map_refinement_params.min_inlier_ratio") << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.map_refinement_params.min_inlier_ratio = param.as_double();
      param = parameters_interface_->get_parameter(prefix_ + "map_refinement_params.max_inlier_rmse");
      RCLCPP_DEBUG_STREAM(logger_, (prefix_ + "map_refinement_params.max_inlier_rmse") << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.map_refinement_params.max_inlier_rmse = param.as_double();
      param = parameters_interface_->get_parameter(prefix_ + "map_refinement_params.sector_count");
      RCLCPP_DEBUG_STREAM(logger_, (prefix_ + "map_refinement_params.sector_count") << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.map_refinement_params.sector_count = param.as_int();
      param = parameters_interface_->get_parameter(prefix_ + "map_refinement_params.min_occupied_sectors");
      RCLCPP_DEBUG_STREAM(logger_, (prefix_ + "map_refinement_params.min_occupied_sectors") << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.map_refinement_params.min_occupied_sectors = param.as_int();
      param = parameters_interface_->get_parameter(prefix_ + "map_refinement_params.min_points_per_sector");
      RCLCPP_DEBUG_STREAM(logger_, (prefix_ + "map_refinement_params.min_points_per_sector") << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.map_refinement_params.min_points_per_sector = param.as_int();
      param = parameters_interface_->get_parameter(prefix_ + "map_refinement_params.min_sector_coverage");
      RCLCPP_DEBUG_STREAM(logger_, (prefix_ + "map_refinement_params.min_sector_coverage") << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.map_refinement_params.min_sector_coverage = param.as_double();
      param = parameters_interface_->get_parameter(prefix_ + "btc_params.is_high_fly");
      RCLCPP_DEBUG_STREAM(logger_, (prefix_ + "btc_params.is_high_fly") << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.btc_params.is_high_fly = param.as_bool();
      param = parameters_interface_->get_parameter(prefix_ + "btc_params.parallel_stl_enable");
      RCLCPP_DEBUG_STREAM(logger_, (prefix_ + "btc_params.parallel_stl_enable") << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.btc_params.parallel_stl_enable = param.as_bool();
      param = parameters_interface_->get_parameter(prefix_ + "btc_params.parallel_stl_min_size");
      RCLCPP_DEBUG_STREAM(logger_, (prefix_ + "btc_params.parallel_stl_min_size") << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.btc_params.parallel_stl_min_size = param.as_int();
      param = parameters_interface_->get_parameter(prefix_ + "btc_params.skip_near_num");
      RCLCPP_DEBUG_STREAM(logger_, (prefix_ + "btc_params.skip_near_num") << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.btc_params.skip_near_num = param.as_int();
      param = parameters_interface_->get_parameter(prefix_ + "btc_params.score_threshold");
      RCLCPP_DEBUG_STREAM(logger_, (prefix_ + "btc_params.score_threshold") << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.btc_params.score_threshold = param.as_double();
      param = parameters_interface_->get_parameter(prefix_ + "ndt_params.resolution");
      RCLCPP_DEBUG_STREAM(logger_, (prefix_ + "ndt_params.resolution") << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.ndt_params.resolution = param.as_double();
      param = parameters_interface_->get_parameter(prefix_ + "ndt_params.step_size");
      RCLCPP_DEBUG_STREAM(logger_, (prefix_ + "ndt_params.step_size") << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.ndt_params.step_size = param.as_double();
      param = parameters_interface_->get_parameter(prefix_ + "ndt_params.transformation_epsilon");
      RCLCPP_DEBUG_STREAM(logger_, (prefix_ + "ndt_params.transformation_epsilon") << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.ndt_params.transformation_epsilon = param.as_double();
      param = parameters_interface_->get_parameter(prefix_ + "ndt_params.max_iterations");
      RCLCPP_DEBUG_STREAM(logger_, (prefix_ + "ndt_params.max_iterations") << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.ndt_params.max_iterations = param.as_int();
      param = parameters_interface_->get_parameter(prefix_ + "ndt_params.num_threads");
      RCLCPP_DEBUG_STREAM(logger_, (prefix_ + "ndt_params.num_threads") << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.ndt_params.num_threads = param.as_int();
      param = parameters_interface_->get_parameter(prefix_ + "ndt_params.neighborhood");
      RCLCPP_DEBUG_STREAM(logger_, (prefix_ + "ndt_params.neighborhood") << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.ndt_params.neighborhood = param.as_int();
      param = parameters_interface_->get_parameter(prefix_ + "ndt_params.source_leaf_size");
      RCLCPP_DEBUG_STREAM(logger_, (prefix_ + "ndt_params.source_leaf_size") << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.ndt_params.source_leaf_size = param.as_double();
      param = parameters_interface_->get_parameter(prefix_ + "ndt_params.target_leaf_size");
      RCLCPP_DEBUG_STREAM(logger_, (prefix_ + "ndt_params.target_leaf_size") << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.ndt_params.target_leaf_size = param.as_double();
      param = parameters_interface_->get_parameter(prefix_ + "ndt_params.min_points");
      RCLCPP_DEBUG_STREAM(logger_, (prefix_ + "ndt_params.min_points") << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.ndt_params.min_points = param.as_int();
      param = parameters_interface_->get_parameter(prefix_ + "ndt_params.max_fitness");
      RCLCPP_DEBUG_STREAM(logger_, (prefix_ + "ndt_params.max_fitness") << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.ndt_params.max_fitness = param.as_double();
      param = parameters_interface_->get_parameter(prefix_ + "bbs3d_params.min_rpy");
      RCLCPP_DEBUG_STREAM(logger_, (prefix_ + "bbs3d_params.min_rpy") << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.bbs3d_params.min_rpy = param.as_double_array();
      param = parameters_interface_->get_parameter(prefix_ + "bbs3d_params.max_rpy");
      RCLCPP_DEBUG_STREAM(logger_, (prefix_ + "bbs3d_params.max_rpy") << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.bbs3d_params.max_rpy = param.as_double_array();
      param = parameters_interface_->get_parameter(prefix_ + "bbs3d_params.score_threshold_percentage");
      RCLCPP_DEBUG_STREAM(logger_, (prefix_ + "bbs3d_params.score_threshold_percentage") << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.bbs3d_params.score_threshold_percentage = param.as_double();
      param = parameters_interface_->get_parameter(prefix_ + "bbs3d_params.tar_leaf_size");
      RCLCPP_DEBUG_STREAM(logger_, (prefix_ + "bbs3d_params.tar_leaf_size") << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.bbs3d_params.tar_leaf_size = param.as_double();
      param = parameters_interface_->get_parameter(prefix_ + "bbs3d_params.src_leaf_size");
      RCLCPP_DEBUG_STREAM(logger_, (prefix_ + "bbs3d_params.src_leaf_size") << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.bbs3d_params.src_leaf_size = param.as_double();
      param = parameters_interface_->get_parameter(prefix_ + "bbs3d_params.min_scan_range");
      RCLCPP_DEBUG_STREAM(logger_, (prefix_ + "bbs3d_params.min_scan_range") << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.bbs3d_params.min_scan_range = param.as_double();
      param = parameters_interface_->get_parameter(prefix_ + "bbs3d_params.max_scan_range");
      RCLCPP_DEBUG_STREAM(logger_, (prefix_ + "bbs3d_params.max_scan_range") << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.bbs3d_params.max_scan_range = param.as_double();
      param = parameters_interface_->get_parameter(prefix_ + "bbs3d_params.timeout_msec");
      RCLCPP_DEBUG_STREAM(logger_, (prefix_ + "bbs3d_params.timeout_msec") << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.bbs3d_params.timeout_msec = param.as_int();
      param = parameters_interface_->get_parameter(prefix_ + "bbs3d_params.num_threads");
      RCLCPP_DEBUG_STREAM(logger_, (prefix_ + "bbs3d_params.num_threads") << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.bbs3d_params.num_threads = param.as_int();


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

} // namespace relocation_params
