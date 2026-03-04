import rclpy
from rclpy.node import Node
from std_srvs.srv import Empty
from turtlesim.srv import Kill,Spawn
import random
import math

class Mynode(Node):
    def __init__(self):
        super().__init__('srv_node')
        self.get_logger().info("server has started")
        self.sclient=self.create_client(Spawn,'/spawn')
        self.eclient=self.create_client(Empty,'/reset')
        self.count=2
        while not self.sclient.wait_for_service(timeout_sec=2):
            self.get_logger().info('waiting for spawn server')
        while not self.eclient.wait_for_service(timeout_sec=5):
            self.get_logger().info('waiting for empty server')
        self.timer1=self.create_timer(3,self.callbackspawn)
        self.timer2=self.create_timer(10,self.callbackempty)

    def callbackspawn(self):
        self.requests=Spawn.Request()
        self.requests.x=round(random.uniform(1,10),2)
        self.requests.y=round(random.uniform(1,10),2)
        self.requests.theta=round(random.uniform(0,90),2)
        self.requests.name=f"turtle{self.count}"
        future=self.sclient.call_async(self.requests)
        future.add_done_callback(self.callbackfutures)
        self.count+=1
    def callbackfutures(self,future):
        response=future.result()
        self.get_logger().info(f"the new turtle spawned is {response.name} at {self.requests.x}, {self.requests.y}")
    def callbackempty(self):
        self.requeste=Empty.Request()
        future=self.eclient.call_async(self.requeste)
        future.add_done_callback(self.callbackreset)
    def callbackreset(self,future):
        response=future.result()
        self.get_logger().info('the board has reseted')

def main():
    rclpy.init()
    node=Mynode()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == "__main__":
    main()
