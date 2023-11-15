#include <iostream>
void funToo(double n);
int main(int argc, char const *argv[])
{
    funToo(5.14);
    return 0;
}

void funToo(double n)
{
    for (int i = 0; i < abs(n); i++)
    {
        std::cout << n << "\n";
    }
}
