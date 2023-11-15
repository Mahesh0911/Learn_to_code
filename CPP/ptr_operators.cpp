#include <iostream>

int main(int argc, char const *argv[])
{
    int num = 99;
    int *addr;

    addr = &num; // storing address of variable in the pointer variable

    int &var = num; // referencing variable to num

    std::cout << "address of num : " << addr << std::endl;
    std::cout << "valaue at address of num : " << *addr << std::endl;

    std::cout << "referencing to another variable : " << var++ << std::endl;
    std::cout << "original num variable : " << num;

    return 0;
}
