#include "utilities.h"


int main()
{
	//create the arr that all the function will use
	int arr[6] = { 1,9,7,8,9,15 };

	ios_base::sync_with_stdio(false);
	auto start = chrono::high_resolution_clock::now();

	//first function - nested loop
	printNumIfSum1(arr, 6, 16);

	// unsync the I/O of C and C++ - for potentially faster execution.
	auto end = chrono::high_resolution_clock::now();

	// Calculating total time taken by the program.
	double time_taken =chrono::duration_cast<chrono::nanoseconds>(end - start).count();
	time_taken *= 1e-9;
	printFuncRunTime(time_taken, "Iterative algorithm");

	auto start = chrono::high_resolution_clock::now();

	//second function - recursion
	//the y parameter set to 0
	printNumIfSum2Rec(arr, 6, 16, 0);

	// unsync the I/O of C and C++ - for potentially faster execution.
	auto end = chrono::high_resolution_clock::now();

	// Calculating total time taken by the program.
	double time_taken = chrono::duration_cast<chrono::nanoseconds>(end - start).count();
	time_taken *= 1e-9;
	printFuncRunTime(time_taken, "recursive version");


	//third function - recursion by stack
	return 0;
}