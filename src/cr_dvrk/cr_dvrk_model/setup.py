from setuptools import find_packages, setup

package_name = 'cr_dvrk_model'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
        ('share/' + package_name + '/resource', ['resource/PSM_CR_two_segment_DH_parallelogram_param.json']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='ytxu',
    maintainer_email='ytxu@ucsd.edu',
    description='TODO: Package description',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
        'tdcr_node = cr_dvrk_model.update_tdcr_node:main',
        ],
    },
)
