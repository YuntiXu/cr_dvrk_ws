## ! DO NOT MANUALLY INVOKE THIS setup.py, USE CATKIN INSTEAD
from distutils.core import setup
from catkin_pkg.python_setup import generate_distutils_setup

# fetch values from package.xml
setup_args = generate_distutils_setup(packages=['ctr_teleop'],
                                      package_dir={'': 'src'},
                                      package_data={'ctr_teleop': ['fparams_file.mat']},  
                                     include_package_data=True,
                                      )

setup(**setup_args)
