// 2022 Computer Programming & Lab
// Week 4 - Pointers
// The behavior of character pointers and string

#include <iostream>
#include <cstdio>
using namespace std;

int main(void)
{
    char s1[10] = {'H','E','L','L','O'};
    const char *s2 = "Hello";

    int i;

    cout << "Initialized: s1 = " << s1 << endl;

    for(i = 0 ; (s1[i] != '\0') && (s2[i] != '\0') ; i++)
        s1[i] = s2[i];

    cout << "s1 = " << s1 << ", s2 = " << s2 << endl;

    s1[0] = 'h';
    cout << "s1 = " << s1 << endl;

    cout << "sizeof(s1) = " << sizeof(s1) << ", sizeof(s2) = " << sizeof(s2) << endl;
    return 0;
}