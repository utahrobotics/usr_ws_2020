import rclpy
from rclpy.node import Node

from std_msgs.msg import Float32

from pyvesc import VESC

# serial port that VESC is connected to. Something like "COM3" for windows and as below for linux/mac
serial_port1 = 'COM7'
serial_port2 = 'COM3'

class DrivingSubscriber(Node):
    #T his clas is responsible for driving all of the Maxon motor controllers using published information from the 
    # Mobility node
    def __init__(self):
        super().__init__('minimal_subscriber')
        self.subscriber_ = self.create_subscription(Float32, 'drum_vel', self.drum_drive_callback,10)
        self.subscriber_

        self.drum_motor = VESC(serial_port=serial_port1)
        self.arm_motor = VESC(serial_port=serial_port2)

       

    def listener_callback(self, msg):
        drum_vel = msg.data
        if drum_vel > 1:
            drum_vel = 1
        elif drum_vel < -1:
            drum_vel = -1

        self.drum_motor.set_duty_cycle(drum_vel)
        


def main(args=None):
    rclpy.init(args=args)

    # inittialize the main drving node
    sub_node = DrivingSubscriber()

    rclpy.spin(sub_node)

    # Destroy the node explicitly
    sub_node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
