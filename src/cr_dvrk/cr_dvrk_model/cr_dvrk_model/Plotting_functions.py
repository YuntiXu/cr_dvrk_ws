import matplotlib.pyplot as plt
from mpl_toolkits.mplot3d import Axes3D
import numpy as np
import scipy as sp
from fk_psm_wrist_2D import fk_psm_wrist_2D
from fk_psm_wrist_3D import fk_psm_wrist_3D_modifiedDH_parallelogram, fk_psm_wrist_3D_modifiedDH
from fk_psm_continuum_2D import fk_psm_cr_one_segment_2D
from compute_fk_tdcrpsm import fk_cr_psm_one_segment, fk_cr_psm_one_segment_parallelogram, fk_cr_psm_two_segments, fk_cr_psm_two_segments_parallelogram
from compute_Jacobian import compute_jacobianspace_psm_3D, compute_jacobianspace_psmcr_3D, convert_space_to_body, compute_jacobianspace_psmcr2segment_3D
from scipy.spatial import ConvexHull
from Utilities import parse_dh_json, format_matrix, compute_manipulability_index
import modern_robotics as mr

def draw_PSM2Djoints(ax,q,params):
    # unpack params
    L1 = params["L1"]
    L2 = params["L2"]
    L3 = params["L3"]
    # L4 = params["L4"]
    # L5 = params["L5"]

    # plot RCM point 
    draw_circle(ax,np.array([0,0]),0.005,'red')   

    # draw the parallelogram
    theta0 = np.deg2rad(75) # need to confirm this value 
    theta = theta0 - q[0]

    # active joint 
    center1 =[-L1*np.cos(theta),L1*np.sin(theta)]
    draw_circle(ax,center1,0.01,'green')

    # passive joints
    center2 = [-L1*np.cos(theta)-L2,L1*np.sin(theta)]
    draw_circle(ax,center2,0.01,'gray')
    center3 = [-L2,0]
    draw_circle(ax,center3,0.01,'gray')

    # fill in the parallelogram
    ax.plot([0,center1[0]],[0,center1[1]],color = 'gray', linestyle = 'dashed', linewidth = 1)
    ax.plot([0,center3[0]],[0,center3[1]],color = 'gray', linestyle = 'dashed', linewidth = 1)

    # draw rest of backend frame 
    ax.plot([center1[0],center2[0]], [center1[1],center2[1]], color = 'black', linewidth = 1)
    ax.plot([center2[0],center3[0]], [center2[1],center3[1]], color = 'black', linewidth = 1)

    front_corner = [-L3*np.sin(q[0]),center1[1]]
    ax.plot([front_corner[0],0], [front_corner[1],0], color = 'black', linewidth = 1)
    ax.plot([front_corner[0],center1[0]], [front_corner[1],center1[1]], color = 'black', linewidth = 1)

    # draw the instrument portion 
    # draw the wrist joint 
    T,Twrist = fk_psm_wrist_2D(q,params)
    pwrist = Twrist[1:3,3]
    p = T[1:3,3]
    ax.plot([0,pwrist[0]], [0,pwrist[1]], color = 'black', linewidth = 1)
    draw_circle(ax,pwrist,0.005,'green')

    # draw the end-effector 
    ax.plot([pwrist[0],p[0]], [pwrist[1],p[1]], color = 'black', linewidth = 1)
    scale = 0.1
    eey_axis = T[1:3,1]
    eez_axis = T[1:3,2]
    # print(eey_axis)
    # print(eez_axis)

    # need to fix this! 
    # ax.annotate("",xytext=(p[0],p[1]),xy = (scale*(eey_axis[0]),scale*(eey_axis[1])),arrowprops=dict(arrowstyle="->"))
    # ax.annotate("",xytext=(p[0],p[1]),xy = (scale*(eez_axis[0]),scale*(eez_axis[1])),arrowprops=dict(arrowstyle="->"))

