#!/usr/bin/env python

# load and define the MTM
from dvrk import mtm, psm
from cr_dvrk import tdcr
import crtk
import numpy as np
import time

class Enable_MTM_TDCR_PSM_JCTRL:
    def __init__(self,ral):
        self.ral = ral
        # create instances of all the robot components 
        self.mtmr = mtm(self.ral,'MTMR')
        self.mtml = mtm(self.ral,'MTML') 
        self.psm1 = psm(self.ral, 'PSM1') # could change this as neccesary
        self.tdcr = tdcr(self.ral, 'TDCR')

        # create instance of the console IO pedals
        self.coag = crtk.joystick_button(self.ral, 'footpedals/coag', 0)
        self.camera = crtk.joystick_button(self.ral, 'footpedals/camera', 0)

        self.stop_teleop = False
        self.servo_time = 0.01 # seconds

        self.home_dvrk()
       
    def home_dvrk(self):

        print("Starting homing procedure...")

        # home both mtms and one of the psm
        self.mtmr.enable(5)
        self.mtml.enable(5)
        self.psm1.enable(5)

        print("enabled...")
        
        self.mtmr.move_jp(np.array([0.0, 0.0, 0.0, 0.0, np.pi/2, 0.0, 0.0]))
        self.mtml.move_jp(np.array([0.0, 0.0, 0.0, 0.0, np.pi/2, 0.0, 0.0]))
        self.psm1.move_jp(np.array([0.0, 0.0, 0.12, 0.0, 0.0, 0.0,]))
        self.tdcr.move_jp(np.array([0.0,0.0,0.0]))

        time.sleep(5)

        print("Homed dvrk....")

    def run_enable_mtm(self):

        print("running teleop")

        while self.stop_teleop == False:

            # current state of coag pedal 
            self.coag_pressed = self.coag.value()
            print(f"coag_pressed: {self.coag_pressed}")

            # current state of the bicoag pedal
            self.camera_pressed = self.camera.value()
            print(f"camera_pressed: {self.camera_pressed}") # moves the PSM 

            # turn on gravity compensation
            self.mtmr.use_gravity_compensation(True)
            self.mtml.use_gravity_compensation(True)

            if self.camera_pressed == 1 and self.coag_pressed == 1:
                self.mtmr.lock_orientation_as_is()
                self.mtml.lock_orientation_as_is()
                self.mtmr.body.servo_cf(np.array([0.0, 0.0, 0.0, 0.0, 0.0, 0.0]))
                self.mtml.body.servo_cf(np.array([0.0, 0.0, 0.0, 0.0, 0.0, 0.0]))
                # send I/O signal to TDCR + PSM
                measured_tip_vel,_ = self.mtmr.measured_cv() # what frame is this in? 
                des_IO_pos = measured_tip_vel[1]*self.servo_time # I/O controlled by MTM y velocity 
                self.psm1.servo_jr(np.array([0.0, 0.0, des_IO_pos, 0.0, 0.0, 0.0]))

            if self.camera_pressed != 1 and self.coag_pressed == 1:
                self.mtmr.unlock_orientation()
                self.mtml.unlock_orientation()
                self.mtmr.body.servo_cf(np.array([0.0, 0.0, 0.0, 0.0, 0.0, 0.0]))
                self.mtml.body.servo_cf(np.array([0.0, 0.0, 0.0, 0.0, 0.0, 0.0]))
                # send wrist articulation signal to TDCR 
                des_proxi_bend_pos = self.mtml.measured_jv()[5]*self.servo_time # TDCR bending controlled by MTM wrist vel 
                des_dist_bend_pos =  self.mtmr.measured_jv()[5]*self.servo_time # TDCR bending controlled by MTM wrist vel 
                # send wrist roll signal to TDCR 
                des_roll_pos = self.mtmr.measured_jv()[6]*self.servo_time # TODO: check if this is wrist roll 
                self.tdcr.servo_jr(np.array([des_roll_pos,des_proxi_bend_pos,des_dist_bend_pos]))

            elif self.coag_pressed != 1 and self.camera_pressed != 1:
                self.mtmr.hold()
                self.mtml.hold()
def main():
    ral  = crtk.ral('enable_mtm_psm_tdcr_teleop')
    mtm_pitch = Enable_MTM_TDCR_PSM_JCTRL(ral)
    ral.spin_and_execute(mtm_pitch.run_enable_mtm)

if __name__ == '__main__': main()