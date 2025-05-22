// 2022 Fall Computer Programming & Lab
// Online Judge Problem 3
// Show numbers in different systems or do arithmetics

#include <iostream>
using namespace std;

int main(void)
{
    int base_8 = 02021, base_16 = 0xABCD, sum;
    sum = base_8 + base_16;

    cout << "1234 in base-8 = " << dec << 01234 << " in base-10." << endl;
    cout << "BFF99 in base-16 = " << dec << 0xBFF99 << " in base-10." << endl;
    cout << "5566 in base-10 = " << oct << 5566 << " in base-8." << endl;
    cout << "921 in base-10 = " << hex << 921 << " in base-16." << endl;
    cout << "2021 in base-8 + ABCD in base-16 = " << dec << sum << " in base-10." << endl;

    return 0;
}