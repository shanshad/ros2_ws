import rclpy
from rclpy.node import Node

class Mynode(Node):
    def __init__(self):
        super().__init__('param_node')
        self.get_logger().info('the node has started')
        self.declare_parameter('speed',1.0)
        self.timer=self.create_timer(2,self.callbackprint)
    def callbackprint(self):
        speed_val=self.get_parameter('speed').value
        self.get_logger().info(f"speed value = {speed_val}")

def main(arg=None):
    rclpy.init()
    node=Mynode()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__=="__main__":
    main()