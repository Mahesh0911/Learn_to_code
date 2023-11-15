#include <iostream>
using namespace std;

class Demo
{
public:
    int x;
    int y;
    Demo()
    {
        x = 99;
        y = 33;
    }
};

ostream &operator<<(ostream &outstream, Demo obj)
{
    outstream << obj.x;
    cout << "hello";
    outstream << obj.y;
    return outstream;
}

int main(int argc, char const *argv[])
{
    Demo obj;

    cout << obj << "world";

    return 0;
}
