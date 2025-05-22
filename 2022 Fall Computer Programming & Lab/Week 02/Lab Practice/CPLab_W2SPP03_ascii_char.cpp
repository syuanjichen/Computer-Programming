// 2022 Fall Computer Programming
// Online Judge Session Practice Problem Q3
// Show ASCII of a character and the character of an ASCII code

#include <iostream>
#include <cstdio>
using namespace std;

int main(void)
{
    char char_to_ascii;
    int ascii_to_char;

    cin >> char_to_ascii >> ascii_to_char;

    printf("%d %c\n",char_to_ascii,ascii_to_char);

    return 0;
}