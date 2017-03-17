//This is a program that creates shapes using multiple files.
//Lab5_Figures
//CS13011
//Tyler Dickon
//10/3/2016

#include <iostream>
#include <string>
#include "figures.h"
using namespace std;



int main()
{
	//Outputs the Menu 
	cout << "Welcome to the the Shape Program! \n"
		<< "\n1.Square \n"
		<< "2.Bottom Left Triangle \n"
		<< "3.Top Right Triangle \n"
		<< endl;

	//Asks for the User's input
	int shapeInput;
	cout << "\n Please enter a shape number:";
	cin >> shapeInput;
	cout << endl;

	//Asks for the User's Shape Size:
	while (shapeInput <= 3)
	{ 
	int shapeSize;
	cout << "Please select the size of your shape:";
	cin >> shapeSize;
	cout << endl;

	//Takes the User's Input and then executes the right operation
		switch (shapeInput)
		{

			//Square Shapes
		case 1:
		{
			//Ask the User what type of square they want to choose.
			cout << "You Selected the Square, which option would you like?\n"
				<< "1.Hollow Square"
				<< "\n2.Full Square"
				<< endl;
			int squareInput;
			cout << "Please Enter your option:";
			cin >> squareInput;
			
			//Creates The Hollow Square
			if (squareInput == 1)
			{
				cout << "You selected the Hollow Square! With a size of"
					<< " "
					<<shapeSize
					<<"."
					<< endl;
				hollowSquare(shapeSize);

			}

			//Creates the Full Square
			else if (squareInput == 2)
			{
				cout << "You  selected the Full Square! With a size of"
					<< " "
					<<shapeSize
					<<"."
					<< endl;
				filledSquare(shapeSize);
			}
			break;
		}

		//Bottom Left Triangle Shape
		case 2:
		{
			cout << "\nYou selected the Bottom Right Triangle Shape! With the size of"
				<< " "
				<< shapeSize
				<< "."
				<< endl;
			leftTriangle(shapeSize);
			break;
		}

		//Top Right Triangle Shape
		case 3:
		{
			cout << "\nYou selected the Top Right Triangle Shape! With the size of"
				<< " "
				<< shapeSize
				<<"."
				<<endl;
			rightTriangle(shapeSize);
			break;
		}
		}
		cout << "\n==============================================================" << endl;
		//Outputs the Menu 
		cout << "Welcome to the the Shape Program! \n"
			<< "\n1.Square \n"
			<< "2.Bottom Left Triangle \n"
			<< "3.Top Right Triangle \n"
			<< endl;

		//Asks for the User's input
		cout << "\n Please enter a shape number:";
		cin >> shapeInput;
		cout << endl;
	}
	return 0;
}