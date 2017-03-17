//Game Stats
//Demonstrates declaring and initializing variables

#include <iostream>
using namespace std;

int main()
{
    int score; //This is a declared variable, called score which is an integer.
    double distance; //this is the declared variable called distance and is a double variable type.
    char playAgain; //This is the declared variable called playAgain, and is a character variable type.
    bool shieldsUp; //This is the declared variable called shieldsUp, and is a boolean variable type.

    short lives, aliensKilled; //With C++ you're able to create multiple variables of the same type, here lives and aliensKilled are created.

    score = 0; //Score is assigned a value of zero (it'll stay this way, until the player scores a point).
    distance = 1200.76; //since distance uses the double variable type, it's able to hold a fractional part.)
    playAgain = 'y';
    shieldsUp = true; //This is the boolean value, that declare's the player's shield is up.
    lives = 3;
    aliensKilled = 10;
    double engineTemp = 6572.89; //You can declare and intialize a variable in the same statement.

    cout << "\nscore: "     <<score << endl; // The \n is one of the escape sequences available to be used, it creates a new line in the command prompt.
    cout << "distance:"     <<distance << endl;
    cout << "playAgain:"    <<playAgain << endl;
    //Skipping shieldsUp since you don't generally print Boolean values
    cout << "lives:"        <<lives << endl;
    cout << "aliensKilled:" <<aliensKilled << endl;
    cout << "engineTemp:"   <<engineTemp << endl;

    int fuel;
    cout << "\nHow much fuel? ";
    cin >> fuel; //This asks for the users input, for this example it asks for the user to implement a value to fuel.
    cout << "fuel : " << fuel << endl;

    typedef unsigned short int ushort;
    ushort bonus = 10;
    cout << "\nbonus: " << bonus << endl;

    return 0;
}
