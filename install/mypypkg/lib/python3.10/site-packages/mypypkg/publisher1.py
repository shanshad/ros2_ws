import rclpy
from rclpy.node import Node
from example_interfaces.msg import String

class Mynode(Node):
    def __init__(self):
        super().__init__('pub_node')
        self.get_logger().info("node has started")
        self.publisher_1=self.create_publisher(String,'topicC',10)
        self.declare_parameter('time',2)
        time_val=self.get_parameter('time').value
        self.timer=self.create_timer(time_val,self.callbackprint)

    def callbackprint(self):
        time_val=self.get_parameter('time').value
        msg=String()
        msg.data=f"time = {time_val}"
        self.publisher_1.publish(msg)


def main():
    rclpy.init()
    node=Mynode()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == "__main__":
    main()
