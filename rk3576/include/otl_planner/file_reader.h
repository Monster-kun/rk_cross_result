/**
 * @author: Junfeng Guo
 * @date: 2023/12/09
*/
#pragma once
#ifndef FILE_READER_H_
#define FILE_READER_H_

/* sysdtem headers */
#include <iostream>
#include <vector>
#include <memory>
#include <eigen3/Eigen/Core>
#include <eigen3/Eigen/Dense>

/* local headers */
#include "planning_utils/planning_utils.hpp"
#include "trajectory_data/lateral_trajectory.hpp"
#include "planning_basic_data/trajectory_point.hpp"
namespace otl_planner {

class FileReader {
using LatTrajectory = trajectory_data::LateralTrajectory;
using LatPoint = planning_basic_data::LatPoint;

public:
    /**
     * @brief Construct a new File Reader object
    */
    FileReader() = default;
    /**
     * @brief Destroy the File Reader object
    */
    ~FileReader() = default;
    /**
     * @brief Initialize the file reader
     * @param file_path: the path of the file
    */
    void Init(const std::string& file_path);
    /**
     * @brief Read all paths from the file
     * @param all_paths: the vector of all paths
    */
    void ReadAllPaths(std::vector<std::shared_ptr<LatTrajectory>>& all_paths);
    /**
     * @brief Read end points from the file
     * @param end_points: the vector of end points
    */
    void ReadEndPoints(std::vector<std::vector<LatPoint>>& end_points);
    /**
     * @brief Read correspondences from the file
     * @param grid_num: number of grids
     * @param correspondences: the vector of correspondences
    */
    void ReadCorrespondences(
        const int grid_num,
        std::vector<std::vector<int>>& correspondences,
        std::vector<std::vector<int>>& correspondences_bounds);
    
    typedef std::shared_ptr<FileReader> Ptr;
private:
    std::string file_path_;
    std::string all_paths_file_name_;
    std::string end_points_file_name_;
    std::string correspondences_file_name_;
    std::string correspondences_bounds_file_name_;
};

}//namespace otl_planner
#endif