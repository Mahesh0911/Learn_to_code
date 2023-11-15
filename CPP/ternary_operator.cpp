#include <iostream>

int main(int argc, char const *argv[])
{
    int num;
    std::cout << "Enter : ";
    std::cin >> num;

    // the ternary operator (condition if)
    std::string status = (num % 2 == 0) ? "Even" : "Odd";

    std::cout << "The number is : " << status;
    return 0;
}
