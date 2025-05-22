// 2022 Fall Computer Programming & Lab
// Week 4 - Pointer
// Address of Variables

#include <iostream>
using namespace std;

double e = 2.718281828459045;

int main(void)
{
    short a = 112;
    int b = 417;
    float c = 3.14f;
    double d = 9.21;

    cout << "a = " << a << ", address = " << &a << endl;
    cout << "b = " << b << ", address = " << &b << endl;
    cout << "c = " << c << ", address = " << &c << endl;
    cout << "d = " << d << ", address = " << &d << endl;
    cout << "e = " << e << ", address = " << &e << endl;

    return 0;
}