def draw_PSMCR2Djoints(ax,q,geometric_param):
    # unpack params
    L1 = geometric_param["L1"]
    L2 = geometric_param["L2"]
    L3 = geometric_param["L3"]
    # L4 = params["L4"]
    # L5 = params["L5"]

    # plot RCM point 
    draw_circle(ax,np.array([0,0]),0.005,'red')   

    # draw the parallelogram
    theta0 = np.deg2rad(75) # need to confirm this value 
    theta = theta0 - q[0]

    # active joint 
    center1 =[-L1*np.cos(theta),L1*np.sin(theta)]
    draw_circle(ax,center1,0.01,'green')

    # passive joints
    center2 = [-L1*np.cos(theta)-L2,L1*np.sin(theta)]
    draw_circle(ax,center2,0.01,'gray')
    center3 = [-L2,0]
    draw_circle(ax,center3,0.01,'gray')

    # fill in the parallelogram
    ax.plot([0,center1[0]],[0,center1[1]],color = 'gray', linestyle = 'dashed', linewidth = 1)
    ax.plot([0,center3[0]],[0,center3[1]],color = 'gray', linestyle = 'dashed', linewidth = 1)

    # draw rest of backend frame 
    ax.plot([center1[0],center2[0]], [center1[1],center2[1]], color = 'black', linewidth = 1)
    ax.plot([center2[0],center3[0]], [center2[1],center3[1]], color = 'black', linewidth = 1)

    front_corner = [-L3*np.sin(q[0]),center1[1]]
    ax.plot([front_corner[0],0], [front_corner[1],0], color = 'black', linewidth = 1)
    ax.plot([front_corner[0],center1[0]], [front_corner[1],center1[1]], color = 'black', linewidth = 1)

    # plot the CR portion 
    [T,Tbackbone,Tcrbase] = fk_psm_cr_one_segment_2D(q,geometric_param)

    # draw the trocar
    p_crbase = Tcrbase[1:3,3]
    ax.plot([0,p_crbase[0]], [0,p_crbase[1]], color = 'black', linewidth = 1)
    
    # draw the CR backbone 
    for i in range(0,Tbackbone.shape[2]):
        draw_frame_2D(ax,Tbackbone[:,:,i],'b.')

    # plot the end-effector

def draw_PSM3Djoints(ax,q,geometric_param):
    # TODO: improve end-effector visualization 
    (T,Tj) = fk_psm_wrist_3D_modifiedDH_parallelogram(q,geometric_param)
    
    njoints = len(list(geometric_param.keys()))
    
    # draw all the joints as cylinders 
    # for i,(joint_name,joint_data) in enumerate(geometric_param.items()):
    #     R = Tj[0:3,0:3,i+1]
    #     p = Tj[0:3,3,i+1]
    #     if joint_data["mode"] == "active":
    #         if "wrist" in joint_name:
    #             draw_cylinder(ax,p,R,'b',0.005,0.01)
    #         else:
    #             draw_cylinder(ax,p,R,'b',0.02,0.04)

    #     elif joint_data["mode"]  == "passive":
    #         draw_cylinder(ax,p,R,'gray',0.02,0.04)
        
    # draw the RCM (not at origin anymore!)
    draw_sphere(ax,np.array([0,0.516,0]),'r')

    # fill in the PSM's backend frame 
    center1 = Tj[0:3,3,0]
    center2 = Tj[0:3,3,4]
    center3 = Tj[0:3,3,5]
    ax.plot([center1[0],center2[0]],[center1[1],center2[1]],[center1[2],center2[2]],color = 'gray', linewidth = 3)
    ax.plot([center2[0],center3[0]],[center2[1],center3[1]],[center2[2],center3[2]],color = 'gray', linewidth = 3)
    
    center4 = Tj[0:3,3,6]
    center5 = Tj[0:3,3,7]
    center6 = Tj[0:3,3,8]
    center7 = Tj[0:3,3,9]
    ax.plot([center4[0],center5[0]],[center4[1],center5[1]],[center4[2],center5[2]],color = 'gray', linewidth = 3)
    ax.plot([center5[0],center6[0]],[center5[1],center6[1]],[center5[2],center6[2]],color = 'gray', linewidth = 3)
    ax.plot([center6[0],center7[0]],[center6[1],center7[1]],[center6[2],center7[2]],color = 'gray', linewidth = 3)

    # draw ee frame
    T = T.reshape((4,4,1))
    draw_frames_3D(ax,T,axis_length=0.05)

    # plot the trocar 
