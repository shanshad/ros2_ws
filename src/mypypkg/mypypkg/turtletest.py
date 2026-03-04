import rclpy
from rclpy.node import Node
from example_interfaces.msg import String

class Mynode(Node):
    def __init__(self):
        super().__init__('node1')
        self.get_logger().info('node has started')
        self.publisher_=self.create_publisher(String,'abc',10)
        self.count=1
        self.timer=self.create_timer(2,self.callbackprint)
    def callbackprint(self):
        msg=String()
        msg.data=f"this is message no {self.count} "
        self.publisher_.publish(msg)
        self.count+=1

def main():
    rclpy.init()
    node=Mynode()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__=="__main__":
    main()
