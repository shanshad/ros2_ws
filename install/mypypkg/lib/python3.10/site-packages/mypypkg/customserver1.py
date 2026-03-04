import rclpy
from rclpy.node import Node
from custom_interfaces.srv import MultiplyTwoInts

class Mynode(Node):
    def __init__(self):
        super().__init__('pub_node')
        self.service_=self.create_service(MultiplyTwoInts,'mti',self.callbackmti)
        self.get_logger().info('publisher is on')

    def callbackmti(self,request,response):
        response.sum= request.a * request.b
        self.get_logger().info(str(response.sum))
        return response


def main():
    rclpy.init()
    node=Mynode()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == "__main__":
    main()