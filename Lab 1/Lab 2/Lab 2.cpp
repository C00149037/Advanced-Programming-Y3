// Name: James Brown
// Student No: C00149037
// Lab 2 C++

#include "pch.h"
#include <iostream>
using namespace std;


//Question 1
//int main()
//{
//	int intArray[10];
//	for (int i = 0; i < 10; i++)
//	{
//		cout << "Enter an int: ";
//		cin >> intArray[i];
//	}
//	for (int i = 0; i < 10; i++)
//	{
//		cout << intArray[i] <<" - ";
//	}
//}

//Question 2
//int main()
//{
//	int intArray[10];
//	for (int i = 0; i < 10; i++)
//	{
//		cout << "Enter an int: ";
//		cin >> intArray[i];
//	}
//	for (int i = 0; i < 10; i++)
//	{
//		if (intArray[i] < 0)
//		{
//			cout << intArray[i] << " <> ";
//		}
//	}
//}

//Question 3
//int main()
//{
//	int intArray[10], searchKey;
//	cout << "Enter the number you are looking for: ";
//	cin >> searchKey;
//	for (int i = 0; i < 10; i++)
//	{
//		cout << "Enter an int: ";
//		cin >> intArray[i];
//	}
//	for (int i = 0; i < 10; i++)
//	{
//		if (intArray[i] == searchKey)
//		{
//			cout << "Found at index position " << i;
//			return 0;
//		}
//		else
//		{
//			if (intArray[i] == 9)
//			{
//				cout << "-1";
//			}
//		}
//	}
//}

//Question 4
//int main()
//{
//	int intArray[10], searchKey, max=-INT_MIN, min= INT_MAX;
//	for (int i = 0; i < 10; i++)
//	{
//		cout << "Enter an int: ";
//		cin >> intArray[i];
//		if (intArray[i] > max)
//		{
//			max = intArray[i];
//		}
//		if (intArray[i] < min)
//		{
//			min = intArray[i];
//		}
//	}
//	cout << "Max = " << max;
//	cout << "Min = " << min;
//}

//Question 5
//int main()
//{
//	int intArray[10], max = INT_MIN, secondMax = 0;
//	for (int i = 0; i < 10; i++)
//	{
//		cout << "Enter an int: ";
//		cin >> intArray[i];
//		if (intArray[i] > max)
//		{
//			secondMax = max;
//			max = intArray[i];
//		}
//		else if (intArray[i] > secondMax)
//		{
//			secondMax = intArray[i];
//		}
//	}
//	cout << "Second largest element = " << secondMax;
//}

//Question 6
//int main()
//{
//	int intArray[10], odd=0, even=0;
//	for (int i = 0; i < 10; i++)
//	{
//		cout << "Enter an int: ";
//		cin >> intArray[i];
//		if (intArray[i] % 2 == 0)
//		{
//			even++;
//		}
//		else 
//		{
//			odd++;
//		}
//	}
//	cout << "Total odds = " << odd;
//	cout << "\nTotal evens = " << even;
//}

//Question 7
//int main()
//{
//	int intArray[20];
//	int secondIntArray[20];
//	
//	for (int i = 0; i < 20; i++)
//	{
//		cout << "Enter an int: ";
//		cin >> intArray[i];
//		secondIntArray[i] = intArray[i];
//	}
//	for (int i = 0; i < 20; i++)
//	{
//		cout << secondIntArray[i] << "\n";
//	}
//}

//Question 8
//int main()
//{
//	int count = 0 , input, index, temp;
//	int intarray[12] = { 0,1,2,3,4,5,6,7,8,9,10,11};
//
//		cout << "what int would you like to add? ";
//		cin >> input;
//		cout << "at what index position? ";
//		cin >> index;
//		if (intarray[index] == 0)
//		{
//			intarray[index] = input;
//		}
//		else
//		{
//			for (int i = 11; i > index; i--)
//			{
//				intarray[i] = intarray[i - 1];
//			}
//			intarray[index] = input;
//		}
//
//	for (int i = 0; i < 12; i++)
//	{
//		cout << "\nindex " << i << " = " << intarray[i];
//	}	
//}


