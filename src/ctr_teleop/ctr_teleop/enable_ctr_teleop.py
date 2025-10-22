#!/usr/bin/env python3

# Adapted from example application classes from the open-sourced dvrk_python/crtk_python_client code bases

# Author: Yunti (Anna) Xu
# Univeristy of California, San Diego 
# Date : 2025-10-21

# Usage
# > ros2 run ctr_teleop enable_ctr_teleop.py MTMR CTR

# Description 
# runs teleoperation of a custom CTR instrument on a PSM 
# - the custom CTR instrument is position controlled in task space 

# client side 

import argparse
import crtk
import PyKDL
import sys
import geometry_msgs.msg
import std_msgs.msg

# custom function imports 
from .tip_position_control import ctr_tip_positon_control

class enable_ctr_teleop:

    class MTM:
        def __init__(self, ral):
            # populate MTM with the ROS topics we need
            self.crtk = crtk.utils(self, ral)
            self.crtk.add_operating_state()
            self.crtk.add_measured_cp()
            self.crtk.add_free()
            self.crtk.add_hold()
            # non crtk topics 
            self.lock_orientation_pub = ral.publisher('lock_orientation',
                                                        geometry_msgs.msg.Quaternion,
                                                        latch = True, queue_size = 1)
            self.unlock_orientation_pub = ral.publisher('unlock_orientation',
                                                        std_msgs.msg.Empty,
                                                        latch = True, queue_size = 1)
            self.use_gravity_compensation_pub = ral.publisher('use_gravity_compensation',
                                                             std_msgs.msg.Bool,
                                                             latch = True, queue_size = 1)

        def lock_orientation(self,orientation):
            """orientation should be a PyKDL.Rotation object"""
            q = geometry_msgs.msg.Quaternion()
            q.x, q.y, q.z, q.w = orientation.GetQuaternion()
            self.lock_orientation_pub.publish(q)

        def unlock_orientation(self):
            self.unlock_orientation_pub.publish(std_msgs.msg.Empty())

        def use_gravity_compensation(self):
            """Turn on gravity compensation (only applies to Cartesian effort mode)"""
            msg = std_msgs.msg.Bool(data=True)
            self.use_gravity_compensation_pub.publish(msg)

    class CTR: 
        def __init__(self, ral):
            # populate CTR with the ROS topics we need
            self.crtk = crtk.utils(self, ral)
            self.crtk.add_setpoint_jp()
            self.crtk.add_measured_cp()
            self.crtk.add_servo_jp()  

    def __init__(self, ral, MTM_namespace, CTR_namespace):
        self.mtm = self.MTM(ral.create_child(MTM_namespace))
        self.ctr = self.CTR(ral.create_child(CTR_namespace))

        self.coag = crtk.joystick_button(ral,'footpedals/coag',0)
        self.clutch = crtk.joystick_button(ral,'footpedals/clutch',0)
        
        self.servo_rate = 100    # aiming for 100 Hz
        self.sleep_rate = ral.create_rate(self.servo_rate)

        self.following = False

        self.scale_ctr = 0.1

        self.coag_pressed = None
        self.clutch_pressed = None 

        self.mtm_start_pose = None
        self.ctr_start_pose =  None

        self.teleop_ctr = ctr_tip_positon_control() # TODO: fill this! 

    # main loop
    def run(self):
        # check if mtm is enabled + homed 
        if not self.mtm.enable(10.0) or not self.mtm.home(10.0):
            print('    ! failed to home {} within {} seconds'.format(self.mtm.name, 10.0))
            return False
        
        print("     Homing is complete")

        # run teleop! 
        self.run_teleop()

    # position based teleop
    def run_teleop(self):

        while True: # run infinite loop 
            self.coag_pressed = self.coag.value()
            self.clutch_pressed = self.clutch.value()

            print('coag_pressed: ', self.coag_pressed)
            print('clutch_pressed: ', self.clutch_pressed)

            self.mtm.use_gravity_compensation()

            # start teleop 
            if self.following == False and self.coag_pressed == 1:
                self.mtm_start_pose = self.mtm.measured_cp().p
                self.ctr_start_pose = self.ctr.measured_cp().p
                self.following = True
                self.goal_pose_ctr = PyKDL.Frame()
    
            if self.following == True:
                if self.coag_pressed == 1: # if coag pressed 
                    self.mtm.lock_orientation(self.mtm.measured_cp().M) # orientation locked 
                    self.mtm.free() # free arm position 
                    if self.clutch_pressed != 1: # if not clutch 
                        curr_mtm_pose = self.mtm.meaured_cp().p
                        #TODO: need to account for the ECM frame of reference here! 
                        self.goal_pose_ctr.p = self.ctr_start_pose.p + self.scale_ctr(curr_mtm_pose - self.mtm_start_pose)
                        goal_ctr_servo_jp, *_ = self.teleop_ctr.ik(self.ctr.setpoint_jp(),self.goal_pose_ctr.p)
                        self.ctr.servo_jp(goal_ctr_servo_jp)
                    else: # if clutched, reset teleoperation 
                        self.following == False 

                else: # if coag not pressed 
                    self.mtm.hold()
            self.sleep_rate.sleep()

def main():
    parser = argparse.ArgumentParser()
    parser.add_argument('MTM', type = str, help = 'ROS namespace for CRTK device')
    parser.add_argument('CTR', type = str, help = 'ROS namespace for CRTK device')

    app_args = crtk.ral.parse_argv(sys.argv[1:]) # process and remove ROS args
    args = parser.parse_args(app_args) 

    example_name = type(enable_ctr_teleop).__name__
    ral = crtk.ral(example_name)
    
    example = enable_ctr_teleop(ral, args.mtm, args.ctr)
    ral.spin_and_execute(example.run)

if __name__ == '__main__':
    main()
