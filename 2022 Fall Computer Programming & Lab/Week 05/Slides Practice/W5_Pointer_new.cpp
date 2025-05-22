// 2022 Fall Computer Programming & Lab
// Week 5 - Pointer
// Using new to dynamically allocate an array

#include <iostream>
using namespace std;

int main(void)
{
    int number, *p, i;
    
    cin >> number;

    p = new int[number];

    for(i = 0 ; i < number ; i++)
    {
        *(p + i) = (i + 1) * (i + 1);
        printf("%d ", *(p + i));
    }

    delete [] p;

    return 0;
}