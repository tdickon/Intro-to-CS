//The main file that allows the users to add or remove elements from an array
//Lab10_VarArray
//Created by Tyler Dickon
//Created on 11/18/2016

#include<iostream>
#include"varArray.h"
using std::cout; using std::cin; using std::endl;

int main()
{
	//Intialize the variables
	char userInput;
	int size = 0;
	int *uArray = new int[size];

	//Get the user's input and run the program;
	welcome();
	cin >> userInput; cout << endl;
	bool check = userCheck(userInput); //Checks to make sure the user didn't quit the game

	//continue to run the program while the function is true
	while (check == true)
	{
		arrayManipulation(userInput, uArray, size);
		cout << "Please choose one (a/r/q): ";
		cin >> userInput; cout << endl;
		check = userCheck(userInput);
	}

	delete[] uArray;
	return 0;
}