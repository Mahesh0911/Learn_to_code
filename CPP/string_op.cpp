#include <bits/stdc++.h>
// #include<string.h>
// #include<iostream>
// #include<string>

using namespace std;

int main()
{

    char st[] = "Hello there.";
    char s[] = "llo";
    cout << strstr(st, s) - st << endl;   // find string into string
    cout << strchr(st, 'o') - st << endl; // find char into string
    cout << strcat(st, s) << endl;        // concat strings

    char t[] = "101";
    cout << stoi(t) << endl;
    return 0;
}