#include <iostream>
using namespace std;

// typedef is used to create another name for data types that are defined already

typedef int number;
typedef string name;

int main(int argc, char const *argv[])
{
    number rollno = 28;
    name myName = "abc";
    cout << rollno << endl;
    cout << myName << endl;

    return 0;
}
