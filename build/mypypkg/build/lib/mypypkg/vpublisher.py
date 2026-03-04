import rclpy
from rclpy.node import Node
from custom_interfaces.msg import Vector4

class Mynode(Node):
    def __init__(self):
        super().__init__('publisher_node')
        self.publisher_=self.create_publisher(Vector4,'myvector',10)
        self.get_logger().info('node has started')
        self.timer=self.create_timer(1,self.callback_publisher)

    def callback_publisher(self):
        msg=Vector4()
        msg.x=2.4
        msg.y=3.6
        msg.z=2.88
        self.publisher_.publish(msg)

def main():
    rclpy.init()
    node=  Mynode()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == "__main__":
    main()