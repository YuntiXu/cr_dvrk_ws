from geometry_msgs.msg import Pose, PoseArray
from scipy.spatial.transform import Rotation as R # or scipy.spatial.transform if preferred

def transform_matrices_to_pose_array(T, frame_id, node, convert_to_meters=True):
    """
    Converts an array of 4x4xN transformation matrices into a PoseArray message.

    Args:
        T (np.ndarray): Array of shape (4, 4, N)
        frame_id (str): The frame_id to use in the header
        node (rclpy.node.Node): ROS 2 node to get clock

    Returns:
        PoseArray: The resulting ROS 2 PoseArray message
    """
    assert T.shape[0:2] == (4, 4), "Expected shape (4, 4, N)"
    N = T.shape[2]

    pose_array_msg = PoseArray()
    pose_array_msg.header.frame_id = frame_id
    pose_array_msg.header.stamp = node.get_clock().now().to_msg()

    for i in range(N):
        T_i = T[:, :, i]
        pose = Pose()
        if convert_to_meters:
            pose.position.x = T_i[0, 3]/1000 # convert to meters! 
            pose.position.y = T_i[1, 3]/1000
            pose.position.z = T_i[2, 3]/1000
        else:
            pose.position.x = T_i[0, 3]
            pose.position.y = T_i[1, 3]
            pose.position.z = T_i[2, 3]
        # Convert 3x3 rotation matrix to quaternion
        # quat = tf_transformations.quaternion_from_matrix(T_i)
        quat = R.from_matrix(T_i[:3,:3]).as_quat()
        pose.orientation.x = quat[0]
        pose.orientation.y = quat[1]
        pose.orientation.z = quat[2]
        pose.orientation.w = quat[3]

        pose_array_msg.poses.append(pose)

    return pose_array_msg

from ament_index_python.packages import get_package_share_directory
import os
import json
from .Utilities import remove_json_comments, parse_dh_json
def load_config():
    pkg_share = get_package_share_directory('cr_dvrk_model')
    json_path = os.path.join(pkg_share, 'resource', 'PSM_CR_two_segment_DH_parallelogram_param.json')
    return parse_dh_json(json_path)
