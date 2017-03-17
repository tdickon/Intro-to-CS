//This is a Program that inputs a number and then outputs its english counterpart.
//Created By: Tyler Dickon
// Finished on 9/12/2016

#include <iostream>
#include <string>
using namespace std;

int main() {

	cout << "Input a number from 01 to 99: ";
	int number;
	cin >> number;

	const int singles = number % 10;
	const int tens = number / 10;

	string outputTens, outputSingles;
	string outputTeens;

	if (tens < 1)
	{
		outputTens = "";
	}

	if (tens == 1)
	{
		switch (singles)
		{
		case 0:
			outputTeens = "Ten";
			break;
		case 1:
			outputTeens = "Eleven";
			break;
		case 2:
			outputTeens = "Twelve";
			break;
		case 3:
			outputTeens = "Thirteen";
			break;
		case 4:
			outputTeens = "Fourteen";
			break;
		case 5:
			outputTeens = "Fifteen";
			break;
		case 6:
			outputTeens = "Sixteen";
			break;
		case 7:
			outputTeens = "SevenTeen";
			break;
		case 8:
			outputTeens = "Eighteen";
			break;
		case 9:
			outputTeens = "Nineteen";
			break;
		default:
			break;
		}
	}

	if (tens >= 2)
	{
		switch (tens)
		{
		case 2:
			outputTens = "Twenty";
			break;
		case 3:
			outputTens = "Thirty";
			break;
		case 4:
			outputTens = "Fourty";
			break;
		case 5:
			outputTens = "Fifty";
			break;
		case 6:
			outputTens = "Sixty";
			break;
		case 7:
			outputTens = "Seventy";
			break;
		case 8:
			outputTens = "Eighty";
			break;
		case 9:
			outputTens = "Ninety";
			break;
		default:
			break;
		}
	}

	if (tens != 1 && singles <= 9)
	{
		switch (singles)
		{
		case 0:
			break;
		case 1:
			outputSingles = "one";
			break;
		case 2:
			outputSingles = "two";
			break;
		case 3:
			outputSingles = "three";
			break;
		case 4:
			outputSingles = "four";
			break;
		case 5:
			outputSingles = "five";
			break;
		case 6:
			outputSingles = "six";
			break;
		case 7:
			outputSingles = "seven";
			break;
		case 8:
			outputSingles = "eight";
			break;
		case 9:
			outputSingles = "nine";
			break;
		default:
			break;
		}
	}
	cout << "The number that you selected is:" << " " << outputTeens << outputTens << " " << outputSingles << "!" << endl;

	return 0;

}
	