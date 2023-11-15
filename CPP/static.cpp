#include <iostream>

int myfun()
{
    /* number will defined only once ,
    when we give function call it will not be defined again (uses updated value)*/

    static int num = 10;
    num += 5;
    return num;
}

int main(int argc, char const *argv[])
{
    myfun();
    std::cout << myfun();

    return 0;
}

/*
static members of Class :
No matter how many objects of a class
are created, only one copy of a static data member exists. Thus, all objects of that class
use that same variable. All static variables are initialized to zero before the first object
is created.

//////////////////////////////////////////////////////////////////

static functions of class :
They may only directly refer to other static members of the
class. Of course, global functions and data may be accessed by static member functions.
A static member function does not have a this pointer. (See Chapter 13 for information
on this.) There cannot be a static and a non-static version of the same function. A static
member function may not be virtual. Finally, they cannot be declared as const or volatile.

//////////////////////////////////////

#include <iostream>
using namespace std;
class static_type
{
    static int i;

public:
    static void init(int x) { i = x; }
    void show() { cout << i; }
};
int static_type::i; // define i
int main()
{
    // init static data before object creation
    static_type::init(100);
    static_type x;
    x.show(); // displays 100
    return 0;
}

*/