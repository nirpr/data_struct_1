#ifndef __UTILITIES_H
#define __UTILITIES_H

#include <iostream>
#include <chrono>
#include <iomanip>
#include <string>

using namespace std;

void printNumIfSum1(int* arr, int n, int x);
void printNumIfSum2Rec(int* arr, int n, int x, int y);

void printFuncRunTime(double time_taken, string funcName);


#endif !__UTILITIES_H
