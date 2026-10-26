/*
 * @Author: Jianguo Zhao
 * @Date: 2023-11-21 21:29:31
 */
#ifndef VOXEL_UTILTS_HPP_
#define VOXEL_UTILTS_HPP_
// c++
#include <iostream>
#include <math.h>
#include <thread>
#include <fstream>
#include <vector>
#include <queue>
#include <tr1/unordered_map>
#include <unordered_map>
#include <tuple>
// eigen
#include <eigen3/Eigen/Core>

// robin_map
#include "ort_map/robin_map/robin_map.h"

struct Voxel
{
     Voxel() = default;

     Voxel(int x, int y, int z) : x(x), y(y), z(z) {}

     bool operator==(const Voxel &vox) const { return x == vox.x && y == vox.y && z == vox.z; }

     inline bool operator<(const Voxel &vox) const
     {
          return x < vox.x || (x == vox.x && y < vox.y) || (x == vox.x && y == vox.y && z < vox.z);
     }

     inline static Voxel coordinates(const Eigen::Vector3d &point, double Voxel_size)
     {
          return {int(point.x() / Voxel_size),
               int(point.y() / Voxel_size),
               int(point.z() / Voxel_size)};
     }

     int x;
     int y;
     int z;
};

struct VoxelBlock
{
     explicit VoxelBlock(int num_points_ = 10) : num_points(num_points_) { points.reserve(num_points_); }

     std::vector<Eigen::Vector3d, Eigen::aligned_allocator<Eigen::Vector3d>> points;

     bool IsFull() const { return num_points == points.size(); }

     void AddPoint(const Eigen::Vector3d &point)
     {
          assert(num_points > points.size());
          points.push_back(point);
     }

     inline int NumPoints() const { return points.size(); }

     inline int Capacity() { return num_points; }

     int num_points;
};
///  ===================  for search neighbor  ===================================================
using pair_distance_t = std::tuple<double, Eigen::Vector3d, Voxel>;

struct comparator
{
     bool operator()(const pair_distance_t &left, const pair_distance_t &right) const
     {
          return std::get<0>(left) < std::get<0>(right);
     }
};

using priority_queue_t = std::priority_queue<pair_distance_t, std::vector<pair_distance_t>, comparator>;


typedef tsl::robin_map<Voxel, VoxelBlock> VoxelHashMap;
// typedef std::unordered_map<Voxel, VoxelBlock> VoxelHashMap;
namespace std
{

     template <>
     struct hash<Voxel>
     {
          std::size_t operator()(const Voxel &vox) const
          {
               const size_t kP1 = 73856093;
               const size_t kP2 = 19349669;
               const size_t kP3 = 83492791;
               return vox.x * kP1 + vox.y * kP2 + vox.z * kP3;
          }
     };
}











// // 自定义哈希函数，将x、y、z的值组合成一个唯一的标识
// struct KeyHash
// {
//      std::size_t operator()(const std::tuple<int, int, int> &key) const
//      {
//           int x, y, z;
//           std::tie(x, y, z) = key;
//           return x ^ y ^ z;
//      }
// };

// // 自定义比较函数，将x、y、z的值视为相等
// struct KeyEqual
// {
//      bool operator()(const std::tuple<int, int, int> &lhs, const std::tuple<int, int, int> &rhs) const
//      {
//           int x1, y1, z1;
//           int x2, y2, z2;
//           std::tie(x1, y1, z1) = lhs;
//           std::tie(x2, y2, z2) = rhs;
//           return x1 == x2 && y1 == y2 && z1 == z2;
//      }
// };

// void SubSampleScan(std::vector<Point3D> &scan, double size_voxel)
// {

//      std::unordered_map<std::tuple<int, int, int>, std::vector<Point3D>, KeyHash, KeyEqual> grid;
//      for (int i = 0; i < (int)scan.size(); i++)
//      {
//           auto kx = static_cast<int>(scan[i].point[0] / size_voxel);
//           auto ky = static_cast<int>(scan[i].point[1] / size_voxel);
//           auto kz = static_cast<int>(scan[i].point[2] / size_voxel);
//           grid[std::make_tuple(kx, ky, kz)].push_back(scan[i]);
//      }
//      scan.resize(0);
//      int step = 0;
//      for (auto &n : grid)
//      {
//           if (n.second.size() > 0)
//           {
//                for (int i = 1; i < (int)n.second.size(); i++)
//                {
//                     n.second[0].point += n.second[i].point;
//                     n.second[0].raw_point += n.second[i].raw_point;
//                     n.second[0].intensity += n.second[i].intensity;
//                }
//                n.second[0].point /= (double)n.second.size();
//                n.second[0].raw_point /= (double)n.second.size();
//                n.second[0].intensity /= (double)n.second.size();
//                scan.push_back(n.second[0]);
//                step++;
//           }
//      }
// }
// void GridSampling(const std::vector<Point3D> &scan, std::vector<Point3D> &keypoints, double size_voxel_subsampling)
// {
//      keypoints.resize(0);
//      std::vector<Point3D> frame_sub;
//      frame_sub.resize(scan.size());
//      for (int i = 0; i < (int)frame_sub.size(); i++)
//      {
//           frame_sub[i] = scan[i];
//      }

//      SubSampleScan(frame_sub, size_voxel_subsampling);
//      keypoints.reserve(frame_sub.size());
//      for (int i = 0; i < (int)frame_sub.size(); i++)
//      {
//           keypoints.push_back(frame_sub[i]);
//      }
// }

#endif