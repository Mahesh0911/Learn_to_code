#include <iostream>
#include <stdlib.h>
#include <stdio.h>
using namespace std;


struct Node{
    int key;
    struct Node *left;
    struct Node *right;
    int height;
};

int max(int a,int b){
    return a > b ? a : b;
}

int getHeight(struct Node * n){
    if (n == NULL)
    {
        return 0;
    }else{
        return n->height;
    }
    
}

struct Node * createNode(int key){
    struct Node *node = (struct Node *)malloc(sizeof(struct Node));
    node->key = key;
    node->left = NULL;
    node->right = NULL;
    node->height = 1;
    return node;
}

int getBalanceFactor(struct Node * n){
    if (n==NULL)
    {
        return 0;
    }
    return getHeight(n->left) - getHeight(n->right);
}

struct Node * righttRotate(struct Node * y){
    struct Node *x = y->left;
    struct Node * t2 = x->right;

    x->right = y;
    y->left = t2;

    y->height = max(getHeight(y->right), getHeight(y->left)) + 1;
    x->height = max(getHeight(x->right), getHeight(x->left)) + 1;
    return x;
}


struct Node * lefttRotate(struct Node * x){
    struct Node *y = x->right;
    struct Node * t2 = y->left;

    y->left = x;
    x->right = t2;

    y->height = max(getHeight(y->right), getHeight(y->left)) + 1;
    x->height = max(getHeight(x->right), getHeight(x->left)) + 1;
    return y ;
}


struct Node * insert(struct Node * node,int key){
    if (node==NULL)
    {
        return (createNode(key));
    }
    if (key< node->key)
    {
        node->left = insert(node->left, key);
    }else if (key > node->key)
    {
        node->right = insert(node->right, key);
        return node;
    }
    node->height = 1 + max(getHeight(node->left), getHeight(node->right));
    int bf = getBalanceFactor(node);


    //left left case
    if (bf>1 && key<node->left->key)
    {
        return righttRotate(node);
    }
    

    //right right case
    if (bf<-1 && key>node->right->key)
    {
        return lefttRotate(node);
    }
    //left right case
    if (bf>1 && key>node->left->key)
    {
        node->left = lefttRotate(node->left);
        return righttRotate(node);
    }
    //right left case
    if (bf< -1 && key < node->left->key)
    {
        node->right = righttRotate(node->right);
        return lefttRotate(node);
    }
    return node;
}

// in order trversal  -------> left subtree ->  Root  ->  Right subtree
void inorder(struct Node *root)
{
    if (root != NULL)
    {
        inorder(root->left);
        cout << root->key << " ";
        inorder(root->right);
    }
}

int main()
{
    struct Node *root = NULL;
    root = insert(root, 45);
    root=insert(root,6);
    root=insert(root,3);
    root=insert(root,5);
    root=insert(root,4);
    root = insert(root, 45);
    root=insert(root,1);
    root=insert(root,2);
    root=insert(root,8);
    root=insert(root,9);


    cout << "Inorder : ";
    inorder(root);
    return 0;
}
