#include "utilities.h"
using namespace std;


void printNumIfSum(int* arr, int n, int x)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (arr[i] + arr[j] == x)
				cout << "" << arr[i] << " " << arr[j] << endl;
		}
	}
}