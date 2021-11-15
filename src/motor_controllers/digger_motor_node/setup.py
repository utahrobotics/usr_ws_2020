from setuptools import setup

package_name = 'digger_motor_node'

setup(
    name=package_name,
    version='0.0.0',
    packages=['digger_motor_node'],
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='usr2020',
    maintainer_email='joshuamiraglia@gmail.com',
    description='TODO: Package description',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'digger_motor_controller = digger_motor_node.digger_motor_controller:main'
        ],
    },
)
