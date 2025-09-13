#!/usr/bin/env python3

import rclpy
import numpy as np
import time 
from rclpy.node import Node
from geometry_msgs.msg import WrenchStamped, Vector3, Quaternion
from sensor_msgs.msg import Joy, JointState
from std_msgs.msg import Bool, Empty

import crtk
import dvrk

'''
AX: should launch the mtm + any psm console GUI otherwise the footpedals won't work!
Ax: should refactor code such that we utilize the python APIs from the dvrk software stack!  
'''

class EnableMTMIO(Node): # should be coming from the contol code 

    def __init__(self):
        super().__init__("enable_mtm_io")
        self.counter = 0 # initialize the counter variable 
        self.coag_pressed = None
        self.clutch_pressed = None

        # subscribers 
        self.subscribe_coag_button = self.create_subscription(Joy,
                                                              "/footpedals/coag",
                                                              self.coag_callback,
                                                              10)
        self.subscribe_clutch_button = self.create_subscription(Joy,
                                                              "/footpedals/clutch",
                                                              self.clutch_callback,
                                                              10)
        self.subscribe_mtmr_setpoint_cp = self.create
        
        self.subscribe_mtml_setpoint_cp = self.create_subscription(JointState,
                                                              "/MTML/setpoint_cp",
                                                              self.mtml_setpoint_cp_callback,
                                                              10)
        
        # publishers 
        # MTMR ####################################################################
        self.publish_servo_cf_r = self.create_publisher(WrenchStamped,
                                                        '/MTMR/spatial/servo_cf',
                                                        10)
        self.publish_use_gravity_comp_r = self.create_publisher(Bool,
                                                            'MTMR/use_gravity_compensation',
                                                              10)
        self.publish_hold_arm_r = self.create_publisher(Empty, 
                                                      'MTMR/hold',
                                                      10)
        self.publish_mtm_joint_move_jp_r = self.create_publisher(JointState,
                                                        '/MTMR/move_jp',
                                                        10)
        self.publish_lock_orient_r = self.create_publisher(Bool,
                                                      'MTMR/lock_orientation',
                                                      10)
        
        # MTML ###################################################################
        self.publish_servo_cf_l = self.create_publisher(WrenchStamped,
                                                        '/MTML/spatial/servo_cf',
                                                        10)
        self.publish_use_gravity_comp_l = self.create_publisher(Bool,
                                                        'MTML/use_gravity_compensation',
                                                        10)
        self.publish_hold_arm_l = self.create_publisher(Empty, 
                                                      'MTML/hold',
                                                      10)
        self.publish_mtm_joint_move_jp_l = self.create_publisher(JointState,
                                                        '/MTML/move_jp',
                                                        10)
        self.publish_lock_orient_r = self.create_publisher(Bool,
                                                      'MTML/lock_orientation',
                                                      10)

        
        # need to first move the mtm to home position 
        msg_mtm_home_l = JointState()
        msg_mtm_home_r = JointState()

        # set home position for MTMR MTML
        # [elbow+pitch]
        msg_mtm_home_l.position = [0.0, 0.0, 0.0, 0.0, np.pi/2, 0.0, 0.0]
        msg_mtm_home_r.position = [0.0, 0.0, 0.0, 0.0, np.pi/2, 0.0, 0.0]

        self.publish_mtm_joint_move_jp_l.publish(msg_mtm_home_l)
        self.publish_mtm_joint_move_jp_r.publish(msg_mtm_home_r)
        self.get_logger().info("Moving MTMs to home position")
        time.sleep(5) # wait for 5 seconds
        self.get_logger().info("MTMs should be homed now")

           
    def coag_callback(self, coag_value: Joy): # topic not published until coag pedal is pressed 
        self.coag_pressed = coag_value.buttons[0]
        self.get_logger().info(f"coag_pressed: {self.coag_pressed}")

        # make sure gravity compensation is turned on!
        g = Bool()
        g.data = True
        self.publish_use_gravity_comp_r.publish(g)
        self.publish_use_gravity_comp_l.publish(g)
        # self.get_logger().info(f"g_comp: {g.data}")

        # have the arm hold on 
        hold_on = Empty()
        self.publish_hold_arm_r.publish(hold_on)
        self.publish_hold_arm_l.publish(hold_on)

        print(self.coag_pressed)

        if self.coag_pressed == 1: # TODO: might need to implement some debounce time period 
            # unlock the mtms 
            servo_cf = WrenchStamped()
            servo_cf.wrench.force = Vector3(x=0.0,y=0.0,z=0.0)
            self.publish_servo_cf_r.publish(servo_cf)
            self.publish_servo_cf_l.publish(servo_cf)
            
            self.publish_lock_orient_r.publish(Bool(data=True))
            self.publish_lock_orient_r.publish(Bool(data=True))

    def clutch_callback(self, clutch_value: Joy):
        self.clutch_pressed = clutch_value.buttons[0]
        self.get_logger().info(f"clutch_pressed: {self.clutch_pressed}")

def main (args=None):
    rclpy.init(args=args)
    node = EnableMTMIO()
    rclpy.spin(node)
    rclpy.shutdown()

if __name__=='__main__': main()