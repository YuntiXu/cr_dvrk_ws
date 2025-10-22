#!/usr/bin/env python3

# Author: Yunti (Anna) Xu
# Univeristy of California, San Diego 
# Date : 2025-10-21

# Usage
# > ros2 run ctr_teleop_python ctr_state_node.py PSM1 CTR

# Description 


# server side 

import argparse
import crtk
import sys 
import sensor_msgs.msg 
import geometry_msgs.msg
import numpy as np

import ctr_fourier_kinematics


###################### USER DEFINED PARAMETERS ############################
# motor configs 
################# CHANGE THIS AS NECESSARY ###############################
motorIDs = ['S5','S1','S6','B3','B2','B1']
###########################################################################

# starting tube configuration 
################## CHANGE THIS AS NECESSARY ###############################
ctr_start_jp = [0.045,0.03,0.120,0.0,0.0,0.0]
# [lexp1, lexp2, lexp3, rot1, rot2, rot3]
############################################################################

class ctr_state_info:
    
    class PSM: 
        def __init__(self,ral):
            self.crtk = crtk.utils(self,ral)
            self.crtk.add_measured_js()

    class CTR: 
        def __init__(self,ral): 
            self.servo_jp_sub = ral.subscriber('servo_jp',
                                               sensor_msgs.msg.JointState,
                                               self.servo_jp_cb,
                                               queue_size = 10)
            self.setpoint_js_pub = ral.publisher('setpoint_js',
                                                 sensor_msgs.msg.JointState,
                                                 latch = True, queue_size = 1)
            self.measured_cp_pub = ral.publisher('measured_cp', 
                                                 geometry_msgs.msg.PoseStamped,
                                                 latch = True, queue_size = 1)
            self.motor_abs_targets_pub = ral.publisher('motor_abs_targets',
                                                       sensor_msgs.msg.JointState,
                                                       latch = True, queue_size = 1)
            self.fk = ctr_fourier_kinematics("fparams_file.mat")
            self.curr_jp = ctr_start_jp

            # only populate if the run function is triggered 
            self.q = None
            self.motor_cmds = None
            self.curr_tip_pos = None

        def update_measured_cp(self):
            '''
            expects numpy array of current ctr tip position, and converts to pose stamped message 
            '''
            measured_cp_msg = geometry_msgs.msg.PoseStamped()
            measured_cp_msg.pose.position.x = self.curr_tip_pos[0]
            measured_cp_msg.pose.position.y = self.curr_tip_pos[1]
            measured_cp_msg.pose.position.z = self.curr_tip_pos[2]
            self.measured_cp_pub.publish(measured_cp_msg)
        
        def update_setpoint_js(self):
            '''
            expects list of current ctr tube exposed lengths and rotations, and converts + publish to joint state message 
            '''
            setpoint_js_msg = sensor_msgs.msg.JointState()
            setpoint_js_header = sensor_msgs.msg.Header()
            setpoint_js_header.stamp = self.get_clock().now().to_msg()
            setpoint_js_header.frame_id = "base_link" # TODO: does this make sense? 
            setpoint_js_msg.header = setpoint_js_header
            setpoint_js_msg.name = ['lexp_t1','lexp_t2','lexp_t3','rot_t1','rot_t2','rot_t3']
            
            setpoint_js_msg.position = self.curr_jp
            self.setpoint_js_pub.publish(setpoint_js_msg)

        def update_motor_abs_targets(self):
            '''
            expects list of current motor commands, and converts + publish to joint state message 
            '''
            motor_abs_targets_msg = sensor_msgs.msg.JointState()
            motor_abs_target_header = sensor_msgs.msg.Header()
            motor_abs_target_header.stamp = self.get_clock().now().to_msg()
            motor_abs_targets_msg.header = motor_abs_target_header
            motor_abs_targets_msg.name = motorIDs
            
            motor_abs_targets_msg.position = self.motor_cmds
            self.motor_abs_targets_pub.publish(motor_abs_targets_msg)

        def servo_jp_cb(self,servo_jp): # TODO: check if this subscribe definition is correct 
            '''
            '''
            self.curr_jp = servo_jp.position

        def convert_to_joint_val(self):
            '''
            expects a list of current ctr tube exposed lengths and rotations, converts into a numpy
            array containing tube deployed lengths and rotations (into to the fk function!)
            '''
            self.q = np.copy(np.array(self.curr_jp))
            self.q[:3] = [self.q[0]+self.q[1]+self.q[2],self.q[1]+self.q[2],self.q[2]]
        
        def convert_to_motor_cmds(self):
            '''
            expects a list of current tube exposed lenghts are rotations, converts into a list containing
            corresponding motor commands (in the order of motorIDs -- defined above)

            this mapping depends on how the tubes are assembled in the actuation unit! 
            '''
            # self.motor_cmds = 
    
    def __init__(self,ral,PSM_namespace,CTR_namespace):
        self.psm = self.PSM(ral.create_child(PSM_namespace))
        self.ctr = self.CTR(ral.create_child(CTR_namespace))

        self.servo_rate = 100 # aim for 100 Hz
        self.sleep_rate = ral.create_rate(self.servo_rate)
  
    # main loop 
    def run(self):
        if not self.psm.enable(5.0): # TODO: check if this is the state we expect to the PSM to be in! 
            print('    ! failed to enable {} within {} seconds'.format(self.psm.name, 5.0))
            return False
        print("               enabled")

        while True: 
            # start publishing all the info related to the ctr robot state 
            # self.curr_psm_jp = self.psm.measured_js()

            # publish updated CTR tip position 
            self.q = self.ctr.convert_to_joint_val(self.ctr.curr_jp)
            self.ctr.curr_tip_pos = self.ctr.fk.get_tip_pos(self.q)
            self.ctr.update_measured_cp(self.ctr.curr_cp)

            # publish updated CTR setpoint_js 
            self.ctr.update_setpoint_js()

            # publish updated motor commands 
            self.ctr.update_motor_abs_targets()

            self.sleep_rate.sleep()

def main():
    parser = argparse.ArgumentParser()
    parser.add_argument('PSM', type = str, help = 'ROS namespace for CRTK device')
    parser.add_argument('CTR', type = str, help = 'ROS namespace for CRTK device')

    app_args = crtk.ral.parse_argv(sys.argv[1:]) # process and remove ROS args
    args = parser.parse_args(app_args) 

    example_name = type(ctr_state_info).__name__
    ral = crtk.ral(example_name)
    
    example = ctr_state_info(ral, args.PSM, args.CTR)
    ral.spin_and_execute(example.run)

if __name__ == '__main__':
    main()