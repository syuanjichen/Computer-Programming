// 2022 Fall Computer Programming & Lab
// Week 4 Online Judge Session Practice Problems
// Find the length of an array without directly using sizeof()

#include <iostream>
using namespace std;

int main(void)
{
    int arr[15] = {0}, len;

    len = ((long)(&arr + 1) - (long)(&arr)) / sizeof(int);

    cout << "len = " << len << endl;

    return 0;
}