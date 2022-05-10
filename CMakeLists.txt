cmake_minimum_required(VERSION 3.21)
project(PyCppProject)

find_package(Python3 REQUIRED)
find_package(pybind11 REQUIRED)

set(CMAKE_CXX_STANDARD 14)

add_executable(PyCppProject
        main.cpp
        )
