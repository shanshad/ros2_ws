import rclpy
from rclpy.node import Node
from custom_interfaces.msg import Hardwarestatus

class Mynode(Node):
    def __init__(self):
        super().__init__('subscriber_node')
        self.subscriber_=self.create_subscription(Hardwarestatus,'h_top',self.callback_print,10)
        self.get_logger().info('subscriber node has started')
    def callback_print(self,msg):
        self.get_logger().info(f"led status = {msg.ledstatus}, temperature= {msg.temperature} and debug message = {msg.debug_msg} ")

def main():
    rclpy.init()
    node=  Mynode()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == "__main__":
    main()