// Name: Yinsheng Dong
// Student Number: 11148648
// NSID: yid164
// Lecture Section: CMPT 115 (02)


#include <iostream>
#include <cstdlib>
#include "Tree.h"
using namespace std;

// Pre: d :: Element -- the data to store in the tree
// Post:  a new Tree node is allocated
// Return: a tree of one node, with the given data stored in it,
//         or NULL if the memory cannot be allocated
Tree *CreateTree(Element d)
{
    Tree *t= new Tree;
    t->data = d;
    t->left = NULL;
    t->right = NULL;
    return t;

}

// Pre:  t::refToTree -- the tree to be destroyed
// Post: memory allocated to t is deallocated
// Return: nothing
void DestroyTree(Tree *t)
{
    if (t!=NULL)
    {
        DestroyTree(t->left);
        DestroyTree(t->right);
        delete t;
    }
}

void printing(const Element e)
{
    cout << e << " " <<endl;
}

// Pre:  t::refToTree -- a tree
//       l::refToTree -- a tree to connect as the left subtree of t
// Post: l is t's left subtree, unless t already has a left subtree
// Return: true if the connection can be made; false otherwise
bool insertLeft(Tree *t, Tree *l)
{
    if ( t->left == NULL)
    {
        t->left = l;
        return true;
    }
    else
    {
        return false;
    }
}

// Pre:  t::refToTree -- a tree
//       r::refToTree -- a tree to connect as the right subtree of t
// Post: r is t's right subtree, unless t already has a right subtree
// Return: true if the connection can be made; false otherwise
bool insertRight(Tree *t, Tree *r)
{
    if (t->right == NULL)
    {
        t->right = r;
        return true;
    }
    else
    {
        return false;
    }
}

// Pre:  t::refToTree -- a tree
// Post: the tree is traversed (for now, display each Element to the console)
// Return: nothing
void inOrder(Tree *t)
{
    if (t!=NULL)
    {
        inOrder (t->left);
        printing(t->data);
        inOrder (t->right);
    }
}

// Pre:  t::refToTree -- a tree
// Post: the tree is traversed (for now, display each Element to the console)
// Return: nothing
void preOrder(Tree *t)
{
    if (t!=NULL)
    {
        printing(t->data);
        preOrder (t->left);
        preOrder (t->right);
    }
    else
    {
        cout << "error in preOrder"<<endl;
    }
}

// Pre:  t::refToTree -- a tree
// Post: the tree is traversed (for now, display each Element to the console)
// Return: nothing
void postOrder(Tree *t)
{
    if (t!=NULL)
    {
        postOrder (t->left);
        postOrder(t->right);
        printing(t->data);
    }
}

// Pre:  t::refToTree -- a tree
// Post: nothing
// Return: t's left subtree (could be NULL)
Tree *getLeft(Tree *t)
{
    return t->left;
    
}

// Pre:  t::refToTree -- a tree
// Post: nothing
// Return: t's right subtree (could be NULL)
Tree *getRight(Tree *t)
{
    return t->right;
}
