#include<iostream>
#include "Header.h"
using std::cout; using std::cin; using std::endl; 

int main()
{
	typedef studentId* studentIds;
	int sizeOfClass;
	cout << "Welcome to the school roster. Please add users: " << endl;
	cout << "How many students are in the class: "; cin >> sizeOfClass; cout << endl;
	studentIds classRoster = new studentId[sizeOfClass];

	//Gets the student Ids for the class
	for(int counter = 0; counter < sizeOfClass; ++counter)
	{
		classRoster[counter].get();
	}

	//Outputs the class roster
	for (int counter = 0; counter < sizeOfClass; ++counter)
		classRoster[counter].print();
}