import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/ytxu/cr_dvrk_ws/install/tdcr_psm_kinematics'
