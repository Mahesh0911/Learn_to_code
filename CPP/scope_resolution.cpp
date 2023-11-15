#include <iostream>
using namespace std;

int i = 0;

int main(int argc, char const *argv[])
{
    int i = 3;

    cout << "Local value of i : " << i << endl;
    // global value of variable can be accesed by scope resolution operator (::).
    cout << "Global value of i : " << ::i << endl;
    return 0;
}
