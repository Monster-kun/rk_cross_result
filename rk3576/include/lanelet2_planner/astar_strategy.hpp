/** Shortest route search over bidirectional map centerline connections. */
#pragma once

#include <memory>
#include <utility>
#include <vector>
#include <lanelet2_core/LaneletMap.h>
#include <lanelet2_core/geometry/Lanelet.h>
#include <lanelet2_routing/RoutingGraph.h>

namespace lanelet2_planner
{
class AstarStrategy
{
public:
    bool Search(
        const lanelet::ConstLanelet & start_lanelet,
        const lanelet::ConstLanelet & goal_lanelet,
        const lanelet::routing::RoutingGraphPtr routing_graph_ptr,
        const lanelet::LaneletMapPtr lanelet_map_ptr,
        const std::pair<int, bool> & invalid_lanelet_info,
        lanelet::ConstLanelets * result_lanelets,
        bool allow_lane_change = false,
        bool allow_lane_invert = false);

    using Ptr = std::shared_ptr<AstarStrategy>;
};
}  // namespace lanelet2_planner
