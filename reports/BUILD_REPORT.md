# RK3576 编译结果

构建时间（UTC）：2026-10-26T00:30:11.317209+00:00。

目标：RK3576 / AArch64 / Ubuntu 22.04 / ROS 2 Humble / GCC 11.4.0，Release 模式。

硬件配置选择的 **82 个包全部编译成功**，colcon 耗时 2min 29s；安装树包含 73 个 ament 索引包，248 个 ELF 均为 AArch64。安装配置路径检查和目标 SDK 动态依赖闭包检查通过。

源码提交：`02e33d544593de8dfc8a0682d35ece635825a603`。本次使用包含现有本地修改的工作区，修改状态见 `build-validation.json`，构建过程未修改原源码。

构建命令：

```bash
./build.sh /home/ray/STUDY/lab/rk_code/source_code --profile rk3576
```

硬件配置跳过 7 个包：fake_localization, ros2_livox_simulation, simple_world, system_rviz_plugins, velodyne_gazebo_plugins, velodyne_simulator, hap_description。部分源码包原本未启用安装目标，保持现有项目配置。Sophus 使用项目固定版本；随产物提供与 SDK 匹配的 BehaviorTree.CPP 和 BLAS 运行库。

本次执行了编译、架构、安装路径、依赖闭包及归档完整性验证，未执行本次产物的板端节点运行验证。`runtime-symbol-check.json` 是之前产物的板端符号检查记录，保留用于追溯。

部署时将本目录内容放到板端 `/opt/ros_overlay/`，先加载 ROS 2 和板端 Livox 驱动工作区的 `local_setup.bash`，再加载本目录的 `local_setup.bash`。完整日志与解压说明见结果仓库根目录。
