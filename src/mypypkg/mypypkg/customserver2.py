import rclpy
from rclpy.node import Node
from custom_interfaces.msg import Vector4
from custom_interfaces.srv import Dotproduct

class Mynode(Node):
    def __init__(self):
        super().__init__('server')
        self.get_logger().info('server has started')
        self.server_=self.create_service(Dotproduct,'dtp',self.callbackbody)
    def callbackbody(self,request,response):
        response.dp = (request.v1.x*request.v2.x)+(request.v1.y*request.v2.y)+(request.v1.z*request.v2.z)
        self.get_logger().info(f'dot product = {response.dp}')
        return response
    
def main():
    rclpy.init()
    node=Mynode()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == "__main__":
    main()