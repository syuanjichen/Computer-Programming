// 2022 Fall Computer Programming & Lab
// Week 3 - Operators
// Perform arithmetics using +,-,*,/ and %

#include <iostream>
using namespace std;

int main(void)
{
    int a = 5, b = 2;

    cout << "a + b = " << a + b << endl;
    cout << "a - b = " << a - b << endl;
    cout << "a * b = " << a * b << endl;
    cout << "a / b = " << a / b << endl;
    cout << "a / b = " << a / (float)b << endl;
    cout << "a % b = " << a % b << endl;
    cout << "a % (-b) = " << a % (-b) << endl;
    cout << "(-a) % b = " << (-a) % b << endl;

    return 0;
}