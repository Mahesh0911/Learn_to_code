#include <iostream>
using namespace std;

class Demo
{
private:
    int x, y;

public:
    friend int set(Demo *obj, int a, int b);
    int disp_x()
    {
        return this->x;
    }
    int disp_y()
    {
        return this->y;
    }
};

int set(Demo *obj, int a, int b)
{
    obj->x = a;
    obj->y = b;
}

int main()
{

    Demo *object = new Demo();
    set(object, 5, 9);
    cout << "value of x :" << object->disp_x() << endl;
    cout << "value of x :" << object->disp_y() << endl;
    return 0;
}