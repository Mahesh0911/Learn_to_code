#include <iostream>
using namespace std;

enum fruits
{
    apple,
    banana = 5,
    grapes = 12,
    guava,
    melon = 15
};

int main(int argc, char const *argv[])
{
    fruits my_food;
    my_food = grapes;
    for (int i = 0; i < 5; i++)
    {
        my_food = (fruits)i;
        // my_food = guava;
        cout << my_food << endl;
    }

    return 0;
}
