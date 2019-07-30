// Name: Yinsheng Dong
// Student Number: 11148648
// NSID: yid164
// Lecure Section: CMPT 115 (02)

#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream inputFileStream;
    
    inputFileStream.open ("input.txt", ios :: in);
    
    char a ='e';
    int q = 0;
    
    
    
    if(inputFileStream. is_open())
    {
        char b;
        inputFileStream >>b;
        while(!inputFileStream.eof())
        {
            if(b==a)
            {
                q=q+1;
            }
            inputFileStream>>b;
        }
        cout<< "There are "<< q <<" 'e' inside of the file" <<endl;
        inputFileStream.close();
        
    }
    
    else
    {
        cout<< "The file cannot be opened"<<endl;
    }
    
    
    
    
    
    return 0;
}
