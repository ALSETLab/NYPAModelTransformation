from setuptools import setup

setup(
    name='CIM2MO',
    version='0.1',
    packages=['cim2mo'],
    url='https://github.com/ALSETLab/NYPAModelTransformation/tree/master/ModelTransf-Tool/Prototype/src/cim2mo',
    keywords=['CGMES','ENTSO-E','Modelica','System Modeler'],
    license='https://github.com/ALSETLab',
    author='Glen K. Halley',
    author_email='Glen@GKHSoftware.com',
    description='API used for CGMES CIM to Modelica (MO) translation.',
    easy_install=["saxonpy >= 0.0.3"]
)
