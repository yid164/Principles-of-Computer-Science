// Name: Yinsheng Dong
// Student Number: 11148648
// NSID: yid164
// Lecture Section: CMPT 115 (02)

#include <iostream>
#include <cstdlib>
#include "BST.h"


// Pre: t::refToTree -- a Tree with the binary search tree property
//      d::refToElement -- a place to store the data if found
// Post: nothing
// Return : true if d is found in t, false otherwise
bool search(Tree *t, Element *d)
{
    if (t!= NULL)
    {
        if (*d == t->data)
        {
            return true;
        }
        else if (*d > t->data)
        {
            return search(t->right, d);
        }
        else
        {
            return search (t->left, d);
        }
    }
    else
    {
        return false;
    }
}

// Pre: t::refToTree -- a Tree with the binary search tree property
//      d::Element -- an element to store in the tree
// Post: t now contains d
// Return : a reference to the tree t, or NULL
Tree *insert(Tree *t, Element d)
{
    if ( t== NULL)
    {
        return CreateTree (d);
    }
    else if ( d > t->data)
    {
        t->right = insert (t->right,d);
        return t;
    }
    else if (d < t->data)
    {
        t->left = insert (t->left,d);
        return t;
    }
    else
    {
        return t;
    }

}
Tree *insertALTERNATE(Tree *t, Element d)
{
    if (t == NULL)
    {
        return CreateTree (d);
    }
    else if (d > t->data)
    {
        t->right = insertALTERNATE (t->right,d);
        return t;
    }
    else if (d < t->data)
    {
        t->left = insertALTERNATE (t->left,d);
        return t;
    }
    else
    {
        return t;
    }
}
