//This is a program that takes the User's Inputs and Averages them out for them.
#include <iostream>

using namespace std;

int main()
{
   int num1, num2, num3, avgOutPut;

   //Get the Values
   cout << "\nThis program is dedicated to giving you the average of three numbers that you input.\n";

   cout << "Please choose your first numerical value: " << endl;
   cin >> num1;

   cout << "Please choose your second numerical value: " << endl;
   cin >> num2;

   cout << "Please choose your third numerical value: " << endl;
   cin >> num3;

   //Output the Average

   avgOutPut = (num1 + num2 + num3) / 3;
   cout << "The average of your three numbers are: " << avgOutPut << endl;

   return 0;
}
