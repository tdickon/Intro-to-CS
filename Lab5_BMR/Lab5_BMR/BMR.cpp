//This is a program creates your BMR using functions.
//Lab5_BMR
//CS13011
//Tyler Dickon
//10/3/2016

#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;

//Declares a global constant variable for bagel calories
const double calories = 245;

//Computes the BMR for Women
double bmrWomen(int weight_par, double height_par, int age_par);

//Computes the BMR for Men
double bmrMen(int weight_par, double height_par, int age_par);

int main()
{
	//Initialize user variables
	char gender;
	int weight;
	double height;
	int age;

	//Get the user's gender
	cout << "Are you a man or woman? (Type m for male or f for female):";
	cin >> gender;

	//Get the User's weight
	cout << "\nPlease enter your weight in pounds, please round to the nearest whole number:";
	cin >> weight;

	//Get the User's height
	cout << "\nEnter your height in feet, with inches as a decimal (ex: 6'2 = 6.2):";
	cin >> height;
	height = height * 12.00;

	//Get the User's Age
	cout << "\nPlease enter your age:";
	cin >> age;

	//The program checks to see what gender you chose
	if (gender == 'f')
	{
		double outPutBMR = bmrWomen(weight, height, age);

		//Output BMR
		cout << "\n\nYour BMR is," << " " << outPutBMR << endl;

		//Output the amount of bagels you can have
		double tmp = outPutBMR / calories;
		int bagels = ceil(tmp);
		cout << "You can have," << " " << bagels << " " << "Bagels! (Rounded Up)" << endl;
	}

	else if (gender == 'm')
	{
		double outPutBMR = bmrMen(weight, height, age);

		//Output BMR
		cout << "\n\nYour BMR is," << " " << outPutBMR << endl;

		//Output the amount of bagels you can have
		double tmp = outPutBMR / calories;
		int bagels = ceil(tmp);
		cout << "You can have," << " " << bagels << " " << "Bagels! (Rounded Up)" << endl;
	}
	return 0;
}


double bmrWomen(int weight_par, double height_par, int age_par)
{
	double output = 655 + (4.3 * weight_par) + (4.7 * height_par) - (4.7 * age_par);
	return output;
}

double bmrMen(int weight_par, double height_par, int age_par)
{
	double output = 66 + (6.3 * weight_par) + (12.9 * height_par) - (6.8 * age_par);
	return output;
}