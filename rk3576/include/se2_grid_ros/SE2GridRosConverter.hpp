#pragma once

#include "se2_grid_core/SE2Grid.hpp"
#include "se2_grid_msgs/msg/se2_grid.hpp"

// STL
#include <vector>
#include <unordered_map>

// Eigen
#include <Eigen/Core>

// ROS
#include "sensor_msgs/msg/point_cloud2.hpp"
#include "sensor_msgs/msg/image.hpp"
#include "sensor_msgs/image_encodings.hpp"   // 这个在 ROS2 里通常还是这样用
#include "nav_msgs/msg/occupancy_grid.hpp"
#include "nav_msgs/msg/grid_cells.hpp"

#include <rosbag2_cpp/storage_options.hpp>
#include <rclcpp/rclcpp.hpp>
#include <se2_grid_msgs/msg/se2_grid.hpp>

// ROS
#include <sensor_msgs/point_cloud2_iterator.hpp>   // 注意后缀改为.hpp
#include <geometry_msgs/msg/point.hpp>
#include <geometry_msgs/msg/quaternion.hpp>

// ROS 2 的 rosbag2 API 不同于 ROS 1，通常不会直接包含头文件
// 需要使用 rosbag2 库和相关接口，示例：
#include <rosbag2_cpp/writers/sequential_writer.hpp>
#include <rosbag2_storage/storage_options.hpp>


#include <rosbag2_cpp/reader.hpp>
#include <se2_grid_msgs/msg/se2_grid.hpp>

// STL
#include <limits>
#include <algorithm>
#include <vector>

namespace se2_grid {

/*!
 * ROS interface for the Grid Map library.
 */
class SE2GridRosConverter
{
 public:
  /*!
   * Default constructor.
   */
  SE2GridRosConverter();

  /*!
   * Destructor.
   */
  virtual ~SE2GridRosConverter();

  /*!
   * Converts a ROS grid map message to a grid map object.
   * @param[in] message the grid map message.
   * @param[in] layers the layers to be copied.
   * @param[in] copyBasicLayers if true, basic layers are copied.
   * @param[in] copyAllNonBasicLayers if true, all basic layers are copied, otherwise only that one specified in layers.
   * @param[out] SE2Grid the grid map object to be initialized.
   * @return true if successful, false otherwise.
   */
  static bool fromMessage(const se2_grid_msgs::msg::SE2Grid& message, se2_grid::SE2Grid& SE2Grid, const std::vector<std::string>& layers);

  /*!
   * Converts a ROS grid map message to a grid map object.
   * @param[in] message the grid map message.
   * @param[out] SE2Grid the grid map object to be initialized.
   * @return true if successful, false otherwise.
   */
  static bool fromMessage(const se2_grid_msgs::msg::SE2Grid& message, se2_grid::SE2Grid& SE2Grid);

  /*!
   * Converts all layers of a grid map object to a ROS grid map message.
   * @param[in] SE2Grid the grid map object.
   * @param[out] message the grid map message to be populated.
   */
  static void toMessage(const se2_grid::SE2Grid& SE2Grid, se2_grid_msgs::msg::SE2Grid& message);

  /*!
   * Converts requested layers of a grid map object to a ROS grid map message.
   * @param[in] SE2Grid the grid map object.
   * @param[in] layers the layers to be added to the message.
   * @param[out] message the grid map message to be populated.
   */
  static void toMessage(const se2_grid::SE2Grid& SE2Grid, const std::vector<std::string>& layers,
                        se2_grid_msgs::msg::SE2Grid& message);

  /*!
   * Saves a grid map into a ROS bag. The timestamp of the grid map
   * is used as time for storing the message in the ROS bag. The time
   * value 0.0 is not a valid bag time and will be replaced by the
   * current time.
   * @param[in] SE2Grid the grid map object to be saved in the ROS bag.
   * @param[in] pathToBag the path to the ROS bag file.
   * @param[in] topic the name of the topic in the ROS bag.
   * @return true if successful, false otherwise.
   */
  static bool saveToBag(const se2_grid::SE2Grid& SE2Grid, const std::string& pathToBag,
                        const std::string& topic);

  /*!
   * Loads a SE2Grid from a ROS bag.
   * @param[in] pathToBag the path to the ROS bag file.
   * @param[in] topic the topic name of the grid map in the ROS bag.
   * @param[out] SE2Grid the grid map object to be initialized.
   * @return true if successful, false otherwise.
   */
  static bool loadFromBag(const std::string& pathToBag, const std::string& topic,
                          se2_grid::SE2Grid& SE2Grid);

};

} /* namespace */