def draw_PSMCR3Djoints(ax,q,geometric_param,options,nsegments=1,visualizeCR=True):
    # TODO: improve end-effector visualization 
    if nsegments == 1:
        (T,Tbackbone,T02jpsm) = fk_cr_psm_one_segment_parallelogram(q,geometric_param,options)
    elif nsegments == 2:
        (T,Tbackbone,T02jpsm) = fk_cr_psm_two_segments_parallelogram(q,geometric_param,options)
    
    psm_param = {name: joint for name, joint in geometric_param.items() if joint.get("type") != "continuum"}
    
    # draw all the joints as cylinders 
    # for i,(joint_name,joint_data) in enumerate(psm_param.items()):
    #     R = T02jpsm[0:3,0:3,i+1]
    #     p = T02jpsm[0:3,3,i+1]
    #     if joint_data["mode"] == "active":
    #         if "wrist" in joint_name:
    #             #  draw_cylinder(ax,p,R,'b',0.005,0.01)
    #         else:
    #             # draw_cylinder(ax,p,R,'b',0.02,0.04)
    #     elif joint_data["mode"]  == "passive":
            # draw_cylinder(ax,p,R,'gray',0.02,0.04)
        
    # draw the RCM (not at origin anymore!)
    robot_plt_obj = []
    RCM = np.array([0,0.516,0,1])

    # if baseframe is not None:
    #     RCM = baseframe@RCM
    # print("RCM: ",RCM)
    robot_plt_obj.append(draw_sphere(ax,RCM[:3],'r'))

    # fill in the PSM's backend frame 
    center1 = T02jpsm[0:3,3,0]
    center2 = T02jpsm[0:3,3,4]
    center3 = T02jpsm[0:3,3,5]
    plt_obj, = ax.plot([center1[0],center2[0]],[center1[1],center2[1]],[center1[2],center2[2]],color = 'gray', linewidth = 3)
    robot_plt_obj.append(plt_obj)
    plt_obj, = ax.plot([center2[0],center3[0]],[center2[1],center3[1]],[center2[2],center3[2]],color = 'gray', linewidth = 3)
    robot_plt_obj.append(plt_obj)

    center4 = T02jpsm[0:3,3,6]
    center5 = T02jpsm[0:3,3,7]
    plt_obj, = ax.plot([center4[0],center5[0]],[center4[1],center5[1]],[center4[2],center5[2]],color = 'gray', linewidth = 3)
    robot_plt_obj.append(plt_obj)
    # draw the continuum segment 
    if visualizeCR == True:
        robot_plt_obj.extend(draw_frames_3D(ax,Tbackbone))
    # for i in range(0,Tbackbone.shape[2]):
    #     draw_frame_3D(ax,Tbackbone[:,:,i])
    #     if i == Tbackbone.shape[2]-1:
    #         draw_frame_3D(ax,Tbackbone[:,:,i],axis_length=0.05)

    # plot the trocar 
    return robot_plt_obj

def visualize_kinematic_info(ax,q,geometric_param,options,exit_flag=None,nsegments=1):
    text_plt_obj = []
    # text_plt_obj.extend(visualize_singular_values_psmcr(ax, q,geometric_param,isplanar,nsegments))
    text_plt_obj.extend(visualize_jacobian_psmcr(ax,q,geometric_param,options,nsegments))
    text_plt_obj.extend(visualize_tip_pose_psmcr(ax,q,geometric_param,options,nsegments))
    text_plt_obj.extend(visualize_joint_val(ax,q))
    text_plt_obj.extend(visualize_ik_result(ax,exit_flag))
    return text_plt_obj
    
def visualize_jacobian_psm(ax,q,geometric_param,T,type="linear"):
    # compute the robot jacobians
    Js = compute_jacobianspace_psm_3D(q,geometric_param)
    Jb = convert_space_to_body(T,Js)

    # separate the linear and angular components
    Jv = Jb[3:,:]
    Jw = Jb[0:3,:]

    # check which ones to visualize
    if type == "linear":
        ax.text2D(0.45, 1.07, f"Jv: {', '.join([f'{val:.4f}' for val in Jv[0,:]])}", 
          fontsize=10, ha='center', color='black', transform=ax.transAxes)
        ax.text2D(0.45, 1.03, f"    {', '.join([f'{val:.4f}' for val in Jv[1,:]])}", 
          fontsize=10, ha='center', color='black', transform=ax.transAxes)
        ax.text2D(0.45, 0.99, f"    {', '.join([f'{val:.4f}' for val in Jv[2,:]])}", 
          fontsize=10, ha='center', color='black', transform=ax.transAxes)
    # elif type == "angular":
    else: 
        ax.text2D(0.4, 1.07, f"Jv: {', '.join([f'{val:.4f}' for val in Jv[0,:]])}", 
          fontsize=10, ha='center', color='black', transform=ax.transAxes)
        ax.text2D(0.4, 1.03, f"    {', '.join([f'{val:.4f}' for val in Jv[1,:]])}", 
          fontsize=10, ha='center', color='black', transform=ax.transAxes)
        ax.text2D(0.4, 0.99, f"    {', '.join([f'{val:.4f}' for val in Jv[2,:]])}", 
          fontsize=10, ha='center', color='black', transform=ax.transAxes)
        
        ax.text2D(0.9, 1.07, f"Jw: {', '.join([f'{val:.4f}' for val in Jw[0,:]])}", 
          fontsize=10, ha='center', color='black', transform=ax.transAxes)
        ax.text2D(0.9, 1.03, f"    {', '.join([f'{val:.4f}' for val in Jw[1,:]])}", 
          fontsize=10, ha='center', color='black', transform=ax.transAxes)
        ax.text2D(0.9, 0.99, f"    {', '.join([f'{val:.4f}' for val in Jw[2,:]])}", 
          fontsize=10, ha='center', color='black', transform=ax.transAxes)
        
