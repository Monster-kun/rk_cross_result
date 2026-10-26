#pragma once

#include "eigen3/Eigen/Core"

namespace planning_basic_data
{
class Obstacle
{
public:
    Obstacle(){};
    Obstacle(const int& id, const Eigen::Vector3d& pos, 
        const Eigen::Vector3d& size, const double& heading, 
        const double& speed)
        : id_(id), pos_(pos), size_(size), heading_(heading), speed_(speed)
    {
        radius_ = sqrt(size.x() * size.x() + size.y() * size.y()) / 2.0;
        vel_.x() = speed * cos(heading);
        vel_.y() = speed * sin(heading);
    };
    Obstacle(const int& id, const Eigen::Vector3d& pos, 
        const Eigen::Vector3d& size, const double& heading, 
        const Eigen::Vector3d& velocity)
        : id_(id), pos_(pos), size_(size), heading_(heading), vel_(velocity)
    {
        radius_ = sqrt(size.x() * size.x() + size.y() * size.y()) / 2.0;
        speed_ = vel_.head(2).norm();
    };    
    ~Obstacle(){};

    inline int id() const {return id_;};
    inline void set_id(const int id) {id_ = id;};
    
    inline double speed() const { return speed_; }
    inline double length() const { return size_.x();}
    inline double width() const {return size_.y();}
    inline double height() const { return size_.z();}
    inline double radius() const {return radius_;}
    
    inline double x() const {return pos_.x();}
    inline double y() const {return pos_.y();}
    inline double z() const {return pos_.z();}
    inline Eigen::Vector3d position() const {return pos_;}
    inline Eigen::Vector3d velocity() const {return vel_;}
    inline double heading() const {return heading_;}

    inline Eigen::Vector3d predict(const double t) const{
        return (pos_ + speed_ * t * Eigen::Vector3d(cos(heading_), sin(heading_), 0.0));
    }
private:
    int id_;
    Eigen::Vector3d pos_, vel_;
    Eigen::Vector3d size_;
    double heading_;
    double speed_;
    double radius_;
};
}