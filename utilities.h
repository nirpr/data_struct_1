#ifndef __UTILITIES_H
#define __UTILITIES_H

#include <iostream>
#include "stack.h"
#include <chrono>
#include <iomanip>
#include <string>
#include <vector>

void printNumIfSum1(std::vector<int> arr, int n, int x);
void printNumIfSum2Rec(std::vector<int> arr, int n, int x, int y);
void printNumIfSum3Stack(std::vector<int> arr, int n, int x, int y);

void printFuncRunTime(double time_taken, std::string funcName);
bool getArr(int arrLen, std::vector<int>& arr);
bool getNumber(int& num);
bool is_number(const std::string& s);

#endif
