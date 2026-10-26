// Copyright (c) 2019 Intel Corporation
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
#pragma once
#ifndef BEHAVIOR_TREE__PLUGINS__CONTROL__PIPELINE_SEQUENCE_HPP_
#define BEHAVIOR_TREE__PLUGINS__CONTROL__PIPELINE_SEQUENCE_HPP_

#include <string>
#include "behaviortree_cpp/control_node.h"
#include "behaviortree_cpp/bt_factory.h"

namespace behavior_tree
{
/** 
 * @brief Type of sequence node that re-ticks previous children when a child returns running
*/
class PipelineSequence : public BT::ControlNode
{
public:
    /**
     * @brief A constructor for nav2_behavior_tree::PipelineSequence
     * @param name Name for the XML tag for this node
     */
    explicit PipelineSequence(const std::string & name);

    /**
     * @brief A constructor for nav2_behavior_tree::PipelineSequence
     * @param name Name for the XML tag for this node
     * @param config BT node configuration
     */
    PipelineSequence(const std::string & name, const BT::NodeConfiguration & config);

    /**
     * @brief The other (optional) override required by a BT action to reset node state
     */
    void halt() override;

    /**
     * @brief Creates list of BT ports
     * @return BT::PortsList Containing basic ports along with node-specific ports
     */
    static BT::PortsList providedPorts() {return {};}

protected:
    /**
     * @brief The main override required by a BT action
     * @return BT::NodeStatus Status of tick execution
     */
    BT::NodeStatus tick() override;

    std::size_t last_child_ticked_ = 0;
};    
}

#endif // BEHAVIOR_TREE__PLUGINS__CONTROL__PIPELINE_SEQUENCE_HPP_