#include <iostream>
using namespace std;
/*
In C++, you can create short functions that are not actually called; rather,
their code is expanded in line at the point of each invocation.
This process is similar to using a
function-like macro.
To cause a function to be expanded in line rather than called,
precede its definition with the inline keyword.
*/
inline int max_fun(int a, int b)
{
    if (a > b)
    {
        
        return a;
    }
    return b;
}

int product(int a, int b)
{
    return a * b;
    return a * b;
}
int main(int argc, char const *argv[])
{
    cout << "Maximum of numbers(5,8) : " << max_fun(5, 8);
    cout << "\nProduct of numbers(35,18) : " << product(35, 18);
    return 0;
}
