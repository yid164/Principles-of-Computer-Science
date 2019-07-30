// File: Game.cc
// 2013.T2.CMPT.115.A5
// Synopsis: PLays a little game with questions stored in a tre.

#include <iostream>
#include "Tree.h"

using namespace std;

int main() {

  // space to store 15 pointers to Tree
  Tree *trees[15];

  // Space to store 15 silly strings.  
  // The indentation here reflects the position of the string in the tree
  // we'll build from them.  The 'comma first' helps a little to ensure that
  // each line has one.  
  char questions[15][100] = { "Do you seek the grail?"
			    ,  "Is blue your favorite colour?"
			    ,   "Are you sure?"
			    ,    "You may live!"
			    ,    "You are thrown into the canyon."
			    ,   "Can you fly?"
			    ,    "You fly to Europe with the sparrows."
			    ,    "You are eaten by the rabbit with nasty sharp pointy teeth."
			    , "Can you chop down the mighty oak with a halibut?"
			    ,   "Can you do it again?"
			    ,    "You are taunted by a tower guard."
			    ,    "You are taunted a second time by the tower guard."
			    ,   "Do you like spam?"
			    ,    "We like to push the pram a lot!"
			    ,    "Eggs spam sausage and spam doesn't have much spamin it"
                            };

  // Create 15 trees
  for (int i = 0; i < 15; i++)
  {
    trees[i] = CreateTree(questions[i]);
  }

  // Build a tree of questions and responses
  // In this example, trees[0] will be the root.
  // Note that since we have all the trees in an array, the connections are important
  // but the order in which they are connected is not important.
  insertLeft( trees[0], trees[1]); // root
  insertLeft( trees[1], trees[2]);
  insertLeft( trees[2], trees[3]);
  insertRight(trees[2], trees[4]);
  insertRight(trees[1], trees[5]);
  insertLeft( trees[5], trees[6]);
  insertRight(trees[5], trees[7]);
  insertRight(trees[0], trees[8]);
  insertLeft( trees[8], trees[9]);
  insertLeft( trees[9], trees[10]);
  insertRight(trees[9], trees[11]);
  insertRight(trees[8], trees[12]);
  insertLeft( trees[12],trees[13]);
  insertRight(trees[12],trees[14]);

  // display the tree, for debugging purposes
  // inOrder(trees[0]);

  // Now, play the game!
  Tree *cursor = trees[0];
  char yesorno;

  while (cursor->left != NULL)  // in the example tree if one subtree is NULL they both are
  {                             // this is not true in general, though!
    cout << cursor->data << " ";
    cin >> yesorno;
    if (yesorno == 'y') 
    {
      cursor = getLeft(cursor);
    }
    else if (yesorno == 'n') 
    {
      cursor = getRight(cursor);
    }
  }
  // display the final result
  cout << cursor->data << endl;

  // tidy up a bit!
  // Question:  why don't we have to destroy every Tree in trees?
  DestroyTree(trees[0]);

  return 0;
}

