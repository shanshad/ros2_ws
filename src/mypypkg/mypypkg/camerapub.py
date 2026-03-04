import rclpy
from rclpy.node import Node
from example_interfaces.msg import String

class Mynode(Node):
    def __init__(self):
        super().__init__('camera_node')
        self.get_logger().info('camera publisher is active')
        self.publisher_=self.create_publisher(String,'camera/img_raw',10)
        self.timer=self.create_timer(2,self.callbackmsg)
    def callbackmsg(self):
        msg=String()
        msg.data='hola'
        self.publisher_.publish(msg)

def main():
    rclpy.init()
    node=Mynode()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == "__main__":
    main()