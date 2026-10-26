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
#include <rclcpp/rclcpp.hpp>
#include <image_transport/image_transport.hpp>
#include "localization_msgs/msg/pose_vel_acc_ang.hpp"
#include <sensor_msgs/msg/point_cloud2.hpp>
#include "people_msgs/msg/people.hpp"
#include "perception_msgs/msg/track_array.hpp"
#include "visualization_msgs/msg/marker_array.hpp"

#include <eigen3/Eigen/Core>
#include <eigen3/Eigen/Dense>
#include "tf2_ros/transform_listener.h"
#include "tf2_ros/buffer.h"

#include <rog_map/prob_map.h>
#include <rog_map/utils/common_lib.hpp>

#include <mutex>
#include <pcl/point_cloud.h>
#include <pcl/filters/crop_box.h>
#include <pcl_ros/transforms.hpp>
#include <pcl_conversions/pcl_conversions.h>
#include <pcl/filters/voxel_grid.h>

namespace rog_map {
    using namespace std;
    using MSF_Status = localization_msgs::msg::PoseVelAccAng;
    using Pc2Msg = sensor_msgs::msg::PointCloud2;
    using PeopleMsg = people_msgs::msg::People;
    using TracksMsg = perception_msgs::msg::TrackArray;
    using MarkArrayMsg = visualization_msgs::msg::MarkerArray;

    typedef pcl::PointXYZI PointType;
    typedef pcl::PointCloud<PointType> PointCloudXYZI;

    class ROGMap : public ProbMap, public rclcpp::Node {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW

        typedef shared_ptr<ROGMap> Ptr;

        // ROGMap();
        ROGMap(const rclcpp::NodeOptions & options);
        ~ROGMap() = default;

        bool isLineFree(const Vec3f &start_pt, const Vec3f &end_pt,
                        const double &max_dis = 999999,
                        const vec_Vec3i &neighbor_list = vec_Vec3i{}) const;

        bool isLineFree(const Vec3f &start_pt, const Vec3f &end_pt,
                        Vec3f &free_local_goal, const double &max_dis = 999999,
                        const vec_Vec3i &neighbor_list = vec_Vec3i{}) const;

        bool isLineFree(const Vec3f &start_pt, const Vec3f &end_pt,
                        const bool & use_inf_map = false,
                        const bool & use_unk_as_occ = false) const;

        bool checkRayValid(const Eigen::Vector3d &start_pt, 
                        const Eigen::Vector3d &end_pt,
                        const bool & use_inf_map = false,
                        const bool & use_unk_as_occ = false) const;

        void updateMap(
            const pcl::PointCloud<pcl::PointXYZI>::Ptr &cloud, 
            const Eigen::Vector3d &pos, const Eigen::Quaterniond &quat);

        void GetOccPcl(pcl::PointCloud<pcl::PointXYZI>::Ptr &occ_pcl);
        void GetInfOccPcl(pcl::PointCloud<pcl::PointXYZI>::Ptr &inf_occ_pcl);

        bool checkOccupied(const Eigen::Vector3d& pos);

    private:
        void vizUpdate();
        void mapUpdate();
        void callbackStatus(const localization_msgs::msg::PoseVelAccAng::ConstSharedPtr &msg);
        void callbackCloud(const sensor_msgs::msg::PointCloud2::ConstSharedPtr &msg);
        void callbackDepth(
            const sensor_msgs::msg::Image::ConstSharedPtr &msg,
            const sensor_msgs::msg::CameraInfo::ConstSharedPtr& info_msg);
        void callbackTracks(const perception_msgs::msg::TrackArray::ConstSharedPtr &msg);
        void callbackObj(const people_msgs::msg::People::ConstSharedPtr& msg);

        void vecEvec3fToPcl(const vec_E<Vec3f>& points, pcl::PointCloud<pcl::PointXYZI>::Ptr &pcl);
        void removePoints(const TracksMsg& tracks, pcl::PointCloud<pcl::PointXYZI>::Ptr pc);
        void removePoints(const PeopleMsg& people, pcl::PointCloud<pcl::PointXYZI>::Ptr pc);

        bool getTFtransform(
            const std::string &target_frame, 
            const std::string &current_frame, 
            geometry_msgs::msg::TransformStamped& transformed);

        void vecEVec3fToPC2(const vec_E<Vec3f>& points, sensor_msgs::msg::PointCloud2& cloud);

        // Vec3f robot_pos_;
        RobotState robot_state_;
        std::shared_ptr<tf2_ros::Buffer> tf_buffer_;
        std::shared_ptr<tf2_ros::TransformListener> tf_listener_;
        bool receive_tracks{false};
        
        TracksMsg tracks_msg_;
        PeopleMsg people_msg_;

        // image_transport::ImageTransport it;

        struct RosCallback {
            rclcpp::Subscription<MSF_Status>::SharedPtr msf_cb;
            rclcpp::Subscription<Pc2Msg>::SharedPtr pc_cb;
            rclcpp::Subscription<PeopleMsg>::SharedPtr people_cb;
            rclcpp::Subscription<TracksMsg>::SharedPtr tracks_cb;

            // image_transport::CameraSubscriber depth_cb;
            rclcpp::TimerBase::SharedPtr update_timer;

            int unfinished_frame_cnt{0};
            Pose pc_pose;
            PointCloud pc;

            std::mutex update_lock;
        } rc_;   

        struct VisualizeMap {
            rclcpp::Publisher<Pc2Msg>::SharedPtr occ_pub, unknown_pub, occ_inf_pub,
                                    unknown_inf_pub, frontier_pub, esdf_pub, 
                                    esdf_neg_pub, esdf_occ_pub;
            // rclcpp::Publisher<MarkArrayMsg> marker_array_pub;
            // MarkArrayMsg mkr_arr;
            rclcpp::TimerBase::SharedPtr viz_timer;
        } vm_;             
    };
}
