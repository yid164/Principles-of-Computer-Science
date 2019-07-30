// File: BST.h
// 2013.T2.CMPT.115.A5
// Synopsis: defines the interface for a Binary Search Tree 

#include <iostream>
#include <cstdlib>
#include "Tree.h"

#ifndef _BST_h_
#define _BST_h_

// Pre: t::refToTree -- a Tree with the binary search tree property
//      d::refToElement -- a place to store the data if found
// Post: nothing
// Return : true if d is found in t, false otherwise
bool search(Tree *t, Element *d);

// Pre: t::refToTree -- a Tree with the binary search tree property
//      d::Element -- an element to store in the tree 
// Post: t now contains d
// Return : a reference to the tree t, or NULL
Tree *insert(Tree *t, Element d);
Tree *insertALTERNATE(Tree *t, Element d);

#endif