def visualize_jacobian_psmcr(ax,q,geometric_param,options,nsegments=1):
    
    # compute the robot jacobians
    if nsegments == 1:
        (Jb,Jpsm) = compute_jacobianspace_psmcr_3D(q,geometric_param,options)
        # T,_,_ = fk_cr_psm_one_segment(q,geometric_param,isplanar)
    elif nsegments == 2:
        (Jb,Jspsm) = compute_jacobianspace_psmcr2segment_3D(q,geometric_param,options)
        # T,_,_,_ = fk_cr_psm_two_segments(q,geometric_param,isplanar)
    
    # Jb = convert_space_to_body(T,Js)
    print("*************************************")
    format_matrix(Jb,"6.4f")

    # separate the linear and angular components
    Jv = Jb[3:,:]
    Jw = Jb[0:3,:]

    # print out both the linear and angular Jacobians 
    text_plt_obj = []
    text_plt_obj.append(ax.text2D(0.15, 1.07, f"Jv: {', '.join([f'{val:.4f}' for val in Jv[0,:]])}", 
      fontsize=10, ha='center', color='black', transform=ax.transAxes))
    text_plt_obj.append(ax.text2D(0.15, 1.03, f"    {', '.join([f'{val:.4f}' for val in Jv[1,:]])}", 
      fontsize=10, ha='center', color='black', transform=ax.transAxes))
    text_plt_obj.append(ax.text2D(0.15, 0.99, f"    {', '.join([f'{val:.4f}' for val in Jv[2,:]])}", 
      fontsize=10, ha='center', color='black', transform=ax.transAxes))
    
    text_plt_obj.append(ax.text2D(0.8, 1.07, f"Jw: {', '.join([f'{val:.4f}' for val in Jw[0,:]])}", 
      fontsize=10, ha='center', color='black', transform=ax.transAxes))
    text_plt_obj.append(ax.text2D(0.8, 1.03, f"    {', '.join([f'{val:.4f}' for val in Jw[1,:]])}", 
      fontsize=10, ha='center', color='black', transform=ax.transAxes))
    text_plt_obj.append(ax.text2D(0.8, 0.99, f"    {', '.join([f'{val:.4f}' for val in Jw[2,:]])}", 
      fontsize=10, ha='center', color='black', transform=ax.transAxes))
    
    return text_plt_obj

def visualize_singular_values_psm(ax,q,T,geometric_param):
    # need to add in some numerical stability stuff to ensure eig decomp don't blow up
    # compute the robot jacobians
    Js = compute_jacobianspace_psm_3D(q,geometric_param)

     # separate the linear and angular components 
    Jb = convert_space_to_body(T,Js)
    Jv = Jb[3:,:]
    Jw = Jb[0:3,:]

    # compute the singular values
    sigma_v =  np.sqrt(np.linalg.eigvals(Jv@Jv.T))
    sigma_w =  np.sqrt(np.linalg.eigvals(Jw@Jw.T))

    ax.text2D(0.001, 0.95, f"sigma(Jv): {sigma_v[0]:.4f}, {sigma_v[1]:.4f}, {sigma_v[2]:.4f}", 
          fontsize=10, ha='center', color='black', transform=ax.transAxes)

    ax.text2D(0.001, 0.91, f"sigma(Jw): {sigma_w[0]:.4f}, {sigma_w[1]:.4f}, {sigma_w[2]:.4f}", 
          fontsize=10, ha='center', color='black', transform=ax.transAxes)
   
