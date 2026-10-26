#ifndef LANELET2_PLANNER__UTILITY_FUNCTIONS_HPP
#define LANELET2_PLANNER__UTILITY_FUNCTIONS_HPP

#include <planning_msgs/msg/lanelet_segment.hpp>
#include <visualization_msgs/msg/marker_array.hpp>
#include <geometry_msgs/msg/point.hpp>
// #include "math/math.hpp"
#include <vector>
#include <unordered_set>
#include "lanelet2_core/geometry/Lanelet.h"
#include <lanelet2_core/LaneletMap.h>
#include <lanelet2_core/primitives/LaneletSequence.h>
#include <lanelet2_core/primitives/LineString.h>
#include <lanelet2_extension/utility/utilities.hpp>

namespace lanelet2_planner
{
namespace utility
{
using RouteSections = std::vector<planning_msgs::msg::LaneletSegment>;

bool exists(const std::unordered_set<lanelet::Id> & set, const lanelet::Id & id);

template <typename T>
bool exists(const std::vector<T> & vectors, const T & item)
{
  for (const auto & i : vectors) {
    if (i == item) {
      return true;
    }
  }
  return false;
}

void SetColor(std_msgs::msg::ColorRGBA * cl, double r, double g, double b, double a);
void InsertMarkerArray(
  visualization_msgs::msg::MarkerArray * a1, const visualization_msgs::msg::MarkerArray & a2);

RouteSections CombineConsecutiveRouteSections(
  const RouteSections & route_sections1, const RouteSections & route_sections2);
lanelet::LineString3d CombineConsecutiveLineString3d(
  lanelet::LineString3d & ls1, lanelet::LineString3d & ls2);
lanelet::LineString3d CombineConsecutiveLineString3d(
  lanelet::LineString3d & ls1, lanelet::LineString3d & ls2,
  const int start, const int end);  
std::vector<geometry_msgs::msg::Point> ConvertCenterlineToPoints(const lanelet::ConstLanelet & lanelet);
// Shared by position-goal resolution and the planner, including partial first/last lanes.
std::vector<geometry_msgs::msg::Point> BuildRouteCenterline(
  const lanelet::LaneletMapPtr & map, const RouteSections & sections,
  const geometry_msgs::msg::Point & start, const geometry_msgs::msg::Point & goal);
// Check the connecting segments too: in-lane vertices can hide a chord across off-road space.
bool IsPathInsideRoute(const std::vector<geometry_msgs::msg::Point> & points,
  const lanelet::LaneletMapPtr & map, const RouteSections & sections);
std::vector<geometry_msgs::msg::Point> ResampleLineString(
  const lanelet::LineString3d & line_string, const double resolution);
lanelet::LineString3d GenerateRefineLineString(
  const lanelet::LineString3d & line_string, const double resolution);  
std::vector<geometry_msgs::msg::Point> CombineConsecutivePoints(
  const std::vector<geometry_msgs::msg::Point> & points,
  const std::vector<geometry_msgs::msg::Point> & new_points,
  const int start_index, const int end_index);
void UpdateDriableAreaInterval(std::vector<double> & intervals, const double l_low, const double l_up);
}   // namespace utility
}   // namespace lanelet2_planner

#endif // LANELET2_PLANNER__UTILITY_FUNCTIONS_HPP
