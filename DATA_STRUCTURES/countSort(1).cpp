#include <iostream>
#include<stdlib.h>
using namespace std;

void printarr(int *A, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << A[i] << " ";
    }
}
int max(int a[],int n){
    int max=-1;
    for (int i = 0; i < n; i++)
    {
        if (max < a[i])
        {
            max=a[i];
        }
        
    }
    return max;


}


void countSort(int * a,int n){
    //find maximum element in array
    int maxi=max(a,n);

    //create count array
    int * count=(int *)malloc((maxi+1)*sizeof(int));

    for (int  i = 0; i < maxi
    +1; i++)
    {
        count[i]=0;
    }

    //incremating count array
    for (int  i = 0; i < n; i++)
    {
        count[a[i]]=count[a[i]]+1;
    }
    int i;int j;
    //counter i /j
    i=0;
    j=0;

    while (i <= maxi)
    {
        if (count[i]>0)
        {
            a[j]=i;
            count[i]=count[i]-1;
            j++;
        }else{
            i++;
        }
        
    }
    
    



}





int main()
{
    int A[] = {13, 11, 22,27,24,18};
    int n = sizeof(A) / sizeof(int);
    // cout << "size is :" << n << endl;
    printarr(A, n);

    countSort(A,n);

    cout<<endl;

    printarr(A, n);

    return 0;

}