// 2022 Fall Computer Programming & Lab
// Week 3 - Operator
// boolean type in C++

#include <iostream>
#include <iomanip>
using namespace std;

int main(void)
{
    bool x = true, y = false;
    
    cout << "The value of x is " << x << endl;
    cout << "The value of x with boolalpha is " << boolalpha << x << endl;
    cout << "The value of x with noboolalpha is " << noboolalpha << x << endl;
    cout << endl;
    cout << "The value of y is " << y << endl;
    cout << "The value of y with boolalpha is " << boolalpha << y << endl;
    cout << "The value of y with noboolalpha is " << noboolalpha << y << endl;

    return 0;
}