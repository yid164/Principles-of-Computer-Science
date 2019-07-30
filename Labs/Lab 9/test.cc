// Name: Yinsheng Dong
// Student Number: 11148648
// NSID: yid164
// Lecture Section: CMPT 115 (02)

#include <iostream>
#include "BSTree.h"
using namespace std;

int main ()
{
    Element *c = new Element;
    Tree *t = CreateBST();
    InsertBST (t,7);
    InsertBST (t, 100);
    InsertBST (t, 1);
    InsertBST (t,2);
    if (SearchBST(t, 2, c))
    {
        
        cout << "1 has found"<<endl;
    }
    if (SearchBST(t, 1, c))
    {
        
        cout << "2 has found" <<endl;
    }
    if (SearchBST(t,4,c))
    {
        cout << "1斤 has found" <<endl;
    }
    if (SearchBST(t,7,c))
    {
        cout << "7 has found" <<endl;
    }
    
    PrintInOrder(t);
    
    DeleteBST(t,2,c);
    DeleteBST (t,100,c);
    DeleteBST (t,1,c);
    
    PrintInOrder (t);
    
    
    DestroyBST (t);
}
