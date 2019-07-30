//buggering.cpp
//demonstratic buffering: cout
//
//

#include <iostream>
using namespace std;

int main(){

	// send data to the console, but no endl
	cout << "cout with endl: buffer displayed" << endl;
	cout << "cout no endl: data stays in the buffer until next endl ..";


	//now set up some code that will definitely fail eventually

	int data[100];
 	

	//use indices that are way too big for our array!
	for (int i=0; i<10000; i++){
		data[i] = 0;
		if (i>100) {
			cout << "i = " << i ;
			cout << i/(i-i);
		}

	}
	cout << "Just about to exit.";
	return 0;
}

