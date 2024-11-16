from setuptools import setup, Extension
import pybind11

ext_modules = [
    Extension(
        'linalg_core',
        ['bindings.cpp', 'LinearAlgebra.cpp'],
        include_dirs=[pybind11.get_include(), 'LinearAlgebra.h'],
        language='c++',
    ),
]

setup(
    name='linalg_core',
    version='0.1.0',
    description='A linear algebra library with C++ backend',
    ext_modules=ext_modules,
    zip_safe=False,
)
