#pragma once

#include "behaviortree_cpp/control_node.h"

namespace behavior_tree
{
// Recheck heading while following, and stop following before a new turn starts.
// Both children may be asynchronous, unlike BT::ReactiveSequence's strict mode.
class ReactiveNavigationSequence : public BT::ControlNode
{
public:
  ReactiveNavigationSequence(const std::string & name, const BT::NodeConfiguration & config)
  : BT::ControlNode(name, config) {}

  static BT::PortsList providedPorts() {return {};}

private:
  BT::NodeStatus tick() override;
};
}  // namespace behavior_tree
