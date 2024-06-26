from setuptools import find_packages
from setuptools import setup

setup(
    name='calibration_interface',
    version='0.0.0',
    packages=find_packages(
        include=('calibration_interface', 'calibration_interface.*')),
)
