from setuptools import find_packages
from setuptools import setup

setup(
    name='cisst_msgs',
    version='3.0.0',
    packages=find_packages(
        include=('cisst_msgs', 'cisst_msgs.*')),
)
