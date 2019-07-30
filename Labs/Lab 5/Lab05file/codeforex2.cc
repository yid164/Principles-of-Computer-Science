// Using manipulators: more!
//

#include <cstdlib>
#include <iostream>
#include <iomanip>
using namespace std;


int main(){

float f1 , f2 , f3 , f4 ;
cout << "\n enter a number : " ;
cin >> f1 ;
cout << "\n enter a number : " ;
cin >> f2 ;
cout << "\n enter a number : " ;
cin >> f3 ;
cout << "\n enter a number : " ;
cin >> f4 ;
cout << setw(8) << setiosflags ( ios::fixed ) << setprecision(2)
<< setiosflags(ios::right)<< f1 ;
cout<< setw(8) << f2 << "\n" ;
cout << setw(8) << f3 ;
cout << setw(8) << f4 << "\n " ;
return EXIT_SUCCESS ;

}
