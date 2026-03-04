from launch import LaunchDescription
from launch_ros.actions import Node
def generate_launch_description():
    ld=LaunchDescription()
    node1=Node(package="mypypkg",
               executable="pub1",
               name="publisher1",
               remappings=[
                   ("topicC","topicA")
               ])
    node2=Node(package="mypypkg",
               executable="sub1",
               name="subscriber1",
               remappings=[
                   ("topicC","topicA")
               ])
    node3=Node(package="mypypkg",
               executable="pub1",
               name="publisher2",
               remappings=[
                   ("topicC","topicB")
               ])
    node4=Node(package="mypypkg",
               executable="sub1",
               name="subscriber2",
               remappings=[
                   ("topicC","topicB")
               ])
    ld.add_action(node1)
    ld.add_action(node2)
    ld.add_action(node3)
    ld.add_action(node4)
    return ld