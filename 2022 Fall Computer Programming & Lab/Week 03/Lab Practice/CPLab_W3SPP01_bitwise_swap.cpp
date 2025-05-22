// 2022 Fall Computer Program & Lab
// Week 3 Online Judge Session Practice Problems
// Problem 1 : Use Bitwise Operator to Swap two numbers

#include <iostream>
using namespace std;

int main(void)
{
    int x, y;

    cin >> x >> y;
    cout << "Before swap, x = " << x << ", y = " << y << ".\n";

    x = x ^ y;
    y = y ^ x;
    x = x ^ y;

    cout << "After swap, x = " << x << ", y = " << y << ".\n";

    return 0;
}