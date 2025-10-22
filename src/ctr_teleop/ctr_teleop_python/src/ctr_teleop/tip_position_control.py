# Author: Yunti (Anna) Xu
# University of California, San Diego
# Date : 2025-10-21

# Description: 
# 

import numpy as np 
from .ctr_fourier_kinematics import ctr_fourier_kinematics

class ctr_tip_positon_control:

    def __init__(self):
        self.ctr_fk = ctr_fourier_kinematics("fparams_file.mat")
        self.ik_params = {'tol': 1e-4, 'max_iter': 100, 'step_size':1.0}
    
    def ik(self,q,des_pos): 
        '''
        implements newton-raphson ik that closes the tip position error 

        '''
        ################### start of algorithm #####################################
        # compute initial tip error 
        p_0 = self.ctr_fk.get_tip_pos(q)

        # tip position error vector in the spatial frame
        dt = p_0 - des_pos

        # initial tip position error 
        err_init = np.linalg.norm(dt)

        # initialize iteration counter 
        iter = 0

        # define exit conditions 
        tol = self.ik_params['tol'] # in m 
        max_iter = self.ik_params['max_iter']
        err = np.linalg.norm(dt) > tol
        step_size = self.ik_params['step_size']

        # set exit flag 
        skipped = 1
        
        while (err and iter < max_iter):
        
            # get ctr joint-limit penalized Jacobian at current time step
            Js = self.ctr_fk.compute_Js_fourier(q)

            # calculate NR step 
            dq = Js@dt

            # take NR step 
            q = q - step_size*dq

            # update tip position
            p_curr = self.ctr_fk.get_tip_pos(q)
            
            # update tip position error 
            dt = p_curr - des_pos
            err = np.linalg.norm(dt) > tol

            iter = iter + 1
            skipped = 0
        
        # wrap angle between -pi and pi
        q[0:3] = np.mod(q[0:3] + np.pi, 2*np.pi) - np.pi 

        # final tip position error 
        err_final = np.linalg.norm(dt)

        # set return flags depending the exit condition
        if skipped == 1:
            print("initial tip error < tol, skipped")
            exitflag = 0

        if err_final <= tol: 
            exitflag = 1
        
        if iter == max_iter:
            print("max iter %d exceeded\n", max_iter)
            exitflag = -1

        return q, err_init,err_final, exitflag 