def visualize_singular_values_psmcr(ax,q,geometric_param,isplanar=True,nsegments=1):
     # compute the robot jacobians
    if nsegments == 1:
        (Js,Jpsm) = compute_jacobianspace_psmcr_3D(q,geometric_param,isplanar)
        T,_,_ = fk_cr_psm_one_segment(q,geometric_param,isplanar)
    elif nsegments == 2:
        (Js,Jspsm) = compute_jacobianspace_psmcr2segment_3D(q,geometric_param,isplanar)
        T,_,_,_ = fk_cr_psm_two_segments(q,geometric_param,isplanar)
    
    # separate the linear and angular components 
    Jb = convert_space_to_body(T,Js)
    # Jb = Js
    # only consider the CR portion 
    Jv = Jb[3:,2:]
    Jw = Jb[0:3,2:]

    # compute the singular values
    Av = Jv@Jv.T
    Aw = Jw@Jw.T 
    # enforce symmetry (J*J.T should always be symmetric)
    Av = (Av+Av.T)/2
    Aw = (Aw+Aw.T)/2

    sigma_v =  np.real(np.sqrt(sp.linalg.eigvals(Av)))
    if np.isnan(sigma_v).any() == True:
        ValueError("invalid singular value")
    # format_matrix(Jv@Jv.T,"6.4f")
    sigma_w =  np.real(np.sqrt(sp.linalg.eigvals(Jw@Jw.T)))
    if np.isnan(sigma_w).any() == True:
        ValueError("invalid singular value")
    # format_matrix(Jw@Jw.T,"6.4f")

    # manipulability index 
    mu = compute_manipulability_index(Jv)

    text_plt_obj = []
    text_plt_obj.append(ax.text2D(0.001, 0.92, f"sigma(Jv_CR): {sigma_v[0]:.4f}, {sigma_v[1]:.4f}, {sigma_v[2]:.4f}", 
          fontsize=10, ha='center', color='black', transform=ax.transAxes))
    
    text_plt_obj.append(ax.text2D(0.001, 0.88, f"sigma(Jw_CR): {sigma_w[0]:.4f}, {sigma_w[1]:.4f}, {sigma_w[2]:.4f}", 
          fontsize=10, ha='center', color='black', transform=ax.transAxes))
    
    text_plt_obj.append(ax.text2D(0.001, 0.84, f"man(Jv_CR): {mu:.8f}", 
          fontsize=10, ha='center', color='black', transform=ax.transAxes))
    
    return text_plt_obj

def visualize_tip_pose_psm(ax,q,geometric_param):
    (T,T02j) = fk_psm_wrist_3D_modifiedDH(q,geometric_param)
    R = T[0:3,0:3]
    p = T[0:3,3]
    # display end-effector pose 
    ax.text2D(0.4, 0.05, f"p: {p[0]:.4f}, {p[1]:.4f}, {p[2]:.4f}", 
          fontsize=10, ha='center', color='black', transform=ax.transAxes)
    
    ax.text2D(0.4, 0.01, f"R: {R[0][0]:.4f}, {R[0][1]:.4f}, {R[0][2]:.4f}", 
          fontsize=10, ha='center', color='black', transform=ax.transAxes)
    ax.text2D(0.4, -0.03, f"   {R[1][0]:.4f}, {R[1][1]:.4f}, {R[1][2]:.4f}", 
          fontsize=10, ha='center', color='black', transform=ax.transAxes)
    ax.text2D(0.4, -0.07, f"  {R[2][0]:.4f}, {R[2][1]:.4f}, {R[2][2]:.4f}", 
          fontsize=10, ha='center', color='black', transform=ax.transAxes)
    
