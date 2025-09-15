import modern_robotics as mr
import numpy as np
from scipy.linalg import expm

res = 1*.0001 # resolution of the discretization of the continuum segment, can tune this if necessary

def fk_cr_psm_two_segments(q,geometric_param):
    # q: 6x1 [outer_pitch, outer_yaw, system insertion, system roll,segment1_bend_angle, segment2_bend_angle]
    # compute the continuum fk 

    # need to adjust for segments length depending on PSM insertion
    ltool = geometric_param["wristroll"]["D"] + geometric_param["continuum_segment1"]["D"] + geometric_param["continuum_segment2"]["D"]
    lRCM = abs(geometric_param["insertion"]["offset"])
    lexposedCR = (q[2] + ltool) - (lRCM + 30*.001)

    ltotCR1 = geometric_param["continuum_segment1"]["D"]
    ltotCR2 = geometric_param["continuum_segment2"]["D"]

    if ltotCR1 < 0.0 or ltotCR2 < 0.0:
        raise ValueError("invalid length")

    Tbackbone = np.array([])
    Tbackbone_prox_tip = None

    if lexposedCR < ltotCR2:  # if only distal segment is exposed
        # retracted straight segment
        arclength = (ltotCR2 + ltotCR1) - lexposedCR
        (Tcr_straight, Tbackbone_straight) = fk_cr_single_bending_segment([0,0,0], arclength)
        # exposed curved segment
        arclength = lexposedCR
        bend_angle = np.copy(q[5])
        (Tcr,Tbackbone)= fk_cr_single_bending_segment(bend_angle,arclength)

        Tbackbone = np.einsum('ij,jkl->ikl', Tcr_straight, Tbackbone)
        
        # combine the straight and curved backbone sections 
        Tbackbone = np.concatenate((Tbackbone_straight,Tbackbone),axis = 2)

    elif ltotCR2 < lexposedCR < (ltotCR1+ltotCR2): # if all distal segment is exposed and part of the proximal segment is exposed
        # retracted straight segment 
        arclength = ltotCR1 - (lexposedCR-ltotCR2)
        Tcr_straight,Tbackbone = fk_cr_single_bending_segment(0,arclength)
        # exposed curved segment of the proximal segment
        if lexposedCR - ltotCR2 > res: # consider the proximal segment exposed only if it is greater than the resolution
            arclength = lexposedCR - ltotCR2
            bend_angle = np.copy(q[4])
            _,Tbackbone_prox= fk_cr_single_bending_segment(bend_angle,arclength)
            Tbackbone_prox = np.einsum('ij,jkl->ikl', Tbackbone[:,:,-1], Tbackbone_prox) # vectorize this
            Tbackbone = np.concatenate((Tbackbone,Tbackbone_prox),axis = 2)
            Tbackbone_prox_tip = Tbackbone_prox[:,:,-1]
        # distal curved segment
        arclength = ltotCR2
        bend_angle = np.copy(q[5])
        _,Tbackbone_dist= fk_cr_single_bending_segment(bend_angle,arclength)
        Tbackbone_dist = np.einsum('ij,jkl->ikl', Tbackbone[:,:,-1], Tbackbone_dist) # vectorize this
        Tbackbone = np.concatenate((Tbackbone,Tbackbone_dist),axis = 2)

    else: # both distal and proximal segments are exposed
        arclength = ltotCR1
        bend_angle = np.copy(q[4])
        _,Tbackbone = fk_cr_single_bending_segment(bend_angle,arclength)
        Tbackbone_prox_tip = Tbackbone[:,:,-1]
        
        arclength = ltotCR2
        bend_angle = np.copy(q[5])
        _,Tbackbone_dist= fk_cr_single_bending_segment(bend_angle,arclength)

        Tbackbone_dist = np.einsum('ij,jkl->ikl', Tbackbone[:,:,-1], Tbackbone_dist) # vectorize this
        Tbackbone = np.concatenate((Tbackbone,Tbackbone_dist),axis = 2)

    # compute the psm fk 
    psm_param = {name: joint for name, joint in geometric_param.items() if joint.get("type") != "continuum"}
    (Tpsm,T02jpsm) = fk_psm_wrist_3D_modifiedDH(q[0:4],psm_param)

    # final transformation -> vectorize this!
    Tbackbone = np.einsum('ij,jkl->ikl', Tpsm, Tbackbone)

    if Tbackbone_prox_tip is not None:
        Tbackbone_prox_tip = np.dot(Tpsm,Tbackbone_prox_tip)
    # end effector pose
    if Tbackbone.size == 0:
        ValueError("Tbackbone is None")
    T = Tbackbone[:,:,-1]   

    # compute cr base
    Tcrbase = Tpsm
    if lexposedCR < (ltotCR1+ltotCR2): # if any part of the CR is retracted
        Tcrbase = np.dot(Tpsm,Tcr_straight)

    return (T,Tbackbone,Tbackbone_prox_tip,Tcrbase,T02jpsm) 


