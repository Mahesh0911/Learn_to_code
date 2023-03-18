#include <iostream>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

struct Node
{

    int data;
    struct Node *next;
};

// global
struct Node *f = NULL;
struct Node *r = NULL;

// linked list traversal
void lilitraver(struct Node *ptrr)
{
    cout << "traversing" << endl;

    // using while loop
    while (ptrr != NULL)
    {

        cout << "Element :" << ptrr->data << endl;
        ptrr = ptrr->next;
    }
}

void enqueR(int val)
{
    struct Node *n = (struct Node *)malloc(sizeof(struct Node *));
    if (n == NULL)
    {
        cout << "queue is full";
    }
    else
    {
        n->data = val;
        n->next = NULL;
        if (f == NULL)
        {
            f = r = n;
        }
        else
        {
            r->next = n;
            r = n;
        }
        cout << "enqueuedR :" << val << endl;
    }
}

void enqueF(int val)
{
    struct Node *n = (struct Node *)malloc(sizeof(struct Node *));
    if (n == NULL)
    {
        cout << "queue is full";
    }
    else
    {

        if (f == NULL)
        {
            f = r = n;
        }
        else
        {
            n->data = val;
            n->next = f;
            f = n;
        }
        cout << "enqueuedF :" << val << endl;
    }
}

int dequeF()
{
    int val = -1;
    struct Node *ptr = f;
    if (f == NULL)
    {
        cout << "queue is empty .\n";
    }
    else
    {
        f = f->next;
        val = ptr->data;
        free(ptr);
    }
    return val;
}

int dequeR()
{
    int val = -1;
    struct Node *ptr = r;
    if (f == NULL)
    {
        cout << "queue is empty .\n";
    }
    else
    {
    struct Node * ex=new struct Node;
    ex=f;
    struct Node * ex1=new struct Node;
    ex1=f->next;
    while (ex1->next!= NULL)
    {
        ex1=ex1->next;
        ex=ex->next;
    }
    val=ex1->data;
    free(ex1);
    ex->next=NULL;
    r=ex;

    }
    return val;
}

int main()
{

    // lilitraver(f);
    enqueF(12);
    enqueF(13);
    enqueF(14);
    enqueF(15);

    // lilitraver(f);
    enqueR(12);
    enqueR(13);
    enqueR(14);
    enqueR(15);
    cout << "removing elements F:" << dequeF() << endl;
    cout << "removing elements F:" << dequeF() << endl;
    cout << "removing elements F:" << dequeF() << endl;
    cout << "removing elements F:" << dequeF() << endl;
    cout << "removing elements F:" << dequeF() << endl;
    cout << "removing elements R:" << dequeR() << endl;
    cout << "removing elements R:" << dequeR() << endl;
    cout << "removing elements R:" << dequeR() << endl;
    cout << "removing elements R:" << dequeR() << endl;
    // lilitraver(f);

    return 0;
}
