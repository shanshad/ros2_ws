import rclpy
from rclpy.node import Node
from example_interfaces.msg import String

class Mynode(Node):
    def __init__(self):
        super().__init__('sub_node')
        self.get_logger().info('the subscriber has started')
        self.subscriber_=self.create_subscription(String,'topicC',self.callbackprint,10)
    def callbackprint(self,msg):
        self.get_logger().info(f"{msg.data}")


def main():
    rclpy.init()
    node=Mynode()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == "__main__":
    main()
