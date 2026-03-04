import rclpy
from rclpy.node import Node
from example_interfaces.msg import String

class Mynode(Node):
    def __init__(self):
        super().__init__('camera_node')
        self.get_logger().info('camera subscriber is active')
        self.subscriber_=self.create_subscription(String,'vision/input',self.callbackmsg,10)
        
    def callbackmsg(self,msg):
        self.get_logger().info(f'message = {msg.data}')

def main():
    rclpy.init()
    node=Mynode()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == "__main__":
    main()