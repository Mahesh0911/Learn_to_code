#include <iostream>
using namespace std;

template <class d_type>
class Demo
{
public:
    d_type *arr;
    Demo(int n)
    {
        arr = new d_type[n];
        for (int i = 0; i < n; i++)
        {
            arr[i] = rand() % 20;
        }
    }

    void disp()
    {
        for (int i = 0; i < 8; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    d_type operator[](int i)
    {
        return arr[i];
    }
};

int main(int argc, char const *argv[])
{
    Demo<int> obj(8);
    obj.disp();

    cout << "value at index 3:" << obj[3] << endl;
    cout << "value at index 1:" << obj[1] << endl;
    cout << "value at index 5:" << obj[5] << endl;
    cout << "value at index 2:" << obj[2] << endl;
    return 0;
}

/*
'typename' keyword : It can be substituted for the keyword 'class' in a template declaration.
*/

/*
The 'export' keyword can precede a template declaration. It allows other files to use
a template declared in a different file by specifying only its declaration rather than
duplicating its entire definition.
*/