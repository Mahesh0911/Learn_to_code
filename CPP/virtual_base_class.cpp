#include <iostream>
using namespace std;

class base
{
public:
    int i;
    base()
    {
        cout << "constructor of base class.\n";
        i = 10;
    }
};

class derived1 : virtual public base
{
public:
    int j;
    derived1()
    {
        cout << "constructor of derived1.\n";
        j = 20;
        i += 1;
    };
};
class derived2 : virtual public base
{
public:
    int k;
    derived2()
    {
        cout << "constructor of derived2.\n";
        k = 30;
        i += 2;
    };
};

/* creates ambiguity in derived3 class as
 derived1 and derived2 both contains the same copy of base classs so making it virtual makes it unambigious.*/
class derived3 : public derived1, public derived2
{
public:
    derived3()
    {
        cout << "constructor of derived3.\n";
    };
};

int main(int argc, char const *argv[])
{
    derived3 object;
    // derived1 *d1 = new derived1();
    // // derived1 *d1=new derived1();
    // base *b1 = new base();
    // base *d11 = d1;
    return 0;
}
