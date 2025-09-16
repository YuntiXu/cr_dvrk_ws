import crtk

class tdcr(object):
    """Simple arm API wrapping around ROS messages"""

    # initialize the arm
    def __init__(self,ral,arm_name, expected_interval = 0.01):

        self.__ral = ral.create_child(arm_name)
        # crtk features
        self.__crtk_utils = crtk.utils(self, self.__ral, expected_interval)
        # add crtk features that we need and are supported by the TDCR
        self.__crtk_utils.add_setpoint_js() # need to add the measured equivalent
        self.__crtk_utils.add_servo_jr()
