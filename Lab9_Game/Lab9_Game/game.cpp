//This Runs the Battleship game
//Lab9_Game
//Created by Tyler Dickon
//11/13/2016
#include <iostream>
#include "battleship.h"
#include <ctime>

using std::cout; using std::cin; using std::endl;

int main() {
	//This generates the random numbers by using the random seed and time functions.
	srand(time(nullptr));

	//Variables needed to start the game.
	Fleet gameFleet;	
	gameFleet.deployFleet(); //Deploys the game's 5 ships throughout the map. 
	Location userShot;

	char userAnswer;
	cout << "Would you like to see where the ships are? Y or N: ";
	cin >> userAnswer; cout << endl;

	//If the user would like to see where the ships are, print them out.
	if (userAnswer == 'y')
		gameFleet.printFleet();

	//Run a while loop that runs the game, until all the ships are destroyed.
	while (gameFleet.operational() == true)
	{
		userShot.fire(); cout << endl; //Gets the User's shots.
		gameFleet.isHitNSink(userShot); //Takes the User's shots, and checks them to the random coordinates that the game generates.
	}
	cout << "You destroyed all the ships, and won the game!" << endl;
}