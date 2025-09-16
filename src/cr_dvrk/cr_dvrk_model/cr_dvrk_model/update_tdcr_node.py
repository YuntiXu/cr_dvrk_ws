#!/usr/bin/env python3

import rclpy

from .compute_fk_tdcrpsm import fk_cr_psm_two_segments_parallelogram
from .Utilites_ros import transform_matrices_to_pose_array, load_config

from rclpy.node import Node 
from sensor_msgs.msg import JointState
from geometry_msgs.msg import PoseArray
from geometry_msgs.msg import TransformStamped

import numpy as np
import os
import json

class TDCRPSMRobotState(Node):

    def __init__(self):
        super().__init__("get_and_send_tdcr_psm_joint_vals")

        # create subscriber that subscribes to topics: 
        self.read_joint_delta = self.create_subscription(JointState, 
                                                        "/TDCR/servo_jr", 
                                                        self.pose_callback,
                                                        10) 
        
        # consider some initial joint value
        self.curr_js = JointState()
        self.curr_js.position = [0.0,0.0]
        self.curr_js.velocity = [0.0,0.0]
        self.curr_js.effort = [0.0,0.0]

        # create publisher that publishes to topics: 
        self.publisher_pose_state = self.create_publisher(PoseArray, 
                                                        "/TDCR/backbone_pose", # topic send to Rviz
                                                        10)
        
        # define any cr design specific values
        self.geometry = load_config()

        self.get_logger().info("start listening to tdcr psm joint values")

    def pose_callback(self, tdcr_servo_jr: JointState):
        # the pose_callback function will run iff a message is received

        # update the current joint state
        self.current_js.position = self.current_js.position + tdcr_servo_jr.position

        # log the message subscription
        self.get_logger().info("listening to /TDCR/servo_jr: " + str([round (num,2) for num in self.current_js.position]))

        # update robot state
        q = np.array(self.current_js.position)
        (T,Tbackbone,T02jpsm) = fk_cr_psm_two_segments_parallelogram(q,self.geometry)

        # Tshape = np.concatenate((Tbackbone, T02jpsm), axis=2)  # shape (4, 4, N)
        Tshape = Tbackbone

        pose_array_msg = transform_matrices_to_pose_array(Tshape, frame_id='map', node=self, convert_to_meters=False)
        self.publisher_pose_state.publish(pose_array_msg)
        self.get_logger().info(f'tdcr: {pose_array_msg.poses[-1].position}')
    

def main(args=None):

    rclpy.init(args=args)
    node = TDCRPSMRobotState()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__=='__main__':
    main()