// functions to manipulate variable size array
// Mikhail Nesterenko --Updated by Tyler Dickon (added a new function that will run the main file)
// 10/29/2009 -- Updated on 11/18/2016

#ifndef VARARRAY_H
#define VARARRAY_H

// prints the values in "arrayPtr" of "size" 
void output(int *arrayPtr, int size);

// returns the index of the element in "arrayPtr" of "size"
// that corresponds to the element holding "number"
// if number is not in the array, returns -1
int check(int *arrayPtr, int number, int size);

// adds "number" to the array pointed to by "arrayPtr" of "size". 
// if the number is not already there, if "number" is there - no action
// Note, the size of the array is thus increased. 
void addNumber(int *& arrayPtr, int number, int &size);

// removes a "number" from the "arrayPtr" of "size".
// if "number" is not there -- no action
// note, "size" changes
void removeNumber(int *& arrayPtr, int number, int &size);

void arrayManipulation(char userInput, int *& arrayPtr, int &size);

bool userCheck(char userInput);
#endif // VARARRAY_H

//Welcoming Screen
void welcome();