def visualize_tip_pose_psmcr(ax,q,geometric_param,options,nsegments=1):
    
    if nsegments == 1:
        T,*_ = fk_cr_psm_one_segment(q,geometric_param,options)
    elif nsegments == 2:
        T,*_ = fk_cr_psm_two_segments(q,geometric_param,options)

    R = T[0:3,0:3]
    p = T[0:3,3]
    # display end-effector pose 
    text_plt_obj = []
    text_plt_obj.append(ax.text2D(0.35, 0.05, f"p: {p[0]:.4f}, {p[1]:.4f}, {p[2]:.4f}", 
          fontsize=10, ha='center', color='black', transform=ax.transAxes))
    
    text_plt_obj.append(ax.text2D(0.35, 0.01, f"R: {R[0][0]:.4f}, {R[0][1]:.4f}, {R[0][2]:.4f}", 
          fontsize=10, ha='center', color='black', transform=ax.transAxes))
    text_plt_obj.append(ax.text2D(0.35, -0.03, f"   {R[1][0]:.4f}, {R[1][1]:.4f}, {R[1][2]:.4f}", 
          fontsize=10, ha='center', color='black', transform=ax.transAxes))
    text_plt_obj.append(ax.text2D(0.35, -0.07, f"  {R[2][0]:.4f}, {R[2][1]:.4f}, {R[2][2]:.4f}", 
          fontsize=10, ha='center', color='black', transform=ax.transAxes)) 
    
    return text_plt_obj
    
def visualize_joint_val(ax,q_curr):
    text_plt_obj = []
    q_psm = q_curr[:4]
    q_cr = q_curr[4:]
    text_plt_obj.append(ax.text2D(0.8, 0.05, f"q_psm: {', '.join([f'{val:.4f}' for val in q_psm])}", 
          fontsize=10, ha='center', color='black', transform=ax.transAxes))
    text_plt_obj.append(ax.text2D(0.8, 0.01, f"q_cr: {', '.join([f'{val:.4f}' for val in q_cr])}", 
          fontsize=10, ha='center', color='black', transform=ax.transAxes))
    return text_plt_obj
  
def visualize_ik_result(ax,exit_flag):
    if exit_flag == None:
        return []
    ik_result = list(exit_flag.keys())
    text_plt_obj = []
    text_plt_obj.append(ax.text2D(0.05,0.01+0.08,ik_result[0],fontsize=10, ha='center', color='black', transform=ax.transAxes))
    text_plt_obj.append(ax.text2D(0.05,-0.03+0.08,exit_flag[ik_result[0]],fontsize=10, ha='center', color='black', transform=ax.transAxes))
    text_plt_obj.append(ax.text2D(0.05,-0.07+0.08,ik_result[1],fontsize=10, ha='center', color='black', transform=ax.transAxes))
    text_plt_obj.append(ax.text2D(0.05,-0.11+0.08,exit_flag[ik_result[1]],fontsize=10, ha='center', color='black', transform=ax.transAxes))
    text_plt_obj.append(ax.text2D(0.05,-0.11+0.04,ik_result[2],fontsize=10, ha='center', color='black', transform=ax.transAxes))
    text_plt_obj.append(ax.text2D(0.05,-0.15+0.04,exit_flag[ik_result[2]],fontsize=10, ha='center', color='black', transform=ax.transAxes))
    if len(ik_result)>3:
        text_plt_obj.append(ax.text2D(0.05,-0.19+0.04,ik_result[3],fontsize=10, ha='center', color='black', transform=ax.transAxes))
        text_plt_obj.append(ax.text2D(0.05,-0.23+0.04,exit_flag[ik_result[3]],fontsize=10, ha='center', color='black', transform=ax.transAxes))
    return text_plt_obj

def draw_circle(ax,center,radius,color):
    circle = plt.Circle(center, radius, edgecolor='black', facecolor=color)
    ax.add_patch(circle)

def draw_sphere(ax,center, color='b',radius = 0.01,num_points=5):
    x0, y0, z0 = center  # Extract center coordinates
    
    u = np.linspace(0, 2 * np.pi, num_points)
    v = np.linspace(0, np.pi, num_points)
    
    U, V = np.meshgrid(u, v)
    X = x0 + radius * np.cos(U) * np.sin(V)
    Y = y0 + radius * np.sin(U) * np.sin(V)
    Z = z0 + radius * np.cos(V)
    
    plt_obj = ax.plot_surface(X, Y, Z,color=color)

    return plt_obj
    
