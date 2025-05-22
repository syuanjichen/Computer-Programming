// 2022 Fall Computer Programming & Lab
// Week 4 - Computer Programming Homework
// Problem 1 - Print a sequence 1/2, 2/3, 3/5, 5/8, 8/13 ...

#include <iostream>
#include <cstdio>
using namespace std;

int main(void)
{
    int i, n, deno = 2, numer = 1, temp;

    cin >> n;

    printf("Sequence = %d/%d", numer, deno);

    if(n > 1)
    {
        for(i = 2 ; i <= n ; i++)
        {
            temp = numer;
            numer = deno;
            deno = deno + temp;
            printf(", %d/%d", numer, deno);
        }
    }

    return 0;
}