from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    ld=LaunchDescription()
    node1=Node(package="turtlesim",
               executable="turtlesim_node",
               name="turtle11"
               )
    node2=Node(package="turtlesim",
               executable="turtlesim_node",
               name="turtle2")
    ld.add_action(node1)
    ld.add_action(node2)
    return ld
