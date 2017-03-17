//This is a scientific calculator program.
//Lab4_Calculator
//CS13011
//Tyler Dickon
//9/26/2016


#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;

int main()
{
	//Outputs the Menu 
	cout << "Welcome to the the Scientific Calculator Program! \n"
		<< "\n1.Absolute Value \n"
		<< "2.Square Root \n"
		<< "3.Ceiling \n"
		<< "4.Power \n"
		<< "5.End Program"
		<< endl;

	//Asks for the User's input
	int operationInput;
	cout << "\n Please enter the operation number you'd like to choose:" << " ";
	cin >> operationInput;

	//Takes the User's Input and then executes the right operation
	while (operationInput < 5)
	{
		switch (operationInput)
		{

			//Absolute Value
		case 1:
		{
			cout << "\nYou selected the Absolute Value Operation!"
				<< "\n Please enter a value:"
				<< " ";
			int absValue;
			cin >> absValue;
			int temp = abs(absValue);
			cout << "\nThe absolute value is"
				<< " "
				<< temp
				<< "!"
				<< endl;
			break;
		}

		//Square Root
		case 2:
		{
			cout << "\nYou selected the Square Root Operation!"
				<< "\n Please enter a value:"
				<< " ";
			double sqrtValue;
			cin >> sqrtValue;
			double temp = sqrt(sqrtValue);
			cout << "\nThe square root is"
				<< " "
				<< temp
				<< "!"
				<< endl;
			break;
		}

		//Ceiling
		case 3:
		{
			cout << "\nYou selected the Ceiling Operation!"
				<< "\nPlease enter a value:"
				<< " ";
			double ceilValue;
			cin >> ceilValue;
			double temp = ceil(ceilValue);
			cout << "\nThe ceiling is"
				<< " "
				<< temp
				<< "!"
				<< endl;
			break;
		}

		//Power Operation
		case 4:
		{
			cout << "\nYou selected the Power Operation!"
				<< "\nPlease enter a base value:"
				<< " ";
			double baseValue;
			cin >> baseValue;
			cout << "\n Please enter an exponent value:"
				<< " ";
			double exponentValue;
			cin >> exponentValue;
			double temp = pow(baseValue, exponentValue);
			cout << "\nThe power is"
				<< " "
				<< temp
				<< "!"
				<< endl;
			break;
		}
		}
		cout << "\n==============================================================" << endl;
		//Outputs the Menu 
		cout << "\nWelcome to the the Scientific Calculator Program! \n"
			<< "\n1.Absolute Value \n"
			<< "2.Square Root \n"
			<< "3.Ceiling \n"
			<< "4.Power \n"
			<< "5.End Program"
			<< endl;

		//Asks for the User's input
		cout << "\n Please enter the operation number you'd like to choose:" << " ";
		cin >> operationInput;
	}
	return 0;
}