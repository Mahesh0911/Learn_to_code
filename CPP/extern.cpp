#include <iostream>

int main(int argc, char const *argv[])
{
    extern int num;
    extern std::string name;

    std::cout << num << std::endl;
    std::cout << name << std::endl;
    return 0;
}

/* extern variables present in the code*/
int num = 9;
std::string name = "mahesh";
