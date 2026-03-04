import rclpy
from rclpy.node import Node
from example_interfaces.msg import String
from example_interfaces.srv import AddTwoInts

class Mynode(Node):
    def __init__(self):
        super().__init__('client_node')
        client=self.create_client(AddTwoInts,'add_ints')

        while not client.wait_for_service(timeout_sec=2):
            self.get_logger().warn('waiting for server')
        request=AddTwoInts.Request()
        request.a=5
        request.b=7
        future=client.call_async(request)
        rclpy.spin_until_future_complete(self,future)
        response=future.result()
        self.get_logger().info(f'sum = {response.sum}')


def main():
    rclpy.init()
    node=Mynode()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == "__main__":
    main()
