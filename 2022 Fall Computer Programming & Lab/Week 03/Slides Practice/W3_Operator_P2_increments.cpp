// 2022 Fall Computer Programming & Lab
// Week 3 - Operators
// Difference of i++ and ++i

#include <iostream>
using namespace std;

int main(void)
{
    int i = 1;

    cout << "Effect of i++: " << endl;
    cout << "i = " << i << endl;
    cout << "i++ = " << i++ << endl;
    cout << "i = " << i << endl;

    i = 1;
    cout << " --------------- " << endl;

    cout << "Effect of ++i:" << endl;
    cout << "i = " << i << endl;
    cout << "++i = " << ++i << endl;
    cout << "i = " << i << endl;

    return 0;
}