import rclpy
from rclpy.node import Node
from turtlesim.srv import Spawn
import random

class Turtlespawn(Node):
    def __init__(self):
        super().__init__('spawn_node')
        self.turtle_names=['turtle1']
        self.count=2
        self.client = self.create_client(Spawn,'spawn')
        self.timer=self.create_timer(5,self.spawn_turtle)
    def spawn_turtle(self):
        req=Spawn.Request()
        req.x,req.y=random.uniform(1.0,10.0),random.uniform(1.0,10.0)
        new_name= f"myturtle{self.count}"
        req.name=new_name
        future=self.client.call_async(req)
        future.add_done_callback(self.done_callback)

    def done_callback(self,future):
        response=future.result()
        self.turtle_names.append(response.name)
        self.count +=1
        self.get_logger().info("spawned new turtle")

def main():
    rclpy.init()
    node=Turtlespawn()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()
if __name__=="__main__":
    main()