import os
from launch import LaunchDescription
from launch.actions import IncludeLaunchDescription
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch.substitutions import ThisLaunchFileDir
from launch_ros.actions import Node
from ament_index_python.packages import get_package_share_directory
from launch.actions import ExecuteProcess

def generate_launch_description():

    
    world_file_name = 'hello_world.world'
    world = os.path.join(get_package_share_directory('orthrus_gazebo'), 'worlds', world_file_name)

    gazebo = ExecuteProcess(cmd=['gazebo', '--verbose','--pause', world], output='screen')

    model_path = os.path.join(get_package_share_directory('orthrus_gazebo'),'robot','orthrus','model.sdf')

    spawn_entity = Node(package='gazebo_ros', node_executable='spawn_entity.py',
                        arguments=['-entity', 'demo','-file',model_path],output='screen')

    return LaunchDescription([
        spawn_entity,
        gazebo,
    ])