def draw_cylinder(ax,center, rotation_matrix, color='b',radius=1, height=2, num_points=5):
    # num_points changes computation speed a lot 
    x0, y0, z0 = center  # Extract center coordinates
    
    # Generate theta and h values for the cylinder's surface and the top and bottom circles
    theta = np.linspace(0, 2 * np.pi, num_points)
    h = np.linspace(-height / 2, height / 2, num_points)

    # Create a meshgrid for surface points (no need to flatten)
    Theta, H = np.meshgrid(theta, h)
    
    # Parametric equations for cylinder (before rotation)
    X_cyl = radius * np.cos(Theta)
    Y_cyl = radius * np.sin(Theta)
    Z_cyl = H

    # Apply rotation matrix to each component directly for efficiency
    rotated_X = rotation_matrix[0, 0] * X_cyl + rotation_matrix[0, 1] * Y_cyl + rotation_matrix[0, 2] * Z_cyl
    rotated_Y = rotation_matrix[1, 0] * X_cyl + rotation_matrix[1, 1] * Y_cyl + rotation_matrix[1, 2] * Z_cyl
    rotated_Z = rotation_matrix[2, 0] * X_cyl + rotation_matrix[2, 1] * Y_cyl + rotation_matrix[2, 2] * Z_cyl
    
    # Shift by the center position
    X = x0 + rotated_X
    Y = y0 + rotated_Y
    Z = z0 + rotated_Z

    # Plot the cylinder surface
    ax.plot_surface(X, Y, Z, color=color, alpha=1)

    # For the top and bottom faces, no need to create full grid
    X_circle = radius * np.cos(theta)
    Y_circle = radius * np.sin(theta)
    Z_top = np.full_like(X_circle, height / 2)
    Z_bottom = np.full_like(X_circle, -height / 2)
    
    # Apply the same rotation to top and bottom circles
    rotated_top_X = rotation_matrix[0, 0] * X_circle + rotation_matrix[0, 1] * Y_circle + rotation_matrix[0, 2] * Z_top
    rotated_top_Y = rotation_matrix[1, 0] * X_circle + rotation_matrix[1, 1] * Y_circle + rotation_matrix[1, 2] * Z_top
    rotated_top_Z = rotation_matrix[2, 0] * X_circle + rotation_matrix[2, 1] * Y_circle + rotation_matrix[2, 2] * Z_top
    
    rotated_bottom_X = rotation_matrix[0, 0] * X_circle + rotation_matrix[0, 1] * Y_circle + rotation_matrix[0, 2] * Z_bottom
    rotated_bottom_Y = rotation_matrix[1, 0] * X_circle + rotation_matrix[1, 1] * Y_circle + rotation_matrix[1, 2] * Z_bottom
    rotated_bottom_Z = rotation_matrix[2, 0] * X_circle + rotation_matrix[2, 1] * Y_circle + rotation_matrix[2, 2] * Z_bottom
    
    # Plot the top and bottom faces
    ax.plot_trisurf(x0 + rotated_top_X, y0 + rotated_top_Y, z0 + rotated_top_Z, color=color, alpha=1)
    ax.plot_trisurf(x0 + rotated_bottom_X, y0 + rotated_bottom_Y, z0 + rotated_bottom_Z, color=color, alpha=1)
    
# def plot_PSM2D(ax,q,geometric_param):
#    draw_PSM2Djoints(ax,q,geometric_param)
#    plt.grid(True)

# def plot_PSM3D(ax,q,geometric_param):
#     draw_PSM3Djoints(ax,q,geometric_param)
#     plt.grid(True)

# def plot_PSMCR3D(ax,q,geometric_param):
#     draw_PSMCR3Djoints(ax,q,geometric_param)
#     plt.grid(True)

# def plot_PSMCR2D(ax,q,geometric_param):
#     draw_PSMCR2Djoints(ax,q,geometric_param)
#     plt.grid(True)
  
##########################################################################################
def plot_workspace(ax,reached):
    # Compute the convex hull
    hull = ConvexHull(reached)
    # Plot the convex hull boundary
    for simplex in hull.simplices:
        plt.plot(reached[simplex, 0], reached[simplex, 1], 'k-')
    # Fill the region within the convex hull
    plt.fill(reached[hull.vertices, 0], reached[hull.vertices, 1], 'lightblue', alpha=0.5, label='Shaded Region')

def draw_frame_2D(ax,T,color,plot_frame = False):
    # first plot the origin
    ax.plot(T[1,3],T[2,3],color,markersize=0.5)
    
    # plot the associated frame 
    # y = T[1:3,1]
    # z = T[1:3,2]
    # p = T[1:3,3]
    # scale = 0.001
    # ax.arrow(p[0],p[1],scale*y[0],scale*y[1],head_width=0.01,head_length=0.01,fc='k',ec='k')
    # ax.arrow(p[0],p[1],scale*z[0],scale*z[1],head_width=0.01,head_length=0.01,fc='k',ec='k')

