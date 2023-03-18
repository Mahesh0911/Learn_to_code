#include<iostream>
using namespace std;


void display(int a[] ,int b){
    for (int i = 0; i<b; i++)
    {
        cout<<"element at "<<i<<" is "<<a[i]<<endl;
        
        /* code */
    }
    cout<<"size of array is :"<<b;
    
}
int insertn(int arr[],int size1,int element1,int capacity1,int index1){
    if (size1>=capacity1)
    {
        return -1 ;
    }
    for (int i = (size1-1); i >= index1; i--)
    {
        arr[i+1]=arr[i];
        /* code */

    }
    arr[index1]=element1;
    
    return 1;

}

int delet(int arr[],int size1,int index1){
    for (int  i = index1; i < size1; i++)
    {
        arr[i]=arr[i+1];
        /* code */
    }
    return size1--;
    

}




int main()
{
    int array[100]={1,4,3,7,5,8,6,9};
    int size,capacity,index,element;
    index=4;
    element=0;
    size=8;
    capacity=100; 
    int ins=insertn(array,size,element,capacity,index) ;
    if (ins=1)
    {size++;
         /* code */
    };
    //delet(array,size,index);


    
    display(array,size);
    return 0;
}
