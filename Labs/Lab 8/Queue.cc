// Name: Yinsheng Dong
// Student Number: 11148648
// NSID: yid164
// Lecture Section: CMPT 115 (02)


#include "Element.h"
#include "Queue.h"
#include <iostream>


// Algorithm createQueue(cap)
// Pre: cap :: integer, the capacity of the new Queue
// Post: allocates space for the Queue, total of cap Elements
// Return: a reference to the new Queue
Queue *createQueue(int capacity) {
    Queue *q = new Queue;
    q->elts = new Element;
    q->capacity = capacity;
    q->head = 0;
    q->numElements = 0;
    return q;
}

// Algorithm destroyQueue()
// Post: deallocates space used by the Queue
void destroyQueue(Queue *q) {
    q->numElements = 0;
    q->head = 0;
    q->capacity = 0;
    q->elts = NULL;
    delete q;
}

// Algorithm enqueue(q,e)
// Pre: q :: reference to a Queue
//      e :: Element
// Post: Stores e in q
// Return: true if successful, false if queue is already full

bool enqueue(Queue *q, Element e) {
    if (!queueFull(q)) {
        q->elts[(q->head+q->numElements)%(q->capacity)]=e;
        q->numElements = q->numElements + 1;
        
        return true;
    }
    else
    {
        return false;
    }
    
    
}

// Algorithm dequeue(q,e)
// Pre: q :: reference to Queue
//      e :: reference to Element
// Post: copies data to *e, and removes it from queue
// Return: true if successful, false if queue is already empty

bool dequeue(Queue *q, Element *e) {
    if(!queueEmpty(q))
    {
        *e=q->elts[q->head];
        q->head = (q->head) +1;
        q-> numElements = (q->numElements) - 1;
        
        return true;
    }
    else
    {
        return false;
    }
}

// Algorithm queueSize(q)
// Pre: q :: reference to a Queue
// Return: the number of elements in the queue
int queueSize(Queue *q) {

    return q->numElements;

}

// Algorithm queueEmpty(q)
// Pre: q :: reference to a Queue
// Return: true if the queue is empty, false otherwise
bool queueEmpty(Queue *q) {
    if (queueSize(q)==0) {
        return true;
    }
    else
    {
        return false;
    }
}


// Algorithm queueFull(q)
// Pre: q :: reference to a Queue
// Return: true if the queue is full, false otherwise
bool queueFull(Queue *q) {
    if(queueSize(q) == q->capacity)
    {
        return true;
    }
    else
    {
        return false;
    }
}


// end of file

