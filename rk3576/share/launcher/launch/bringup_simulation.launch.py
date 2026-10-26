import os

from ament_index_python.packages import get_package_share_directory
from launch import LaunchDescription
from launch.conditions import IfCondition, UnlessCondition
from launch.actions import IncludeLaunchDescription,DeclareLaunchArgument,GroupAction
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch.substitutions import LaunchConfiguration, PathJoinSubstitution, EnvironmentVariable, PythonExpression
from launch_ros.actions import Node,LoadComposableNodes
from launch_ros.descriptions import ComposableNode
from launch_ros.substitutions import FindPackageShare
from launch_xml.launch_description_sources import XMLLaunchDescriptionSource

def generate_launch_description():
    #get the environment variable
    simulator = LaunchConfiguration('simulator')
    world = LaunchConfiguration('world')
    robot_name = LaunchConfiguration('robot_name')

    declared_simulator = DeclareLaunchArgument(
        'simulator', default_value="'simple'", description='Simulator to use. simple, hunav')
    declared_world = DeclareLaunchArgument(
        'world', default_value='openstreet_gz.sdf', description='World file')
    declared_robot_name = DeclareLaunchArgument(
        'robot_name', default_value='swerve', description='Robot name')
    
    

    
    bringup_hunav = IncludeLaunchDescription(
        condition=IfCondition(PythonExpression([simulator, " == 'hunav'"])),
        launch_description_source = PythonLaunchDescriptionSource(
            os.path.join(get_package_share_directory('hunav_gazebo_wrapper'), 'launch', 'hunav_sim.launch.py')
        ),      
        launch_arguments={
            'world': world,
            'robot_name': robot_name,
        }.items()        
    )

    bringup_simple = IncludeLaunchDescription(
        condition=IfCondition(PythonExpression([simulator, " == 'simple'"])),
        launch_description_source = XMLLaunchDescriptionSource(
            os.path.join(get_package_share_directory('simple_world'), 'launch', 'world_gz.launch.xml')
        ),
        launch_arguments={
            'world': world,
        }.items(),
    )
    
    ld = LaunchDescription()
    ld.add_action(declared_simulator)
    ld.add_action(declared_world)
    ld.add_action(declared_robot_name)    
    # ld.add_action(bringup_hunav)
    ld.add_action(bringup_simple)
    return ld
