// Name: Yinsheng Dong
// Student Number: 11148648
// NSID:yid164
// Lecture Section: CMPT 115 (02)




#include <iostream>
#include <cstring>
using namespace std;

void reverse (char s[])
{
    
    char a[50];
    char b[50];
    
    for(int i=0; i<(strlen(s)/2);i++)
    {
        a[i]=s[i];
    }
    int t = 0;
    for(int h=(strlen(s)/2); h < strlen(s); h++,t++)
    {
        b[t]=s[h];
    }
    
    b[t]='\0';
    
    
    strcat(b,a);
    strcpy(s,b);
    
    
    
}

int main()
{
    char text[100];
    cout<<"Please enter the strings"<<endl;
    cin.getline(text,100);
    reverse(text);
    cout<<text<<endl;
    
    return 0;
}
