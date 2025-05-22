// 2022 Computer Programming & Lab
// Week 3 Home Problems
// Problem 2 : Triangular Inequality

#include <iostream>
#include <cstdio>
using namespace std;

int main(void)
{
    int a, b, c;
    cin >> a >> b >> c;

    if (a + b > c && b + c > a && a + c > b)
        printf("Side lengths %d, %d, %d can form a triangle.\n", a, b, c);
    else
        printf("Side lengths %d, %d, %d can not form a triangle.\n", a, b, c);
    
    return 0;
}