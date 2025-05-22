// 2022 Fall Computer Programming & Lab
// Week 4 - Pointers
// The Relations between Pointers and Arrays

#include <iostream>
using namespace std;

int main(void)
{
    int num[3] = {4, 1, 7}, *numPtr, i;
    numPtr = num;

    cout << "num = " << num << ", numPtr = " << numPtr << ", *numPtr = " << *numPtr << endl;

    for(i = 0 ; i < 3 ; i++)
        cout << "num[" << i << "] = " << num[i] << ", address = " << &num[i] << endl;

    for(i = 0 ; i < 3 ; i++)
        cout << "numPtr + " << i << " = " << numPtr + i << ", *(numPtr + " << i << ") = " << *(numPtr + i) << endl;

    return 0;
}