#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int arr[] = {4, 1, 2, 1, 0, 0, 6};
    sort(arr, arr + 7);

    if (binary_search(arr, arr + 7, 1))
    {
        cout << "1 is present in the array .\n";
    }
    else
    {
        cout << "Not present .\n";
    }

    // find the element's first index from right
    //  auto it = upper_bound(arr, arr + 7, 1);

    // find the element's first occurenece index from left
    auto it = lower_bound(arr, arr + 7, 1);

    // distance() calculates the distance between two addresses.
    cout << 1 << " value found at " << distance(arr, it) << endl;

    return 0;
}