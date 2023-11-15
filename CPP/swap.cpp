#include <iostream>
using namespace std;

void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main(int argc, char const *argv[])
{
    int a = 10;
    int b = 5;

    // **********************************************************
    b = (a + b) - (a = b); // swap in oneline code
    // ***********************************************************

    cout << "value of a = " << a << " and value of b = " << b << endl;
    swap(&a, &b);
    // swap(a, b);
    cout << "value of a = " << a << " and value of b = " << b;
    return 0;
}
