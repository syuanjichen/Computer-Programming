// 2022 Fall Computer Programming & Lab
// Week 4 - Arrays and Pointers
// Declare an array a[10] and find a.

#include <iostream>
using namespace std;

int main(void)
{
    int a[2] = {1,2};

    cout << "a[0] = " << a[0] << endl;
    cout << "a[1] = " << a[1] << endl;
    cout << "a = " << a << endl;
    cout << "The address of a = " << &a << endl;

    return 0;
}