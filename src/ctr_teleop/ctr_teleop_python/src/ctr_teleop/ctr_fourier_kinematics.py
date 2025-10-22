# Author: Yunti (Anna) Xu
# University of California, San Diego 
# Date : 2025-10-21 

# Description:
# Python class containing fourier-based tip position and jacobian computations 

import numpy as np
import scipy.io
import warnings

class ctr_fourier_kinematics:
    def __init__(self,fparams_file):
        # load in the fourier parameters from matlab file
        fparams = scipy.io.loadmat(fparams_file)
        # extract the fourier basis 
        fcoeff_t1 = fparams['fcoeff_t1'] # assume these are column vectors 
        fcoeff_t2 = fparams['fcoeff_t2']
        fcoeff_t3 = fparams['fcoeff_t3']
        fcoeff_r1 = fparams['fcoeff_r1']
        fcoeff_r2 = fparams['fcoeff_r2']
        fcoeff_r3 = fparams['fcoeff_r3']
        self.fcoeff = np.concatenate((fcoeff_r1,fcoeff_r2,fcoeff_r3,fcoeff_t1,fcoeff_t2,fcoeff_t3),axis = 1) # concatenate columns
        # extract the fourier coefficients 
        cx = fparams['cx'] # assuming these are column vectors 
        cy = fparams['cy']
        cz = fparams['cz']
        self.c = np.concatenate((cx,cy,cz),axis = 1) # concatenate along columns 
    
    def setup_fourier(self):
        '''
        create fourier basis 
        '''
        q = np.concatenate((self.tube_angles.T,self.deployed_length.T),axis = 0)
        # create fourier basis
        fsum =  np.expand_dims(np.sum(self.fcoeff*q,axis = 1),axis = 1) # sum along row, need to check if the axes is correct 
        self.f_base = np.exp(1j*fsum)  # should be nx1, where n is the number of coefficients
        self.f_v = self.c.T*self.f_base.T # should do the operations: ci .* f_base

    def get_trans_and_rot(self,q):
        '''
        unpack tube deployed lengths and tube rotation angles 
        q : numpy array of size 6, [t1, t2, t3, r1, r2, r3]
        '''
        self.deployed_length = q[:3]
        self.tube_angles = q[3:]

    def get_tip_pos(self,q):
        '''
        compute tip position in cartesian space, using fourier basis and coefficients
        '''
        self.get_trans_and_rot(q)
        self.setup_fourier()
        # calculate the tip position in cartesian space 
        x_pos = sum(self.f_v[0,:])
        y_pos = sum(self.f_v[1,:])
        z_pos = sum(self.f_v[2,:])
        tip_pos = np.real(np.array([x_pos,y_pos,z_pos])) # in m 
        return tip_pos
    
    def compute_Js_fourier(self,q):
        '''
        compute tip Jacobian in space frame, using fourier basis and coefficients
        '''
        self.get_trans_and_rot(q)
        self.setup_fourier()

        J = np.zeros((3,6)) # might need J = [J_alpha | J_beta], I think this calculates the opposite! 
        warnings.filterwarnings("ignore",category=np.ComplexWarning) # suppress complex number warning

        J[0,:] = 1j*np.sum(np.expand_dims(self.f_v[0,:],axis = 1)*self.fcoeff,axis = 0)
        J[1,:] = 1j*np.sum(np.expand_dims(self.f_v[1,:],axis = 1)*self.fcoeff,axis = 0)
        J[2,:] = 1j*np.sum(np.expand_dims(self.f_v[2,:],axis = 1)*self.fcoeff,axis = 0)

        # taking only the real parts
        J = np.real(J)

        return J