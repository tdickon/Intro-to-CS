// the program attempts to sort three integers
// Fixed by Tyler Dickon
// 9/8/2016

#include <iostream>

using std::cin; using std::cout; using std::endl;

int main() {

	// inputs the numbers
	cout << "Enter three numbers: ";
	int x, y, z;
	cin >> x >> y >> z;

	int tmp;

	// orders x and y
	if (x > y) {
		tmp = x;
		x = y;
		y = tmp;
	}

		//This was the missing part of the function. This is needed because the program needs to make sure that
		//Z is not smaller than X, which the original program was not checking.
	if (x > z) {
		tmp = x;
		x = z;
		z = tmp;
	}

	// orders y and z
	if (y > z) {
		tmp = y;
		y = z;
		z = tmp;
	}

	// outputs the sorted numbers
	cout << "The sorted numbers are: ";
	cout << x << " " << y << " " << z << endl;
}