// #include <iostream>
#include <bits/stdc++.h>
using namespace std;

void disp(vector<int> arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5};
    do
    {
        disp(arr);
    } while (next_permutation(arr.begin(), arr.end()));

    return 0;
}