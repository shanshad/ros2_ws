import rclpy
from rclpy.node import Node
from custom_interfaces.msg import Hardwarestatus

class Mynode(Node):
    def __init__(self):
        super().__init__('pub_node')
        self.publisher_=self.create_publisher(Hardwarestatus,'h_top',10)
        self.timer=self.create_timer(2,self.callbackprint)
        self.get_logger().info('publisher is on')

    def callbackprint(self):
        msg=Hardwarestatus()
        msg.ledstatus = True    
        msg.temperature =28.4
        msg.debug_msg="starting the publisher node"
        self.publisher_.publish(msg)


def main():
    rclpy.init()
    node=Mynode()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == "__main__":
    main()
