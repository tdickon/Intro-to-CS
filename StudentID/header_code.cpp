#include "Header.h"

void studentId::get()
{
	cout << "Please enter a First Name: "; cin >> firstName; cout << endl;
	cout << "Please enter a Last Name: "; cin >> lastName; cout << endl;
	cout << "Please enter a student id: "; cin >> ID; cout << endl;
}

void studentId::print() const
{
	cout << lastName << "," << firstName << "," << ID << endl;
}