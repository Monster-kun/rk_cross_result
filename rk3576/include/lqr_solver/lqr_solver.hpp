#pragma once
#include <eigen3/Eigen/Dense>
#include <cmath>


namespace common
{
namespace math 
{
class LQR
{
public:
  LQR() = default;
  LQR(unsigned int iter_max);
  LQR(unsigned int iter_max,double minValue);

  Eigen::MatrixXd solver(Eigen::MatrixXd& A,Eigen::MatrixXd& B,Eigen::MatrixXd& Q,Eigen::MatrixXd& R,const double ts=0.01);
private:
  unsigned int iter_max_ = 1000;
  double minValue_ = 10e-9;
};
  

}//math
}//common