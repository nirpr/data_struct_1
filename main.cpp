#include "utilities.h"


int main()
{
	int arr[6] = { 1,9,7,8,9,15 };
	printNumIfSum1(arr, 6, 16);

	printNumIfSum2Rec(arr, 6, 16, 0);
	return 0;
}