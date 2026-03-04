import rclpy
from rclpy.node import Node
from custom_interfaces.srv import Dotproduct

class Mynode(Node):
    def __init__(self):
        super().__init__('srv_node')
        self.get_logger().info('client has initiated')
        client=self.create_client(Dotproduct,'dtp')
        while not client.wait_for_service(timeout_sec=2):
            self.get_logger().warn('waiting for server')
        self.get_logger().info('server available')
        request=Dotproduct.Request()
        request.v1.x=1.0
        request.v1.y=1.0
        request.v1.z=1.0
        request.v2.x=1.0
        request.v2.y=1.0
        request.v2.z=1.0
        
        future=client.call_async(request)
        rclpy.spin_until_future_complete(self,future)
        response=future.result()
        self.get_logger().info(f'dot product is {response.dp}')

def main():
    rclpy.init()
    node=Mynode()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == "__main__":
    main()


    