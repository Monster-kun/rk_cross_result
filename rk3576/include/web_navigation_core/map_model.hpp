#pragma once

#include <array>
#include <memory>
#include <string>
#include <vector>

#include <boost/geometry/geometries/box.hpp>
#include <boost/geometry/geometries/point.hpp>
#include <boost/geometry/index/rtree.hpp>
#include <geometry_msgs/msg/pose.hpp>
#include <lanelet2_core/LaneletMap.h>
#include <mapping_msgs/msg/had_map_bin.hpp>

namespace lanelet2_planner { namespace route_handler { class RouteHandler; } }

namespace web_navigation_core
{
struct TargetResolution
{
  bool valid{false};
  std::string code;
  std::string message;
  std::vector<std::string> lanelet_ids;
  geometry_msgs::msg::Pose pose;
  std::string selected_lanelet_id;
};

class MapModel
{
public:
  bool update(const mapping_msgs::msg::HADMapBin & message, std::string * error = nullptr);
  void setMap(lanelet::LaneletMapPtr map, const std::string & frame_id,
    const std::string & map_version);

  bool ready() const noexcept;
  const std::string & mapVersion() const noexcept;
  const std::string & mapName() const noexcept;
  const std::string & frameId() const noexcept;
  const std::string & geometryJson() const noexcept;
  const std::array<double, 4> & bounds() const noexcept;

  TargetResolution resolve(double x, double y, const std::string & selected_lanelet_id = "") const;
  TargetResolution suggestNavigationPoint(double x, double y) const;
  TargetResolution resolveForNavigation(double x, double y,
    const geometry_msgs::msg::Pose & start, const std::string & selected_lanelet_id = "",
    bool allow_lane_change = true, bool allow_lane_invert = true) const;
  bool contains(double x, double y, const std::string & selected_lanelet_id = "",
    std::vector<std::string> * lanelet_ids = nullptr) const;

private:
  void rebuildGeometry();

  using SpatialPoint = boost::geometry::model::point<double, 2, boost::geometry::cs::cartesian>;
  using SpatialBox = boost::geometry::model::box<SpatialPoint>;
  using SpatialValue = std::pair<SpatialBox, lanelet::Id>;
  boost::geometry::index::rtree<SpatialValue, boost::geometry::index::quadratic<16>> spatial_index_;

  lanelet::LaneletMapPtr map_;
  // Separate from the executing planner: candidate evaluation never sends a navigation goal.
  mutable std::shared_ptr<lanelet2_planner::route_handler::RouteHandler> goal_router_;
  std::string map_version_;
  std::string map_name_;
  std::string frame_id_;
  std::string geometry_json_;
  std::array<double, 4> bounds_{{0.0, 0.0, 0.0, 0.0}};
};
}  // namespace web_navigation_core
