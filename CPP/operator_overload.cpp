#include <iostream>
using namespace std;

class OP_overload
{
public:
    int x;
    int y;
    OP_overload()
    {
        x = 1;
        y = 2;
    }
    OP_overload(int a, int b)
    {
        x = a;
        y = b;
    }

    // OP_overload operator+(OP_overload obj)
    // {
    //     OP_overload temp;
    //     temp.x = obj.x - x;
    //     temp.y = obj.y - y;
    //     return temp;
    // }

    friend void operator++(OP_overload &obj);
};

void operator+(OP_overload &obj1, OP_overload &obj)
{
    obj1.x = obj.x + obj1.x;
    obj1.y = obj.y + obj1.y;
}

// operator overloading using friend function
void operator++(OP_overload &obj)
{
    obj.x++;
    obj.y++;
}

int main()
{
    OP_overload object1;
    OP_overload object2(4, 5);
    object1 + object2;
    // OP_overload object3 = object1 + object2;
    OP_overload object3;

    cout << "Object one :"
         << "x:" << object1.x << " y:" << object1.y << endl;
    cout << "Object two :"
         << "x:" << object2.x << " y:" << object2.y << endl;
    cout << "Object three :"
         << "x:" << object3.x << " y:" << object3.y << endl;
    return 0;
}