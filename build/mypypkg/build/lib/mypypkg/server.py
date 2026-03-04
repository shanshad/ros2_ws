import rclpy
from rclpy.node import Node
from example_interfaces.msg import String
from example_interfaces.srv import AddTwoInts

class Mynode(Node):
    def __init__(self):
        super().__init__('server_node')
        self.server_=self.create_service(AddTwoInts,'add_ints',self.callbackadd)
    def callbackadd(self,request,response):
        response.sum= request.a+request.b
        self.get_logger().info(f'sum = {response.sum}')
        return response


def main():
    rclpy.init()
    node=Mynode()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == "__main__":
    main()
