#include "utilities.h"
using namespace std;


int main()
{
	//create the arr that all the function will use
	int arrLenght, x, y = 0;
	vector<int> arr;

	if (getNumber(arrLenght) && getArr(arrLenght, arr) && getNumber(x))
	{
		cout << "Iterative algorithm:" << endl;

		ios_base::sync_with_stdio(false);
		auto start = chrono::high_resolution_clock::now();
		//first function - nested loop
		printNumIfSum1(arr, arrLenght, x);

		// unsync the I/O of C and C++ - for potentially faster execution.
		auto end = chrono::high_resolution_clock::now();

		// Calculating total time taken by the program.
		double time_taken = chrono::duration_cast<chrono::nanoseconds>(end - start).count();
		time_taken *= 1e-9;
		printFuncRunTime(time_taken, "Iterative algorithm");

		cout << "Recursive algorithm (recursive version):" << endl;
		ios_base::sync_with_stdio(false);
		start = chrono::high_resolution_clock::now();

		//second function - recursion
		//the y parameter set to 0
		printNumIfSum2Rec(arr, arrLenght, x, y);

		// unsync the I/O of C and C++ - for potentially faster execution.
		end = chrono::high_resolution_clock::now();

		// Calculating total time taken by the program.
		time_taken = chrono::duration_cast<chrono::nanoseconds>(end - start).count();
		time_taken *= 1e-9;
		printFuncRunTime(time_taken, "recursive version");

		cout << "Recursive algorithm (iterative version):" << endl;
		ios_base::sync_with_stdio(false);
		start = chrono::high_resolution_clock::now();

		//third function - recursion by stack
		//printNumIfSum3Stack(arr, arrLenght, x, y);

		// unsync the I/O of C and C++ - for potentially faster execution.
		end = chrono::high_resolution_clock::now();

		// Calculating total time taken by the program.
		time_taken = chrono::duration_cast<chrono::nanoseconds>(end - start).count();
		time_taken *= 1e-9;
		printFuncRunTime(time_taken, "recursive version");

	}
	else
		cout << "wrong input";
	return 0;
}