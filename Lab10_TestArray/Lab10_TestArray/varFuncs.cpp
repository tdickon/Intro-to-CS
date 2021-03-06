//Function Calls for the Array Manipulation
//Created by Tyler Dickon
//Created on 11/18/2016

#include<iostream>
#include"varArray.h"
using std::cout; using std::cin; using std::endl;

//Prints out the array
void output(int *arrayPtr, int size)
{
	for (int counter = 0; counter < size; ++counter)
	{
		cout << arrayPtr[counter] << ' ';
	}
	cout << endl;
}

//Checks to see what the user guessed is in the array, returns -1 if its not true
int check(int *arrayPtr, int number, int size)
{
	for (int counter = 0; counter < size; ++counter)
	{
		if (number == arrayPtr[counter])
			return counter; //Return which index the number is located at.
	}
	return -1;
}

//Adds a new number to the array if it's not a duplicate.
void addNumber(int *& arrayPtr, int number, int &size)
{
	int tmp = check(arrayPtr, number, size);
	if (tmp == 1)
		return; //It's a duplicate and won't be added to the array

	else if (tmp == -1)
	{
		int *tmpArray = new int[size + 1]; //creates a temporary array, which will allows us to expand the array.

		//Grab the previous array sizes.
		for (int counter = 0; counter < size; ++counter)
			tmpArray[counter] = arrayPtr[counter];

		tmpArray[size] = number; //Adds the number to the end of the array
		delete[] arrayPtr;
		arrayPtr = tmpArray;
		++size;
	}
}

//Removes a number from the array.
void removeNumber(int *& arrayPtr, int number, int &size)
{
	bool check = false; //A boolean operator that will tell us when the number has been found--since after it's found, all the elements after it will need their index dropped by one.
	int *tmp = new int[size - 1];
	//Check the elements of the array to remove the selected number
	for (int counter = 0; counter < size; counter++)
	{
		if (arrayPtr[counter] == number)
			check = true;

		//This runs for all the elements before the number is found.
		else if (check == false && arrayPtr[counter] != number)
			tmp[counter] = arrayPtr[counter];

		else
			tmp[counter - 1] = arrayPtr[counter]; //This runs after the number has been found, thus every number will be dropped 1 index.

	}
	delete[] arrayPtr;
	arrayPtr = tmp;
	--size;
}