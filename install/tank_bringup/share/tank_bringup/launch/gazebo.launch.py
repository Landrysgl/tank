from launch import LaunchDescription
from launch_ros.actions import Node
from ament_index_python.packages import get_package_share_directory
from launch.substitutions import Command, PathJoinSubstitution
from launch.actions import ExecuteProcess

def generate_launch_description():

    pkg_path = get_package_share_directory('tank_description')
    xacro_file = PathJoinSubstitution([pkg_path, 'urdf', 'slambot_urdf.xacro'])

    return LaunchDescription([

        # Robot State Publisher (pour les TFs)
        Node(
            package='robot_state_publisher',
            executable='robot_state_publisher',
            parameters=[{
                "robot_description": Command(["xacro ", xacro_file])
            }]
        ),

        # Lancer Gazebo
        ExecuteProcess(
    cmd=['gazebo', '--verbose', '-s', 'libgazebo_ros_factory.so'],
    output='screen'
), 


        Node(
            package='joint_state_publisher_gui',
            executable='joint_state_publisher_gui'
        ),

        # 4️⃣ Spawn le robot dans Gazebo
        Node(
            package='gazebo_ros',
            executable='spawn_entity.py',
            arguments=[
                '-topic', 'robot_description',
                '-entity', 'slambot'
            ],
            output='screen'
        ),

        # Spawn le robot dans Gazebo
        Node(
            package='gazebo_ros',
            executable='spawn_entity.py',
            arguments=[
                '-topic', 'robot_description',
                '-entity', 'slambot'
            ],
            output='screen'
        ),
    ])
