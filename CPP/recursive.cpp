#include <iostream>
using namespace std;

int factorial(int n)
{
    if (n == 1)
    {
        return 1;
    }
    return (n * factorial(n - 1));
}

int main(int argc, char const *argv[])
{
    cout << factorial(2) << endl;
    cout << factorial(3) << endl;
    cout << factorial(5) << endl;
    return 0;
}
