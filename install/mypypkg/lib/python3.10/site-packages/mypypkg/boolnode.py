import rclpy
from rclpy.node import Node

class Mynode(Node):
    def __init__(self):
        super().__init__('bool_node')
        self.declare_parameter('bool',True)
        self.timer=self.create_timer(2,self.callbackprint)
    def callbackprint(self):
        bool_val=self.get_parameter('bool').value
        self.get_logger().info(f'the bool value is {bool_val}')
    
        

def main(arg=None):
    rclpy.init()
    node=Mynode()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__=="__main__":
    main()