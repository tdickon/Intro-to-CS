#include "figures.h"
#include <iostream>
using namespace std;


const char outputChar = '*';

//creates the shapes

//HollowSquare Function
void hollowSquare(int userInput)
{
	for (int i = 0; i < userInput; i++)
	{
		for (int j = 0; j < userInput; j++)
		{
			if (j == 0)
			{
				cout << outputChar;
			}
			else if (j == userInput - 1)
			{
				cout << outputChar;
			}

			else if (i == 0)
			{
				cout << outputChar;
			}

			else if (i == userInput - 1)
			{
				cout << outputChar;
			}

			else
				cout << " ";
		}
		cout << endl;
	}
}
//Full Square
void filledSquare(int userInput)
{
	for (int i = 0; i < userInput; i++)
	{
		for (int j = 0; j < userInput; j++)
		{
			cout << outputChar;
		}
		cout << endl;
	}
	cout << " " << endl;

	return;
}

//Bottom Left Triangle
void leftTriangle(int userInput)
{
	for (int i = 0; i < userInput + 1; i++)
	{
		for (int j = 0; j < i; j++)
		{
			cout << outputChar;
		}
		cout << endl;
	}
	cout << endl;
	return;
}
//Top Right Triangle
void rightTriangle(int userInput)
{
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
	return;
}