#include <iostream>

int main(int argc, char const *argv[])
{
    int number = 9;
    float dec = 3.14;
    bool condition = true;
    double pointNum = 99.9;
    char alpha = 'M';
    std::string Name = "Mahesh";

    // sizeof() function for size of variables
    std::cout << number << "-->" << sizeof(number) << "\n";
    std::cout << dec << "-->" << sizeof(dec) << "\n";
    std::cout << condition << "-->" << sizeof(condition) << "\n";
    std::cout << pointNum << "-->" << sizeof(pointNum) << "\n";
    std::cout << alpha << "-->" << sizeof(alpha) << "\n";
    std::cout << Name << "-->" << sizeof(Name) << "\n";

    return 0;
}

// char 8 −127 to 127
// unsigned char 8 0 to 255
// signed char 8 −127 to 127
// int 16 or 32 −32,767 to 32,767
// unsigned int 16 or 32 0 to 65,535
// signed int 16 or 32 same as int
// short int 16 −32,767 to 32,767
// unsigned short int 16 0 to 65,535
// signed short int 16 same as short int
// long int 32 −2,147,483,647 to
// 2,147,483,647
// signed long int 32 same as long int
// unsigned long int 32 0 to 4,294,967,295
// float 32 Six digits of precision
// double 64 Ten digits of precision
// long double 80 Ten digits of precision