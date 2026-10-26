/**
 * @author: Junfeng Guo
 * @date: 2024/01/10
 */
#pragma once
#ifndef OTL_PLANNER__GRID_MAP_H_
#define OTL_PLANNER__GRID_MAP_H_

/* system headers */
#include <iostream>
#include <vector>
#include <cstdint>
#include <limits>
#include <unordered_set>
#include <eigen3/Eigen/Dense>
#include <eigen3/Eigen/Core>
#include <pcl/point_cloud.h>
#include <pcl/point_types.h>

namespace otl_planner
{
struct MappingData
{
    // main data
    std::vector<double> occupancy_buffer_, occupancy_buffer_2d_;

    // position
    // Eigen::Vector3d robot_pose_;

    // map configuration
    double resolution_, resolution_inv_;
    double ground_height_;
    Eigen::Vector3d map_origin_, map_size_;
    Eigen::Vector3d map_min_, map_max_;
    Eigen::Vector3i map_voxel_num_;
};

class GridMap
{
public:
    /**
     * @brief Construct a new Grid Map object
    */
    GridMap() = default;
    /**
     * @brief Destroy the Grid Map object
    */
    ~GridMap() = default;
    /**
     * @brief Initialize the grid map
     * @param resolution the resolution of the grid map
     * @param ground_height the height of the ground
     * @param map_size the size of the map
     * @param obstacle_inflation_distance square X/Y padding per side, in metres
    */
    void Initialize(
        const double resolution, 
        const double ground_height,
        const Eigen::Vector3d& map_size,
        const double obstacle_inflation_distance = 0.5);
    /**
     * @brief Reset the grid map
    */
    void ResetBuffer();
    /**
     * @brief Reset the grid map
     * @param min the minimum point of the map
     * @param max the maximum point of the map
    */
    void ResetBuffer(Eigen::Vector3d min, Eigen::Vector3d max);

    //some tools
    /**
     * @brief Convert the position to the index
     * @param pos the position
     * @param id the index
    */
    inline void PosToIndex(const Eigen::Vector3d& pos, Eigen::Vector3i& id);
    /**
     * @brief Convert the position to the index in 2d
     * @param pos the position
     * @param id the index
    */
    inline void PosToIndex2d(const Eigen::Vector2d& pos, Eigen::Vector2i& id);
    /**
     * @brief Convert the index to the position
     * @param idx the index
     * @param pos the position
    */
    inline void IndexToPos(const Eigen::Vector3i& idx, Eigen::Vector3d& pos);
    /**
     * @brief Convert the index to the id
     * @param index the point in index
     * @return the id
    */
    inline int IndexToID(const Eigen::Vector3i& index);
    /**
     * @brief Convert the index to the id
     * @param xi the x index
     * @param yi the y index
     * @param zi the z index
     * @return the id
    */
    inline int IndexToID(const int xi, const int yi, const int zi);
    /**
     * @brief Convert the index to the id in 2d
     * @param index the point in index
     * @return the id
    */
    inline int IndexToID2d(const Eigen::Vector2i& index);
    /**
     * @brief Convert the index to the id in 2d
     * @param xi the x index
     * @param yi the y index
     * @return the id
    */
    inline int IndexToID2d(const int xi, const int yi);
    /**
     * @brief Check if the position is in the map
     * @param pos the position
     * @return true if the position is in the map
    */
    inline bool IsInMap(const Eigen::Vector3d& pos);
    /**
     * @brief Check if the position is in the map
     * @param idx the position index
     * @return true if the position is in the map
    */
    inline bool IsInMap(const Eigen::Vector3i& idx);
    /**
     * @brief Check if the position is in the map in 2d
     * @param pos the position
     * @return true if the position is in the map
    */
    inline bool IsInMap2d(const Eigen::Vector2d& pos);
    /**
     * @brief Check if the position is occupied
     * @param pos the position
     * @return true if the position is occupied
    */
    inline bool IsOccupied(const Eigen::Vector3d& pos);   
    /**
     * @brief Check if the position is occupied
     * @param idx the position index
     * @return true if the position is occupied
    */ 
    inline bool IsOccupied(const Eigen::Vector3i& idx);

