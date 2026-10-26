#pragma once

#include <string>

#include <behaviortree_cpp/bt_factory.h>
#include <behaviortree_cpp/control_node.h>

namespace behavior_tree
{
// Re-run a completed navigation segment while SequencePath reports more goals.
class RepeatSequence : public BT::ControlNode
{
public:
  RepeatSequence(const std::string & name, const BT::NodeConfiguration & config);
  static BT::PortsList providedPorts();
  void halt() override;

private:
  BT::NodeStatus tick() override;
};
}  // namespace behavior_tree
