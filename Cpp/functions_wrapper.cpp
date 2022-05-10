//
// Created by linxu on 2022/5/9.
//

//文件名：functions_wrapper.cpp

#include "python3.7m/Python.h"
#include "functions.h"
#include <pybind11/pybind11.h>
namespace py = pybind11;


PYBIND11_MODULE(functions, m)
{
    // 可选，说明这个模块是做什么的
    m.doc() = "pybind11 example plugin";
    //def( "给python调用方法名"， &实际操作的函数， "函数功能说明" ). 其中函数功能说明为可选
    m.def("add", &add, "A function which adds two numbers", py::arg("i")=1, py::arg("j")=2);
    m.def("sub", &sub);
    m.def("mul", &mul);
    m.def("div", &div1);
}


