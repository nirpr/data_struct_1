#include "utilities.h"
using namespace std;


void printNumIfSum1(int* arr, int n, int x)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[i] + arr[j] == x)
				cout << "" << arr[i] << " " << arr[j] << endl;
		}
	}
}

void printNumIfSum2Rec(int* arr, int n, int x, int y)
{
	if (n == 1 && y != 0)
	{
		if (arr[0] + y == x)
			cout << "" << arr[0] << " " << y << endl;
	}
	else if (n == 1 && y == 0)
		return;
	else
	{
		if (y != 0)
		{
			if (arr[n - 1] + y == x)
				cout << "" << arr[n - 1] << " " << y << endl;
			printNumIfSum2Rec(arr, n - 1, x, y);
		}
		else
		{
			printNumIfSum2Rec(arr, n - 1, x, arr[n - 1]);
			printNumIfSum2Rec(arr, n - 1, x, 0);
		}
	}
}
// [1,2,3,4,5,6]
//printNumIfSum2Rec(arr, 6, 6, y=);
// 