// 2022 Fall Computer Programming & Lab
// Week 3 Homework Problems
// Problem 4 : Convert to binary

#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

int main(void)
{
    unsigned short int n, bit;
    int i, bin[16] = {0};
    cin >> n;

    for(i = 15 ; i >= 0 ; i--)
    {
        bit = n % 2;
        n = n / 2;
        bin[i] = bit;
    }

    for(i = 0 ; i <= 15 ; i++)
        cout << bin[i];

    cout << endl;
    
    return 0;
}