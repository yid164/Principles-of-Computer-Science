// Name: Yinsheng Dong
// Student Number: 11148648
// NSID: yid164
// Lecture Section: CMPT 115(02)



#include <iostream>
using namespace std;


// Algorithm: swap(*x,*y)
// Pre: reToInt x, y
// Post: swap reToInt x, reToInt y

void swap(int *x, int *y)
{
	int temp = 0;      // using temp to help change reToInt x and y
	temp = *x;
	*x = *y;
	*y = temp;

}

// Algorithm: arrangeThree (*a, *b, *c)
// Pre: reToInt a, b, and c
// Post: reToInt a < reToInt b < reToInt c

void arrangeThree (int *a, int *b, int *c)
{
	if(*b<*a)
	{
		swap(b,a);
	}
	if(*c<*a)
	{
		swap(c,a);
	}
	if(*c<*b)
	{
		swap(c,b);
	}
}

// Using int main() test.
// Let user enter a, b, and c.
// Test if the function works well
int main() {
	int a;
	int b;
	int c;

	cout<< "Please Enter Your 1st Number"<<endl;
	cin>> a;
	cout<< "Please Enter Your 2nd Number"<< endl;
	cin>> b;
	cout<< "Please Enter Your 3rd Number"<< endl;
	cin>> c;
	cout<<"You Entered 3 Numbers: "<< a << ' '<< b << ' '<< c <<endl;
	arrangeThree(&a, &b, &c);
	cout<<"Arranged These Numbers: "<< a <<' '<< b <<' '<< c<<endl;
	return 0;
}