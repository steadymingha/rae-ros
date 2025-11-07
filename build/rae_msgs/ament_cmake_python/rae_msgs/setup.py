from setuptools import find_packages
from setuptools import setup

setup(
    name='rae_msgs',
    version='0.0.0',
    packages=find_packages(
        include=('rae_msgs', 'rae_msgs.*')),
)
