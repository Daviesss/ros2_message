import rclpy
from my_robot_message.msg import Coordinates
from rclpy.node import Node

class movement(Node):
    def __init__(self):
        super().__init__("code")
        self.pub = self.create_publisher(Coordinates,'/cmd_vel',100)
        self.publishing = Coordinates()
        self.time = 0.05
        self.timer = self.create_timer(self.time,self.velocity_message)


    def velocity_message(self):
        self.publishing.linear.p = 0.2
        self.pub.publish(self.publishing)
        print("The robot moves foward:")


def main(args=None):
    rclpy.init(args=args)
    velocity_publishing = movement()
    rclpy.spin(velocity_publishing)
    velocity_publishing.destroy_node()


if __name__ == '__main__':
    main()        
