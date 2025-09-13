from setuptools import find_packages
from setuptools import setup

setup(
    name='dvrk',
    version='2.3.0',
    packages=find_packages(
        include=('dvrk', 'dvrk.*')),
)