def fk_cr_psm_two_segments_parallelogram(q,geometric_param):
    # q: 6x1 [outer_pitch, outer_yaw, system insertion, system roll,segment1_bend_angle, segment2_bend_angle]
    # compute the continuum fk 
    # 
    # should pass in a copy of q, otherwise this function will modify it
    # since the roll frame is flipped for the parallelogram kinematic chain, need to flip direction of bending
    q = np.copy(q)
    q[4] = -1*q[4]
    q[5] = -1*q[5]
    # need to adjust for segment length depending on PSM insertion
    ltool = geometric_param["wristroll"]["D"] + geometric_param["continuum_segment1"]["D"] + geometric_param["continuum_segment2"]["D"]
    lRCM = abs(geometric_param["insertion"]["offset"]) + 144.54*.001
    lexposedCR = (q[2] + ltool) - (lRCM + 30*.001)

    ltotCR1 = geometric_param["continuum_segment1"]["D"]
    ltotCR2 = geometric_param["continuum_segment2"]["D"]

    Tbackbone = np.array([])

    print("lexposedCR: ",lexposedCR)

    if lexposedCR < ltotCR2: # if distal segment is exposed
        print("only distal segment exposed")
        # retracted straight segment
        arclength = (ltotCR2 + ltotCR1) - lexposedCR
        (Tcr_straight,T_backbone_straight) = fk_cr_single_bending_segment(0,arclength)
        # exposed curved segment
        arclength = lexposedCR
        bend_angle = np.copy(q[5])
        (Tcr,Tbackbone)= fk_cr_single_bending_segment(bend_angle,arclength)

        Tbackbone = np.einsum('ij,jkl->ikl', Tcr_straight, Tbackbone)
        
        # combine the straight and curved backbone sections 
        Tbackbone = np.concatenate((T_backbone_straight,Tbackbone),axis = 2)

    elif ltotCR2 < lexposedCR < (ltotCR1+ltotCR2): # if all distal segment is exposed and part of the proximal segment is exposed
        print("all distal and partial proximal segments exposed")
        # retracted straight segment 
        arclength = ltotCR1 - (lexposedCR-ltotCR2)
        _,Tbackbone = fk_cr_single_bending_segment(0,arclength)
        # exposed curved segment of the proximal segment
        if (lexposedCR - ltotCR2) > res:
            arclength = lexposedCR - ltotCR2
            bend_angle = np.copy(q[4])
            _,Tbackbone_prox= fk_cr_single_bending_segment(bend_angle,arclength)
            Tbackbone_prox = np.einsum('ij,jkl->ikl', Tbackbone[:,:,-1], Tbackbone_prox) # vectorize this
            Tbackbone = np.concatenate((Tbackbone,Tbackbone_prox),axis = 2)
        # distal curved segment
        arclength = ltotCR2
        bend_angle = np.copy(q[5])
        _,Tbackbone_dist= fk_cr_single_bending_segment(bend_angle,arclength)
        Tbackbone_dist = np.einsum('ij,jkl->ikl', Tbackbone[:,:,-1], Tbackbone_dist) # vectorize this
        Tbackbone = np.concatenate((Tbackbone,Tbackbone_dist),axis = 2)

    else: # both distal and proximal segments are exposed
        print("both distal and proximal segments exposed")
        arclength = ltotCR1
        bend_angle = np.copy(q[4])
        _,Tbackbone = fk_cr_single_bending_segment(bend_angle,arclength)

        arclength = ltotCR2
        bend_angle = np.copy(q[5])
        _,Tbackbone_dist= fk_cr_single_bending_segment(bend_angle,arclength)

        Tbackbone_dist = np.einsum('ij,jkl->ikl', Tbackbone[:,:,-1], Tbackbone_dist) # vectorize this
        Tbackbone = np.concatenate((Tbackbone,Tbackbone_dist),axis = 2)

    # compute the psm fk 
    psm_param = {name: joint for name, joint in geometric_param.items() if joint.get("type") != "continuum"}
    (Tpsm,T02jpsm) = fk_psm_wrist_3D_modifiedDH_parallelogram(q[0:4],psm_param)

    # final transformation
    Tbackbone = np.einsum('ij,jkl->ikl', Tpsm, Tbackbone)

    # end effector pose
    T = Tbackbone[:,:,-1]    

    return (T,Tbackbone,T02jpsm)
    
