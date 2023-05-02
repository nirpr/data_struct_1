#ifndef __UTILITIES_H
#define __UTILITIES_H

#include <iostream>
#include "stack.h"
#include <chrono>
#include <iomanip>
#include <string>

void printNumIfSum1(int* arr, int n, int x);
void printNumIfSum2Rec(int* arr, int n, int x, int y);
void printNumIfSum3Stack(int* arr, int n, int x, int y);

void printFuncRunTime(double time_taken, std::string funcName);


#endif !__UTILITIES_H
