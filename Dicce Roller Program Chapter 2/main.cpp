//Dice Roller
//Demonstrates generating random numbers

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main ()
{
    srand(static_cast<unsigned int>(time(0))); //seed random number generator

    int randomNumber = rand(); //generate random number

    int die = (randomNumber % 6) + 1; //Get a Number between one and six.
    cout << "You rolled a " << die << endl;

    return 0;
}
