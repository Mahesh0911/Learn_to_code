#include <iostream>
using namespace std;

void printarr(int *A, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "Element : " << A[i] << endl;
    }
}

void Insertionsort(int *a, int n)
{
   
    int temp;
    for (int i = 1; i <= n - 1; i++)
    {
        int pass = a[i];
        int j=i-1;
        while (j >=0 && a[j] > pass)
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=pass;
    }
}

int main()
{
    int A[] = {9,2,3,4,6,7};
    int n = sizeof(A) / sizeof(int);
    cout << "size is :" << n << endl;
    printarr(A, n);

    // sorting array by insertion sort
    Insertionsort(A, n);
    cout<<"sorted array  : \n";
    printarr(A,n);

    return 0;
}
