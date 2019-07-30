// Name: Yinsheng Dong
// Student Number: 11148648
// NSID: yid164
// Lecture Section: CMPT 115 (02)


#include <iostream>
#include <cstring>
#include <fstream>

#include "NodeList.h"
#include "ListTraversal.h"


using namespace std;


bool isPalindrome(char *candidate, int start, int end){
    if(start > end)
    {
        return true;
    }
    
    else
    {
        if (candidate[start] == candidate [end - 1])
            {
                return isPalindrome (candidate, start +1, end - 1);
            }
        else
            {
                return false;
            }
    }
    

}

int main(){

  //define filename
    char const *file = "a6q4_input.txt";

  //open file
    ifstream f1;
    f1.open(file, ios::in);
    if( ! f1.is_open())
    {
        cout<<" the file "<< file <<" can not be opened" <<endl;
    }

  //create list
    List *list = createList();

  //read file contents into list
    while(!f1.eof())
    {
        char b [100];
        f1 >> b;
        char *a = new char [strlen(b) + 1];
        strcpy(a, b);
        insertTail (list, a);
    }

  //close the file
    f1.close();

  //display number of words read from file:
    cout<<"There are    " << lengthList (list) << "    outputs the total number of words from the file. "<<endl;

  //create a list traversal
    ListTraversal *listTraversal = CreateTraversal (list);

  //traverse list and print only the palindromes
    while (hasNext (listTraversal))
    {
        Element s = next(listTraversal);
        if(isPalindrome(s,0,strlen(s)))
        {
            cout<<"The element     " << s << "     is a palindrome word."<<endl;
        }
    }

  //cleanup data structures
    DestroyTraversal (listTraversal);
    destroyList (list);
}
