//This is a program that generates a random number and asks the user to guess.
//Lab4_Guess
//CS13011 
//Tyler Dickon
//9/27/2016

#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main()
{
	//Initialize the random seed
	srand(time(nullptr));
	cout << "Welcome to the Guess a Number Game!\n"
		<< "\n Please hit y to continue:";

	//gets the user's 'y' input, which starts the game
	char answer;
	cin >> answer;

	//the game runs as long as the y answer is entered
	while (answer == 'y')
	{

		//generates the user's random number and get's its first input.
		cout << "\nA random number between 0 and 99 has been generated." << endl;
		cout << "\nPlease enter your first guess:";
		int randomNumber = rand() % 100;
		int userGuess;
		cin >> userGuess;

		//This While runs, until the user guesses the random number.
		while (userGuess != randomNumber)
		{
			if (userGuess < randomNumber)
			{
				cout << "\nThe number is greater than the one you guessed." << endl;
				cout << "Please enter another number:";
				cin >> userGuess;

			}
			else if (userGuess > randomNumber)
			{
				cout << "\nThe number is less than the one you guessed." << endl;
				cout << "Please enter another number:";
				cin >> userGuess;
			}
		}
		cout << "\nCongrats you guessed the correct number!" << endl;
		cout << "Another? [y/n] ";
		cin >> answer;

	}
}