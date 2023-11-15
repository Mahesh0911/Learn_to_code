// class, struct, enum, union, typedef
#include <iostream>
using namespace std;

#define SIZE 100

class stack
{
private:
    int stck[SIZE];
    int tos;

public:
    stack();
    void push(int i);
    int pop();
    ~stack();
};

stack::stack()
{
    this->tos = 0;
}

stack::~stack()
{
}
int stack::pop()
{
    if (tos == 0)
    {
        cout << "Stack Empty\n";
        return -1;
    }
    return this->stck[--tos];
}
void stack::push(int i)
{
    if (this->tos == SIZE)
    {
        cout << "Stack Full\n";
        return;
    }
    this->stck[tos++] = i;
}

int main(int argc, char const *argv[])
{
    stack st1;
    st1.push(3);
    st1.push(1);
    st1.push(4);
    st1.push(9);
    cout << st1.pop();
    cout << st1.pop();
    cout << st1.pop();
    cout << st1.pop();
    return 0;
}

/*
By default, functions and data declared within a class are private to that class
and may be accessed only by other members of the class.
The public access specifier allows functions or data to be accessible to other parts of your program.
The protected access specifier is needed only when inheritance is involved
*/

/*
struct and class are same only the difference is that
in class members are private by default.
in struct members are public by default.
*/