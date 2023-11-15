#include <iostream>

struct Employee
{
    int id;
    std::string name;
    struct Employee *boss;
};

int main(int argc, char const *argv[])
{
    Employee *emp1 = (Employee *)new Employee;
    emp1->id = 9;
    emp1->name = "mahesh";
    emp1->boss = emp1;

    (*emp1).id = 10;

    std::cout << emp1->id << std::endl;
    std::cout << emp1->name << std::endl;
    std::cout << (*emp1->boss).name << std::endl;

    return 0;
}
