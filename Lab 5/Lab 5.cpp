#include <iostream>
#include <fstream>
#include <map>
#include <string>
#include "pch.h"
using namespace std;


int main()
{
	
	int choice;
	int shift, count;
	int valueFounds = 0;
	int asc;
	int founds = 0;
	string plaintext, ciphertext, textFound;
	ifstream input;
	map<string, bool> myMap;

	string word;
	

	
	/*cout << "Enter the shift value: ";
	cin >> shift;
	while (shift<= 0)
	{
		cout << "Please enter shift value greater than 0: ";
		cin >> shift;
	}
	cin.ignore();
	cout << "Enter Plain Text: ";
	getline(cin, plaintext);
	ciphertext = plaintext;
	for (int i = 0; i < ciphertext.length(); i++)
	{
		if (ciphertext[i] != ' ')
		{
			asc = (int)ciphertext[i];
			asc = (asc + shift) % 122;
			if (asc < 97)
				asc += 96;
			ciphertext[i] = (char)asc;
		}
	}
	cout << "Plain text: " << plaintext << endl;
	cout << "Cipher text: " << ciphertext << endl;*/
	

	
	input.open("words.txt");
	while (!input.eof())
	{
		input >> word;
		myMap.insert(pair<string, bool>(word, false));
	}
	cin.ignore();
	cout << "Enter Cipher Text: ";
	getline(cin, ciphertext);
	plaintext = ciphertext;
	shift = 1;
	do
	{
		for (int i = 0; i < plaintext.length(); i++)
		{
			if (plaintext[i] != ' ')
			{
				asc = (int)plaintext[i];
				asc -= shift;
				if (asc < 97)
					asc += 26;
				plaintext[i] = (char)asc;
			}
		}
		founds = 0;
		word = "";
		for (int i = 0; i < plaintext.length(); i++)
		{
			if (plaintext[i] == ' ')
			{
				if (myMap.count(word) > 0)
				{
					founds++;
				}
				word = "";
			}
			word += plaintext[i];
		}
		if (myMap.count(word) > 0)
		{
			founds++;
		}
		if (founds > valueFounds)
		{
			valueFounds = founds;
			textFound = plaintext;
		}
		shift++;
	} while (shift < 26);
	cout << "Plain Text is: " << textFound << endl;
}



