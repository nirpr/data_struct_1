#include "utilities.h"
using namespace std;

//create an int arr from user inputh
vector<int> getArr(int arrLen)
{
	vector<int> arr;
	int input;
	for (int i = 0; i < arrLen; i++)
	{
		cin >> input;
		arr.push_back(input);
	}

	return arr;
}

void printFuncRunTime(double time_taken, string funcName)
{
	cout << "Time taken by function "<< funcName << " is : " << fixed << time_taken << setprecision(9);
	cout << " seconds" << endl;
}

void printNumIfSum1(std::vector<int> arr, int n, int x)
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

void printNumIfSum2Rec(std::vector<int> arr, int n, int x, int y)
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
