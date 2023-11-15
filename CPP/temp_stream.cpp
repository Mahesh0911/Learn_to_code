#include <iostream>
#include <iomanip>
using namespace std;

ostream &ra(ostream &stream)
{
    static int n = 1;
    stream << n;
    n++;
    return stream;
}

ostream &a(ostream &str)
{
    str << 212;
}
int main(int argc, char const *argv[])
{
    string st = "123";
    int n = -1;
    cout << ra;


    // cout << a;
    // cout << "--" << '\a' << "helo";
    // strout << st;
    // strin >> n;
    // cout << n;
    return 0;
}
