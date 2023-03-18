#include<iostream>
#include<stdlib.h>
#include<stdio.h>
using namespace std;


//Linked list
struct CirLili
{
   int data;
   struct CirLili * nxt;

};


//traversal function
void travercirli(struct CirLili * enter){
    struct CirLili * p=enter;

    do
    {
        cout<< "Element is :"<<enter->data<<endl;
        enter=enter->nxt;
    } while (p!=enter);
    
}

struct CirLili* insertcirfir(struct CirLili * head,int data)
{
    struct CirLili * newhead=new struct CirLili ;
    struct CirLili * temp=head->nxt;


    newhead->data=data;
    newhead->nxt=head;
    while (temp->nxt != head)
    {
        temp=temp->nxt;
    }//temp points to last node
    temp->nxt=newhead;

    head=newhead;
    return newhead;
}



int main()
{
    struct CirLili * first=new struct CirLili ;
    struct CirLili * second=new struct CirLili ;
    struct CirLili * third=new struct CirLili ;
    struct CirLili * fourth=new struct CirLili ;
    struct CirLili * fifth=new struct CirLili ;

    first->data=3;
    first->nxt=second;
    second->data=6;
    second->nxt=third;
    third->data=9;
    third->nxt=fourth;
    fourth->data=12;
    fourth->nxt=fifth;
    fifth->data=15;
    fifth->nxt=first;

    //insert at beginning
    first=insertcirfir(first,2);
    first=insertcirfir(first,1);
    //Traversal function
    travercirli(first);




    return 0;
}
