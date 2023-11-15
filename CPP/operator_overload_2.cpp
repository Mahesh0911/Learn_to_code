#include <iostream>
using namespace std;

class brackets_overload
{
public:
    int arr[5];
    brackets_overload()
    {
        for (int i = 0; i < 5; i++)
        {
            arr[i] = rand() % 10;
        }
    }

    int operator[](int a)
    {
        return arr[a];
    }
    void operator()(int a, int b)
    {
        arr[a] += b;
    }

    void disp()
    {
        for (int i = 0; i < 5; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main(int argc, char const *argv[])
{
    brackets_overload arr_obj;
    // arr_obj.disp();

    cout << "Element at 4th position :" << arr_obj[4] << endl;
    arr_obj(4, 5);
    cout << "Element at 4th position (After):" << arr_obj[4] << endl;
    arr_obj.disp();
    return 0;
}
