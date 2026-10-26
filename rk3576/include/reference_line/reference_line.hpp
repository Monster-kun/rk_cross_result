#pragma once
#include <iostream>
#include <cmath>
#include "cartesian_frenet_conversion/cartesian_frenet_conversion.hpp"
#include "eigen3/Eigen/Core"
#include "eigen3/Eigen/Dense"
#include "planning_utils/planning_utils.hpp"
#include "planning_msgs/msg/trajectory.hpp"
#include "linear_interpolation/linear_interpolation.hpp"
#include "planning_basic_data/trajectory_point.hpp"
#include <vector>
#include <array>
#include <utility>
#include <memory>

namespace planning 
{
namespace reference_line
{
using Lane = planning_msgs::msg::Trajectory;
using PathPoint = planning_basic_data::PathPoint;
using TrajectoryPoint = planning_basic_data::TrajectoryPoint;
class ReferenceLine
{
public:
  /**
   * @brief Construct a new Reference Line object
  */
  ReferenceLine() = default;
  /**
   * @brief initialize the reference line with left and right bound
   * @param ref_line the reference line
  */
  void init(
    const std::vector<Eigen::Vector2d>& ref_line);
  /**
   * @brief initialize the reference line
   * @param ptr_lane the pointer of a reference line
  */
  void init(const std::shared_ptr<Lane> ptr_lane);
  /**
   * @brief initialize the reference line
   * @param ptr_lane the pointer of a reference line
  */
  void init(const Lane& ptr_lane);  
  /**
   * @brief find the projected point on the reference line
   * @param impact_x the x coordinate of the impact point
   * @param impact_y the y coordinate of the impact point
   * @param ptr_match_point_index the pointer of the index of the match point
   * @param ptr_prjx the pointer of the x coordinate of the projected point
   * @param ptr_prjy the pointer of the y coordinate of the projected point
   * @param ptr_mkappa the pointer of the kappa of the projected point
   * @param ptr_mdkappa the pointer of the dkappa of the projected point
  */                          
  void find_project_point(const double impact_x, const double impact_y,
                          u_int64_t * const ptr_match_point_index,
                          double* const ptr_prjx, double* const ptr_prjy,
                          double* const ptr_mkappa, double* const ptr_mdkappa);
  /**
   * @brief convert x-y coordinate to s-l coordinate
   * @param current_X the x coordinate of the current point
   * @param current_Y the y coordinate of the current point
   * @param v the velocity of the current point
   * @param a the acceleration of the current point
   * @param theta the theta of the current point
   * @param kappa the kappa of the current point
   * @param ptr_s the pointer of the s coordinate of the current point, including s,s_dot and s_ddot
   * @param ptr_l the pointer of the l coordinate of the current point, including l,l_dot and l_ddot
   * @param ptr_matchpoint_index the pointer of the index of the match point
  */
  void XYToSL(const double current_X, const double current_Y,
              const double v,const double a,const double theta, const double kappa,
              std::array<double,3>* const ptr_s, std::array<double,3>* ptr_l, double* const  ptr_matchpoint_index);
  /**
   * @brief convert x-y coordinate to s-l coordinate
   * @param current_X current x coordinate
   * @param current_Y current y coordinate
   * @param sl result s-l coordinate
   */
  void XYToSL(const double current_X, const double current_Y, Eigen::Vector2d &sl);
  /**
   * @brief convert x-y coordinate to s-l coordinate
   * @param s current s coordinate
   * @param l current l coordinate
   * @param xy result x-y coordinate
   */
  void SLToXY(const double s, const double l, Eigen::Vector2d &xy);  
  /**
   * @brief get the distance between two points
   * @param x1 the x coordinate of the first point
   * @param y1 the y coordinate of the first point
   * @param x2 the x coordinate of the second point
   * @param y2 the y coordinate of the second point
   * @return the distance between the two points
  */
  double GetDistance(const double x1,const double y1,const double x2 ,const double y2);
  /**
   * @brief find the match point on the reference line
   * @param impact_x the x coordinate of the impact point
   * @param impact_y the y coordinate of the impact point
   * @return the index of the match point
  */
  u_int64_t find_match_point(const double impact_x,const double impact_y);
  /**
   * @brief find the match point on the reference line
   * @param impact_x the x coordinate of the impact point
   * @param impact_y the y coordinate of the impact point
   * @return the index of the match point
  */
  u_int64_t FindMatchPoint(const double impact_x, const double impact_y);
  /**
   * @brief find the match point on the reference line by distance
   * @param s 
   * @return index of the match point
   */
  u_int64_t FindMatchPointByDistance(const double s);
  /**
   * @brief find the match point on the reference line
   * @param impact_x the x coordinate of the impact point
   * @param impact_y the y coordinate of the impact point
   * @param stop_dist the stop distance
   * @return the index of the match point
  */
  u_int64_t FindMatchPointBefore(const double impact_x, const double impact_y, const double stop_dist);  
  /**
   * @brief find the match point on the reference line by x and y coordinate
   * @param x the x coordinate of the impact point
   * @param y the y coordinate of the impact point
   * @return the match projected point
   * @details this function will return the match point and match point index by passing their pointer
  */
  PathPoint FindProjectionPointByXY(const double x, const double y);
  // Resolve geometric overlaps with the vehicle heading and the previous
  // route progress so a later crossing cannot pull the projection backward.
  PathPoint FindProjectionPointByXY(
    const double x, const double y, const double heading, const double previous_s);
  /**
   * @brief find the match point on the reference line by s coordinate
   * @param s the s coordinate of the impact point
   * @return the match projected point
  */
  PathPoint FindProjectionPointByS(const double s);
  /**
   * @brief check the point is out of the lane or not in longitudinal direction
   * @param x the x coordinate of the impact point
   * @param y the y coordinate of the impact point
   * @return true if the point is out of the lane or not in longitudinal direction
  */
  bool OutofLaneLongitudinal(const double x, const double y);
  /**
   * @brief Get the Segment of Reference Line By Distance
   * @param start_s 
   * @param end_s 
   * @return ReferenceLine 
   */
  ReferenceLine GetSegmentByDistance(const double start_s, const double end_s);
  
  // reference data
  std::vector<double> rx,ry,rtheta,rkappa,rdkappa,rddkappa, rv;
  std::vector<double> s_accumu;
};
}// namespace_reference
}// namespace planning
