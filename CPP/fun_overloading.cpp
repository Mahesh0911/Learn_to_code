#include <iostream>
// #include <string>
using namespace std;

int add(int a, int b)
{
    int c = a + b;
    return c;
}

string add(string a, string b)
{
    a.replace(1, 1, b);
    return (a + b);
}

double add(double a, double b)
{
    return a + b;
}

int main(int argc, char const *argv[])
{
    cout << add(1, 1) << endl;
    cout << add(1.5, 3.14) << endl;
    cout << add("abc", "xyz");

    return 0;
}
