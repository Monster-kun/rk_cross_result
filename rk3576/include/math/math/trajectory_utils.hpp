#pragma once
#ifndef PLANNING__MATH__TRAJECTORY_UTILS_HPP_
#define PLANNING__MATH__TRAJECTORY_UTILS_HPP_

#include <cmath>
#include <vector>
#include <limits>
#include <eigen3/Eigen/Core>
#include <eigen3/Eigen/Dense>
#include <geometry_msgs/msg/point.hpp>
#include "math/math/geometry.hpp"

namespace planning
{
namespace math
{
namespace trajectory_utils
{
using Point = geometry_msgs::msg::Point;
using namespace planning::math::geometry;

template <class T>
std::vector<Point> FixPathDensity(const std::vector<T> & lane_in, const double density)
{
    double d = 0, a = 0;
    double margin = density * 0.01;
    double remaining = 0;
    int nPoints = 0;

    std::vector<Point> temp_path;
    for (int i = 0; i < lane_in.size(); i++)
    {
        Point point;
        point.x = getPoint(lane_in[i]).x;
        point.y = getPoint(lane_in[i]).y;
        temp_path.push_back(point);
    }

    std::vector<Point> fixedPath;
    fixedPath.push_back(temp_path[0]);
    for (unsigned int si = 0, ei = 1; ei < temp_path.size();)
    {
        d += hypot(temp_path[ei].x - temp_path[ei-1].x, temp_path[ei].y - temp_path[ei-1].y) + remaining;
        a = atan2(temp_path[ei].y - temp_path[si].y, temp_path[ei].x - temp_path[si].x);

        if (d < density - margin) // skip
        {
            ei++;
            remaining = 0;
        }
        else if (d > (density + margin)) // skip
        {
            double x = temp_path[si].x;
            double y = temp_path[si].y;
            nPoints = d / density;
            for (int k = 0; k < nPoints; k++)
            {
                Point point;
                x = x + density * cos(a);
                y = y + density * sin(a);
                point.x = x;
                point.y = y;
                fixedPath.push_back(point);
            }
            remaining = d - nPoints * density;
            si++;
            temp_path[si].x = x;
            temp_path[si].y = y;
            d = 0;
            ei++;
        }
        else
        {
            d = 0;
            remaining = 0;
            fixedPath.push_back(temp_path[ei]);
            ei++;
            si = ei - 1;
        }
    }

    return temp_path;
}

template <class T>
double CalCurvature(const T& pt1, const T& pt2, const T& pt3)
{  
    double x_center, y_center, kappa;
    double dx_prev = getPoint(pt2).x - getPoint(pt1).x;
    double dy_prev = getPoint(pt2).y - getPoint(pt1).y;
    double dx_after = getPoint(pt3).x - getPoint(pt2).x;
    double dy_after = getPoint(pt3).y - getPoint(pt2).y;

    if (fabs(dx_prev) <= 0.000000001 && fabs(dy_after) <= 0.000000001)
    {
        x_center = 0.5 * (getPoint(pt2).x + getPoint(pt3).x);
        y_center = 0.5 * (getPoint(pt1).y + getPoint(pt2).y);
        return  (sqrt(pow(getPoint(pt1).x - x_center, 2) + pow(getPoint(pt1).y - y_center, 2)));
    }

    double slope_prev = dy_prev / dx_prev;
    double slope_after = dy_after / dx_after;
    if (fabs(slope_prev - slope_after) <= 0.000000001)
    {
        return 100000;
    }

    x_center = (slope_prev * slope_after * (getPoint(pt1).y - getPoint(pt3).y) 
                    + slope_after * (getPoint(pt1).x + getPoint(pt2).x) 
                    - slope_prev * (getPoint(pt2).x + getPoint(pt3).x)) 
                    / (2.0 * (slope_after - slope_prev));
    y_center = -1.0 * (x_center - (getPoint(pt1).x +  getPoint(pt2).x) / 2.0) / slope_prev + (getPoint(pt1).y + getPoint(pt2).y) / 2.0;

    //return the radius of curvature
    return (sqrt(pow(getPoint(pt1).x - x_center, 2) + pow(getPoint(pt1).y - y_center, 2)));
}

template <class T>
int GetClosestPointIndex(const std::vector<T> & points, const double x, const double y)
{
    int nearest_index = -1;
    double min_dis = std::numeric_limits<double>::max();
    for (int i = 0; i < points.size(); i++)
    {
        double dis = sqrt((getPoint(points[i]).x - x) * (getPoint(points[i]).x - x) + (getPoint(points[i]).y - y) * (getPoint(points[i]).y - y));
        if (dis < min_dis)
        {
            min_dis = dis;
            nearest_index = i;
        }
    }
    return nearest_index;  
}

template <class T>
int GetClosestPointIndex(const std::vector<T> & points, const T & point)
{
    return GetClosestPointIndex(points, getPoint(point).x, getPoint(point).y);
}

template <class T>
double CalLongitudinalOffset(const std::vector<T> & points, const T & point, const int idx)
{
    const auto pt_start = points[idx];
    const auto pt_end = points[idx+1];
    const Eigen::Vector3d seg_vec{getPoint(pt_end).x - getPoint(pt_start).x, getPoint(pt_end).y - getPoint(pt_start).y, 0};
    const Eigen::Vector3d tar_vec{getPoint(point).x - getPoint(pt_start).x, getPoint(point).y - getPoint(pt_start).y, 0};

    return seg_vec.dot(tar_vec) / seg_vec.norm();
}

template <class T>
int GetNearestSegmentStartIndex(const std::vector<T> & points, const T & point)
{
    const int closest_index = GetClosestPointIndex(points, point);
    if (closest_index == 0)
    {
        return 0;
    }
    else if (closest_index == points.size() - 1)
    {
        return points.size() - 2;
    }

    const double signed_dist = CalLongitudinalOffset(points, point, closest_index);
    if (signed_dist <= 0)
    {
        return closest_index - 1;
    }

    return closest_index;
}

template <class T>
double CalLateralOffset(const std::vector<T> & points, const T & point, const int idx)
{
    const auto pt_start = points[idx];
    const auto pt_end = points[idx+1];
    const Eigen::Vector3d seg_vec{getPoint(pt_end).x - getPoint(pt_start).x, getPoint(pt_end).y - getPoint(pt_start).y, 0};
    const Eigen::Vector3d tar_vec{getPoint(point).x - getPoint(pt_start).x, getPoint(point).y - getPoint(pt_start).y, 0};

    const Eigen::Vector3d cross_vec = seg_vec.cross(tar_vec);
    return cross_vec(2) / seg_vec.norm();
}

template <class T>
double CalLateralOffset(const std::vector<T> & points, const T & point)
{
    const int seg_index = GetNearestSegmentStartIndex(points, point);
    return CalLateralOffset(points, point, seg_index);
}
}   // namespace trajectory_utils
}   // namespace math
}   // namespace planning

#endif // PLANNING_MATH__TRAJECTORY_UTILS_HPP_