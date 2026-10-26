/**
 * @author: Junfeng Guo
 * @date: 2024/03/26
*/
#pragma once
#ifndef TRAJECTORY_POINT_H_
#define TRAJECTORY_POINT_H_

namespace planning_basic_data
{
struct LatPoint
{
    double x;
    double y;
    double theta;
    double kappa;
    double s;
    LatPoint() = default;
    LatPoint(const double& x, const double& y, const double& theta, const double& kappa, const double& s)
        : x(x), y(y), theta(theta), kappa(kappa), s(s) {}
    LatPoint(const LatPoint& lat_point){
        x = lat_point.x;
        y = lat_point.y;
        theta = lat_point.theta;
        kappa = lat_point.kappa;
        s = lat_point.s;
    }
};

struct LonPoint
{
    double s;
    double v;
    double a;
    double j;
    double t;
    LonPoint() = default;
    LonPoint(const double& s, const double& v, const double& a, const double& j, const double& t)
        : s(s), v(v), a(a), j(j), t(t) {}
    LonPoint(const LonPoint& lon_point){
        s = lon_point.s;
        v = lon_point.v;
        a = lon_point.a;
        j = lon_point.j;
        t = lon_point.t;
    }
};

struct PathPoint
{
    double x;
    double y;
    double z;
    double theta;
    double kappa;
    double dkappa;
    double ddkappa;
    double s,l;
    PathPoint() = default;
    PathPoint(const double& x, const double& y, const double& z, 
        const double& theta, const double& kappa, const double& dkappa, 
        const double& ddkappa, const double& s, const double& l)
        : x(x), y(y), z(z), theta(theta), kappa(kappa), 
        dkappa(dkappa), ddkappa(ddkappa), s(s), l(l) {}
    PathPoint(const PathPoint& path_point){
        x = path_point.x;
        y = path_point.y;
        z = path_point.z;
        theta = path_point.theta;
        kappa = path_point.kappa;
        dkappa = path_point.dkappa;
        ddkappa = path_point.ddkappa;
        s = path_point.s;
        l = path_point.l;
    }
};

struct TrajectoryPoint
{
    double x;
    double y;
    double theta;
    double kappa;
    double s;
    double v;
    double a;
    double j;
    double t;
    TrajectoryPoint() = default;
    TrajectoryPoint(const double& x, const double& y, const double& theta, const double& kappa, const double& s, const double& v, const double& a, const double& j, const double& t)
        : x(x), y(y), theta(theta), kappa(kappa), s(s), v(v), a(a), j(j), t(t) {}
    TrajectoryPoint(const LatPoint& lat_point, const LonPoint& lon_point)
        : x(lat_point.x), y(lat_point.y), theta(lat_point.theta), kappa(lat_point.kappa), s(lon_point.s), v(lon_point.v), a(lon_point.a), j(lon_point.j), t(lon_point.t) {}        
    TrajectoryPoint(const TrajectoryPoint& trajectory_point){
        x = trajectory_point.x;
        y = trajectory_point.y;
        theta = trajectory_point.theta;
        kappa = trajectory_point.kappa;
        s = trajectory_point.s;
        v = trajectory_point.v;
        a = trajectory_point.a;
        j = trajectory_point.j;
        t = trajectory_point.t;
    }
};
} // namespace planning_basic_data
#endif // TRAJECTORY_POINT_H_