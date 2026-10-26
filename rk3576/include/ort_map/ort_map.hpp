/*
 * @Author: Jianguo Zhao
 * @Date: 2023-11-21 21:32:24
 */
#ifndef ORT_MAP_HPP_
#define ORT_MAP_HPP_

#include <pcl/filters/crop_box.h>
#include <pcl/filters/voxel_grid.h>
#include <pcl/filters/statistical_outlier_removal.h>
#include <pcl/io/pcd_io.h>
#include <pcl/surface/concave_hull.h>
#include <pcl/surface/convex_hull.h>

#include <pcl/search/flann_search.h>
#include <pcl/kdtree/kdtree_flann.h>
#include <pcl/search/kdtree.h>
#include <pcl/registration/registration.h>
#include <pcl/point_cloud.h>
#include <pcl/point_types.h>
#include <pcl/impl/pcl_base.hpp>
#include <pcl_conversions/pcl_conversions.h>

#include "ort_map/voxel_utils.hpp"

class OrtMap{
public: 
    OrtMap() {}
    OrtMap(double voxel_size, 
        int max_num_points_in_voxel, 
        double min_distance_points,
        double map_size)
        : voxel_size_(voxel_size),
          max_num_points_in_voxel_(max_num_points_in_voxel),
          min_distance_points_(min_distance_points),
          map_size_(map_size){}
    ~OrtMap() = default;

    /**
     * @brief 查找一个最近临的点云
     * 
     * @param point point to search
     * @param range range to search
     * @param max_num_neighbors maximun number of neighbor points
     * @return std::vector<Eigen::Vector3d, Eigen::aligned_allocator<Eigen::Vector3d>> 
     */
    std::vector<Eigen::Vector3d, Eigen::aligned_allocator<Eigen::Vector3d>>
    SearchNeighbors(const Eigen::Vector3d &point, const double range, const int max_num_neighbors) 
    {
        int kx = static_cast<int>(point[0] / voxel_size_);
        int ky = static_cast<int>(point[1] / voxel_size_);
        int kz = static_cast<int>(point[2] / voxel_size_);
        int nb_voxels_visited = static_cast<int>(range / voxel_size_);
        
        priority_queue_t priority_queue;
        Voxel voxel_temp(kx, ky, kz);
        
        for (int kxx = kx - nb_voxels_visited; kxx < kx + nb_voxels_visited + 1; ++kxx)
        {
            for (int kyy = ky - nb_voxels_visited; kyy < ky + nb_voxels_visited + 1; ++kyy)
            {
                for (int kzz = kz - nb_voxels_visited; kzz < kz + nb_voxels_visited + 1; ++kzz)
                {
                    voxel_temp.x = kxx;
                    voxel_temp.y = kyy;
                    voxel_temp.z = kzz;

                    auto search = voxel_map_.find(voxel_temp);
                    if (search != voxel_map_.end())
                    {
                        const auto &voxel_block = search.value();
                        if (voxel_block.NumPoints() < 1)
                        {
                            continue;
                        }
                        for (int i(0); i < voxel_block.NumPoints(); ++i)
                        {
                            auto &neighbor = voxel_block.points[i];
                            double distance = (neighbor - point).norm();
                            if (priority_queue.size() == max_num_neighbors)
                            {
                                if (distance < std::get<0>(priority_queue.top()))
                                {
                                    priority_queue.pop();
                                    priority_queue.emplace(distance, neighbor, voxel_temp);
                                }
                            }
                            else
                            {
                                priority_queue.emplace(distance, neighbor, voxel_temp);
                            }
                        }
                    }
                }
            }
        }

        auto size = priority_queue.size();
        std::vector<Eigen::Vector3d, Eigen::aligned_allocator<Eigen::Vector3d>> closest_neighbors(size);

        for (auto i = 0; i < size; ++i)
        {
            closest_neighbors[size - 1 - i] = std::get<1>(priority_queue.top());
            priority_queue.pop();
        }

        return closest_neighbors;
    }

    /**
     * @brief 删除超出大小的点云
     * 
     * @param cloud 
     * @param location 
     */
    void LaserMapFovSegment(const Eigen::Vector3d &location) {
        std::vector<Voxel> voxels_to_erase;
        for (auto &pair : voxel_map_)
        {
            Eigen::Vector3d pt = pair.second.points[0];
            if ((pt - location).squaredNorm() > (map_size_ * map_size_))
            {
                voxels_to_erase.push_back(pair.first);
            }
        }
        for (auto &vox : voxels_to_erase)
        {
            voxel_map_.erase(vox);
        }
        std::vector<Voxel>().swap(voxels_to_erase);        
    }

    /**
     * @brief 删除确定要删除的栅格
     * 
     * @param voxels_to_erase 
     */
    void EraseVoxel(std::vector<Voxel> &voxels_to_erase) {
        for (auto &vox : voxels_to_erase)
        {
            voxel_map_.erase(vox);
        }
    }

    /**
     * @brief 将点云放到 voxel_map 中
     * 
     * @param cloud 
     */
    void AddPointToMap(const Eigen::Vector3d &point) {

        int kx = static_cast<int>(point[0] / voxel_size_);
        int ky = static_cast<int>(point[1] / voxel_size_);
        int kz = static_cast<int>(point[2] / voxel_size_);

        VoxelHashMap::iterator search = voxel_map_.find(Voxel(kx, ky, kz));

        if (search != voxel_map_.end())
        {
            auto &voxel_block = search.value();

            if (!voxel_block.IsFull())
            {
                // 获取最近的距离
                double sq_dist_min_to_points = std::numeric_limits<double>::max();
                for (int i(0); i < voxel_block.NumPoints(); ++i)
                {
                    auto &_point = voxel_block.points[i];
                    double sq_dist = (_point - point).squaredNorm();
                    if (sq_dist < sq_dist_min_to_points)
                    {
                        sq_dist_min_to_points = sq_dist;
                    }
                }
                if (sq_dist_min_to_points > (min_distance_points_ * min_distance_points_))
                {
                    voxel_block.AddPoint(point);
                }
            }
        }
        else
        {
            VoxelBlock block(max_num_points_in_voxel_);
            block.AddPoint(point);
            voxel_map_[Voxel(kx, ky, kz)] = std::move(block);
        }            
    }


private:

    VoxelHashMap voxel_map_;
    double map_size_ = 20.0;
    double voxel_size_ = 0.25;
    int max_num_points_in_voxel_ = 10;
    double min_distance_points_ = 0.1;
};

#endif