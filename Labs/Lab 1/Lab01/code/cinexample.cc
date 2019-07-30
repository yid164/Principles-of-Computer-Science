// Our second C++ program
// Asks for some numbers and prints them out.

#include <cstdlib>
#include <iostream>
using namespace std;

// main program entry point
int main(void) {

	int i;
	float f1, f2;
	char c;
	
	cout << "\nenter an integer, then a floating point number, "
		 << "then a character, then a floating point number, "
		 << "then a character, separated by spaces: ";
		 
	cin >> i >> f1 >> c >> f2;
	
	cout << "\nYou entered "<< i <<" "<< f1 <<" "<< c <<" "<< f2 ;

    return EXIT_SUCCESS; 
}