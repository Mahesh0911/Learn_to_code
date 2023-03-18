#include<iostream>
#include<stdlib.h>
#include<stdio.h>
using namespace std;

struct cirque{
    int size;
    int f;
    int r;
    int * arr;
};

void enqueue(struct cirque * q,int val){
    if ((q->r+1)%(q->size)==q->f)
    {
        cout<<"Queue overflow"<<endl;
    }else{
        q->r=(q->r+1)%q->size;
        q->arr[q->r]=val;
        cout<<"Enqueued :"<<val<<endl;

    }
}

int deque(struct cirque *q){
    if (q->f==q->r)
    {
        cout<<"Empty  queue."<<endl;
    }
    else{
        q->f=q->f+1%q->size;
        cout<<"dequeued\n";
        return q->arr[q->f];
    }
    


}

int main()
{
    struct cirque q;
    q.size=5;
    q.f=q.r=0 ;
    q.arr=(int*) malloc(q.size*sizeof(int));   
    

    //enqueue
    enqueue(&q,1);
    enqueue(&q,2);
    enqueue(&q,3);
    enqueue(&q,4);

    cout<<deque(&q)<<endl;
    cout<<deque(&q)<<endl;

    enqueue(&q,5);
    enqueue(&q,5);

    return 0;
}