# def draw_frame_3D(ax,T,axis_length=0.005):
#     # Extract origin
#     origin = T[:3, 3]  # Translation part (x, y, z)
    
#     # Extract rotation matrix
#     R = T[:3, :3]  # Top-left 3x3 submatrix

#     # Define axis directions (unit vectors in local frame)
#     x_axis = origin + axis_length * R[:, 0]  # X direction (red)
#     y_axis = origin + axis_length * R[:, 1]  # Y direction (green)
#     z_axis = origin + axis_length * R[:, 2]  # Z direction (blue)

#     # Plot the axes
#     ax.quiver(*origin, *(x_axis - origin), color='r', linewidth=1)
#     ax.quiver(*origin, *(y_axis - origin), color='g', linewidth=1)
#     ax.quiver(*origin, *(z_axis - origin), color='b', linewidth=1)

def draw_frames_3D(ax, T, axis_length=0.005):
    """
    Draws multiple 3D coordinate frames from a 3D array of transformation matrices.

    Parameters:
        ax : matplotlib 3D axis
            The axis on which to plot the frames.
        T : np.ndarray (4, 4, N)
            A 3D array containing N transformation matrices.
        axis_length : float, optional
            The length of the coordinate axes (default is 0.005).
    """
    N = T.shape[2]  # Number of frames
    origins = T[:3, 3, :]  # Extract all origins at once (shape: 3 x N)
    R_matrices = T[:3, :3, :]  # Extract all rotation matrices (shape: 3 x 3 x N)

    # Define axis directions for normal frames
    x_axes = origins + axis_length * R_matrices[:, 0, :]
    y_axes = origins + axis_length * R_matrices[:, 1, :]
    z_axes = origins + axis_length * R_matrices[:, 2, :]
    
    # Define axis directions for the last frame (with longer axes)
    final_axis_length = 0.05
    x_last = origins[:, -1] + final_axis_length * R_matrices[:, 0, -1]
    y_last = origins[:, -1] + final_axis_length * R_matrices[:, 1, -1]
    z_last = origins[:, -1] + final_axis_length * R_matrices[:, 2, -1]

    # Define axis directions for the base frame (with longer axes)
    base_axis_length = 0.05
    x_base = origins[:, 0] + base_axis_length * R_matrices[:, 0, 0]
    y_base = origins[:, 0] + base_axis_length * R_matrices[:, 1, 0]
    z_base = origins[:, 0] + base_axis_length * R_matrices[:, 2, 0]

    cr_plt_obj = []
    # Stack all data to use fewer calls to `quiver`
    for axis, color in zip([x_axes[:, :-1], y_axes[:, :-1], z_axes[:, :-1]], ['r', 'g', 'b']):
        plt_obj = ax.quiver(origins[0, :-1], origins[1, :-1], origins[2, :-1], 
                  axis[0] - origins[0, :-1], axis[1] - origins[1, :-1], axis[2] - origins[2, :-1], 
                  color=color, linewidth=1)
        cr_plt_obj.append(plt_obj)
    
    # Plot the last frame separately with longer axes
    for axis, color, final_axis in zip([x_last, y_last, z_last], ['r', 'g', 'b'], R_matrices[:, :, -1].T):
        plt_obj = ax.quiver(origins[0, -1], origins[1, -1], origins[2, -1], 
                  axis[0] - origins[0, -1], axis[1] - origins[1, -1], axis[2] - origins[2, -1], 
                  color=color, linewidth=1)
        cr_plt_obj.append(plt_obj)
    # plot the base frame separately with longer axes
    for axis, color in zip([x_base, y_base, z_base], ['r', 'g', 'b']):
        plt_obj = ax.quiver(origins[0, 0], origins[1, 0], origins[2, 0], 
                  axis[0] - origins[0, 0], axis[1] - origins[1, 0], axis[2] - origins[2, 0], 
                  color=color, linewidth=1)
        cr_plt_obj.append(plt_obj)
        
    
    plt_obj, = ax.plot(T[0,3,-1], T[1, 3,-1], T[2, 3,-1], marker='o', markersize=1, color='red', linestyle='None')

    # plt_obj = ax.plot3D(T[0,3,-1], T[1, 3,-1], T[2, 3,-1], color='k', s=0.5)  # plot the end-effector position
    cr_plt_obj.append(plt_obj)

    return cr_plt_obj
    # print("******************")
    # print(R_matrices[:, :, -1])
        

