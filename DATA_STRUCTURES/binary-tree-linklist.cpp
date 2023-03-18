#include <iostream>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
};

struct Node *createNode(int data)
{
    struct Node *n;                                 // creating node pointer
    n = (struct Node *)malloc(sizeof(struct Node)); // allocating memory in heap
    n->data = data;                                 // setting the data
    n->left = NULL;                                 // setting left child to null
    n->right = NULL;                                // setting right child to null
    return n;                                       // finally returning the created node
}

// Binary Tree

int main()
{
    /*


    //root node created
    struct Node * p;
    p=(struct Node *)malloc(sizeof(struct Node));
    p->data=2;
    p->left=NULL;
    p->right=NULL;

    //creating left node
    struct Node * p1;
    p1=(struct Node *)malloc(sizeof(struct Node));
    p->data=1;
    p1->left=NULL;
    p1->right=NULL;

    //creting right node
    struct Node * p2;
    p2=(struct Node *)malloc(sizeof(struct Node));
    p->data=4;
    p2->left=NULL;
    p2->right=NULL;

    p->left=p1;
    p->right=p2;


    */

    // creating node using function
    struct Node *p = createNode(2);
    struct Node *p1 = createNode(1);
    struct Node *p2 = createNode(4);

    // linking left and right nodes of tree
    p->left = p1;
    p->right = p2;

    return 0;
}
