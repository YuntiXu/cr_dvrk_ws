#!/usr/bin/env python

# load and define the MTM
from dvrk import mtm, psm
# import cr_dvrk
import crtk
import numpy as np


class Enable_MTM_TDCR_PSM_JCTRL:
    def __init__(self):
        self.ral = crtk.ral('enable_mtm_tdcr_psm_jctrl')
        self.mtmr = mtm(self.ral,'MTMR')
        # self.mtml = mtm(self.ral,'MTML')
        self.coag = crtk.joystick_button(self.ral, 'footpedals/coag', 0)
        self.camera = crtk.joystick_button(self.ral, 'footpedals/camera', 0)
        self.ral.check_connections()
        self.ral.spin()

        self.stop_teleop = False
        self.servo_time = 0.01 # seconds

        # create dummy topics for simulation 
        # self.tdcr = tdcr(self.ral, 'TDCR')
        # self.psm1 = psm(self.ral, 'PSM1') # could change this as neccesary

    def home_mtm(self):
        # home both mtms
        self.mtmr.enable(10)
        # self.mtml.enable(10)
        
        self.mtmr.move_jp(np.array([0.0, 0.0, 0.0, 0.0, np.pi/2, 0.0, 0.0]))
        # self.mtml.move_jp(np.array([0.0, 0.0, 0.0, 0.0, np.pi/2, 0.0, 0.0]))

        print("Homing MTMs....")

    def run_enable_mtm(self):

        while self.stop_teleop == False:
            # current state of coag pedal 
            self.coag_pressed = self.coag.value()
            print(f"coag_pressed: {self.coag_pressed}")

            # current state of the bicoag pedal
            self.camera_pressed = self.camera.value()
            print(f"camera_pressed: {self.camera_pressed}") # moves the PSM 

            # turn on gravity compensation
            self.mtmr.use_gravity_compensation(True)
            # self.mtml.set_gravity_compensation(True)

            if self.camera_pressed == 1 and self.coag_pressed == 1:
                self.mtmr.lock_orientation_as_is()
                self.mtmr.body.servo_cf(np.array([0.0, 0.0, 0.0, 0.0, 0.0, 0.0]))
                # send I/O signal to TDCR + PSM
                des_IO_pos = self.mtmr.measured_jv()[2]*self.servo_time
                # self.psm.servo_jp(np.array([0.0, 0.0, des_IO_pos, 0.0, 0.0, 0.0]))

            if self.camera_pressed != 1 and self.coag_pressed == 1:
                self.mtmr.unlock_orientation()
                self.mtmr.body.servo_cf(np.array([0.0, 0.0, 0.0, 0.0, 0.0, 0.0]))
                # send wrist articulation signal to TDCR + PSM 
                des_proxi_bend_pos = 0.0
                des_dist_bend_pos =  self.mtmr.measured_jv()[5]*self.servo_time # get current wrist pitch velocity
                # self.tdcr.servo_jp(np.array([des_proxi_bend_pos, des_dist_bend_pos]))

            elif self.coag_pressed != 1 and self.camera_pressed != 1:
                self.mtmr.hold()

def main():
    mtm_pitch = Enable_MTM_TDCR_PSM_JCTRL()
    mtm_pitch.home_mtm()
    mtm_pitch.run_enable_mtm()

if __name__ == '__main__': main()