# RK3576 交叉编译产物

ROS 2 导航工作区 `source_code` 的 RK3576 安装结果，目标为 **AArch64 / Ubuntu 22.04 / ROS 2 Humble**，使用 GCC 11、Release 配置。

2026-10-26 构建：**82 个包全部成功，248 个 ELF 均为 AArch64**，安装路径及动态依赖闭包检查通过。

## 下载和解压

安装 `git`、`zstd` 和 `tar` 后执行：

```bash
git clone git@github.com:Monster-kun/rk_cross_result.git
cd rk_cross_result
./unpack.sh
```

完整安装树位于 `dist/rk3576/`，包含可执行文件、共享库、消息接口、配置、地图、网页资源、头文件及 ROS 环境脚本。归档按 48 MiB 分卷，直接保存在 Git 中；解压脚本会先验证各分卷的 SHA-256，并保留文件权限与软链接。

也可指定解压目录：

```bash
./unpack.sh /absolute/path/to/output
```

## 板端使用

将 `dist/rk3576/` 的内容部署到 RK3576 的 `/opt/ros_overlay/`，板端需已有兼容的 ROS 2 Humble、Livox 驱动及项目运行依赖，然后加载环境：

```bash
source /opt/ros/humble/setup.bash
source /root/dev/livox_ws/install/local_setup.bash
source /opt/ros_overlay/local_setup.bash
```

Livox 路径按板端实际位置调整。随后按项目配置执行 `ros2 run` 或 `ros2 launch`。

## 构建记录

- [构建报告](reports/BUILD_REPORT.md)：结果、范围与验证说明。
- [验证记录](reports/build-validation.json)：源码提交及本地修改状态、产物架构与检查结果。
- [编译环境](reports/build-environment.json)：SDK 指纹、镜像及工具链版本。
- [完整编译日志](reports/build.log)。
- [兼容性报告](reports/compatibility-report.txt)及[动态依赖闭包结果](reports/dependency-closure.txt)。
- [文件清单](reports/artifact-files.json)：每个普通文件的 SHA-256、权限，以及软链接目标。

硬件配置跳过 7 个仿真或可视化包，部分源码模块原本未启用安装目标，具体范围见构建报告。本次使用含已有本地修改的源码工作区。

本次产物完成交叉编译与静态兼容性检查，尚未执行本次版本的板端节点运行验证。归档保留的 `runtime-symbol-check.json` 为此前版本的板端符号检查记录，时间与范围以文件内容为准。
