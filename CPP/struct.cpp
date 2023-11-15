#include <iostream>
using namespace std;

struct employee
{
    int id;
    string name;
    int birth_year;
    employee *boss_name;
} emp;

int main(int argc, char const *argv[])
{
    struct employee emp1;
    emp1.id = 2;
    emp1.name = "abc";
    emp1.birth_year = 1999;
    emp1.boss_name = NULL;

    struct employee *emp2;
    emp2 = new employee;
    emp2->id = 5;
    emp2->name = "xyz";
    emp2->boss_name = &emp1;
    emp2->birth_year = 2000;

    cout << "Boss of " << emp2->name << " is " << emp2->boss_name->name << ".";
    return 0;
}

/*
e.g.
union union_name{
    int a;
    char ch;
};

A union is a memory location that is shared by two or more different types of variables.
A union provides a way of interpreting the same bit pattern in two or more different
ways.
*/