import rclpy
from rclpy.node import Node
import math

from geometry_msgs.msg import Twist
from std_msgs.msg import Float32
from sensor_msgs.msg import Joy

class TeleopNode(Node):

    def __init__(self):
        super().__init__('teleop_publisher')
        self.mob_publisher_ = self.create_publisher(Twist, 'cmd_vel', 10)
        self.drum_publisher_ = self.create_publisher(Float32, 'drum_vel', 10)
        self.arm_publisher_ = self.create_publisher(Float32, 'arm_vel', 10)

        self.subscriber_ = self.create_subscription(Joy, 'joy', self.joy_callback,10)
        self.subscriber_

        # keep the last msg to only change the velocity if the joy message changes
        self.last_joy_input = Joy()

    def joy_callback(self, msg):
        #first check if the joy con input has changes and if not return imediately
        if (msg.axes == self.last_joy_input.axes) & (msg.buttons == self.last_joy_input.buttons):
            return

        # joy input changes, convert the joy inputs into movment commands

        # first for the mobility base axes[0] is the vertical component of the left stick and axes[1] is the horizontal component of the left stick
        velocity = Twist()

        speed = math.sqrt((msg.axes[0])**2 + (msg.axes[1])**2)
        if speed > 1:
            speed = float(1)
        velocity.linear.x = speed

        angle = math.atan2(msg.axes[0], msg.axes[1])
        velocity.angular.z = angle
        
        #publish the velocity
        self.mob_publisher_.publish(velocity)
        
        #publish the drum velocity
        drum_vel = Float32()
        drum_vel.data = float(msg.axes[4])
        self.drum_publisher_.publish(drum_vel)

	#publish the arm velocity
        arm_vel = Float32()
        arm_vel.data = float(msg.buttons[1]) - float(msg.buttons[0])
        self.arm_publisher_.publish(arm_vel)




        # Save the msg for comparison latter
        self.last_joy_input = msg
        


def main(args=None):
    rclpy.init(args=args)

    teleop_node = TeleopNode()

    rclpy.spin(teleop_node)

    minimal_publisher.destroy_node()
    rclpy.shutdown()
