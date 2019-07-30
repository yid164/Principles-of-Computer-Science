// Name: Yinsheng Dong
// Student Number: 11148648
// NSID: yid164
// Lecute Section: CMPT 115 (02)

#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream inputFileStream;

    inputFileStream.open ("infile.txt",ios :: in);
    
    int a=0;
    float b=0;
    char c;
    float d=0;
    
    if(inputFileStream. is_open())
    {
        inputFileStream>>a>>b>>c>>d;
        cout<<a<<endl;
        cout<<b<<endl;
        cout<<c<<endl;
        cout<<d<<endl;
        cout<<endl;
        
    }
    else
    {
        cout<<"The file is not open"<<endl;
    }
    inputFileStream.close();
    
    return 0;

    

}
