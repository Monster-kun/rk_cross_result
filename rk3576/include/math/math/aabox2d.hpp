/**
 * @author: Junfeng Guo
 * @date: 2024/01/16
*/
#pragma once
#ifndef PLANNING__MATH__AABOX2D_HPP_
#define PLANNING__MATH__AABOX2D_HPP_

/* system header */
#include <vector>
#include <eigen3/Eigen/Dense>
#include <eigen3/Eigen/Core>

namespace planning
{
namespace math
{
class AABox2d
{
public:
    /**
     * @brief Construct a new AABox2d object
    */
    AABox2d() = default;
    /**
     * @brief Construct a new AABox2d object
     * @param center the center point of the box
     * @param length the length of the box
     * @param width the width of the box
    */
    AABox2d(const Eigen::Vector2d &center, const double length, const double width);
    /**
     * @brief Construct a new AABox2d object with two corners
     * @param first_corner first_corner
     * @param second_corner the opposite corner
    */
    AABox2d(const Eigen::Vector2d &first_corner, const Eigen::Vector2d &second_corner);    
    /**
     * @brief Construct a new AABox2d object with points
     * @param points the points of the box
    */
    explicit AABox2d(const std::vector<Eigen::Vector2d> &points);
    /**
     * @brief Get the center of the box
     * @return the center of the box
    */
    Eigen::Vector2d center() const {return center_;};
    /**
     * @brief Get the length of the box
    */
    double length() const {return length_;};
    /**
     * @brief Get the width of the box
    */
    double width() const {return width_;};
    /**
     * @brief Get the corners of the box
     * @return the corners of the box
    */
    std::vector<Eigen::Vector2d> corners() const {return corners_;};
    /**
     * @brief Get the center x of the box
     * @return the center x of the box
    */
    double center_x() const {return center_.x();};
    /**
     * @brief Get the center y of the box
     * @return the center y of the box
    */
    double center_y() const {return center_.y();};
    /**
     * @brief Get the max x of the box
     * @return the max x of the box
    */
    double max_x() const {return max_x_;};
    /**
     * @brief Get the min x of the box
     * @return the min x of the box
    */
    double min_x() const {return min_x_;};
    /**
     * @brief Get the max y of the box
     * @return the max y of the box
    */
    double max_y() const {return max_y_;};
    /**
     * @brief Get the min y of the box
     * @return the min y of the box
    */
    double min_y() const {return min_y_;};
    /**
     * @brief Check if the box contains the point
     * @param point the point to be checked
     * @return true if the box contains the point
    */
    bool IsPointIn(const Eigen::Vector2d &point) const;
    /**
     * @brief Check if the point is on the edge of the box
     * @param point the point to be checked
     * @return true if the point on the edge
    */
    bool IsPointOnBoundary(const Eigen::Vector2d &point) const;
    /**
     * @brief Distance to the box
     * @param point the point to be checked
     * @return the distance to the box
    */
    double DistanceTo(const Eigen::Vector2d &point) const;
    /**
     * @brief Distance to the box
     * @param box the box to be checked
     * @return the distance to the box
    */
    double DistanceTo(const AABox2d &box) const;
    /**
     * @brief Check if the box overlaps with the other box
     * @param box the box to be checked
     * @return true if the box overlaps with the other box
    */
    bool HasOverlap(const AABox2d &box) const;
    /**
     * @brief merge the box into the current box
     * @param box the box to be merged
    */    
    void MergeFrom(const AABox2d &other_box);
    /**
     * @brief merge the point into the box
     * @param point the point to be merged
    */
    void MergeFrom(const Eigen::Vector2d &point);
    /**
     * @brief merge the point into the box
     * @param points the point to be merged
    */
    void MergeFrom(const std::vector<Eigen::Vector2d> &points);       
    /**
     * @brief Shift the box by input vector
     * @param shift_vec the vector which the box will be shifted
    */
    void Shift(const Eigen::Vector2d &shift_vec);
private:
    Eigen::Vector2d center_;
    double length_;
    double width_;

    std::vector<Eigen::Vector2d> corners_;
    double max_x_ = std::numeric_limits<double>::lowest();
    double min_x_ = std::numeric_limits<double>::max();
    double max_y_ = std::numeric_limits<double>::lowest();
    double min_y_ = std::numeric_limits<double>::max();
};
} // namespace math
} // namespace planning
#endif // PLANNING__MATH__AABOX2D_HPP_