#include <iostream>

int main(int argc, char const *argv[])
{
    int y;
    // first assigns y the value 3 and then assigns x the value 4
    int x = (y = 3, y + 1);
    std::cout << x;
    return 0;
}
