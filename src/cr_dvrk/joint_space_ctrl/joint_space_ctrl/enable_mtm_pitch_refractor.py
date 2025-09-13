from dvrk import mtm 
import crtk
import numpy as np
from inputs import get_key  

class EnableMTMPitch:
    def __init__(self):
        self.ral = crtk.ral('enable_mtm_pitch_node')
        self.mtmr = mtm(self.ral,'MTMR')
        self.mtml = mtm(self.ral,'MTML')
        self.coag = crtk.joystick_button(self.ral, 'footpedals/coag', 0)
        self.ral.check_connections()
        self.ral.spin()

        self.stop_teleop = False

    def home_mtm_pitch(self):
        # home both mtms
        self.mtmr.enable(10)
        self.mtml.enable(10)
        
        self.mtmr.setpoint_jp(np.array([0.0, 0.0, 0.0, 0.0, np.pi/2, 0.0, 0.0]))
        self.mtml.setpoint_jp(np.array([0.0, 0.0, 0.0, 0.0, np.pi/2, 0.0, 0.0]))

    def run_enable_mtm_pitch(self):

        while self.stop_teleop != False:
            # poll for exit key 
            events = get_key()
            for event in events:
                if event.ev_type == "Key" and event.state == 1:  # state 1 = key down
                    if event.code == "KEY_X":  # 'x' key
                        print("Stopping loop: 'x' key pressed.")
                        self.stop_teleop = True
                        break
            # current state of coag button 
            self.coag_pressed = self.coag.buttons[0]
            print(f"coag_pressed: {self.coag_pressed}")

            # turn on gravity compensation
            self.mtmr.set_gravity_compensation(True)
            self.mtml.set_gravity_compensation(True)

            # hold arm position
            self.mtmr.hold()
            self.mtml.hold()

            # if coag pressed, servo_cf with zero force
            if self.coag_pressed == 1:
                self.mtmr.body.servo_cf(np.array([0.0, 0.0, 0.0, 0.0, 0.0, 0.0]))
                self.mtml.body.servo_cf(np.array([0.0, 0.0, 0.0, 0.0, 0.0, 0.0]))


def main():
    mtm_pitch = EnableMTMPitch()
    mtm_pitch.home_mtm_pitch()
    mtm_pitch.run_enable_mtm_pitch()

if __name__ == '__main__': main()