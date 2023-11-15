#include <iostream>

int main(int argc, char const *argv[])
{
    // clssifiers in c
    volatile int number = 99; // can be modified
    const float pi = 3.14;    // constant number - cannot modify
    wchar_t alpha = L'A';

    char ch = number;

    std::cout << ++number << std::endl;
    std::cout << alpha << std::endl;
    std::cout << pi << std::endl;
    std::cout << ch << std::endl;

    return 0;
}
