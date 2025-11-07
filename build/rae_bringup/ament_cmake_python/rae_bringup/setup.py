from setuptools import find_packages
from setuptools import setup

setup(
    name='rae_bringup',
    version='0.0.0',
    packages=find_packages(
        include=('rae_bringup', 'rae_bringup.*')),
)
