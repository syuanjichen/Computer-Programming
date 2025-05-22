// 2022 Computer Programming & Lab
// Week 3 - Operators
// Bitwise Operator

#include <iostream>
using namespace std;

int main(void)
{
    int a = 6, b = 2;
    
    cout << "a & b = " << (a & b) << endl;
    cout << "a | b = " << (a | b) << endl;
    cout << "a ^ b = " << (a ^ b) << endl;
    cout << "~a = " << (~a) << endl;
    cout << "a >> b = " << (a >> b) << endl;
    cout << "a << b = " << (a << b) << endl;

    return 0;
}