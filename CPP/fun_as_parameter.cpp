#include <iostream>

using namespace std;

int add(int a, int b)
{
    return a + b;
}
int multiply(int a, int b)
{
    return a * b;
}

int funtoo(int (*function)(int, int))
{
    int x, y;
    cout << "Enter first number :";
    cin >> x;
    cout << "Enter first number :";
    cin >> y;
    int answer = function(x, y);
    return answer;
}

int main(int argc, char const *argv[])
{
    cout << funtoo(add) << endl;
    cout << funtoo(multiply);
    return 0;
}
