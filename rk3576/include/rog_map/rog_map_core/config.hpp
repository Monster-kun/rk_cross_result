/**
* This file is part of ROG-Map
*
* Copyright 2024 Yunfan REN, MaRS Lab, University of Hong Kong, <mars.hku.hk>
* Developed by Yunfan REN <renyf at connect dot hku dot hk>
* for more information see <https://github.com/hku-mars/ROG-Map>.
* If you use this code, please cite the respective publications as
* listed on the above website.
*
* ROG-Map is free software: you can redistribute it and/or modify
* it under the terms of the GNU Lesser General Public License as published by
* the Free Software Foundation, either version 3 of the License, or
* (at your option) any later version.
*
* ROG-Map is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
* GNU General Public License for more details.
*
* You should have received a copy of the GNU Lesser General Public License
* along with ROG-Map. If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

#include <rog_map/utils/common_lib.hpp>
#include "ament_index_cpp/get_package_share_directory.hpp"
#include "yaml-cpp/yaml.h"

namespace rog_map {
    using std::string;
    using std::vector;
#define RM_UNKNOWN_FLAG (-99999)
    typedef pcl::PointXYZI PclPoint;
    typedef pcl::PointCloud<PclPoint> PointCloud;

    class Config {
    private:

    public:
        Config() 
        {
            YAML::Node config = YAML::LoadFile(ament_index_cpp::get_package_share_directory("rog_map") + "/config/rog_map_parameters.yaml");
            
            //main parameters
            YAML::Node main = config["rog_map"]["ros__parameters"]["main"];
            resolution = main["resolution"].as<double>();
            inflation_resolution = main["inflation_resolution"].as<double>();
            inflation_step = main["inflation_step"].as<int>();
            unk_inflation_en = main["unk_inflation_en"].as<bool>();
            unk_inflation_step = main["unk_inflation_step"].as<int>();
            map_size_d = Vec3f(main["map_size"][0].as<double>(), main["map_size"][1].as<double>(), main["map_size"][2].as<double>());
            fix_map_origin = Vec3f(main["fix_map_origin"][0].as<double>(), main["fix_map_origin"][1].as<double>(), main["fix_map_origin"][2].as<double>());
            frontier_extraction_en = main["frontier_extraction_en"].as<bool>();
            virtual_ceil_height = main["virtual_ceil_height"].as<double>();
            virtual_ground_height = main["virtual_ground_height"].as<double>();
            intensity_thresh = main["intensity_thresh"].as<int>();
            point_filt_num = main["point_filt_num"].as<int>();

            //ros callback
            YAML::Node ros_callback = config["rog_map"]["ros__parameters"]["ros_callback"];
            ros_callback_en = ros_callback["enable"].as<bool>();
            use_perception = ros_callback["use_perception"].as<bool>();
            status_topic = ros_callback["status_topic"].as<string>();
            lidar_topic = ros_callback["lidar_topic"].as<string>();
            input_source = ros_callback["input_source"].as<string>();
            camera_topic = ros_callback["camera_topic"].as<string>();
            perception_topic = ros_callback["perception_topic"].as<string>();
            dynamic_obj_topic = ros_callback["dynamic_obj_topic"].as<string>();

            std::cout << BLUE << "\t[ROG] enable callback: " << ros_callback_en << RESET << std::endl;
            std::cout << BLUE << "\t[ROG] input source: " << input_source << RESET << std::endl;
            std::cout << BLUE << "\t[ROG] status topic: " << status_topic << RESET << std::endl;
            std::cout << BLUE << "\t[ROG] lidar topic: " << lidar_topic << RESET << std::endl;
            std::cout << BLUE << "\t[ROG] camera topic: " << camera_topic << RESET << std::endl;
            std::cout << BLUE << "\t[ROG] perception topic: " << perception_topic << RESET << std::endl;
            std::cout << BLUE << "\t[ROG] dynamic_obj_topic: " << dynamic_obj_topic << RESET << std::endl;

            //visualizaiton
            YAML::Node visualization = config["rog_map"]["ros__parameters"]["visualization"];
            visualization_en = visualization["enable"].as<bool>();
            inflation_vis = visualization["inflation_vis"].as<bool>();
            frontier_vis = visualization["frontier_vis"].as<bool>();
            esdf_vis = visualization["esdf_vis"].as<bool>();
            unknown_vis = visualization["unknown_vis"].as<bool>();
            viz_rate = visualization["viz_rate"].as<double>();
            visualization_range = Vec3f(
                visualization["range"][0].as<double>(),
                visualization["range"][1].as<double>(),
                visualization["range"][2].as<double>());           
            viz_frame_id = visualization["frame_id"].as<string>();
            
            // map sliding
            YAML::Node map_sliding = config["rog_map"]["ros__parameters"]["map_sliding"];
            map_sliding_en = map_sliding["enable"].as<bool>();
            map_sliding_thresh = map_sliding["threshold"].as<double>();

            // esdf
            YAML::Node esdf = config["rog_map"]["ros__parameters"]["esdf"];
            esdf_en = esdf["enable"].as<bool>();
            esdf_resolution = esdf["resolution"].as<double>();
            esdf_local_update_box = Vec3f(esdf["local_update_box"][0].as<double>(), esdf["local_update_box"][1].as<double>(), esdf["local_update_box"][2].as<double>());

            // raycasting
            YAML::Node raycasting = config["rog_map"]["ros__parameters"]["ray_casting"];
            raycasting_en = raycasting["enable"].as<bool>();
            batch_update_size = raycasting["batch_update_size"].as<int>();
            local_update_box_d = Vec3f(raycasting["local_update_box"][0].as<double>(), raycasting["local_update_box"][1].as<double>(), raycasting["local_update_box"][2].as<double>());
            raycast_range_min = raycasting["ray_range"][0].as<double>();
            raycast_range_max = raycasting["ray_range"][1].as<double>();
            p_min = raycasting["p_min"].as<float>();
            p_max = raycasting["p_max"].as<float>();
            p_hit = raycasting["p_hit"].as<float>();
            p_miss = raycasting["p_miss"].as<float>();
            p_occ = raycasting["p_occ"].as<float>();
            p_free = raycasting["p_free"].as<float>();
            unk_thresh = raycasting["unk_thresh"].as<double>();
            sqr_raycast_range_max = raycast_range_max * raycast_range_max;
            sqr_raycast_range_min = raycast_range_min * raycast_range_min;

            resetMapSize();

            /// Probabilistic Update
#define logit(x) (log((x) / (1 - (x))))
            l_hit = logit(p_hit);
            l_miss = logit(p_miss);
            l_min = logit(p_min);
            l_max = logit(p_max);
            l_occ = logit(p_occ);
            l_free = logit(p_free);

            int n_free = ceil(l_free / l_miss);
            int n_occ = ceil(l_occ / l_hit);

            std::cout << BLUE << "\t[ROG] n_free: " << n_free << RESET << std::endl;
            std::cout << BLUE << "\t[ROG] n_occ: " << n_occ << RESET << std::endl;

            std::cout << BLUE << "\t[ROG] l_hit: " << l_hit << RESET << std::endl;
            std::cout << BLUE << "\t[ROG] l_miss: " << l_miss << RESET << std::endl;
            std::cout << BLUE << "\t[ROG] l_min: " << l_min << RESET << std::endl;
            std::cout << BLUE << "\t[ROG] l_max: " << l_max << RESET << std::endl;
            std::cout << BLUE << "\t[ROG] l_occ: " << l_occ << RESET << std::endl;
            std::cout << BLUE << "\t[ROG] l_free: " << l_free << RESET << std::endl;

            // init spherical neighbor
            for (int dx = -inflation_step; dx <= inflation_step; dx++) {
                for (int dy = -inflation_step; dy <= inflation_step; dy++) {
                    for (int dz = -inflation_step; dz <= inflation_step; dz++) {
                        if (inflation_step == 1 ||
                            dx * dx + dy * dy + dz * dz <= inflation_step * inflation_step) {
                            spherical_neighbor.emplace_back(dx, dy, dz);
                        }
                    }
                }
            }
            std::sort(spherical_neighbor.begin(), spherical_neighbor.end(), [](const Vec3i &a, const Vec3i &b) {
                return a.norm() < b.norm();
            });

            if (unk_inflation_en) {
                unk_spherical_neighbor.clear();
                // init spherical neighbor
                for (int dx = -unk_inflation_step; dx <= unk_inflation_step; dx++) {
                    for (int dy = -unk_inflation_step; dy <= unk_inflation_step; dy++) {
                        for (int dz = -unk_inflation_step; dz <= unk_inflation_step; dz++) {
                            if (unk_inflation_step == 1 ||
                                dx * dx + dy * dy + dz * dz <= unk_inflation_step * unk_inflation_step) {
                                unk_spherical_neighbor.emplace_back(dx, dy, dz);
                            }
                        }
                    }
                }
                std::sort(unk_spherical_neighbor.begin(), unk_spherical_neighbor.end(),
                          [](const Vec3i &a, const Vec3i &b) {
                              return a.norm() < b.norm();
                          });
            }
        }

        // add 24.07.18 add esdf
        bool esdf_en{false};
        Vec3f esdf_local_update_box;
        double esdf_resolution;

        double resolution, inflation_resolution;
        int inflation_step;
        Vec3f local_update_box_d, half_local_update_box_d;
        Vec3i local_update_box_i, half_local_update_box_i;
        Vec3f map_size_d, half_map_size_d;
        Vec3i inf_half_map_size_i, half_map_size_i, fro_half_map_size_i;
        double virtual_ceil_height, virtual_ground_height;
        int virtual_ceil_height_id_g, virtual_ground_height_id_g;

        bool visualization_en{false}, frontier_extraction_en{false},
                raycasting_en{true}, ros_callback_en{false}, pub_unknown_map_en{false};

        std::vector<Vec3i> spherical_neighbor;
        std::vector<Vec3i> unk_spherical_neighbor;
        
        bool enable_perception{false};

        /* ros callback */
        string status_topic, lidar_topic, camera_topic, perception_topic, dynamic_obj_topic; 
        string input_source;
        bool use_perception{false};

        /* visualization */
        Vec3f visualization_range;
        double viz_rate;
        string viz_frame_id;
        bool inflation_vis{false}, frontier_vis{false}, esdf_vis{false}, unknown_vis{false};

        /* intensity noise filter*/
        int intensity_thresh;
        bool map_sliding_en{true};
        Vec3f fix_map_origin;

        /* probability update */
        double raycast_range_min, raycast_range_max;
        double sqr_raycast_range_min, sqr_raycast_range_max;
        int point_filt_num, batch_update_size;
        float p_hit, p_miss, p_min, p_max, p_occ, p_free;
        float l_hit, l_miss, l_min, l_max, l_occ, l_free;

        /* for unknown inflation */
        bool unk_inflation_en{false};
        int unk_inflation_step{0};

        double unk_thresh;
        double map_sliding_thresh;

        void resetMapSize() {

            int inflation_ratio = ceil(inflation_resolution / resolution);

#ifdef ORIGIN_AT_CENTER
            // When discretized in such a way that the origin is at cell center
    // the inflation ratio should be an odd number
    if (inflation_ratio % 2 == 0) {
        inflation_ratio += 1;
    }
    std::cout << RED << " -- [RM-Config] inflation_ratio: " << inflation_ratio << std::endl;
#endif

            inflation_resolution = resolution * inflation_ratio;
            std::cout << GREEN << " -- [RM-Config] inflation_resolution: " << inflation_resolution << std::endl;

            half_map_size_d = map_size_d / 2;

            // Size_d is only for calculate index number.
            // 1) we calculate the index number of the inf map
            int max_step = 0;
            if (!unk_inflation_en) {
                max_step = inflation_step;
            } else {
                max_step = std::max(inflation_step, unk_inflation_step);
            }
            inf_half_map_size_i = (half_map_size_d / inflation_resolution).cast<int>()
                                  + (max_step + 1) * Vec3i::Ones();

            // 2) we calculate the index number of the prob map, which should be smaller than infmap
            half_map_size_i = (inf_half_map_size_i - (max_step + 1) * Vec3i::Ones()) * inflation_ratio;

            // 3) compute the frontier counter map size
            if (frontier_extraction_en) {
                fro_half_map_size_i = half_map_size_i + Vec3i::Constant(1);
            }

            // 4) re-compute the map_size_d, the map_size_d is not that important.
            map_size_d = (half_map_size_i * 2 + Vec3i::Constant(1)).cast<double>() * resolution;
            half_map_size_d = map_size_d / 2;

            // 5) compute the index of raycasting update box
            half_local_update_box_d = local_update_box_d / 2;
            half_local_update_box_i = (half_local_update_box_d / resolution).cast<int>();
            local_update_box_i = half_local_update_box_i * 2 + Vec3i::Constant(1);
            local_update_box_d = local_update_box_i.cast<double>() * resolution;
        }
    };

}
