#include<iostream>
using namespace std;

void printarr(int * A ,int n){
    for (int  i = 0; i < n; i++)
    {
        cout<<"Element : "<<A[i]<<endl;
    }
    
}

void Bubblesort(int * A,int n){
    int issorted=1;
    
    for (int i = 0; i < n-1; i++)
    {
        cout<<i<<endl;
        for (int  j = 0; j <(n-1-i) ; j++)
        {
            if (A[j]>A[j+1])
            {
                int temp=A[j];
                A[j]=A[j+1];
                A[j+1]=temp;
                issorted=0;

            }
            
        }
        if(issorted){
            return;
        }

        
    }
    


} 


int main()
{
    int A[]={21,12,33,14,16,37} ;
    int n=6;
    
    printarr(A,n);

    //sorting array by bubble sort
    Bubblesort(A,n);


    printarr(A,n);



    return 0;

}
