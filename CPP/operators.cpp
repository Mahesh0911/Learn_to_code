#include <iostream>

int main(int argc, char const *argv[])
{
    int num1 = 5;
    int num2 = 12;

    std::cout << (num1 >> 1) << std::endl; // shifitng bits to the right
    std::cout << ~(num1 & num2) << std::endl;
    std::cout << sizeof(num1) << std::endl;
    return 0;
}

/*
bitwise operators
    &      AND
    |      OR
    ^      Exclusive OR (XOR)
    ~      One's complement (NOT)
    >>      Shift right
    <<      Shift left
*/

/*
Relational Operators
Operator Action
    >       Greater than
    >=      Greater than or equal
    <       Less than
    <=      Less than or equal
    ==      Equal
    !=      Not equal

Logical Operators
Operator Action
    &&      AND
    ||      OR
    !       NOT
*/