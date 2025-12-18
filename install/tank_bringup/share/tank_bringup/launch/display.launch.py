from launch import LaunchDescription
from launch_ros.actions import Node
from ament_index_python.packages import get_package_share_directory
from launch.substitutions import Command, PathJoinSubstitution, TextSubstitution

def generate_launch_description():

    pkg_path = get_package_share_directory('tank_description')
    xacro_file = PathJoinSubstitution([pkg_path, 'urdf', 'slambot_urdf.xacro'])
    # rviz_config = PathJoinSubstitution([pkg_path, 'launch', 'urdf.rviz'])

    return LaunchDescription([

        # Robot State Publisher
        Node(
            package='robot_state_publisher',
            executable='robot_state_publisher',
            parameters=[{
                "robot_description": Command([
                    TextSubstitution(text='xacro '),
                    xacro_file
                ])
            }]
        ),

        # Joint State Publisher GUI
        Node(
            package='joint_state_publisher_gui',
            executable='joint_state_publisher_gui'
        ),

        # RViz
        Node(
            package='rviz2',
            executable='rviz2',
            name='rviz2',
            # arguments=['-d', rviz_config],
        )

    ])
