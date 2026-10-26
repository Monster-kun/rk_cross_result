#pragma once

#include <algorithm>
#include <cmath>
#include <stdexcept>
#include <utility>
#include <vector>

namespace system_utils
{
template<class Points, class Position>
std::pair<size_t, size_t> pathEndWindowRange(
  const Points & points, double length, bool tail, Position position)
{
  if (points.size() < 2) return {0, points.size()};
  double accumulated = 0.0;
  size_t count = 1;
  while (count < points.size()) {
    const size_t i = tail ? points.size() - count : count;
    const auto & a = position(points[i - 1]);
    const auto & b = position(points[i]);
    accumulated += std::hypot(b.x - a.x, b.y - a.y);
    ++count;
    if (accumulated >= length) break;
  }
  return tail ? std::pair<size_t, size_t>{points.size() - count, points.size()} :
    std::pair<size_t, size_t>{0, count};
}

// Clip each geometry independently: boundary samples do not share waypoint indices.
template<class Points, class Position>
Points pathEndWindow(const Points & points, double length, bool tail, Position position)
{
  const auto range = pathEndWindowRange(points, length, tail, position);
  const size_t begin = range.first;
  const size_t end = range.second;
  return Points(points.begin() + begin, points.begin() + end);
}

template<class Waypoints>
double trajectoryLength(const Waypoints & waypoints)
{
  double length = 0.0;
  for (size_t i = 1; i < waypoints.size(); ++i) {
    const auto & a = waypoints[i - 1].point;
    const auto & b = waypoints[i].point;
    length += std::hypot(b.x - a.x, b.y - a.y);
  }
  return length;
}

template<class Path>
Path joinPathLegs(const Path & first, const Path & second)
{
  auto result = first;
  auto & points = result.main_trajectory.waypoints;
  const auto & following = second.main_trajectory.waypoints;
  if (points.empty() || following.empty()) throw std::runtime_error("Cannot join empty route legs");
  const auto & a = points.back().point;
  const auto & b = following.front().point;
  const double gap = std::hypot(a.x - b.x, a.y - b.y);
  if (gap > 0.5) throw std::runtime_error("相邻目标点的规划路线不连续");
  points.insert(points.end(), following.begin() + (gap < 1e-6 ? 1 : 0), following.end());
  const bool progress_valid = first.left_bound_s.size() == first.left_bound.size() &&
    first.right_bound_s.size() == first.right_bound.size() &&
    second.left_bound_s.size() == second.left_bound.size() &&
    second.right_bound_s.size() == second.right_bound.size();
  if (progress_valid) {
    const double progress_offset = trajectoryLength(first.main_trajectory.waypoints);
    for (const auto s : second.left_bound_s) result.left_bound_s.push_back(progress_offset + s);
    for (const auto s : second.right_bound_s) result.right_bound_s.push_back(progress_offset + s);
  } else {
    result.left_bound_s.clear();
    result.right_bound_s.clear();
  }
  result.left_bound.insert(result.left_bound.end(), second.left_bound.begin(), second.left_bound.end());
  result.right_bound.insert(result.right_bound.end(), second.right_bound.begin(), second.right_bound.end());
  result.checkpoint_indices.clear();
  result.loop = false;
  result.loop_start_index = result.loop_left_bound_start_index = result.loop_right_bound_start_index = 0;
  return result;
}

template<class Path>
Path pathLegWindow(const Path & path, double length, bool tail)
{
  auto result = path;
  const auto point = [](const auto & value) -> const auto & { return value; };
  const auto left_range = pathEndWindowRange(path.left_bound, length, tail, point);
  const auto right_range = pathEndWindowRange(path.right_bound, length, tail, point);
  result.main_trajectory.waypoints = pathEndWindow(path.main_trajectory.waypoints, length, tail,
    [](const auto & waypoint) -> const auto & { return waypoint.point; });
  result.left_bound = pathEndWindow(path.left_bound, length, tail, point);
  result.right_bound = pathEndWindow(path.right_bound, length, tail, point);
  if (path.left_bound_s.size() == path.left_bound.size()) {
    result.left_bound_s.assign(
      path.left_bound_s.begin() + left_range.first, path.left_bound_s.begin() + left_range.second);
  } else {
    result.left_bound_s.clear();
  }
  if (path.right_bound_s.size() == path.right_bound.size()) {
    result.right_bound_s.assign(
      path.right_bound_s.begin() + right_range.first, path.right_bound_s.begin() + right_range.second);
  } else {
    result.right_bound_s.clear();
  }
  result.checkpoint_indices.clear();
  result.loop = false;
  result.loop_start_index = result.loop_left_bound_start_index = result.loop_right_bound_start_index = 0;
  return result;
}
}  // namespace system_utils
