#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int x;
label:
    cout << "Enter :";
    cin >> x;
    if (x == 3)
    {
        cout << "You are done !";
        return 0;
        // exit(0);
    }
    cout << "Try once more..." << endl;
    goto label;
    return 0;
}