    // Shared collision geometry: the XY projection of the once-inflated cloud.
    // Positions are map-aligned and relative to the robot translation. No
    // footprint padding or lateral offset is added by these queries. The sparse
    // projection also retains voxels outside the finite 3D display/map volume.
    bool IsOccupied2d(const Eigen::Vector2d& pos) const;
    bool HasCollisionOnSegment(const Eigen::Vector2d& start,
                               const Eigen::Vector2d& end) const;
    bool HasCollisionInBox(const Eigen::Vector2d& minimum,
                           const Eigen::Vector2d& maximum) const;

    // Soft preference only: distance to the existing inflated cell boxes,
    // capped at max_distance. Coordinates match the shared collision queries.
    double GetObstacleClearance(const Eigen::Vector2d& pos, double max_distance) const;
    // Equal blend of mean and peak squared clearance deficit in the first
    // lookahead metres, so a short bottleneck is not diluted by open space.
    // Sampling is independent of waypoint density; this is not a collision test.
    double ComputeClearanceCost(const std::vector<Eigen::Vector2d>& path,
                               double preferred_clearance, double lookahead = 2.0) const;
    /**
     * @brief Get the occupancy map
     * @return the occupancy map
    */
    std::vector<double> GetOccupancyMap() {return md_.occupancy_buffer_;};
    /**
     * @brief Get the 2d occupancy map
     * @return the occupancy map in 2d
    */
    std::vector<double> GetOccupancyMap2d() {return md_.occupancy_buffer_2d_;};
    /**
     * @brief Get the resolution of the map
     * @return the resolution of the map
    */
    double GetResolution() {return md_.resolution_;};
    /**
     * @brief Get the origin of the map
     * @return the origin of the map
    */
    Eigen::Vector3d GetMapOrigin() {return md_.map_origin_;};
    /**
     * @brief Get the size of the map
     * @return the size of the map
    */
    Eigen::Vector3i GetMapVoxelSize() {return md_.map_voxel_num_;};
    /**
     * @brief Get the size of the map
     * @return the size of the map
    */
    Eigen::Vector3d GetMapSize() {return md_.map_size_;};    
    // Occupied voxel centres in the robot frame, including points outside the
    // optimizer's finite map volume. Candidate filtering must see those too.
    pcl::PointCloud<pcl::PointXYZI>::Ptr GetInflatedCloud() const {return inflated_cloud_;}
    /**
     * @brief Generate the grid map
     * @param robot_pose the robot pose
     * @param cloud the point cloud
     * Builds the shared inflated cloud once, and rasterizes those same voxels
     * into the optimizer map without any second inflation.
    */
    void GenerateGridMap(
        const Eigen::Vector3d& robot_pose,
        const pcl::PointCloud<pcl::PointXYZI>::Ptr& cloud);
    // Crop source heights and inflated voxel centres in the planning frame.
    // Sources just outside the radius may still inflate into the retained disk.
    void GenerateGridMap(
        const Eigen::Vector3d& robot_pose,
        const pcl::PointCloud<pcl::PointXYZI>::Ptr& cloud,
        double reference_range, double max_obstacle_height,
        double min_obstacle_height = -std::numeric_limits<double>::infinity());
    /**
     * @brief Generate the grid map
     * @param robot_pose the robot pose
     * @param pc_obs the obstacle point cloud
     * @param pc_bounds ignored; retained for compatibility with existing callers
    */
    void GenerateGridMap(
        const Eigen::Vector3d& robot_pose,
        const pcl::PointCloud<pcl::PointXYZI>::Ptr& pc_obs,
        const pcl::PointCloud<pcl::PointXYZI>::Ptr& pc_bounds);        
        
