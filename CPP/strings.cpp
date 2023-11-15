#include <iostream>
#include <cstring>
#include <string.h> //library in c
using namespace std;

int main(int argc, char const *argv[])
{

    char st1[] = "this is string";
    char st2[] = "this is   string";
    string name = "This is String";
    int length = name.length(); // to calculate the length of the string
    for (int i = 0; i < length; i++)
    {
        cout << name[i];
    }
    cout << endl;
    // comparing the strings - return 0 if string are equal
    cout << "Result of comparison of strings :" << strcmp(st1, st2);
    return 0;
}

/*
strcpy(s1, s2)          Copies s2 into s1.
strcat(s1, s2)          Concatenates s2 onto the end of s1.
strlen(s1)              Returns the length of s1.
strcmp(s1, s2)          Returns 0 if s1 and s2 are the same; less than 0 if s1<s2; greater than 0 if s1>s2.
strchr(s1, ch)          Returns a pointer to the first occurrence of ch in s1.
strstr(s1, s2)          Returns a pointer to the first occurrence of s2 in s1.
*/