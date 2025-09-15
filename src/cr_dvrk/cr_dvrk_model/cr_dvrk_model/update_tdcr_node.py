#!/usr/bin/env python3

import rclpy

from .compute_fk_tdcrpsm import fk_cr_psm_two_segments_parallelogram
from .Utilites_ros import transform_matrices_to_pose_array, load_config

from rclpy.node import Node 
from sensor_msgs.msg import JointState
from geometry_msgs.msg import PoseArray
from geometry_msgs.msg import TransformStamped

from rclpy.qos import QoSProfile

import numpy as np
import os
import json

class TDCRPSMRobotState(Node):

    def __init__(self):
        super().__init__("get_and_send_tdcr_psm_joint_vals")

        # create subscriber that subscribes to topics: 
        self.read_joint_state = self.create_subscription(JointState, 
                                                        "/TDCRPSM1/setpoint_js", 
                                                        self.pose_callback,
                                                        10) 
        
        # set initial joint states 
        self.current_js = JointState()
        self.current_js.name = ['outer_pitch', 'outer_yaw', 'insertion', 'system_roll', 'bend_angle_1', 'bend_angle_2']
        self.current_js.position = [0.0, 0.0, 0.12, 0.0, 0.0, 0.0]
        self.current_js.velocity = [0.0, 0.0, 0.0, 0.0, 0.0, 0.0]
        self.current_js.effort = [0.0, 0.0, 0.0, 0.0, 0.0, 0.0]

        self.publisher_js = self.create_publisher(JointState,
                                               "/TDCRPSM1/setpoint_js",
                                               10)
        
        self.create_timer(0.01,self.publish_js)
        self.last_published = None

        # create publisher that publishes to topics: 
        self.publisher_pose_state = self.create_publisher(PoseArray, 
                                                        "/TDCRPSM1/backbone_pose", # topic send to Rviz
                                                        10)
        
        # set this to some initial value
        self.publisher_servo_jp = self.create_publisher(JointState, 
                                                      "/TDCRPSM1/servo_jp", 
                                                        10)

        # define any cr design specific values
        self.geometry = load_config()

        self.get_logger().info("start listening to tdcr psm joint values")

    def pose_callback(self, tdcrpsm_setpoint_js: JointState):
        # the pose_callback function will run iff a message is received

        # update the current joint state
        if self.last_published is not None and tdcrpsm_setpoint_js.position != self.last_published.position:
            return
        
        self.current_js = tdcrpsm_setpoint_js
        # log the message subscription
        self.get_logger().info("listening to /TDCRPSM1/setpoint_js: " + str([round (num,2) for num in self.current_js.position]))

        # update robot state
        q = np.array(self.current_js.position)
        (T,Tbackbone,T02jpsm) = fk_cr_psm_two_segments_parallelogram(q,self.geometry)

        Tshape = np.concatenate((Tbackbone, T02jpsm), axis=2)  # shape (4, 4, N)

        pose_array_msg = transform_matrices_to_pose_array(Tshape, frame_id='map', node=self, convert_to_meters=False)
        self.publisher_pose_state.publish(pose_array_msg)
        self.get_logger().info(f'tdcr_psm: {pose_array_msg.poses[-1].position}')
    
    def publish_js(self):
        # Update timestamp
        self.current_js.header.stamp = self.get_clock().now().to_msg()
        self.publisher_js.publish(self.current_js)
        # Save last published to avoid feedback
        self.last_published = self.current_js

def main(args=None):

    rclpy.init(args=args)
    node = TDCRPSMRobotState()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__=='__main__':
    main()