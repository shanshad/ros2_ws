import rclpy
from rclpy.node import Node
from turtlesim.msg import Pose
from geometry_msgs.msg import Twist

class Mynode(Node):
    def __init__(self):
        super().__init__('turtlepubsub')
        self.subscriber_=self.create_subscription(Pose,'/turtle1/pose',self.callbackpose,10)
        self.get_logger().info("node has started")
        self.publisher_=self.create_publisher(Twist,'cmd_vel',10)
        # self.timer=self.create_timer(2,self.callbackpose)

    def callbackpose(self,pose):
       self.get_logger().info(f"{pose.x}")
        

def main():
    rclpy.init()
    node=Mynode()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == "__main__":
    main()