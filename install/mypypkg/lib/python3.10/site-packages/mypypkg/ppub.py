import rclpy
from rclpy.node import Node
from custom_interfaces.msg import Pose

class Mynode(Node):
    def __init__(self):
        super().__init__('pub_node')
        self.publisher_=self.create_publisher(Pose,'h_top',10)
        self.timer=self.create_timer(2,self.callbackprint)
        self.get_logger().info('publisher is on')

    def callbackprint(self):
        msg=Pose()
        msg.orientation.w=29.3
        msg.position.x=20.0
        self.publisher_.publish(msg)


def main():
    rclpy.init()
    node=Mynode()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == "__main__":
    main()
