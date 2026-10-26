# 独立 Web 导航任务管理

`web_navigation_manager` 从原项目 Web 版 TaskManager 中提取车端任务管理职责。此包已集成到 `bt_ws_11_12`；原 `system/task_manager` 实现与默认导航行为树保持目标项目原有内容。

## 包边界

| 目录 | 职责 |
| --- | --- |
| 本包 | 生命周期、租约、目标受理、任务状态、SQLite、导航 Action、取消、顺序替换和重启恢复 |
| `system/nav_web_gateway` | HTTP、WebSocket、页面会话、共享地点与环境资源 |
| `common/web_navigation_core` | 活动地图几何、车道校验和纯位置目标姿态解析 |
| `messages/web_navigation_msgs` | 网页导航服务与状态、规划事件契约 |
| `ui` | 网页源码；生产资源由构建脚本安装到 gateway |

本包不调用或链接原 TaskManager。Web 模式下由本包统一接收 `/goal_pose`、`/waypoint`，与网页任务共享校验、持久化和状态；RViz 无需网页租约，但只在无活动任务时受理。WaypointTool 缓存途经点，2D Nav Goal 指定终点并启动导航；目标姿态采用 Web 的车道解析逻辑。RViz 的 Web Navigation 面板显示受理结果和执行状态。服务继续使用 `/web_nav/*`，浏览器继续提交 x/y，HTTP 202 仍仅代表受理。

## 构建

在宿主机执行：

```bash
cd /home/ray/STUDY/lab/bt_ws_11_12/src/bt_ws
./scripts/build_nav_web.sh
```

脚本从自身路径推导工作区；宿主机没有 ROS 时使用 `ros2_humble` 容器。容器挂载默认为 `/home/ray → /root/workspace`，可用 `NAV_WEB_HOST_ROOT`、`NAV_WEB_CONTAINER_ROOT`、`NAV_WEB_ROS_CONTAINER` 修改。

构建使用目标工作区源码并写入标准的 `build`、`install`、`log` 目录。默认从 ROS 环境构建包及其工作区依赖，不自动 source 当前工作区已有的 `install`。需要复用其他依赖安装空间时，可通过 `NAV_WEB_UNDERLAY=/path/to/install/setup.bash` 指定；宿主机路径传入 Docker 时会按挂载根映射。

交叉编译部署到车机后，还需在车机的网关 Python 环境中安装 `system/nav_web_gateway/requirements.txt` 中的运行依赖。`uvicorn[standard]` 包含 WebSocket 支持；如果只安装了裸 `uvicorn`，且 `websockets`、`wsproto` 均缺失，网页和 `/health/ready` 仍可能正常，但 `/api/v1/events` 升级请求会返回 404，页面一直等待车端连接。可用 `python3 -c 'from uvicorn.protocols.websockets.auto import AutoWebSocketsProtocol; assert AutoWebSocketsProtocol is not None'` 检查；缺失时执行 `python3 -m pip install websockets`，然后重启网关。

## 启动

在 ROS Humble 环境中，先 source 本工作区 overlay：

```bash
cd /root/workspace/STUDY/lab/bt_ws_11_12
source /opt/ros/humble/setup.bash
source install/setup.bash
```

实车模式是默认值，直接启动整套车端导航和 Web 服务：

```bash
ros2 launch web_navigation_manager bringup_nav_web.launch.py
```

机器人停靠点按地图名称持久保存，支持地图外工位绑定地图内导航位置，以及通过/停车等待的顺序任务。每次访问必须显式选择动作，末点选通过即循环（至少两个不同导航位置），选停车则执行一轮；循环停车点每次等待人工继续。操作与接口见[停靠点与顺序任务](../../docs/nav_web/停靠点与顺序任务.md)。

Web 行为树按目标逐段请求全局规划，不再展开整圈。下一段提前规划并缓存；夹角小于 90°的通过点最多附加 1.5 米预览，到点后整段替换，不保留旧路径尾巴。夹角达到 90°、路径接头不连续或预取迟到时，当前段在目标处结束，确认车辆停稳后从最新定位规划下一段。停车等待点仍由任务管理器交给人工继续。Web、RViz 和局部规划器使用同一份滚动参考线；后续段不可达时任务暂停并显示原因。

Lanelet2 路线可能以车道中线上的点作为终点，与提交的位置存在横向偏差。切段到达判定、
下一段规划起点及规划事件的有效终点统一采用当前段实际路线终点；提交坐标继续保留，
附加的短预览末端不作为当前途经点。避免车辆经过实际终点却无法切段、最终耗尽预览路线。

浏览器访问 `http://车机IP:8080`。默认数据库位于 `/var/lib/nav_web/`。仿真时先按目标项目原有入口启动 Gazebo 世界，再用 `simulation:=True` 启动 Web 栈：

```bash
ros2 launch launcher bringup_simulation.launch.py
ros2 launch web_navigation_manager bringup_nav_web.launch.py simulation:=True
```

进入页面后自动申请操作权限；其他设备占用时只读同步，权限释放后由服务端先成功处理的申请取得权限。取得权限不会中断任务。持权用户提交新目标或顺序任务时，可一次提交替换：停止旧任务、确认执行退出和车辆停稳，再启动新任务；停止失败则不启动新任务。

主动释放后，本标签页停止自动申请，刷新后仍保留此选择；点击“重新申请权限”才恢复申请。新打开的页面独立创建会话并默认自动申请。权限释放或断线不会取消已受理任务。

