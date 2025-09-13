from setuptools import find_packages
from setuptools import setup

setup(
    name='dvrk_camera_registration',
    version='1.0.0',
    packages=find_packages(
        include=('dvrk_camera_registration', 'dvrk_camera_registration.*')),
)
