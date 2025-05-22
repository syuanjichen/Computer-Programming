// 2022 Fall Computer Programming & Lab
// Week 4 - Pointers
// Declare and Use Pointers

#include <iostream>
#include <cstdio>
using namespace std;

int main(void)
{
    int a;
    int *aPtr = NULL;

    a = 417;
    aPtr = &a;

    cout << "a = " << a << ", the address of a is " << &a << endl;
    cout << "The value of aPtr is " << aPtr << endl;

    cout << "The value of *aPtr is " << *aPtr << endl;
    cout << "The address of aPtr is " << &aPtr << endl;
    cout << "The value of *&aPtr is " << *&aPtr << endl;
    cout << "The address of &*aPtr is " << &*aPtr << endl;

    return 0; 
}