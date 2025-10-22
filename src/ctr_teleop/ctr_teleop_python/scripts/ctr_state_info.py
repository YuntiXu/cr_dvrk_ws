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
import std_msgs.msg
import numpy as np
import importlib.resources

# custom function imports
from ctr_teleop import ctr_fourier_kinematics


###################### USER DEFINED PARAMETERS ############################
# motor configs 
'''  CHANGE THIS AS NECESSARY '''
motorIDs = ['S5','S1','S6','B3','B2','B1']
# [tube1_trans, tube2_trans, tube3_trans, tube1_rot, tube2_rot, tube3_rot]
###########################################################################

# starting tube configuration 
'''  CHANGE THIS AS NECESSARY '''
ctr_start_jp = [0.045,0.03,0.09,0.0,0.0,0.0]
# [lexp1, lexp2, lexp3, rot1, rot2, rot3], note that the first 3 element must 
# be les than the maximum exposed tube lengths 
############################################################################

# physical tube constraints 
''' CHANGE THIS AS NECESSARY '''
max_exp_tube_len = [0.060, 0.045, 0.120] 
# [tube 1, tube 2, tube 3]
###############################################################################

class ctr_state_info:
    
    class PSM: 
        def __init__(self,ral):
            self.crtk = crtk.utils(self,ral)
            self.crtk.add_operating_state()
            self.crtk.add_measured_js()

    class CTR: 
        def __init__(self,ral): 
            # non crtk subscribers/publishers
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
            
            with importlib.resources.path('ctr_teleop','fparams_file_Xu2025.mat') as fparams_path:
                self.fk = ctr_fourier_kinematics(fparams_path)
            
            self.ral = ral 

        def update_measured_cp(self,curr_tip_pos):
            '''
            expects numpy array of current ctr tip position, and converts to pose stamped message 
            '''
            measured_cp_msg = geometry_msgs.msg.PoseStamped()
            measured_cp_msg.pose.position.x = curr_tip_pos[0]
            measured_cp_msg.pose.position.y = curr_tip_pos[1]
            measured_cp_msg.pose.position.z = curr_tip_pos[2]
            self.measured_cp_pub.publish(measured_cp_msg)
        
        def update_setpoint_js(self,curr_jp):
            '''
            expects list of current ctr tube exposed lengths and rotations, and converts + publish to joint state message 
            '''
            setpoint_js_msg = sensor_msgs.msg.JointState()
            setpoint_js_header = std_msgs.msg.Header()
            setpoint_js_header.stamp = self.ral.now().to_msg()
            setpoint_js_header.frame_id = "base_link" # TODO: does this make sense? 
            setpoint_js_msg.header = setpoint_js_header
            setpoint_js_msg.name = ['lexp_t1','lexp_t2','lexp_t3','rot_t1','rot_t2','rot_t3']
            
            setpoint_js_msg.position = curr_jp
            self.setpoint_js_pub.publish(setpoint_js_msg)

        def update_motor_abs_targets(self, curr_motor_cmds):
            '''
            expects list of current motor commands, and converts + publish to joint state message 
            '''
            motor_abs_targets_msg = sensor_msgs.msg.JointState()
            motor_abs_target_header = std_msgs.msg.Header()
            motor_abs_target_header.stamp = self.ral.now().to_msg()
            motor_abs_targets_msg.header = motor_abs_target_header
            motor_abs_targets_msg.name = motorIDs
            
            motor_abs_targets_msg.position = curr_motor_cmds
            self.motor_abs_targets_pub.publish(motor_abs_targets_msg)

        def servo_jp_cb(self,servo_jp): # TODO: check if this subscribe definition is correct 
            '''
            '''
            self.curr_jp = servo_jp.position

        def convert_to_joint_val(self,curr_jp):
            '''
            expects a list of current ctr tube exposed lengths and rotations, converts into a numpy
            array containing tube deployed lengths and rotations (into to the fk function!)
            '''
            q = np.copy(curr_jp)
            q[:3] = np.array([q[0]+q[1]+q[2],q[1]+q[2],q[2]])
            
            return q
        
        def convert_to_motor_cmds(self,curr_jp):
            '''
            expects a list of current tube exposed lenghts are rotations, converts into a list containing
            corresponding motor commands (in the order of motorIDs -- defined above)

            this mapping depends on how the tubes are assembled in the actuation unit! 
            '''
            motor_cmds = 6*[0.0]
            motor_cmds[2] = curr_jp[2] - max_exp_tube_len[2]
            motor_cmds[1] = (curr_jp[1] - max_exp_tube_len[1]) + motor_cmds[2]
            motor_cmds[0] = (curr_jp[0] - max_exp_tube_len[0]) + motor_cmds[1]

            motor_cmds[3] = curr_jp[3]
            motor_cmds[4] = curr_jp[4]
            motor_cmds[5] = curr_jp[5]

            return motor_cmds 
    
    def __init__(self,ral,PSM_namespace,CTR_namespace):
        self.psm = self.PSM(ral.create_child(PSM_namespace))
        self.ctr = self.CTR(ral.create_child(CTR_namespace))

        self.psm_name = PSM_namespace
        self.ctr_name = CTR_namespace

        self.servo_rate = 100 # aim for 100 Hz
        self.sleep_rate = ral.create_rate(self.servo_rate)

        # ctr related internal variables 
        self.ctr_curr_jp = ctr_start_jp
        self.ctr_q = None 
        self.ctr_motor_cmds = None
        self.ctr_curr_tip_pos = None 
  
    # main loop 
    def run(self):
        if not self.psm.enable(5.0): # TODO: check if this is the state we expect to the PSM to be in! 
            print('    ! failed to enable {} within {} seconds'.format(self.psm_name, 5.0))
            return False
        print("               {} enabled".format(self.psm_name))

        while True: 
            # start publishing all the info related to the ctr robot state TODO 
            # self.curr_psm_jp = self.psm.measured_js()

            # publish updated CTR tip position 
            self.ctr_q = self.ctr.convert_to_joint_val(self.ctr_curr_jp)
            self.ctr_curr_tip_pos = self.ctr.fk.get_tip_pos(self.ctr_q)
            self.ctr.update_measured_cp(self.ctr_curr_tip_pos)

            # publish updated CTR setpoint_js 
            self.ctr.update_setpoint_js(self.ctr_curr_jp)
            print(f"ctr_curr_jp: {self.ctr_curr_jp}")

            # publish updated motor commands 
            self.ctr_motor_cmds = self.ctr.convert_to_motor_cmds(self.ctr_curr_jp)
            self.ctr.update_motor_abs_targets(self.ctr_motor_cmds)
            print(f"ctr_motor_cmds: {self.ctr_motor_cmds}")

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