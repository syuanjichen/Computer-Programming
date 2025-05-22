#include <iostream>

using namespace std;

int main(void)
{
    int a = 0, b = 1;
    int * const p = &a;

    cout << "&a = " << &a << ", &b = " << &b << endl;
    cout << "*p = " << *p << ", p = " << p << endl;

    return 0;
}