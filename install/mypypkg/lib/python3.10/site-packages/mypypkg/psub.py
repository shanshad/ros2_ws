import rclpy
from rclpy.node import Node
from custom_interfaces.msg import Pose

class Mynode(Node):
    def __init__(self):
        super().__init__('subscriber_node')
        self.subscriber_=self.create_subscription(Pose,'h_top',self.callback_print,10)
        self.get_logger().info('subscriber node has started')
    def callback_print(self,msg):
        self.get_logger().info(f"position x = {msg.position.x} orientation w = {msg.orientation.w}")

def main():
    rclpy.init()
    node=  Mynode()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == "__main__":
    main()