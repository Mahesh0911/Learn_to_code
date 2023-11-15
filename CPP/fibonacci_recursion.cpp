#include <iostream>
// #include <algorithm>
using namespace std;
int num = 10;
int fibo(int a, int b, int n)
{
    if (n <= 1)
    {
        return b;
    }
    return fibo(b, a + b, n - 1);
}
int fibo(int n)
{
    if (n <= 0)
    {
        return 0;
    }
    if (n <= 1)
    {
        return 1;
    }
    return fibo(n - 1) + fibo(n - 2);
}

int main()
{
    // 1 1 2 3 5 8 13 21
    cout << fibo(8);

    return 0;
}