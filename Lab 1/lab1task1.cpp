// James Brown
// Student No. C00149037
// Subject: Advanced Programming
// Lab 1
// Date 19-09-18

#include"pch.h"
#include <iostream>
using namespace std;

//Question 1  
//int main()
//{
//	cout << "Hello, World!";
//	return 0;
//}

//Question 2
//int main()
//{
//	int input;
//	cout << "Enter an Integer: ";
//	cin >> input;
//	cout << "You entered " << input;
//		return 0;
//}

//Question 3
//int main()
//{
//	int input1, input2, result;
//	cout << "Enter an integer: ";
//	cin >> input1;
//	cout << "Enter an integer: ";
//	cin >> input2;
//	result = input1 + input2;
//	cout << "Inputs added = " << result;
//	return 0;
//}

//Question 4
//int main()
//{
//	int input1, input2, temp;
//	cout << "Enter an Integer: ";
//	cin >> input1;
//	cout << "Enter an Integer: ";
//	cin >> input2;
//	temp = input1;
//	input1 = input2;
//	input2 = temp;
//	cout << input1 << "  " << input2;
//		return 0;
//}

//Question 5
//int main()
//{
//	int input;
//	cout << "Enter an Integer: ";
//	cin >> input;
//
//	if (input % 2 == 0)
//		{	
//		cout << "Even number";
//		}
//	else
//		cout << "Odd number";
//		return 0;
//}

//Question 6
//int main()
//{
//	char input;
//	cout << "Enter a letter: ";
//	cin >> input;
//	if (input >= 65 && input <= 90)
//		{
//		input = input + 32;
//		}
//	if (input >= 97 && input <= 122)
//		{
//		if (input == 'a' || input == 'i' || input == 'e' || input == 'o' || input == 'u')
//		{
//			cout << "Is a vowel";
//		}
//		else
//			cout << "Is a consonant";
//		}
//	else
//	cout << "Please enter a valid letter.";
//	return 0;
//}

//Question 7
//int main()
//{
//	int num1, num2, num3;
//	cout << "Enter first number: ";
//	cin >> num1;
//	cout << "Enter second number: ";
//	cin >> num2;
//	cout << "Enter third number: ";
//	cin >> num3;
//	if (num1 > num2)
//	{
//		if (num1 > num3)
//		{
//			cout << num1 << " is the largest";
//		}
//		else
//		{
//			cout << num3 << " is the largest";
//		}
//	}
//	else
//	{
//		if (num2 > num3)
//		{
//			cout << num2 << " is the largest";
//		}
//		else
//		{
//			cout << num3 << " is the largest";
//		}
//	}
//	
//	
//	return 0;
//}

// Question 8
//int main()
//{
//	int year;
//	cout << "Enter a year: ";
//	cin >> year;
//	if (year % 4 == 0)
//	{
//		if (year % 100 == 0)
//		{
//			if (year % 400 == 0)
//			{
//				cout << year << " is a leap year.";
//			}
//			else
//				cout << year << " is not a leap year";
//		}
//		else
//			cout << year << " is a leap year";
//	}
//	else
//		cout << year << " is not a leap year";
//	return 0;
//}

//Question 9
//int main()
//{
//	int input;
//
//	cout << "Enter a number: ";
//	cin >> input;
//
//	for (int i = 1; i <= 10; ++i) 
//	{
//		cout << input << " * " << i << " = " << input * i << endl;
//	}
//
//	return 0;
//}

//Question 10------------------NOT FINISHED------------------------------------------------
//int main()
//{
//	int input;
//
//	cout << "enter a number: ";
//	cin >> input;
//
//	while (number > 0)
//	{
//			lastDigit = number % 10
//			reverse = (reverse * 10) + lastDigit
//			number = number / 10
//	}
//	return 0;
//}

//Question 11
//int main()
//{
//	char character;
//	int num;
//
//	cout << "Enter a character : ";
//	cin >> character;
//
//	num = character;
//	cout << "ASCII value for " << character << " is " << num;
//
//	return 0;
//}

//Question 12
//int main()
//{
//	int num1, num2, answer;
//
//	cout << "Enter first number : ";
//	cin >> num1;
//	cout << "Enter second number: ";
//	cin >> num2;
//
//	answer = num1 * num2;
//
//	cout << num1 << " x " << num2 << " = " << answer;
//	return 0;
//}

//Question 13------------------NOT FINISHED-------------------------
//int main()
//{
//	int num1, num2, answer;
//
//	cout << "Enter first number : ";
//	cin >> num1;
//	cout << "Enter second number: ";
//	cin >> num2;
//
//	answer = num1 * num2;
//
//	cout << num1 << " x " << num2 << " = " << answer;
//	return 0;
//}

//Question 14
int main()
{
	int num,i=2;
	
	cout << "enter a number : ";
	cin >> num;
	
	while (i > 1 && i < num)
	{
		if (num % i == 0)
		{
			cout << num << " is not a prime";
			return 0;
		}
		i++;
	}
	cout << num << " is a prime number";
	return 0;
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
