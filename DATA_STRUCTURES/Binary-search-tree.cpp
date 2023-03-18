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

int isBst(struct Node *root)
{
    static struct Node *prev = NULL;
    if (root != NULL)
    {
        if (!isBst(root->left))
        {
            return 0;
        }
        if (prev != NULL && root->data <= prev->data)
        {
            return 0;
        }
        prev = root;
        return isBst(root->right);
    }
    else
    {
        return 1;
    }
}

// post order trversal  -------> left subtree ->  Root  ->  Right subtree
void inorder(struct Node *root)
{
    if (root != NULL)
    {
        inorder(root->left);
        cout << root->data << " ";
        inorder(root->right);
    }
}

struct Node *createNode(int data)
{
    struct Node *n;                                 // creating node pointer
    n = (struct Node *)malloc(sizeof(struct Node)); // allocating memory in heap
    n->data = data;                                 // setting the data
    n->left = NULL;                                 // setting left child to null
    n->right = NULL;                                // setting right child to null
    return n;                                       // finally returning the created node
}
int main()
{
    // creating node using function
    struct Node *p = createNode(2);  //              2
    struct Node *p1 = createNode(0); //             /   \      /
    struct Node *p2 = createNode(5); //           0      4
    struct Node *p3 = createNode(1); //          / \    /  \   /
    struct Node *p4 = createNode(6); //       -1   1  5    6
    struct Node *p6 = createNode(-1);
    struct Node *p5 = createNode(4); //

    // linking left and right nodes of tree
    p->left = p1;
    p->right = p2;
    p1->right = p3;
    p1->left = p6;
    p2->right = p4;
    p2->left = p5;

    cout << "Inorder : ";
    inorder(p);
    cout << "\n"
         << isBst(p);

    return 0;
}