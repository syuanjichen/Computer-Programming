// 2022 Fall Computer Programming & Lab
// Online Judge Problem 1
// Show numbers in different number systems (8,10,16)

#include <iostream>
using namespace std;

int main(void)
{
    cout << oct << 19638 << endl;
    cout << hex << showbase << 29318 << endl;
    cout << dec << 32517 << endl;
    cout << oct << showbase << 0x7A8FE << endl;

    return 0;
}