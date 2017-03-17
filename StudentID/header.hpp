#include <iostream>
#include<string>
using std::cout; using std::cin; using std::endl; using std::string;
#ifndef test_h_
#define test_h_
class studentId {
public:
	void get();
	void print() const;
private:
	string firstName;
	string lastName;
	double ID;
};
#endif //test_h_