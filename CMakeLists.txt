cmake_minimum_required(VERSION 3.21)
project(PyCppProject)


# OpenCV
set(TARGET_LIBS "/usr/local/include/opencv4/")
find_package( OpenCV REQUIRED )
include_directories( ${OpenCV_INCLUDE_DIRS} )
set(OpenCV_LIBS opencv_core opencv_imgproc opencv_highgui opencv_imgcodecs opencv_features2d opencv_photo opencv_video opencv_objdetect)

# PyBind
find_package(pybind11 REQUIRED)

# PythonLibs
find_package(PythonLibs REQUIRED)
include_directories(${PYTHON_INCLUDE_DIRS})

set(CMAKE_CXX_STANDARD 14)


add_executable(PyCppProject
        main.cpp
        Cpp/add.cpp
        Cpp/sub.cpp
        Cpp/div.cpp
        Cpp/mul.cpp
        Cpp/functions.h
        Cpp/functions_wrapper.cpp
        )


target_link_libraries(PyCppProject
        ${PYTHON_LIBRARIES}
        ${OpenCV_LIBS}
        ${CMAKE_THREAD_LIBS_INIT}
        )