#pragma once
#include <eigen3/Eigen/Dense>
namespace chassis_control_common
{
namespace math
{
namespace angle
{
double shortestdistance(const double a,const double b);
double shortestdistance(const Eigen::Vector3d A,const Eigen::Vector3d B);
double sgn_pz(const double a);
//  A B C -> begin to end
double getkappa(double ax,double ay,double bx,double by,double cx,double cy);
double getdistance(double ax,double ay,double bx,double by);


} // angle
} // math
} //chassis_control_common