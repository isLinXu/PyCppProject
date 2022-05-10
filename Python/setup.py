# 文件名：setup.py
from setuptools import setup, Extension

# 模块扩展
functions_module = Extension(
    name='functions',
    sources=['/home/linxu/CLionProjects/PyCppProject/Cpp/add.cpp',
             '/home/linxu/CLionProjects/PyCppProject/Cpp/sub.cpp',
             '/home/linxu/CLionProjects/PyCppProject/Cpp/mul.cpp',
             '/home/linxu/CLionProjects/PyCppProject/Cpp/div.cpp',
             '/home/linxu/CLionProjects/PyCppProject/Cpp/functions_wrapper.cpp'],
    include_dirs=[r'/usr/local/include/pybind11/',
                  r'/home/linxu/Anaconda/envs/dev/include/']
)

setup(ext_modules=[functions_module])

# python setup.py build_ext --inplace

