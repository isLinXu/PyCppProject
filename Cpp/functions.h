//
// Created by linxu on 2022/5/9.
//

#ifndef PYCPPPROJECT_FUNCTIONS_H
#define PYCPPPROJECT_FUNCTIONS_H


//文件名：functions.h
#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include <iostream>

using namespace std;

extern "C" double add(double, double);
extern "C" double sub(double, double);
extern "C" double mul(double, double);
extern "C" double div1(double, double);

#endif

#endif //PYCPPPROJECT_FUNCTIONS_H
