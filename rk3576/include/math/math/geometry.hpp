#pragma once
#ifndef PLANNING__MATH__GEOMETRY_HPP_
#define PLANNING__MATH__GEOMETRY_HPP_

#include <cmath>
#include <eigen3/Eigen/Core>
#include <eigen3/Eigen/Dense>
#include <geometry_msgs/msg/point.hpp>
#include <geometry_msgs/msg/quaternion.hpp>
#include "planning_msgs/msg/path_point.hpp"
#include "planning_msgs/msg/waypoint.hpp"
#include <tf2_geometry_msgs/tf2_geometry_msgs.hpp>
#include <tf2/utils.h>

namespace planning
{
namespace math
{
namespace geometry
{
template <class T>
geometry_msgs::msg::Point getPoint(const T & p)
{
  return geometry_msgs::build<geometry_msgs::msg::Point>().x(p.x).y(p.y).z(p.z);
}

template <>
inline geometry_msgs::msg::Point getPoint(const geometry_msgs::msg::Point & p)
{
  return p;
}

template <>
inline geometry_msgs::msg::Point getPoint(const geometry_msgs::msg::Pose & p)
{
  return p.position;
}

template <>
inline geometry_msgs::msg::Point getPoint(const geometry_msgs::msg::PoseStamped & p)
{
  return p.pose.position;
}

template <>
inline geometry_msgs::msg::Point getPoint(const geometry_msgs::msg::PoseWithCovarianceStamped & p)
{
  return p.pose.pose.position;
}

template <>
inline geometry_msgs::msg::Point getPoint(const planning_msgs::msg::PathPoint & p)
{
  return p.pose.position;
}

template <>
inline geometry_msgs::msg::Point getPoint(const planning_msgs::msg::Waypoint & p)
{
  return p.point;
}

template <>
inline geometry_msgs::msg::Point getPoint(const Eigen::Vector3d & p)
{
  return geometry_msgs::build<geometry_msgs::msg::Point>().x(p.x()).y(p.y()).z(p.z());
}

template <class Point1, class Point2>
double calcDistance3d(const Point1 & point1, const Point2 & point2)
{
  const auto p1 = getPoint(point1);
  const auto p2 = getPoint(point2);
  // To be replaced by std::hypot(dx, dy, dz) in C++17
  return std::hypot(std::hypot(p1.x - p2.x, p1.y - p2.y), p1.z - p2.z);
}
/**
 * @brief calculate azimuth angle of two points.
 * @details This function returns the azimuth angle of the position of the two input points
 *          with respect to the origin of their coordinate system.
 *          If x and y of the two points are the same, the calculation result will be unstable.
 * @param p_from source point
 * @param p_to target point
 * @return -pi < azimuth angle < pi.
 */
inline double calcAzimuthAngle(
  const geometry_msgs::msg::Point & p_from, const geometry_msgs::msg::Point & p_to)
{
  const double dx = p_to.x - p_from.x;
  const double dy = p_to.y - p_from.y;
  return std::atan2(dy, dx);
}

inline geometry_msgs::msg::Quaternion createQuaternionFromRPY(
  const double roll, const double pitch, const double yaw)
{
  tf2::Quaternion q;
  q.setRPY(roll, pitch, yaw);
  return tf2::toMsg(q);
}

inline geometry_msgs::msg::Quaternion createQuaternionFromYaw(const double yaw)
{
  tf2::Quaternion q;
  q.setRPY(0, 0, yaw);
  return tf2::toMsg(q);
}
}  // namespace geometry
}  // namespace math
}  // namespace planning

#endif // PLANNING__MATH__GEOMETRY_HPP_
