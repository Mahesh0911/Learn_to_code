#include <iostream>
using namespace std;

class base
{
public:
    virtual void show() = 0; // pure virtual function
    virtual void disp()
    {
        cout << "this is base class display.\n";
    }
};
class derived1 : public base
{
public:
    void show()
    {
        cout << "this is show of derived1.\n";
    }
    void disp()
    {
        cout << "this is derived1 class display.\n";
    }
};
class derived2 : public derived1
{
public:
    void show()
    {
        cout << "this is show of derived2.\n";
    }
};

int main(int argc, char const *argv[])
{
    derived2 obj2;
    derived1 obj1;
    obj2.disp();
    obj1.disp();
    obj1.show();
    return 0;
}

/*
A pure virtual function is a virtual function that has no definition within the base class.
To declare a pure virtual function, use this general form:
virtual type func-name(parameter-list) = 0;
*/

/*
IMPORTANT :
A class that contains at least one pure virtual function is said to be abstract.
No objects of an abstract class may be created.
*/