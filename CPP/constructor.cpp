#include <iostream>
using namespace std;

class Two_Dim
{
private:
    int a;
    int b;

public:
    Two_Dim()
    {
        a = 0;
        b = 0;
    }
    Two_Dim(int a)
    {
        this->a = a;
        this->b = 999;
    }
    Two_Dim(int a, int b)
    {
        this->a = a;
        this->b = b;
    }
    inline void show()
    {
        cout << "Value of A : " << this->a << "\tValue of B :" << this->b;
        cout << endl;
    }
};

int main(int argc, char const *argv[])
{
    Two_Dim vertex_1;
    Two_Dim vertex_2(3, 4); // same as Two_Dim vertex_2 = Two_Dim(3,4)
    Two_Dim *vertex_3 = new Two_Dim(6, 9);
    Two_Dim v_4 = 5; // special case for the constructor with only one parameter

    vertex_1.show();
    vertex_2.show();
    vertex_3->show();
    v_4.show();
    return 0;
}