def fk_cr_single_bending_segment(bend_angle,l):
    nsteps = min(np.ceil(l/(res)).astype(int),10)
    # print(nsteps)
    if nsteps < 0.0:
        ValueError("need to have at least one step")

    steps = np.linspace(0,l,nsteps)
    
    # check cases where steps are not properly assigned
    if steps.size <= 0:
        ValueError("steps too small")
    
    T_backbone = np.zeros((4,4,steps.size))
    T = np.eye(4)
    
    # new implementation -- specific analytical solution for cc -- should reduce run time significantly! 
    S_spatial = np.array([[0,0,(bend_angle/l),0], # assumes no offset rotation 
                         [0,0,0,0],
                         [-(bend_angle/l)*np.cos(0),0,0,1],
                         [0,0,0,0]])
    
    for i in range(0,steps.size): # can further vectorize? 
        theta = steps[i]
        T = expm(S_spatial*theta) # expm takes the most computation time! 
        T_backbone[:,:,i] = T

    # Final transformation matrix
    T = T_backbone[:,:,-1]

    if np.array_equal(T,np.eye(4)):
        ValueError("continuum segment fk issue")

    return (T,T_backbone)


# implements modified dh-based fk based on the dVRK user guide (only models active joints)
def fk_psm_wrist_3D_modifiedDH(q,geometric_param):
    njoints = len(list(geometric_param.keys()))
    T02j = np.zeros((4,4,njoints+1))
    T02j[:,:,0] = np.eye(4)
    T = np.eye(4)
    T_curr = np.eye(4)

    i = -1
    for j,(joint_name, joint_data) in enumerate(geometric_param.items()):

        # get actuation-independent dh parameters 
        a = joint_data["A"]
        alpha = joint_data["alpha"]
      
        # deal with actuation-dependent dh parameters 
        if joint_data["mode"] == "active":
            # increment active joint counter 
            i += 1
            if joint_data["type"] == "prismatic":
                d = joint_data["D"] + joint_data["offset"] + q[i]
                theta = joint_data["theta"]
            elif joint_data["type"] == "revolute":
                d = joint_data["D"]
                theta = joint_data["theta"] + joint_data["offset"] + q[i]

        elif joint_data["mode"] == "passive":
            d = joint_data["D"]
            theta = joint_data["theta"]

        # compute T_j
        T_curr[0:3,0:3] = rotx(alpha)@rotz(theta)
        T_curr[0,3] = a
        T_curr[1,3] = -d*np.sin(alpha)
        T_curr[2,3] = d*np.cos(alpha)
        
        # format_matrix(T_curr,"6.4f")
        T = T@T_curr

        # collect intermediate transformation matrices 
        T02j[:,:,j+1] = T

    return (T, T02j)

# implements modified dh-based fk based on Wang et al 2019 (models all active and passive joints)
# not expected to perfectly line up with the dVRK user guide due to different frame definitions
def fk_psm_wrist_3D_modifiedDH_parallelogram(q,geometric_param):
    
    njoints = len(list(geometric_param.keys()))
    T02j = np.zeros((4,4,njoints+1))
    T02j[:,:,0] = np.eye(4)
    T = np.eye(4)
    T_curr = np.eye(4)

    i = -1

    for j,(joint_name, joint_data) in enumerate(geometric_param.items()):

        # get actuation-independent dh parameters 
        a = joint_data["A"]
        alpha = joint_data["alpha"]
      
        # deal with actuation-dependent dh parameters 
        if joint_data["mode"] == "active":
            # increment active joint counter 
            i += 1
            if joint_data["type"] == "prismatic":
                d = joint_data["D"] + joint_data["offset"] + q[i]
                theta = joint_data["theta"]
            elif joint_data["type"] == "revolute":
                d = joint_data["D"]
                theta = joint_data["theta"] + joint_data["offset"] + q[i]

        elif joint_data["mode"] == "passive":
            d = joint_data["D"]
            if joint_name == "counterweight":
                theta = joint_data["offset"]
            elif joint_name == "parallelogramcorner1":
                theta = joint_data["offset"] - q[i]
            elif joint_name == "parallelogramcorner3":
                theta = q[i]
        
        # compute T_j
        T_curr[0:3,0:3] = rotx(alpha)@rotz(theta)
        T_curr[0,3] = a
        T_curr[1,3] = -d*np.sin(alpha)
        T_curr[2,3] = d*np.cos(alpha)
        
        # format_matrix(T_curr,"6.4f")

        T = T@T_curr

        # collect intermediate transformation matrices 
        T02j[:,:,j+1] = T

    return (T, T02j)


# utility functions ############################################

def rotx(theta):
    """Returns a 3x3 rotation matrix around the x-axis. Expects angle in radians."""
    c, s = np.cos(theta), np.sin(theta)
    return np.array([[1,  0,  0],
                     [0,  c, -s],
                     [0,  s,  c]])

def rotz(theta):
    """Returns a 3x3 rotation matrix around the z-axis. Expects angle in radians."""
    c, s = np.cos(theta), np.sin(theta)
    return np.array([[c, -s, 0],
                     [s,  c, 0],
                     [0,  0, 1]])
