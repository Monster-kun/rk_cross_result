#pragma once

#include <algorithm>
#include <cmath>
#include <stdexcept>

namespace system_utils
{
// Shared by the follower and heading checker, so neither re-enters the ingress
// leg or declares a closed loop complete at its seam.
template<class Path, class Position>
void advancePathCheckpoints(const Path & path, const Position & position, size_t & next)
{
  const auto & points = path.main_trajectory.waypoints;
  const auto & checkpoints = path.checkpoint_indices;
  if (points.empty() || next > checkpoints.size() || !std::is_sorted(checkpoints.begin(), checkpoints.end()) ||
      (!checkpoints.empty() && checkpoints.back() >= points.size()) ||
      (path.loop && (static_cast<size_t>(path.loop_start_index) + 1 >= points.size() || checkpoints.empty()))) {
    throw std::runtime_error("Invalid path checkpoints or loop");
  }
  auto near = [&](const auto & point) {
    return std::hypot(position.x - point.x, position.y - point.y) < 0.5;
  };
  while (next < checkpoints.size() && near(points[checkpoints[next]].point)) ++next;
  if (path.loop && next == checkpoints.size() && near(points.back().point)) {
    next = std::upper_bound(checkpoints.begin(), checkpoints.end(), path.loop_start_index) - checkpoints.begin();
  }
}

template<class Path>
Path remainingPlanningPath(const Path & path, size_t next)
{
  auto result = path;
  auto & points = result.main_trajectory.waypoints;
  const size_t begin = next ? std::min<size_t>(path.checkpoint_indices.at(next - 1) + 1,
    points.size() > 1 ? points.size() - 2 : 0) : 0;
  const auto & original = path.main_trajectory.waypoints;
  double path_offset = 0.0;
  for (size_t i = 1; i <= begin && i < original.size(); ++i) {
    path_offset += std::hypot(original[i].point.x - original[i - 1].point.x,
      original[i].point.y - original[i - 1].point.y);
  }
  points.erase(points.begin(), points.begin() + begin);
  const bool left_progress_valid = path.left_bound_s.size() == path.left_bound.size();
  const bool right_progress_valid = path.right_bound_s.size() == path.right_bound.size();
  if (left_progress_valid) {
    for (auto & s : result.left_bound_s) s -= path_offset;
  } else {
    result.left_bound_s.clear();
  }
  if (right_progress_valid) {
    for (auto & s : result.right_bound_s) s -= path_offset;
  } else {
    result.right_bound_s.clear();
  }
  if (path.loop) {
    const size_t start = path.loop_start_index;
    if (start + 1 >= original.size() ||
        (path.left_bound.empty() ? path.loop_left_bound_start_index != 0 :
          path.loop_left_bound_start_index >= path.left_bound.size()) ||
        (path.right_bound.empty() ? path.loop_right_bound_start_index != 0 :
          path.loop_right_bound_start_index >= path.right_bound.size())) {
      throw std::runtime_error("Invalid loop offsets");
    }
    double cycle_length = 0.0;
    for (size_t i = start + 1; i < original.size(); ++i) {
      cycle_length += std::hypot(original[i].point.x - original[i - 1].point.x,
        original[i].point.y - original[i - 1].point.y);
    }
    if (cycle_length < 0.5 || std::hypot(original[start].point.x - original.back().point.x,
        original[start].point.y - original.back().point.y) > 0.01) {
      throw std::runtime_error("Loop path is not a usable closed route");
    }
    double remaining_path_length = 0.0;
    for (size_t i = 1; i < points.size(); ++i) {
      remaining_path_length += std::hypot(points[i].point.x - points[i - 1].point.x,
        points[i].point.y - points[i - 1].point.y);
    }
    double loop_start_s = 0.0;
    for (size_t i = 1; i <= start; ++i) {
      loop_start_s += std::hypot(original[i].point.x - original[i - 1].point.x,
        original[i].point.y - original[i - 1].point.y);
    }
    // Keep a forward reference beyond the seam. The local velocity planner
    // uses reference-line distance to brake, so ending its input at the seam
    // would request a stop even though FollowPath remains active.
    for (double added = 0.0; added < 50.0; added += cycle_length) {
      points.insert(points.end(), original.begin() + start + 1, original.end());
      result.left_bound.insert(result.left_bound.end(),
        path.left_bound.begin() + path.loop_left_bound_start_index, path.left_bound.end());
      result.right_bound.insert(result.right_bound.end(),
        path.right_bound.begin() + path.loop_right_bound_start_index, path.right_bound.end());
      if (left_progress_valid) {
        for (size_t i = path.loop_left_bound_start_index; i < path.left_bound_s.size(); ++i) {
          const double new_s = remaining_path_length + added + path.left_bound_s[i] - loop_start_s;
          result.left_bound_s.push_back(std::max(
            result.left_bound_s.empty() ? new_s : result.left_bound_s.back(), new_s));
        }
      }
      if (right_progress_valid) {
        for (size_t i = path.loop_right_bound_start_index; i < path.right_bound_s.size(); ++i) {
          const double new_s = remaining_path_length + added + path.right_bound_s[i] - loop_start_s;
          result.right_bound_s.push_back(std::max(
            result.right_bound_s.empty() ? new_s : result.right_bound_s.back(), new_s));
        }
      }
    }
  }
  result.checkpoint_indices.clear();  // Indices belong to the untrimmed path.
  result.loop = false;  // This is an unrolled local reference, not an action path.
  result.loop_start_index = 0;
  result.loop_left_bound_start_index = result.loop_right_bound_start_index = 0;
  return result;
}
}  // namespace system_utils
