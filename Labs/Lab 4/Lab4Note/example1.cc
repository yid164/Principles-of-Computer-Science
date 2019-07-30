//CMPT115 lab practice: 

#include <cstdlib>
#include <iostream>
#include <iomanip>
using namespace std;

// This source file will not compile properly, because the functions are 
// defined in human-order, not C++ order.
// Don't reorder the functions!  Add function prototypes to help C++ use 
// human-ordering.

int main(void) {
	float testValue;
	
	cout << "Enter a float value: \n";
	cin >> testValue;
	
	outputAbsoluteValue(testValue);
	
	return EXIT_SUCCESS;
}


// Algorithm  outputAbsoluteValue(value)
// Pre:  a float value
// Post: the absolute (float) value of the input float is sent to the console
// Return: nothing
void outputAbsoluteValue(float value)
{
									// apply fancy formatting
	cout << setw(10)   				// this creates a field of 10 characters
	     << setprecision(4) 		// this puts 4 digits after the decimal point
	     << absoluteValue(value)   	// this calls the absolutevalue function
	     << endl;					// this sends a newline to the console
}


// Algorithm absoluteValue(value)
// Pre:  a float value
// Return: the absolute (float) value of the input float 
// Post: nothing
float absoluteValue(float value)
{
	if (value < 0)
	{
		return -value;
	}
	else
	{
		return value;
	}
}

