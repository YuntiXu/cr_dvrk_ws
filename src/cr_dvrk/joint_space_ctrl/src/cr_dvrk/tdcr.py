import crtk

class tdcr(object):
    """Simple arm API wrapping around ROS messages"""

    # initialize the arm
    def __init__(self, ral, arm_name, expected_interval = 0.01):
        """Requires a arm name, this will be used to find the ROS
        topics for the arm being controlled.  For example if the
        user wants `PSM1`, the ROS topics will be from the namespace
        `PSM1`"""
        self.__name = arm_name
        self.__ral = ral.create_child(arm_name)

        # crtk features
        self.__crtk_utils = crtk.utils(self, self.__ral, expected_interval)

        # add crtk features that we need and are supported by the TDCR
        self.__crtk_utils.add_setpoint_js()
        self.__crtk_utils.add_servo_jp()

    def name(self):
        return self.__name

    def ral(self):
        return self.__ral
    
    def check_connections(self, timeout = 5.0):
        self.__ral.check_connections(timeout)
