// File: Tree.h
// 2013.T2.CMPT.115.A5
// Synopsis: defines the interface for a Tree 

#include <iostream>
#include "Element.h"

#ifndef _Tree_h_
#define _Tree_h_

struct Tree {
  Element data;
  Tree *left, *right;
};

// Pre: d :: Element -- the data to store in the tree
// Post:  a new Tree node is allocated
// Return: a tree of one node, with the given data stored in it, 
//         or NULL if the memory cannot be allocated
Tree *CreateTree(Element d);

// Pre:  t::refToTree -- the tree to be destroyed
// Post: memory allocated to t is deallocated
// Return: nothing
void DestroyTree(Tree *t);

// Pre:  t::refToTree -- a tree
//       l::refToTree -- a tree to connect as the left subtree of t
// Post: l is t's left subtree, unless t already has a left subtree
// Return: true if the connection can be made; false otherwise
bool insertLeft(Tree *t, Tree *l);

// Pre:  t::refToTree -- a tree 
//       r::refToTree -- a tree to connect as the right subtree of t
// Post: r is t's right subtree, unless t already has a right subtree
// Return: true if the connection can be made; false otherwise
bool insertRight(Tree *t, Tree *r);

// Pre:  t::refToTree -- a tree
// Post: the tree is traversed (for now, display each Element to the console)
// Return: nothing
void inOrder(Tree *t);

// Pre:  t::refToTree -- a tree
// Post: the tree is traversed (for now, display each Element to the console)
// Return: nothing
void preOrder(Tree *t);

// Pre:  t::refToTree -- a tree
// Post: the tree is traversed (for now, display each Element to the console)
// Return: nothing
void postOrder(Tree *t);

// Pre:  t::refToTree -- a tree
// Post: nothing
// Return: t's left subtree (could be NULL)
Tree *getLeft(Tree *t);

// Pre:  t::refToTree -- a tree
// Post: nothing
// Return: t's right subtree (could be NULL)
Tree *getRight(Tree *t);

#endif