    typedef std::shared_ptr<GridMap> Ptr;
    EIGEN_MAKE_ALIGNED_OPERATOR_NEW
private:
    static uint64_t CollisionCellKey(int x, int y)
    {
        return (static_cast<uint64_t>(static_cast<uint32_t>(x)) << 32) |
               static_cast<uint32_t>(y);
    }
    std::unordered_set<uint64_t> occupied_xy_;
    MappingData md_;
    double obstacle_inflation_distance_{0.5};
    pcl::PointCloud<pcl::PointXYZI>::Ptr inflated_cloud_{
        new pcl::PointCloud<pcl::PointXYZI>()};
};


inline void GridMap::PosToIndex(const Eigen::Vector3d& pos, Eigen::Vector3i& id)
{
    for (int i = 0; i < 3; ++i) id(i) = floor((pos(i) - md_.map_origin_(i)) * md_.resolution_inv_);
}

inline void GridMap::PosToIndex2d(const Eigen::Vector2d& pos, Eigen::Vector2i& id) 
{
    for (int i = 0; i < 2; ++i) id(i) = floor((pos(i) - md_.map_origin_(i)) * md_.resolution_inv_);
}

inline void GridMap::IndexToPos(const Eigen::Vector3i& idx, Eigen::Vector3d& pos)
{
    for (int i = 0; i < 3; ++i) pos(i) = (idx(i) + 0.5) * md_.resolution_ + md_.map_origin_(i);
}

inline int GridMap::IndexToID(const Eigen::Vector3i& id) {
  return id(0) * md_.map_voxel_num_(1) * md_.map_voxel_num_(2) + id(1) * md_.map_voxel_num_(2) + id(2);
}

inline int GridMap::IndexToID(const int x, const int y, const int z) {
  return x * md_.map_voxel_num_(1) * md_.map_voxel_num_(2) + y * md_.map_voxel_num_(2) + z;
}

inline int GridMap::IndexToID2d(const Eigen::Vector2i& index)
{
    return IndexToID2d(index(0), index(1));
}

inline int GridMap::IndexToID2d(int x, int y) {
    return x * md_.map_voxel_num_(1) + y;
}

inline bool GridMap::IsInMap(const Eigen::Vector3d& pos)
{
    if (pos(0) < md_.map_min_(0) + 1e-4 || pos(1) < md_.map_min_(1) + 1e-4 ||
        pos(2) < md_.map_min_(2) + 1e-4) 
    {
        return false;
    }
    if (pos(0) > md_.map_max_(0) - 1e-4 || pos(1) > md_.map_max_(1) - 1e-4 ||
        pos(2) > md_.map_max_(2) - 1e-4) 
    {
        return false;
    }
    return true;    
}

inline bool GridMap::IsInMap(const Eigen::Vector3i& idx)
{
    if(idx(0) < 0 || idx(1) < 0 || idx(2) < 0)
    {
        return false;
    }

    if (idx(0) > md_.map_voxel_num_(0) - 1 || idx(1) > md_.map_voxel_num_(1) - 1 ||
        idx(2) > md_.map_voxel_num_(2) - 1) 
    {
        return false;
    }
    return true;
}

inline bool GridMap::IsInMap2d(const Eigen::Vector2d& pos)
{
    if (pos(0) < md_.map_min_(0) + 1e-4 || pos(1) < md_.map_min_(1) + 1e-4)
    {
        return false;
    }
    if (pos(0) > md_.map_max_(0) - 1e-4 || pos(1) > md_.map_max_(1) - 1e-4)
    {
        return false;
    }
    return true;      
}

inline bool GridMap::IsOccupied(const Eigen::Vector3d& pos)
{
    Eigen::Vector3i idx;
    PosToIndex(pos, idx);
    return IsOccupied(idx);
}

inline bool GridMap::IsOccupied(const Eigen::Vector3i& idx)
{
    int id = IndexToID(idx);
    return md_.occupancy_buffer_[id] == 1.0;
}

} // namespace otl_planner

#endif
