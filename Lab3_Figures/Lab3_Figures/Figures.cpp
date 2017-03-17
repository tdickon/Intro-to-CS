// A program that takes a user's input and creates shapes.
// Lab3_Figures
//Tyler Dickon
// Created on 09/20/2016

#include <iostream>

using std::cout; using std::endl; using std::cin;

int main()
{

	int userInput;
	cout << "Input the size of your shape [Enter a numerical value]: ";
	cin >> userInput;

	char outputChar = '*';

	//Square Number One
	for (int i = 0; i < userInput; i++)
	{
		for (int j = 0; j < userInput; j++)
		{
			cout << outputChar;
		}
		cout << endl;
	}
	cout << " " << endl;

	//Triangle Number One
	for (int i = 0; i < userInput + 1; i++)
	{
		for (int j = 0; j < i; j++)
		{
			cout << outputChar;
		}
		cout << endl;
	}
	cout << endl;

	//Triangle Number Two
	for (int i = 0; i < userInput; i++)
	{
		for (int j = 0; j < userInput; j++)
		{
			if (j < i)
			{
				cout << " ";
			}
			else if (j >= i)
			{
				cout << outputChar;
			}
		}
		cout << endl;
	}
	cout << endl;

	//Hollow Square
	for (int i = 0; i < userInput; i++)
	{
		for (int j = 0; j < userInput; j++)
		{
			if (j == 0)
			{
				cout << outputChar;
			}
			else if (j == userInput -1)
			{
				cout << outputChar;
			}

			else if (i == 0)
			{
				cout << outputChar;
			}

			else if (i == userInput -1)
			{
				cout << outputChar;
			}

			else
				cout << " ";
		}
		cout << endl;
	}
	return 0;
}
