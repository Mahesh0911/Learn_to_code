#include<iostream>
#include<stdlib.h>
#include<stdio.h>
using namespace std;


struct Node{
    int data;
    struct Node * prev;
    struct Node * next;
};

//doubly linked list traversal
void travdoli(struct Node * head,struct Node * last){
    while (head != NULL)
    {
        cout<<"Element is : "<<head->data<<endl;
        head=head->next;
    }
    while (last != NULL)
    {
        cout<<"Element is : "<<last->data<<endl;
        last=last->prev;
    }
    
}


int main()
{
    struct Node * one=new struct Node ;
    struct Node * two=new struct Node ;
    struct Node * three=new struct Node ;
    struct Node * four=new struct Node ;
    struct Node * five=new struct Node ;

    one->prev=NULL;
    one->data=1;
    one->next=two;


    two->prev=one;    
    two->data=2;
    two->next=three;

    three->prev=two;    
    three->data=3;
    three->next=four;

    four->prev=three;    
    four->data=4;
    four->next=five;

    five->prev=four;    
    five->data=5;
    five->next=NULL;

    //traversal
    travdoli(one,five);


    return 0;
}
