//Finicky Counter
//Demonstrates break and continue statements

#include <iostream>
using namespace std;

int main()
{
    int count = 0;
    while (true)
    {
        count += 1; //This adds plus one every loop jump

        //End the loop if count is greater than 10
        if (count > 10)
        {
          break; //Once the loop hits 11 it will break the loop.
        }

        //Skip the Number 5
        if (count == 5)
        {
            continue; //This jumps us back up towards the start of the loop
        }
        cout << count << endl;
    }

    return 0;
}
