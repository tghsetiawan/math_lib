#ifndef MATH_LIB_H
#define MATH_LIB_H

#include <string>
#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <cmath>

using namespace std;

#ifdef __cplusplus
    extern "C" {
#endif

#ifdef BUILD_MY_DLL
    #define SHARED_LIB __declspec(dllexport)
#else
    #define SHARED_LIB __declspec(dllimport)
#endif

double SHARED_LIB add(double a, double b);
double SHARED_LIB subtract(double a, double b);
double SHARED_LIB multiply(double a, double b);
double SHARED_LIB divide(double a, double b);
double SHARED_LIB power(double a, double b);

#ifdef __cplusplus
    }
#endif

#endif
