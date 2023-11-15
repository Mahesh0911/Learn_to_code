#include <iostream>
using namespace std;

int sumOfArr(int arr[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    return sum;
}
int sum(int *arr, int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    return sum;
}
int main(int argc, char const *argv[])
{
    int arr[] = {1, 2, 3, 4, 5};
    // cout << arr << endl;
    cout << "sum of all elements in array : " << sumOfArr(arr, 5) << endl;
    cout << "sum of all elements in array : " << sum(arr, 5) << endl;

    int twoDimen[5][5];
    int count = 0;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            twoDimen[i][j] = count++;
        }
    }

    cout << "Representation of 2D array will be :\n";
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << twoDimen[i][j] << "\t";
        }
        cout << endl;
    }
    return 0;
}
