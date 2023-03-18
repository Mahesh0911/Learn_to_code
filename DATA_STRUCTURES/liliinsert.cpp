#include<iostream>
#include<stdlib.h>
using namespace std;
//buiding block of linked list
struct Node{

    int data;
    struct Node * ptr;
};


//linked list traversal
void lilitraver(struct Node* ptrr){
//using while loop
    while (ptrr !=NULL)
    {

        cout<<"Element :"<<ptrr->data<<endl;
        ptrr= ptrr->ptr;
    }
    
}



//insert at beginning
struct Node * insertfirst(struct Node * head,int data){
    struct Node* newfir;
    newfir=(struct Node*)malloc(sizeof(struct Node));
    newfir->ptr=head;
    newfir->data=data;
    return newfir;


}

struct Node* insertbetwn(struct Node * head,int data,int index ){
    struct Node* newfir;
    newfir=(struct Node*)malloc(sizeof(struct Node));
    struct Node *p= head;
    int i=0;
    while (i!=index-1)
    {
        p=p->ptr;
        i++;
    }
    newfir->data=data;
    newfir->ptr=p->ptr;
    p->ptr=newfir;
    return head;
    


}


//insert at the end
struct Node * insertend(struct Node * head,int data){
    struct Node* newfir;
    newfir=(struct Node*)malloc(sizeof(struct Node));
    struct Node *p=head;
    while (p->ptr!= NULL)
    {
        p=p->ptr;
    }
    p->ptr=newfir;
    newfir->data=data;
    newfir->ptr=NULL;
    return head;

}

//insert after a node
struct Node * insertatnode(struct Node * head,struct Node* ptr1,int data){
    struct Node* newfir;
    newfir=(struct Node*)malloc(sizeof(struct Node));
    newfir->ptr=ptr1->ptr;
    ptr1->ptr=newfir;
    newfir->data=data;
    return head;

}


int main()
{
    //using new keyword
    // struct Node * head=new (struct Node);
    // struct Node * second=new (struct Node);
    // struct Node * third=new (struct Node);
    // struct Node * fourth=new (struct Node);


    //initialising objects of struct node
    struct Node * head;
    struct Node * second;
    struct Node * third;
    struct Node * fourth;

    //allocate memory in heap
    head=(struct Node *) malloc(sizeof(struct Node));
    second=(struct Node *) malloc(sizeof(struct Node));
    third=(struct Node *) malloc(sizeof(struct Node));
    fourth=(struct Node *) malloc(sizeof(struct Node));




    //setting the data and node to next data
    head->data=7;
    head->ptr=second;


    //setting the data and node to next data
    second->data=14;
    second->ptr=third;


    //setting the data and node to next data
    third->data=21;
    third->ptr=fourth;

    //fourth
    fourth->data=28;
    fourth->ptr=NULL;

    //insert at first
    //and updating value of head
    head=insertfirst(head,35);


    //insert in between at given index
    insertbetwn(head,42,2);

    //insert at the end
    insertend(head,49);

    //insert at Node
    insertatnode(head,second,70);

    //linked list traversal function
    lilitraver(head);


    return 0;
}
