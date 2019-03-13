// Name: James Brown
// Student No: C00149037
// Lab 4 C++

#include "pch.h"
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//Question 1
//int main()
//{
//	vector<int> v = { 11,27,33,89,27,54,16,101 };
//	int search;
//	int output = -1;
//	
//	for (int i = 0; i < 8; i++)
//	{
//		cout << v.at(i) << " ";
//	}
//	cout << "\nPick a number in the vector above.\n";
//	cin >> search;
//	for (int i = 0; i < 8; i++)
//	{
//		if (v.at(i) == search)
//		{
//			output = i;
//		}
//	}
//	if (output > -1)
//	{
//		cout << search << " is at index postion " << output;
//	}
//	else
//	{
//		cout << "-1";
//	}
//	
//
//}

//Question 2
//int main()
//{
//	vector<int> v = { 11,27,33,89,27,54,16,101 };
//	vector<int>::iterator iter = v.begin();
//
//	int min = INT_MAX, max = INT_MIN;
//
//	for (iter = v.begin(); iter != v.end(); iter++) 
//	{
//		if(*iter < min)
//		{
//			min = *iter;
//		}
//		if (*iter > max)
//		{
//			max = *iter;
//		}
//	}
//	cout << "Maximum element = " << max << "\nMinimum element = " << min;
//}

//Question 3
//int main()
//{
//	vector<int> v = { 11,27,33,89,27,54,16,101,99 };
//	vector<int>::iterator iter = v.begin();
//
//	int max = INT_MIN, secondMax = 0;
//	for (iter = v.begin(); iter != v.end(); iter++)
//	{
//		if (*iter > max)
//		{
//			secondMax = max;
//			max = *iter;
//		}
//		else if (*iter > secondMax)
//		{
//			secondMax = *iter;
//		}
//	}
//	cout << "Second largest element = " << secondMax;
//}

//Question 4
//int main()
//{
//	vector<int> v = { 11,27,33,89,27,54,16,101,99 };
//	vector<int>::iterator iter = v.begin();
//
//	vector<int> v2;
//	vector<int>::iterator iter2 = v2.begin();
//		
//	for (iter = v.begin(); iter != v.end(); iter++)
//	{
//		v2.push_back(*iter);
//	}
//	for (iter2 = v2.begin(); iter2 != v2.end(); iter2++)
//	{
//		cout << *iter2 << "\n";
//	}
//}

//Question 5 Not finished.
//int main()
//{
//	int count = 0 ,pos;
//	cout << "What index position would you like to add element 75? ";
//	cin >> pos;
//
//	vector<int> v = { 11,27,33,89,27,54,16,101,99 };
//	vector<int>::iterator iter = v.begin();
//
//	v.insert(v.begin() + 3, 1000);
//	
//	for (iter = v.begin(); iter != v.end(); iter++)
//	{
//		cout << *iter << "\n";
//	}
//}

//Question 6
//int main()
//{
//	vector<int> v = { 1,2,3,4,5, };
//	vector<int>::iterator iter = v.begin();
//
//	v.erase(v.begin() + 2);
//	for (iter = v.begin(); iter != v.end(); iter++)
//	{
//		cout << *iter << "\n";
//	}
//
//}

//Question 7
//int main()
//{
//	vector<int> v = { 9,2,6,9,3,8,7,1,4,2,4,8,9};
//	vector<int>::iterator iter = v.begin();
//	int element;
//
//	for (iter = v.begin(); iter != v.end(); iter++)
//	{
//		cout << *iter << "|";
//	}
//	cout << "\nChoose a element to search for.\n";
//	cin >> element;
//	cout << element << " occurs " << count(v.begin(), v.end(), element) << " times.";
//}

//Question 8
//int main()
//{
//	vector<int> v = { 1,2,3,4,5,6,7 };
//	vector<int>::iterator iter = v.begin();
//
//	rotate(v.begin(), v.begin() + 1, v.end());
//
//	for(iter = v.begin(); iter != v.end(); iter++)
//		{
//				cout << *iter << "|";
//		}
//}

//Question 9

std::vector <int> minmax(vector<int>&in)
{
	int small = in[0];
	int large = in[0];

	for (int i = 1; i < 7; i++)
	{
		if (in[i] < small)
		{
			small = in[i];
		}
		if (in[i] > large)
		{
			large = in[i];
		}
	}
	vector<int> output = { small,large };
	return output;
}
int main()
{

	vector<int> input = { 50,400,65,90,10,800,200, };
	vector<int> output;

	output = minmax(input);
	
	for (int i = 0; i < 2; i++)
	{
		cout << output[i] << " ";
	}


}


