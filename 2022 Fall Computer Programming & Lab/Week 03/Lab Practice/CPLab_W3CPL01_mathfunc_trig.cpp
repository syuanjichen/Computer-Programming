// 2022 Fall Computer Programming & Lab
// Week 3 Homework Problems
// Problem 1 : Use of math functions

#include <iostream>
#include <iomanip>
#include <cmath>
#define PI 3.14159265
using namespace std;

int main(void)
{
    int x, y, z, max;
    int a, b;
    double degree;

    cin >> x >> y >> z;
    cin >> a >> b;
    cout << "sum = " << (x + y + z) << endl;
    cout << "average = " << fixed << setprecision(6) << (double)(x + y + z) / 3.0 << endl;
    cout << "product = " << (x * y * z) << endl;
    cout << "sqrt of product = " << fixed << setprecision(6) << sqrt(x * y * z) << endl;
    
    max = x;
    if (y > max)
    {
        max = y;
        if (z > max)
            max = z;
    }
    else
    {
        if(z > max)
            max = z;
    }

    cout << "largest = " << max << endl;

    degree = atan2(a,b) * 180 / PI;

    cout << "degree = " << (int)round(degree) << endl;

    return 0;
}