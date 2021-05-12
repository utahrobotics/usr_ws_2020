from launch import LaunchDescription
from launch_ros.actions import Node


def generate_launch_description():
    return LaunchDescription([
        Node(
            package='joy',
            namespace='',
            executable='joy_node',
            name='teleop'
        ),
        Node(
            package='teleop_node',
            executable='teleop',
            name='teleop',
        ),
        Node(
            package='motion_controller_node',
            namespace='',
            executable='M5',
            name='teleop'
        ),
        Node(
            package='maxon_motor_node',
            executable='maxon_motor_node',
            name='teleop',
        )
    ])