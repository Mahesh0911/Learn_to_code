#include<iostream>
#include<stdlib.h>
using namespace std;

struct Lili
{

    int data;
    struct Lili * next;
};

void traverlili(struct Lili * head){
    while (head!=NULL)
    {
        cout<<"Element is : "<<head->data<<endl;
        head=head->next;
    }
    


}


//delete node/data at first
struct Lili* delefirst(struct Lili* head){
    struct Lili * garbage=new struct Lili;
    garbage->next=head;
    head=head->next;
    free(garbage);

    cout<<"data is :"<<garbage->data<<endl<<"ptr is :"<<garbage->next<<endl;
    return head;

}

//delete last element
struct Lili * delelast(struct Lili * head){
    struct Lili * ex=new struct Lili;
    ex=head;
    struct Lili * ex1=new struct Lili;
    ex1=head->next;
    while (ex1->next!= NULL)
    {
        ex1=ex1->next;
        ex=ex->next;
    }
    free(ex1);
    cout<<"data is :"<<ex1->data<<endl<<"ptr is :"<<ex1->next<<endl;
    ex->next=NULL;
    
    return head;


}

//delete at index
struct Lili * deleindex(struct Lili* head,int index){
    struct Lili * ex=head;
    
    struct Lili * ex1=head->next;
    
    int i=0;
    while (i!= index-1)
    {
        ex1=ex1->next;
        ex=ex->next;
        i++;
    }
    ex->next=ex1->next;
    free(ex1);
    cout<<"data is :"<<ex1->data<<endl<<"ptr is :"<<ex1->next<<endl;
    
    return head;

    
}


//delete node by value
struct Lili * deleval(struct Lili * head,int value){
    struct  Lili * p=head;
    struct Lili * q=head->next;
    if (head->data==value)
    {
        head=head->next;
        free(p);
        cout<<"data is :"<<p->data<<endl<<"ptr is :"<<p->next<<endl;
        return head;
    }
    
    while (q->data!=value && q->next!=NULL)
    {
        p=p->next;
        q=q->next;
       
    }
    if (q->data==value)
    {
        p->next=q->next;
        free(q);
    }
    
    return head;


}



int main()
{
    struct Lili *head=new struct Lili;
    struct Lili *second=new struct Lili;
    struct Lili *third=new struct Lili;

    head->data=9;
    head->next=second;
    second->data=18;
    second->next=third;
    third->data=27;
    third->next=NULL;

    //traverlili(head);

    //deleting first element
    //head=delefirst(head);

    //delete last element
    //head=delelast(head);

    //delete element at index
    //head=deleindex(head,1);

    //delete by value
    head=deleval(head,9);


    traverlili(head);


    return 0;
}
