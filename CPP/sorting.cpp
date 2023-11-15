#include <bits/stdc++.h>
// #include <iostream>
// #include <algorithm>
using namespace std;

int main()
{
    int arr1[] = {4, 3, 2, 1, 5, 0, 6};
    int arr2[] = {4, 3, 2, 1, 5, 0, 6};
    int arr3[] = {4, 3, 2, 7, 5, 0, 6};
    int arr4[] = {4, 3, 2, 1, 5, 0, 6};
    int arr5[] = {4, 3, 2, 1, 5, 0, 6};

    sort(arr1, &arr1[7], greater<int>()); // sorting in descending order
    stable_sort(arr2, &arr2[7]);
    nth_element(arr3, &arr3[4], &arr3[7]);
    sort_heap(arr4, &arr4[7]);
    partial_sort(arr5, &arr5[4], &arr5[7]);

    for (auto it : arr1)
    {
        cout << it << " ";
    }
    cout << endl;

    return 0;
}
