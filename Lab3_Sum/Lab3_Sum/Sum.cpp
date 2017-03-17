//This is a program that takes the user's inputs and adds together the positive sums.
//Lab3_Sum
//CS 13011
//Tyler Dickon
//Created on 9/20/2016

#include <iostream>

using std::cin; using std::cout; using std::endl;

int main() {

	cout << "Input a list of Numbers, type 0 to quit inputting numbers: ";
	int inputNum; 
	cin >> inputNum;

	int positiveNum; // Variable that tracks the positive input numbers
	int outputNum = 0; //Variable that is going to output the Sum of the positive numbers.

	while (inputNum != 0) 
	{
		cin >> inputNum;

		if (inputNum > 0) //checks to see if the inputNumber is greater than zero
		{
			positiveNum = inputNum; //assigns the input number to the positiveNumber
			outputNum = outputNum + positiveNum; //adds together the output num after each cycle.
		}
	}

	cout << "The sum of your positive numbers is: " << " " << outputNum << endl;
	return 0;
}