#include "utilities.h"


int main()
{
	//create the arr that all the function will use
	int arr[6] = { 1,9,7,8,9,15 };

	//first function - nested loop
	printNumIfSum1(arr, 6, 16);
	
	//second function - recursion
	//the y parameter set to 0
	printNumIfSum2Rec(arr, 6, 16, 0);

	//third function - recursion by stack
	return 0;
}