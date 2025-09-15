import pandas as pd 
import numpy as np
import tkinter as tk
from tkinter import ttk
import matplotlib.pyplot as plt
from matplotlib.backends.backend_tkagg import FigureCanvasTkAgg

from Utilities import parse_dh_json
from compute_fk_tdcrpsm import fk_cr_psm_two_segments_parallelogram

import os

robot_plt_obj = None
text_plt_obj = None


# some useful plotting functions ####################################################################################
def draw_PSMCR3Djoints(ax,q,geometric_param,nsegments=1,visualizeCR=True):
    # TODO: improve end-effector visualization 
    (T,Tbackbone,T02jpsm) = fk_cr_psm_two_segments_parallelogram(q,geometric_param)
    
    psm_param = {name: joint for name, joint in geometric_param.items() if joint.get("type") != "continuum"}
    
        
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

def call_custom_plot(values): 

    global robot_plt_obj
    global text_plt_obj

    ax.clear()

    q = np.array(values)
    robot_plt_obj = draw_PSMCR3Djoints(ax,q,geometric_param,nsegments=2)
    
    ax.set_xlim(-0.4,0.4)
    ax.set_ylim(-0.20,0.70)
    ax.set_zlim(-0.25,0.41)
    ax.set_xticks([-0.4,-0.3,-0.2,-0.1,0.0,0.1,0.2,0.3])  # Ensure static x-axis ticks
    ax.set_yticks([-0.20, -0.1, 0.0, 0.1,0.2,0.3,0.4,0.5,0.6,0.7])  # Ensure static y-axis ticks
    ax.set_zticks([-0.2, -0.1, 0.0,0.1,0.2,0.3,0.4]) 

    ax.set_aspect('equal','box')

    # Label axes
    ax.set_xlabel("X (m)")
    ax.set_ylabel("Y (m)")
    ax.set_zlabel("Z (m)")
    
    # Invert axes once
    ax.invert_xaxis()

    canvas.draw()

def on_slider_change(value):
    # Get the slider values and round them to 4 decimal points
    # TODO: fix weird bug where insertion clears randomly if not moved first? 
    values = [round(slider.get(), 4) for slider in sliders]
    label.config(text=f"Slider Values: {', '.join([f'{val:.4f}' for val in values])}")
    call_custom_plot(values)

def reset_sliders():
    """ Resets all sliders to 0.0 (or min if 0 is out of range). """
    for i, slider in enumerate(sliders):
        reset_value = 0.0 if geometric_param[list(geometric_param.keys())[i]]["min"] <= 0.0 <= geometric_param[list(geometric_param.keys())[i]]["max"] else geometric_param[list(geometric_param.keys())[i]]["min"]
        slider.set(reset_value)
    on_slider_change(home_joint_vals)  


# Create main window
root = tk.Tk()
root.title("PSM CR Joint Teleop")
root.geometry("800x800")

# Load joint limits
# Get the directory of the current script
current_dir = os.path.dirname(__file__)

# Build path to folder_b/config.json
json_path = os.path.join(current_dir, "..", "resource", "PSM_CR_two_segment_DH_parallelogram_param.json")

# Normalize to absolute path
json_path = os.path.abspath(json_path)
geometric_param = parse_dh_json(json_path)

sliders = []
min_joint_vals = []
for joint_name, joint_data in geometric_param.items():
    if joint_data["mode"] == "active":
        frame = tk.Frame(root)
        frame.pack()
        tk.Label(frame, text=joint_name).pack()
        
        # Create inner frame for the slider and its min/max values
        frame_inner = tk.Frame(frame)
        frame_inner.pack()
        tk.Label(frame_inner, text=f'{joint_data["min"]:.4f}').pack(side='left')
        
        slider = ttk.Scale(frame_inner, from_=joint_data["min"], to=joint_data["max"], orient='horizontal', command=on_slider_change)
   
        slider.pack(side='left', expand=True, fill='x')
        tk.Label(frame_inner, text=f'{joint_data["max"]:.4f}').pack(side='left')

        sliders.append(slider)
        min_joint_vals.append(joint_data["min"])

# Label to display slider values
# should make this dynamic! 
global home_joint_vals
home_joint_vals = np.maximum(np.zeros(np.array(min_joint_vals).size),min_joint_vals)
label = tk.Label(root, text=f"Joint Values: {', '.join([f'{val:.4f}' for val in home_joint_vals])}")
label.pack(pady=10)

# Matplotlib figure and canvas
fig = plt.figure(figsize=(12, 10))
ax = fig.add_subplot(111, projection='3d')
canvas = FigureCanvasTkAgg(fig, master=root)
canvas.get_tk_widget().pack()
values = home_joint_vals

# Reset button
reset_button = tk.Button(root, text="Reset Sliders", font=("Arial", 12, "bold"), command=reset_sliders)
reset_button.pack(pady=10)

call_custom_plot(values)

# Run the main loop
root.mainloop()



