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

void printNumIfSum1(vector<int> arr, int n, int x)
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

void printNumIfSum2Rec(vector<int> arr, int n, int x, int y)
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

void printNumIfSum3Stack(vector<int> arr, int n, int x, int y)
{
	stack S;
	itemType curr(n, y, itemType::START);
	bool returnFromRec = false;
	do 
	{
		if (returnFromRec)
			curr = S.pop();
		if (curr.getPos() == itemType::START)
		{
			if (curr.getn() == 1 && curr.gety() != 0)
			{
				if (arr[0] + curr.gety() == x)
					cout << "" << arr[0] << " " << curr.gety() << endl;
				returnFromRec = true;
			}
			else if (curr.getn() == 1 && curr.gety() == 0)
				returnFromRec = true;
			else
			{
				if (curr.gety() != 0)
				{
					if (arr[curr.getn() - 1] + curr.gety() == x)
						cout << "" << arr[curr.getn() - 1] << " " << curr.gety() << endl;
					curr.setPos(itemType::AFTER_FIRST);
					S.push(curr);
					curr.setn(curr.getn() - 1);
					curr.setPos(itemType::START);
					returnFromRec = false;
				}
				else
				{
					curr.setPos(itemType::AFTER_SECOND);
					S.push(curr);
					curr.sety(arr[curr.getn() - 1]);
					curr.setn(curr.getn() - 1);
					curr.setPos(itemType::START);
					returnFromRec = false;
				}
			}
		}
		else if (curr.getPos() == itemType::AFTER_FIRST)
		{
			curr.setPos(itemType::AFTER_SECOND);
			S.push(curr);
			curr.sety(arr[curr.getn() - 1]);
			curr.setn(curr.getn() - 1);
			curr.setPos(itemType::START);
			returnFromRec = false;
		}
		else if (curr.getPos() == itemType::AFTER_SECOND) {
			curr.setPos(itemType::AFTER_THIRD);
			S.push(curr);
			curr.sety(0);
			curr.setn(curr.getn() - 1);
			curr.setPos(itemType::START);
			returnFromRec = false;
		}
		else if (curr.getPos() == itemType::AFTER_THIRD) {
			returnFromRec = true;
		}
	} while (!S.isEmpty());
}
