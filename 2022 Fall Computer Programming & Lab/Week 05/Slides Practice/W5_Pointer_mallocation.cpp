// 2022 Fall Computer Programming & Lab
// Week 5 - Pointer
// Pointer Allocation using "new"

#include <iostream>

using namespace std;

int main(void)
{
    int number, *p = NULL, i;

    cout << "The number of elements : ";
    cin >> number;

    p = new (nothrow) int[number];

    for(i = 0 ; i < number ; i++)
    {
        cout << "Element " << i << ": ";
        cin >> *(p + i);
    }

    for(i = 0 ; i < number ; i++)
        cout << "Element " << i << " = " << *(p + i) << endl;

    delete [] p;

    return 0;
}