// File: BSTDriver.cc
// 2013.T2.CMPT.115.A5
// Synopsis: Builds a binary search tree at random
//           displays the elements using InOrder traversal


#include <iostream>
#include <cstdlib>
#include "BST.h"

using namespace std;

int main() {

  // This tree will have integer values -- edit Element.h
  Tree *aTree;

  // the number of values in the tree
  int size = 50;

  // we're building a tree with random values.
  // The values will be a little bigger than the size of the tree
  aTree = CreateTree(rand() % (size*1000));
  for (int i = 1; i < size; i++) {
    insertALTERNATE(aTree,rand() % (size*1000));
  }
  
  // test the search functionality by inserting a known Element
  Element target = 1234;
  if (search(aTree,&target))
  {
    // could be there by luck...
    cout << "Found " << target << " in tree already!  How lucky!" << endl;
  }
  else
  {
    // insert it 
      insert(aTree,target);
      // and check that we can find it after it was inserted
      if (!search(aTree,&target))
      {
	cout << "Ooops!  Did not find " << target << " in tree (even though I tried to put it there)! " << endl;
      }
      else
      {
	cout << "Found " << target << " in tree!" << endl;
      }
  }
  
  // test the inOrder traversal, which should display the values in the tree 
  // in numeric order from small to large.
  inOrder(aTree);

  // tidy up!
  DestroyTree(aTree);

  return 0;
}

