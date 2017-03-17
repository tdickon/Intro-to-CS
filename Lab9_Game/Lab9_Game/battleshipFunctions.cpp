//Function Calls for the Battleship Game
//Created By Tyler Dickon
//11/10/2016

#include "battleship.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

using std::cout; using std::cin; using std::endl;

//FUNCTIONS FOR THE LOCATION CLASS
//1.Location Constructor
Location::Location()
{
	x = -1;
	y = '*';
}
//2.Pick Function
void Location::pick()
{
	int tmpValue;
	x = rand() % fieldSize + 1;
	tmpValue = rand() % fieldSize + 1;

	//Switch tmpValue to the proper Letter Coordinate
	switch (tmpValue)
	{
	case 1: y = 'a'; break;
	case 2: y = 'b'; break;
	case 3: y = 'c'; break;
	case 4: y = 'd'; break;
	case 5: y = 'e'; break;
	}
}
//3.The Fire Function
void Location::fire()
{
	char tempY;
	cout << "\nPlease Enter a Y Coordinate (a through e): ";
	cin >> tempY;
	cout << endl;
	y = tempY;

	cout << "Please Enter a X Coordinate (1 through 5): ";
	cin >> x;
	cout << endl;
}
//4. The Print Function
void Location::print() const
{
	cout << y << x << endl;
}
//5. The Comparison Function
bool compare(Location shipSpot, Location userSpot)
{
	if (shipSpot.x == userSpot.x && shipSpot.y == userSpot.y)
		return true;
	else
		return false;
}
//------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//FUNCTIONS FOR SHIP CLASS
//1.Ship Function
Ship::Ship()
{
	sunk = false;
}
//2.Match Function
bool Ship::match(const Location& matchChecker) const
{
	return compare(loc, matchChecker); //Returns the true or false value when the ship's location is compared to the User's shot (MatchChecker)
}
//3.isSunk Function
//bool Ship::isSunk{ return sunk; } //THIS HAS ALREADY BEEN DECLARED IN THE CLASS, BUT IT'S LOCATED HERE FOR COMPREHENSION
//4. The Sunk Function
void Ship::sink()
{
	sunk = true;
}
//5.setLocation Function
void Ship::setLocation(const Location& shipSpot)
{
	loc = shipSpot;
}
//6.PrintShip Function
void Ship::printShip() const
{
	cout << "The ship's location is at: "; loc.print();
	if (sunk == true)
		cout << "The ship's status is: SUNK" << endl;
	else if (sunk == false)
		cout << "The ship's status is: NOT SUNK" << endl;
	cout << endl;
}
//------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//THE FLEET CLASS FUNCTIONS
//1. The DeployFleet Function
void Fleet::deployFleet()
{
	for (int counter = 0; counter < fleetSize; ++counter)
	{
		Location tmpShipLoc;
		tmpShipLoc.pick(); //Picks random values and stores them to the tmpShipLocation Variable
		ships[counter].setLocation(tmpShipLoc); //Assigns the values of tmpShipLoc to the element of Counter
	}
}
//2.The operational function
bool Fleet::operational() const
{
	for (int counter = 0; counter < fleetSize; ++counter)
	{
		//Checks to see if the element's sunk value is false or true.
		if (ships[counter].isSunk() == false)
			return true;
	}
	return false; //if the for loop completes and all the ships are sunk then return false.
}
//3.The isHitNSink Function
bool Fleet::isHitNSink(const Location& userInput)
{
	//Check to see if there is a ship where the user shot. 
	for (int counter = 0; counter < fleetSize; ++counter)
	{
		if (ships[counter].match(userInput) == true)
		{
			ships[counter].sink(); //Changes the Counter's sunk value to true, thus lowering the total ships in play.
			cout << "You hit a ship!" << endl;
			return true; //Returns true, signaling a hit. 
		}
	}
	cout << "You missed a shot, try again!" << endl;
	return false; //Returns false, signaling there was a miss.
}
//4. The printFleet Function
void Fleet::printFleet() const
{
	for (int counter = 0; counter < fleetSize; ++counter)
	{
		ships[counter].printShip(); //Prints everyship until it hits the size of the array.
	}
}
