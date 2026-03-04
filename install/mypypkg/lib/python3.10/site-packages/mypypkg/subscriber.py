import rclpy
from rclpy.node import Node
from example_interfaces.msg import String

class Mynode(Node):
    def __init__(self):
        super().__init__('sub_node')
        self.subscriber_=self.create_subscription(String,'pub_top',self.callbackprint,10)
    def callbackprint(self,msg):
        self.get_logger().info(str(msg))


def main():
    rclpy.init()
    node=Mynode()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == "__main__":
    main()
