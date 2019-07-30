// Name: Yinsheng Dong
// Student Number: 11148648
// NSID: yid164
// Lecture Section: CMPT 115 (02)

#include <iostream>
#include "BSTree.h"
using namespace std;



// Create a binary search tree
// Post: a new empty tree is created
// Return: the new tree
//
Tree *CreateBST()
{
    Tree *rTree = new Tree;
    rTree->root = NULL;
    return rTree;
}

// Algorithm DestroyNodeBST(refToNodeTree rTree )
// Destroy a tree.
// Pre: rTree is a tree
// Post: all nodes in rTree are deallocated.

void DestroyNodeBST(TreeNode* rTree)
{
    if (rTree != NULL)
    {
        return DestroyNodeBST (rTree->left);
        return DestroyNodeBST (rTree->right);
        delete rTree;
    }
    
}
// Destroy a binary search tree
// Pre: given a tree
// Post: the tree is detroyed and all memory returned to the heap
//
void DestroyBST(Tree* rTree)
{

    DestroyNodeBST (rTree->root);

}


//Algorithm searchNodeBST(rNode, target, rDataOut)
//Searches a binary search tree starting at node rNode for target
//Pre: rNode :: TreeNode
//     target is the key of the data element to search for
//     rDataOut :: refToElement
//Post: *rDataOut contains data of element with target as data if found
//Return: true if found, false otherwise

bool searchNodeBST (const TreeNode * rTree, const Element target, Element *rDataOut)
{
    if (rTree == NULL)
    {
        return false;
    }
    else if (target < (rTree->data))
    {
        return searchNodeBST (rTree->left, target, rDataOut);
    }
    else if (target > (rTree->data))
    {
        return searchNodeBST (rTree->right, target, rDataOut);
    }
    else
    {
        *rDataOut = rTree->data;
        return true;
    }
    
}

// Searches a binary search tree starting at node rRoot for target
// Pre: rTree is a reference to a BST
//      target is the key of the data element to search for
//		rDataOut is a reference of type Element
// Post: tree is unchanged.
// Return: true if round, false otherwise
bool SearchBST(const Tree * rTree, const Element target, Element *rDataOut)
{
    return searchNodeBST (rTree->root, target, rDataOut);
}

//Algorithm insertNodeBST (rNode, nData)
//Inserts the new data into the TreeNodes of a binary search tree start- ing at node rNode
//Pre: rNode is a reference to a TreeNode in rTree
//     nData is the data element to insert into a new node
//Post: a new node is created with nData as data and inserted into the
//  tree at rNode if the data is not already in tree, and rTree will
//  remain a binary search tree.
//Return: returns the root of the modified subtree.
TreeNode *insertNodeBST (TreeNode * rTree, const Element nData)
{
    if (rTree == NULL)
    {
        TreeNode *rNew = new TreeNode;
        rNew->data = nData;
        rNew->left = NULL;
        rNew->right = NULL;
        return rNew;
    }
    else if (nData == rTree->data)
    {
        return rTree;
    }
    else if (nData < rTree->data)
    {
       rTree->left = insertNodeBST (rTree->left, nData);
        return rTree;
    }
    else if (nData>rTree->data)
    {
        rTree->right = insertNodeBST(rTree->right, nData);
        return rTree;
    }
    return 0;
}


// Insert a node into a binary search tree
// Pre: rTree is a reference to a binary search tree
//      nData is the data element to insert into a new node
// Post: a new node with nData as data and inserted a new node in the tree such that rTree remains a binary search tree.
// Return: Nothing
void InsertBST(Tree * rTree, const Element nData)
{
    rTree->root = insertNodeBST (rTree->root, nData);
}

// Delete a node from a binary search tree
// Pre: rTree is a reference to a binary search tree
//      nData is the data element of the node to be deleted
//      rDataOut is a reference of type Element
// Post: if there is a node containing nData, it is removed from tree, and its data place in *rDataOut
// Return: true if node deleted, false otherwise.
bool DeleteBST(Tree * rTree, const Element nData, Element *rDataOut)
{
    TreeNode *rNode = rTree->root;
    TreeNode *rParent = NULL;
    TreeNode *rNew;
    TreeNode *rBiggest;
    while ((rNode != NULL) && (rNode->data!= nData))
    {
        rParent = rNode;
        if (nData<rNode->data)
        {
            rNode = rNode->left;
        }
        else
        {
            rNode = rNode->right;
        }
    }
    if (rNode==NULL)
    {
        return false;
    }
    else
    {
        if (rNode->left == NULL)
        {
            rNew = rNode->right;
        }
        else if (rNode->right==NULL)
        {
            rNew=rNode->left;
        }
        else
        {
            rBiggest=rNode->left;
            while (rBiggest->right != NULL)
            {
                rBiggest=rBiggest->right;
            }
            rBiggest->right=rNode->right;
            rNew = rNode->left;
        }
        if (rNode==rTree->root)
        {
            rTree->root=rNew;
        }
        else if (rParent->left==rNode)
        {
            rParent->left = rNew;
        }
        else
        {
            rParent->right = rNew;
        }
        *rDataOut=rNode->data;
        delete rNode;
        return true;
    }
}

//Algorithm InorderTNodes(rTreeNode)
//Processes each node of rTreeNode exactly once using a inorder traversal using the Process() algorithm.
//Pre: rTreeNode is a linked set of TreeNodes.
//Post: Each node has been processes in pre-order

void InorderTNodes (TreeNode *rTree)
{
    if (rTree != NULL)
    {
        InorderTNodes(rTree->left);
        cout << rTree->data <<endl;
        InorderTNodes(rTree->right);
    }
}



// Print the inorder of a given tree
void PrintInOrder(Tree *rTree)
{
    InorderTNodes(rTree->root);
}
