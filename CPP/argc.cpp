#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    // argc is the number of strings at the input time.
    // argv is the array of pointers to the strings
    int i = 0;
    while (i < argc)
    {
        cout << argv[i] << endl;
        i++;
    }

    return 0;
}
