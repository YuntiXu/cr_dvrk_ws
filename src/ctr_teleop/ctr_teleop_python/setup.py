from glob import glob
from setuptools import setup

package_name = 'ctr_teleop'

setup(
    name=package_name,
    version='0.0.0',
    packages=[package_name],
    package_dir={'': 'src'},
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
        ('lib/' + package_name, glob('scripts/*py')),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='ytxu',
    maintainer_email='ytxu@ucsd.edu',
    description='CR DVRK Python Package for ROS2',
    license='MIT',
    entry_points={
        'console_scripts': [
        ],
    },
)
