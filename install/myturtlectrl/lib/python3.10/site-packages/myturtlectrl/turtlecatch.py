import rclpy
from rclpy.node import Node
from turtlesim.msg import Pose
from geometry_msgs.msg import Twist
from turtlesim.srv import Kill
import math

class TurtleCatch(Node):
    def __init__(self):
        super().__init__('turtlecatch')
        
        # State tracking
        self.turtle1_pose = None
        self.target_pose = None
        self.target_index = 2  # Starting from myturtle2
        self.target_name = f"myturtle{self.target_index}"
        
        # Subscriptions & Publishers
        self.pose_sub = self.create_subscription(Pose, 'turtle1/pose', self.pose_callback, 10)
        self.target_sub = self.create_subscription(Pose, f'{self.target_name}/pose', self.target_callback, 10)
        self.cmd_vel_pub = self.create_publisher(Twist, 'turtle1/cmd_vel', 10)
        
        # Client to remove turtles
        self.kill_client = self.create_client(Kill, 'kill')
        
        # Control loop (20Hz)
        self.timer = self.create_timer(0.05, self.control_loop)

    def pose_callback(self, msg):
        self.turtle1_pose = msg

    def target_callback(self, msg):
        self.target_pose = msg

    def control_loop(self):
        if self.turtle1_pose is None or self.target_pose is None:
            return

        # Calculate distance and angle to target
        dist = math.sqrt((self.target_pose.x - self.turtle1_pose.x)**2 + 
                         (self.target_pose.y - self.turtle1_pose.y)**2)
        
        angle_to_target = math.atan2(self.target_pose.y - self.turtle1_pose.y, 
                                     self.target_pose.x - self.turtle1_pose.x)
        
        # Catch logic: distance tolerance 0.2m
        if dist < 0.2:
            self.catch_turtle()
            return

        # Simple P-Controller for movement
        msg = Twist()
        msg.linear.x = 2.0 * dist # Speed proportional to distance
        
        # Angle correction
        angle_diff = angle_to_target - self.turtle1_pose.theta
        # Normalize angle to [-pi, pi]
        angle_diff = math.atan2(math.sin(angle_diff), math.cos(angle_diff))
        msg.angular.z = 6.0 * angle_diff
        
        self.cmd_vel_pub.publish(msg)

    def catch_turtle(self):
        # Stop turtle1
        self.cmd_vel_pub.publish(Twist())
        
        # Call /kill service
        req = Kill.Request()
        req.name = self.target_name
        self.kill_client.call_async(req)
        self.get_logger().info(f'Caught and killed {self.target_name}!')

        # Move to next target
        self.target_index += 1
        self.target_name = f"myturtle{self.target_index}"
        self.target_pose = None # Reset until new sub receives data
        
        # Update subscription to the next turtle in the sequence
        self.destroy_subscription(self.target_sub)
        self.target_sub = self.create_subscription(Pose, f'{self.target_name}/pose', 
                                                   self.target_callback, 10)

def main(args=None):
    rclpy.init(args=args)
    node = TurtleCatch()
    rclpy.spin(node)
    rclpy.shutdown()

if __name__ == '__main__':
    main()
