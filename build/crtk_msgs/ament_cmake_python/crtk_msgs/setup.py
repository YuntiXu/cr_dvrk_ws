from setuptools import find_packages
from setuptools import setup

setup(
    name='crtk_msgs',
    version='1.2.0',
    packages=find_packages(
        include=('crtk_msgs', 'crtk_msgs.*')),
)
