#include <iostream>
using namespace std;

union Union_group
{
    int number;
    char char_one;
    char ch_two;
};

int main()
{
    cout << "size of the int :" << sizeof(int) << endl;
    cout << "size of the char :" << sizeof(char) << endl;

    Union_group u_obj;
    u_obj.number = 911;

    cout << "Number in union :" << u_obj.number << endl;
    cout << "First char in union :" << u_obj.char_one << endl;
    cout << "Second char in union :" << u_obj.ch_two << endl;
    // cout.precision(5);
    // cout <<45.344;
}