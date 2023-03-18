#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;


//building block of array
struct myarr
{
    int totalsize;
    int usedsize;
    int *ptr;

    
};


//set the values of total size array,used size and pointer
void createarr(struct myarr *a,int tsize,int usize)
{
    (*a).totalsize=tsize;
    (*a).usedsize=usize;
    (*a).ptr=(int*)malloc(tsize*sizeof(int));
    
}


//display array elements
void show(struct myarr *a){
    for (int i = 0; i < (a->usedsize); i++)
    {
        cout<<"values are:"<<(a->ptr)[i]<<endl;
    }
}


//set values of array
void setval(struct myarr *a){
    int n;
    for (int i = 0; i < a->usedsize; i++)
    {
        cout<<"Enter values:\n";
        cin>>n;
        (a->ptr)[i]=n;
    }
}

int main()
{
    struct myarr marks;
    createarr(&marks,10,2);
    setval(&marks);
    show(&marks);



    return 0;
}
