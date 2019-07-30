// Name: Yinsheng Dong
// Student Number: 11148648
// NSID: yid164
// Lecture Section: CMPT 115 (02)

#include "Element.h"
#include "Queue.h"
#include <iostream>

using namespace std;

int main()
{
    
    Queue *q = new Queue;
    
    q = createQueue (10);
    
    int x = 1;
    int y;
    
    char inPut;
    
    while (q->capacity<=10)
    {
        cout << "Enter t to take a number, or c to call next number, or q to quit:" <<endl;
        cin >> inPut;
        
        if (inPut == 'q')
        {
            destroyQueue(q);
            cout<< "GoodBye!" << endl;
            return EXIT_SUCCESS;
        }
        
        else if (inPut =='t')
        {
            if (enqueue(q,x))
            {
                cout << "You have number " << x <<endl;
                x++;
            }
            
            else
            {
                cout << " The Queue is FULL "<<endl;
            }
            
        }
        else if (inPut=='c')
        {
            if (dequeue(q, &y))
            {
                cout << "The number " << y << " should leave the line."<<endl;
            }
            else
            {
                cout << " There are no numbers in the queue "<<endl;
            }
        }
        else
        {
            cout << "Please enter the correct letter" <<endl;
        }
    }
    
    return 0;
}