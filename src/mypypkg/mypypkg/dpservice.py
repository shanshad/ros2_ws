import rclpy
from rclpy.node import Node
from custom_interfaces.srv import Dotproduct

class Mynode(Node):
    def __init__(self):
        super().__init__('srvrnode')
        self.service_=self.create_service(Dotproduct,'dpservice',self.callbackfunc)
        self.get_logger().info('the service has started')

    def callbackfunc(self,request,response):
        response.dp= (request.v1.x*request.v2.x)+(request.v1.y*request.v2.y)+(request.v1.z*request.v2.z)
        return(response)
    
def main():
    rclpy.init()
    node=Mynode()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == "__main__":
    main()