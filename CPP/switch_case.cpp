#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int num;
    cout << "Enter : "<<endl;
    cin >> num;

    switch (num)
    {
    case 1:
    {
        cout << "Number is One."<<endl;
        // break;
    }
    case 2:
    {
        cout << "Number is Two."<<endl;
        break;
        
    }
    case 3:
    {
        cout << "Number is Three."<<endl;
    }
    default:
    {
        cout << "Number is out of range."<<endl;
    }
    }
    return 0;
}
