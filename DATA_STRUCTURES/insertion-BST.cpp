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



void insert(struct Node * root,int key){
    struct Node * prev=NULL;
    while(root != NULL){
        prev=root;
        if (key == root->data)
        {
            return;
        }else if (key < root->data)
        {
            root=root->left;
        }else{
            root=root->right;
        }

    }
    struct Node * ptr=createNode(key);
    if (key < prev ->data)
    {
        prev->left=ptr;
    }else{
        prev->right=ptr;
    }
    


}


// recursive searching operation in BST -
int search(struct Node *root, int key)
{
    if (root == NULL)
    {
        return 0;
    }
    if (root->data == key)
    {
        return root->data;
    }
    else if (root->data > key)
    {
        return search(root->left, key);
    }
    else
    {
        return search(root->right, key);
    }
}

// searching operation by traversing pointer-iteration
struct Node *iterSearch(struct Node *root, int key)
{
    while (root != NULL)
    {
        if (root == NULL)
        {
            return 0;
        }
        if (root->data == key)
        {
            return root;
        }
        else if (root->data > key)
        {
            root = root->left;
        }
        else
        {
            root = root->right;
        }
    }
    return NULL ;
}

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

// in order trversal  -------> left subtree ->  Root  ->  Right subtree
void inorder(struct Node *root)
{
    if (root != NULL)
    {
        inorder(root->left);
        cout << root->data << " ";
        inorder(root->right);
    }
}


int main()
{
    // creating node using function
    struct Node *p = createNode(2);  //              2
    struct Node *p1 = createNode(0); //             /   \      /
    struct Node *p2 = createNode(5); //           0      5
    struct Node *p3 = createNode(1); //          / \    /  \   /
    struct Node *p4 = createNode(6); //        -1   1  4    6
    struct Node *p6 = createNode(-1);
    struct Node *p5 = createNode(4); //

    // linking left and right nodes of tree
    p->left = p1;
    p->right = p2;
    p1->right = p3;
    p1->left = p6;
    p2->right = p4;
    p2->left = p5;

    
    cout << "\n"<< isBst(p) << endl;
    // cout << "search : " << search(p, 10)<<endl;


    //code for searching element by iteration
    // struct Node * m=iterSearch(p,6);
    // if(m != NULL){
    //     cout<<"Element is : "<<m->data;
    // }else {
    //     cout<<"Element not found ." ;
    // }


    //insertion
    insert(p,5);
    cout << "Inorder : ";
    inorder(p);


    return 0;
}