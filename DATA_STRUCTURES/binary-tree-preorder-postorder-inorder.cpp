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

//preorder traversal ---->   Root  ->  Left subtree  ->  Right subtree
void preorder(struct Node * root){
    if (root!=NULL)
    {
        cout<<root->data<<" ";
        preorder(root->left);
        preorder(root->right);
    }
    

}

//post order trversal  -------> left subtree->  Right subtree  ->  Root
void postorder(struct Node * root){
    if (root!=NULL)
    {
        postorder(root->left);
        postorder(root->right);
        cout<<root->data<<" ";
    }
    

}


//post order trversal  -------> left subtree ->  Root  ->  Right subtree  
void inorder(struct Node * root){
    if (root!=NULL)
    {
        inorder(root->left);
        cout<<root->data<<" ";
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
    struct Node *p = createNode(2);                 //             2
    struct Node *p1 = createNode(1);                //           /   \ 
    struct Node *p2 = createNode(4);                //         1       4
    struct Node *p3 = createNode(0);                 //       / \     / \
    struct Node *p4 = createNode(5);                 //   Null   0   6   5                 
    struct Node *p5 = createNode(6);                 //               

    // linking left and right nodes of tree
    p->left = p1;
    p->right = p2;
    p1->right = p3;
    p1->left = NULL;
    p2->right = p4;
    p2->left = p5;


    cout<<"Preorder : ";
    preorder(p);
    cout<<endl;
    cout<<"Postorder : " ;
    postorder(p);
    cout<<endl;
    cout<<"Inorder : ";
    inorder(p);

    return 0;
}