//Question 9
//int main()
//{
//	int count = 0, index;
//	int intarray[12] = { 0,1,2,3,4,5,6,7,8,9,10,11 };
//
//	cout << "What index would you like to delete? ";
//	cin >> index;
//	if (intarray[index] == 11)
//	{
//		intarray[index] = 0;
//	}
//	else
//	{
//		for (int i = index; i < 12; i++)
//		{
//			intarray[i] = intarray[i + 1];
//		}
//	}
//
//	for (int i = 0; i < 12; i++)
//	{
//		cout << "\nindex " << i << " = " << intarray[i];
//	}
//}

//Question 10
//int main()
//{
//	int intArray[10];
//	int count = 0, element;
//	
//	cout << "What element would you like a count for: ";
//	cin >> element;
//	
//	for (int i = 0; i < 10; i++)
//	{
//		cout << "Enter an int: ";
//		cin >> intArray[i];
//		if (intArray[i] == element)
//		{
//			count++;
//		}
//	}
//	cout << element << " is in the array " << count << " times!";
//}

//Question 11
//int main()
//{
//	int intArray[10];
//	int countDuplicates = 0;
//
//	for (int i = 0; i < 10; i++)
//	{
//		cout << "Enter an int: ";
//		cin >> intArray[i];
//
//		for (int x = 0; x < i; x++)
//		{
//			if (intArray[i] == intArray[x])
//			{
//				countDuplicates ++;
//			}
//		}	
//	}
//	cout << "There is " << countDuplicates << " duplicates!";
//}

//Question 12
//int main()
//{
//	int intArray[5] = {1,2,3,4,5};
//	int temp,count = 4;

//	for (int i = 0; i < 2; i++)
//	{
//		temp = intArray[i];
//		intArray[i] = intArray[count];
//		intArray[count] = temp;
//		count--;
//	}
//	for (int i = 0; i < 5; i++)
//	{
//		cout << intArray[i];
//	}
//}

//Question 13
//int main()
//{
//	int intArray[5] = { 1,2,3,4,5 };
//	int temp;
//
//	temp = intArray[0];
//	for(int i = 0; i < 4; i++)
//	{
//		intArray[i] = intArray[i+1];
//	}
//	intArray[4] = temp;
//	for (int i = 0; i < 5; i++)
//	{
//		cout << intArray[i];
//	}
//}

//Question 14
//int printPairs(int product, int arr[], int arrSize)
//{
//	int holder,result;
//	for (int i = 0; i < arrSize; i++)
//	{
//		holder = arr[i];
//		for (int x = 0; x < arrSize; x++)
//		{
//			if (holder * arr[x] == product)
//			{
//				result = holder;
//				cout << "\n" << holder << " x " << arr[x] << " = " << product;
//			}
//		}
//	}
//	cout << "\n";
//	return   result;
//}
//int main()
//{
//	int product = 20;
//	int ar[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int arSize = 10;
//	cout << printPairs(product, ar, arSize);
//}

//Question 15
int main()
{
	char input[100];
	cout << "Enter a sentence: ";
	cin.getline(input, 80);
	int count = -1, wordcount = 0;
	for (int i = 0; i < 40; i++)
	{
		if (input[i] > 96 && input[i] < 123 || input[i] > 64 && input[i] < 91)
		{
			count++;
		}
		else if (input[i] == ' ')
		{
			if (count == i-1 && input[i-1] != ' ')
			{
				wordcount++;
			}
			count = i;
		}
		else if (input[i] == '\0' && input[i-1] != ' ' && input[i-1] != '\0')
		{
			if (count == i-1 )
			{
				wordcount++;
			}
		}	
	}
	cout << "Number of valid words = " << wordcount;

}



// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
