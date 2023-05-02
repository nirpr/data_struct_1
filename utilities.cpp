#include "utilities.h"
using namespace std;

//create an int arr from user inputh
bool getArr(int arrLen, std::vector<int>& arr)
{
	string input;
	int numInputh;
	for (int i = 0; i < arrLen; i++)
	{
		cin >> input;
		if (!is_number(input))
			return false;
		numInputh = stoi(input);
		if (numInputh <= 0)
			return false;
		arr.push_back(numInputh);
	}

	return true;
}

bool getNumber(int& num)
{
	string str;
	cin >> str;
	if (is_number(str))
	{
		num = stoi(str);
		return true;
	}

	return false;
}

bool is_number(const std::string& s)
{
	std::string::const_iterator it = s.begin();
	while (it != s.end() && std::isdigit(*it)) ++it;
	return !s.empty() && it == s.end();
}

void printFuncRunTime(double time_taken, string funcName)
{
	cout << time_taken << setprecision(9) <<" seconds" << endl;
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
