import rclpy
from rclpy.node import Node
from custom_interfaces.srv import MultiplyTwoInts

class Mynode(Node):
    def __init__(self):
        super().__init__('server_node')
        self.get_logger().info('server has started')
        client=self.create_client(MultiplyTwoInts,'mti')
        while not client.wait_for_service(timeout_sec=2):
            self.get_logger().warn("waiting for server")
        self.get_logger().info("server available")
        request=MultiplyTwoInts.Request()
        request.a=7
        request.b=10
        future=client.call_async(request)
        future.add_done_callback(self.callbackmti)
    def callbackmti(self,future):
        response=future.result()
        self.get_logger().info(f'the product is {response.sum}')
    
def main():
    rclpy.init()
    node=Mynode()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == "__main__":
    main()