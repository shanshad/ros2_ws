from setuptools import find_packages, setup

package_name = 'mypypkg'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='shan',
    maintainer_email='shan@todo.todo',
    description='TODO: Package description',
    license='TODO: License declaration',
    extras_require={
        'test': [
            'pytest',
        ],
    },
    entry_points={
        'console_scripts': [
            'testexec = mypypkg.test1:main',
            'testpub = mypypkg.publisher:main',
            'testsub = mypypkg.subscriber:main',
            'testserver = mypypkg.server:main',
            'testclient = mypypkg.client:main',
            'vectorsub = mypypkg.vsubscriber:main',
            'vectorpub = mypypkg.vpublisher:main',
            'hpub = mypypkg.hpub:main',
            'hsub = mypypkg.hsub:main',
            'ppub = mypypkg.ppub:main',
            'psub = mypypkg.psub:main',
            'mtiserver = mypypkg.customserver1:main',
            'mitclient = mypypkg.customsrvclient:main',
            'dpserver = mypypkg.customserver2:main',
            'dpclient = mypypkg.customsrvclient2:main',
            'cameranode = mypypkg.camerapub:main',
            'paramexnode = mypypkg.parameter:main',
            'boolnode=mypypkg.boolnode:main',
            'dpserver2 = mypypkg.dpservice:main',
            'pub1= mypypkg.publisher1:main',
            'sub1=mypypkg.subscriber1:main'

        ],
    },
)
