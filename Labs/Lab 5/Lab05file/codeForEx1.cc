//using IO manipulators: setw

#include <cstdlib>
#include <iostream>
#include <iomanip>
using namespace std;

int main(void){
	char w = 'd';
	int x = 12;
	int y = 6;
	float z = 2.0;

	cout << setw(5) << w;
	cout << setw(5) << x << endl;
	cout << setw(5) << y;
	cout << setw(5) << z << endl;


	return EXIT_SUCCESS;
}

