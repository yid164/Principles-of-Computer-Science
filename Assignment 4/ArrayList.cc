// Name: Yinsheng Dong
// Student Number: 11148648
// NSID: yid164
// Lecture Section: CMPT 115 (02)

#include "ArrayList.h"
#include <cstring>
#include <iostream>

using namespace std;

// CONSTRUCTOR and DESTRUCTOR
// create a new empty list of specified size.
// pre: size is the desired maximum capacity of the list.
// returns: a pointer to newly created List, or NULL if List could not be created.
List *createList() {
  List *l = new List;
  if (l == NULL) {
    return NULL;
  }
  l->tail = -1;
  l->data = new Element[1];
  if (l-> data == NULL){
     delete l; 
     return NULL;
  }
  l->capacity = 1;
  l->count = 0;
  return l;
}


// destroy an existing list
// pre: a pointer to a List
// post: deallocates List .  Does not deallocate contents! (may cause a memory leak)
void destroyList(List* l) {
  delete [] l->data;
  delete l;
}

// Algorithm growList (rList)
// Attempt to double the capcity of rlist
// Pre: rList :: reference to a list to grow
// Post: capacity of rList has been doubled, list contents are unchanged
// Return: true if the grow operation succeeds, false otherwise

bool growList (List* l)
{
    Element *data = new Element [2 * (l->capacity)];
    
    if(data != NULL)
    {
        int i = 0;
        while (i < l->count)
        {
            data[i] = l->data[i];
            i++;
        }
        l->capacity = 2 * (l->capacity);
        delete [] l->data;
        l->data = data;
        return true;
    }
    else
    {
        return false;
    }
    
}


// STATUS
// check whether the list is empty
// pre: a pointer to a List.
// returns: true if List is empty, false otherwise.
bool emptyList(List* l) {
  return (0 == l->count);
}

// STATUS
// check whether the list is empty
// pre: a pointer to a List.
// returns: true if List is empty, false otherwise.
bool fullList(List* l) {
  return (l->capacity == l->count);
}


// return the number of elements in the list
// pre: a pointer to the List.
// returns: number of elements in the List.
int lengthList(List* l) {
  return l->count;
}


// insert the element into the list at the end of the list
// pre: a pointer to a List, and an element to insert.
// post: the Element is placed in the List as long as long as the list is not full.
// returns: true if successful, false otherwise.
bool insertTail(List* l, Element e)
{
    if (fullList(l))
    {
        if (!growList(l))
            return false;
    }
    l->data[l->count] = e;
    l->count++;
    l->tail++;
    return true;
}

// delete the element at the end of the list
// pre: a pointer to a list, and a pointer to an Element
// post: if list is non-empty, it removes the last element, and deallocates memory 
// associated with deleted element.
// returns: true if it deleted something, false otherwise.
bool deleteTail(List* l, Element *e) {
  if (emptyList(l)) {
     return false;
  } else {
    *e = l->data[l->count-1];
    l->count--;
    l->tail--;
    return e;
  }
}

// eof

