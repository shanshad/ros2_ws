import rclpy
from rclpy.node import Node
from example_interfaces.msg import String

class Mynode(Node):
    def __init__(self):
        super().__init__('pub_node')
        self.publisher_=self.create_publisher(String,'pub_top',10)
        self.timer=self.create_timer(2,self.callbackprint)

    def callbackprint(self):
        msg=String()
        msg.data="starting the publisher node"
        self.publisher_.publish(msg)


def main():
    rclpy.init()
    node=Mynode()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == "__main__":
    main()
