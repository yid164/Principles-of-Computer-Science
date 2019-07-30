//inputbuff.cc
//demonstrating buffering: cin
// copy paste everything on the line below to the console all at once:
//  a b c 1 2.7 2 3.1 3 -1.0
//


#include <iostream>
using namespace std;


int main(){
	int someInts[3];
	char someChars[3];
	float someFloats[3];


	for (int i = 0; i<3; i++){
		cin >> someChars[i];
	}


	for (int i=0; i<3; i++){
		cout << someChars[i] << " "; //some output
		
	}

	for (int i=0; i<3; i++){
		cin >> someInts[i] >> someFloats[i]; //more input
	}

	for (int i=0; i<3; i++){
		cout << endl << someInts[i] << "  " <<  someFloats[i] << "  ";
	}

	return 0;
}


