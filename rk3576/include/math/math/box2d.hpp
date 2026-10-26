/**
 * @file box2d.hpp
 * @author Junfeng Guo
 * @brief 
 * @version 0.1
 * @date 2024-06-29
 * 
 * @copyright Copyright (c) 2024
 * 
 */
#pragma once

#include "eigen3/Eigen/Core"
#include "eigen3/Eigen/Dense"
#include <vector>
#include <limits>

namespace planning
{
namespace math
{
class Box2d
{
public:
    /**
     * @brief Construct a new Box2d object
    */
    Box2d() = default;
    /**
     * @brief Construct a new Box2d object
     * @param center the center point of the box
     * @param length the length of the box
     * @param width the width of the box
     * @param heading the heading of the box
    */
    Box2d(const Eigen::Vector2d &center, const double length, const double width, const double heading);
    /**
     * @brief Destroy the Box2d object
     */
    ~Box2d() = default;

    /**
     * @brief Check if the point is in the box
     * @param point point to check
     * @return whether the point is in the box 
     */
    bool IsPointIn(const Eigen::Vector2d &point) const;
    /**
     * @brief Check if the point is on the boundary of the box
     * @param point point to check
     * @return whether the point is on the boundary of the box
     */
    bool IsPointOnBoundary(const Eigen::Vector2d &point) const;
    /**
     * @brief Check if the box is overlap with another box
     * @param other_box the other box
     * @return whether the box is overlap with another box
     */
    bool HasOverlap(const Box2d &box) const;
    // /**
    //  * @brief Check if the box is overlap with a line segment
    //  * @param line_segment the line segment
    //  * @return whether the box is overlap with a line segment
    //  */
    // bool HasOverlap(const std::pair<Eigen::Vector2d, Eigen::Vector2d> &line_segment) const;
    // /**
    //  * @brief Determines the distance between the box and a given line segment
    //  * @param line_segment The line segment whose distance to the box we compute
    //  * @return A distance
    //  */
    // double DistanceTo(const std::pair<Eigen::Vector2d, Eigen::Vector2d> &line_segment) const;
    // /**
    //  * @brief Determines the distance between two boxes
    //  * @param box The box whose distance to this box we want to compute
    //  * @return A distance
    //  */
    // double DistanceTo(const Box2d &box) const;
    /**
     * @brief Get the center of the box
     * @return the center of the box
    */
    Eigen::Vector2d center() const {return center_;};
    /**
     * @brief Get the length of the box
     * @return the length of the box
    */
    double length() const {return length_;};
    /**
     * @brief Get the half length of the box
     * @return the half length of the box
    */
    double half_length() const {return half_length_;};
    /**
     * @brief Get the width of the box
     * @return the width of the box
    */
    double width() const {return width_;};
    /**
     * @brief Get the half width of the box
     * @return the half width of the box
    */
    double half_width() const {return half_width_;};
    /**
     * @brief Get the heading of the box
     * @return the heading of the box
    */
    double heading() const {return heading_;};
    /**
     * @brief Get cos of the angle of the box
     * @return cos of the angle of the box
    */
    double cos_angle() const {return cos_angle_;};
    /**
     * @brief Get sin of the angle of the box
     * @return sin of the angle of the box
    */
    double sin_angle() const {return sin_angle_;};
    /**
     * @brief Get the corners of the box
     * @return the corners of the box
    */
    std::vector<Eigen::Vector2d> corners() const {return corners_;};
    /**
     * @brief Get the edges of the box
     * @return the edges of the box
    */
    std::vector<std::pair<Eigen::Vector2d, Eigen::Vector2d>> edges() const {return edges_;};
    /**
     * @brief Get the min x of the box
     * @return the min x of the box
     */
    double min_x() const {return xlim_[0];};
    /**
     * @brief Get the max x of the box
     * @return the max x of the box
     */
    double max_x() const {return xlim_[1];};
    /**
     * @brief Get the min y of the box
     * @return the min y of the box
     */
    double min_y() const {return ylim_[0];};
    /**
     * @brief Get the max y of the box
     * @return the max y of the box
     */
    double max_y() const {return ylim_[1];};
    /**
     * @brief Get the x limitation of the box
     * @return the x limitation of the box
     */
    std::array<double, 2> xlim() const {return xlim_;};
    /**
     * @brief Get the y limitation of the box
     * @return the y limitation of the box
     */
    std::array<double, 2> ylim() const {return ylim_;};
    /**
     * @brief Get the helper of the box
     * @return the helper of the box
     */
    std::array<double, 4> helper() const {return helper_;};
private:
    /**
     * @brief Compute the corners of the box
     * 
     */
    void ComputeCorners();

    Eigen::Vector2d center_;
    double length_;
    double width_, half_width_;
    double heading_, half_length_;
    double cos_angle_ = 1.0;
    double sin_angle_ = 0.0;    
    std::vector<Eigen::Vector2d> corners_;
    std::vector<std::pair<Eigen::Vector2d, Eigen::Vector2d>> edges_;
    std::array<double, 2> xlim_{1e9, -1e9};
    std::array<double, 2> ylim_{1e9, -1e9};
    std::array<double, 4> helper_{0, 0, 0, 0};    
};
} // namespace math
} // namespace planning