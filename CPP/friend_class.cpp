/*
 A friend function has access to all private and protected members
of the class for which it is a friend. To declare a friend function, include its prototype
within the class, preceding it with the keyword friend.
*/

#include <iostream>
using namespace std;
class myclass
{
    int a, b;

public:
    friend int sum(myclass x); // friend function
    friend class Min;          // friend class - can access the private elements of the class;
    void set_ab(int i, int j);
};

void myclass::set_ab(int i, int j)
{
    a = i;
    b = j;
}

// Note: sum() is not a member function of any class.
int sum(myclass x)
{
    /* Because sum() is a friend of myclass, it can
    directly access a and b. */
    return x.a + x.b;
}

class Min
{
public:
    int min(myclass obj)
    {
        return obj.a > obj.b ? obj.b : obj.a;
    }
};
int main()
{
    myclass n;

    Min a;
    n.set_ab(3, 4);
    cout << sum(n);
    cout << "\nMinimum is : " << a.min(n);

    return 0;
}