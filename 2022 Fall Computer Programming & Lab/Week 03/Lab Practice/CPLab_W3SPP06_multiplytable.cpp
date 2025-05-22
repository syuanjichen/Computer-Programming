// 2022 Computer Programming & Lab
// Week 3 Online Judge Session Practice Problems
// Problem 6 : Print a multiplication table

#include <iostream>
using namespace std;

int main(void)
{
    int x,y;

    for(x = 1 ; x <= 9 ; x++)
    {
        for(y = 1 ; y <= 9 ; y++)
        {
            cout << x << " * " << y << " = " << (x * y) << endl;
        }
    }

    return 0;
}