管理器启动后自动通过导航端 `navigate_through_poses/get_execution` 查询当前任务和待执行任务，核对任务编号、服务实例及执行线程是否退出。执行中的任务恢复同步；确认旧任务已不再执行后，确认停车并自动解除阻塞；已暂停或等待的顺序任务保持原状态。查询不可用时保持只读并自动重试，持权用户仍可主动选择“恢复待命”定向停止旧任务。不能仅凭速度为零或旧 UUID 查不到判断待命。

端口、数据库路径等参数仅在需要覆盖默认值时传入，例如迁移旧数据库时显式指定 `task_db` 和 `annotation_db`。

整合启动会关闭普通 TaskManager，并将 BT 的 `allow_legacy_goal_topic` 设置为 false；Web manager 由独立 lifecycle manager 激活。通用 launcher 不启动 Web 任务管理器；RViz 插件通过 web_navigation_msgs 显示共享状态。

如果导航栈已经启动，先保证它使用：

```bash
ros2 launch launcher bringup_navigation.launch.py \
  start_task_manager:=False allow_legacy_goal_topic:=False
```

再单独启动接入层：

```bash
ros2 launch web_navigation_manager web_navigation.launch.py \
  task_db:=/tmp/nav-web/tasks.sqlite annotation_db:=/tmp/nav-web/annotations.sqlite
```

普通导航继续使用原启动命令；两个新增参数默认均为 true，保留原入口。Web 与普通 TaskManager 采用互斥模式；其他直接发送导航 Action 的客户端也需要由部署端协调。

`behavior_tree` 默认为本包 `behaviors/web_navigate_through_poses.xml`，支持绝对路径；相对路径在本包 behaviors 中解析。`planner_config` 默认为 launcher 的 global_planner_settings.yaml，启动时同步 allow_lane_change/allow_lane_invert，不提供运行时动态同步。

## 数据迁移

包名与节点名改变不要求改变数据库 schema。迁移已有实例时，停止原 Web manager，显式把 `task_db` 指向旧实例实际使用的数据库，再启动新包。默认 launch 路径为 `/var/lib/nav_web/tasks.sqlite`，不要据此猜测旧实例的实际路径。

保留任务 ID、请求 ID、ROS UUID 和已有 UNKNOWN 记录；不删库，不同时启动两个 `/web_nav/*` 服务提供者。自动核对不会取消或重发旧目标；人工 recover 仍按旧 UUID 定向停止，禁止取消全部目标。导航器、消息、管理器、网关和页面需一起构建更新；缺少新的导航查询服务时页面保持只读。

## 验证

自转与路径跟踪由 `ReactiveNavigationSequence` 协调，支持两阶段异步动作，兼容
BehaviorTree.CPP 的严格检查；跟踪期间再次需要转向时，先取消旧跟踪，再进入转向。
取消动作的等待预算至少为 1000 ms，避免默认 20 ms 响应预算小于局部规划周期导致的收尾超时。
转向完成仅恢复跟踪，最终到达目标才完成任务。导航异常原因与停稳进度分别保存，
停稳确认后失败任务显示原始错误原因；行为树异常详情也会传递到导航结果。

更新后需一起重新构建 `behavior_tree`、`bt_navigator` 和 `web_navigation_manager`，
并重启导航与 Web 管理进程，使新增插件、行为树和管理器同时生效。

`sim_street` 回归使用实际 Lanelet2 规划器和 OTL，检查反向起步、自转结束处的局部边界及
轨迹输出。边界里程的首点也按路径起始区间匹配，避免匹配到后续折返车道后把起点边界排除。
`test_sim_boundary_ros.py --bag /path/to/test_bag` 还可用本次 SQLite 录包中的原始路径、
转向后定位和点云复现错误 105，并对照修复后重新规划的路径；整个测试不启动底盘控制器。

`test_sim_handover_ros.py` 使用本次 `sim_street` 两点循环的坐标、实际 Lanelet2、Web 行为树
和 OTL，验证偏离中线的途经点切段、末点回到首点和取消，并验证预览耗尽时的明确诊断。
`--bag /path/to/test_bag` 可读取该故障包中的初始定位及任务点；定位、点云和物理自转为受控
输入，不启动 Gazebo 或底盘控制器。详见[预览耗尽分析](../../docs/nav_web/sim_street顺序导航预览耗尽分析.md)。

宿主机浏览器测试：

```bash
cd ui
npm run test:browser -- --workers=2
```

ROS 容器内执行：

```bash
bash /root/workspace/STUDY/lab/bt_ws_11_12/src/bt_ws/scripts/test_nav_web.sh
```

ROS 测试默认使用 domain 121 和临时数据库；`NAV_WEB_TEST_DOMAIN` 可指定其他隔离 domain。包括地图解析/目标方向测试、网关单元测试，以及真实 manager、gateway、地图 loader 配合受控 Action/控制器的集成测试。该集成测试不驱动车辆，也不代表 Gazebo 完整行驶验证。

详细接口见 [API](../../docs/nav_web/API.md)，实施边界和本次验证结果见 [迁移说明](../../docs/nav_web/迁移说明.md)。

## 第一阶段仍保留的宿主适配

NavigateThroughPoses/ComputePathToPose 的任务上下文、BT 上下文透传、GlobalPlannerServer 的 PlanningEvent，以及 RouteHandler 的目标朝向解析仍是完整功能所需的宿主适配。GlobalPlannerServer 仍依赖 web_navigation_msgs；web_navigation_core 仍链接 lanelet2_planner。后续可分别迁成中性导航事件接口和公共路由库。
