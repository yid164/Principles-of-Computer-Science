// file: lab6test.cc
// start testing Lab 6 material
// This test assumes Element is int

#include <iostream>

#include "NodeList.h"

using namespace std;

int main(){
  // Test to see if the list operations 
  // work properly.
  cout << "Testing!  Testing!  One, two, three..." << endl;

  //create list
  List *myList = createList();
  int testLimit = 5;
  
  // add some numbers to the list
  for (int i = 1; i < testLimit; i++) {
    insertTail(myList,i);
  }

  // testing deleteHead()
  // values should appear in the order they were inserted.
  int data;
  while (lengthList(myList) > 0) {
    deleteHead(myList,&data);
    cout << "deleted " << data << endl;
  }
  
  destroyList(myList);

  cout << "Not with a whimper but with a !" << endl;
}
