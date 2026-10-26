/**
 * @author: Junfeng Guo
 * @date: 2024-01-18
*/
#pragma once
#ifndef PLANNING__PLANNING_UTILS_HPP
#define PLANNING__PLANNING_UTILS_HPP

#include <cmath>
#include <vector>
#include <eigen3/Eigen/Core>
#include <eigen3/Eigen/Dense>

#include "geometry_msgs/msg/point.hpp"

#include "boost/geometry.hpp"
#include "boost/geometry/geometries/point.hpp"
#include "boost/geometry/geometries/polygon.hpp"

namespace bg = boost::geometry;

namespace planning
{
namespace planning_utils
{
/**
 * @brief find the nearest index from accumulated length by pair
 * @param accum_s accumulated length
 * @param target_length the target length
 * @return start and end index pair
*/
std::pair<size_t, size_t> FindNearestAccumIndexPair(
    const std::vector<double> accum_s, 
    const double target_length);
/**
 * @brief find the nearest index from accumulated length by pair
 * @param path path to input
 * @param resolution the resolution of the path
 * @return the resampled path
*/
std::vector<Eigen::Vector2d> SampledPath(
    const std::vector<Eigen::Vector2d>& path, 
    const double resolution);
/**
 * @brief find the nearest index from accumulated length by pair
 * @param path path to input
 * @param resolution the resolution of the path
 * @return the resampled path
*/
std::vector<Eigen::Vector2d> SampledPath(
    const std::vector<geometry_msgs::msg::Point>& path, 
    const double resolution);    
/**
 * @brief Compute the curvature and theta of the path
 * @param input_path the input path
 * @return the x,y,theta,curvature of the path
*/
std::vector<Eigen::Vector4d> ComputePathCurvatureTheta(
    const std::vector<Eigen::Vector2d>& input_path);
/**
 * @brief Compute the curvature of the path
 * @param pt1 first point
 * @param pt2 second point
 * @param pt3 third point
 * @return the radius of the give point pt2
*/
double CalCurvature(
    const Eigen::Vector2d& pt1, 
    const Eigen::Vector2d& pt2, 
    const Eigen::Vector2d& pt3);
bool IsPolygonsIntersect(
    const std::vector<Eigen::Vector2d>& polygon1, 
    const std::vector<Eigen::Vector2d>& polygon2);
}
}

#endif