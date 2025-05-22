// 2022 Fall Computer Programming & Lab
// Week 4 Online Judge Session Practice Problems
// Problem 2 - Count Vowels of a string

#include <iostream>
#include <iomanip>
#include <cstdio>
using namespace std;

int main(void)
{
    char str1[16] = {};
    int count_a = 0, count_e = 0, count_i = 0, count_o = 0, count_u = 0, address;

    cin.getline(str1, sizeof(str1));

    for(address = 0 ; str1[address] != '\0' ; address ++)
    {
        switch (str1[address])
        {
            case 'a':
                count_a ++;
                str1[address] = 'A';
                break;

            case 'A':
                count_a ++;
                break;

            case 'e':
                count_e ++;
                str1[address] = 'E';
                break;

            case 'E':
                count_e ++;
                break;

            case 'i':
                count_i ++;
                str1[address] = 'I';
                break;

            case 'I':
                count_i ++;
                break;

            case 'o':
                count_o ++;
                str1[address] = 'O';
                break;

            case 'O':
                count_o ++;
                break;

            case 'u':
                count_u ++;
                str1[address] = 'U';
                break;

            case 'U':
                count_u ++;
                break;
        }
    }

    printf("a = %d, e = %d, i = %d, o = %d, u = %d.\n", count_a, count_e, count_i, count_o, count_u);
    printf("%s", str1);

    return 0;
}