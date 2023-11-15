#include <iostream>
using namespace std;

// this is also called as "generic function"
template <class d_type>
// there should not be any statement in between the template declaration and function declaration
void swapargs(d_type &val1, d_type &val2)
{
    d_type temp = val1;
    val1 = val2;
    val2 = temp;
}

/*.
If you overload a generic function,
that overloaded function overrides (or "hides") the generic function relative to that
specific version.
*/
// overloading generic function  - this will used by compiler in the case of strings.
void swapargs(string &st1, string &st2)
{
    string temp = st1;
    st1 = st2;
    st2 = temp;
}

int main()
{
    int a = 3;
    int b = 5;
    cout << "(Before) value of a:" << a << "\tvalue of b:" << b << endl;
    swapargs(a, b);
    cout << "(After) value of a:" << a << "\tvalue of b:" << b << endl;
    char x = 3;
    char y = 5;
    cout << "(Before) value of x:" << x << "\tvalue of y:" << y << endl;
    swapargs(x, y);
    cout << "(After) value of x:" << x << "\tvalue of y:" << y << endl;
    return 0;
}