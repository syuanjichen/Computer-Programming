// 2022 Computer Programming & Lab
// Week 4 - Pointers
// Array, Address, array form of pointers and precedence of operators

#include <iostream>
using namespace std;

int main(void)
{
    int a[3] = {10, 20, 30};
    int *aPtr, *bPtr, *p = a;

    aPtr = a;
    bPtr = &a[0];

    //cout << "The address of array a is " << &a << endl;
    //cout << "The address of element a[0] is " << &a[0] << endl;
    //cout << "The value of aPtr is " << aPtr << endl;
    //cout << "The value of bPtr is " << bPtr << endl;
    //cout << "The value of aPtr[4] is " << aPtr[4] << endl;
    //cout << "The value of bPtr[1] is " << bPtr[1] << endl;
    //cout << "aPtr[4] + bPtr[1] = " << aPtr[4] + bPtr[1] << endl;

    cout << "p = " << p << endl;
    cout << "*p = " << *p << endl;

    //p = a;
    //cout << "++*p = " << ++*p ;

    //p = a;
    //cout << ", *++p = " << *++p ;

    //p = a;
    //cout << ", *p++ = " << *p++ ;

    //p = a;
    //cout << ", (*p)++ = " << (*p)++;

    return 0;
}