#include <iostream>
#include <iomanip>

using namespace std;

int main(void)
{
    unsigned char a[8] = {0x00, 0x00, 0x00, 0x00, 0x40, 0x85, 0x94, 0xC0};
    void *p = a;

    cout << "floating value = " << setprecision(8) << *(double *)p << endl;

    double x = -1313.3125;
    int i;
    p = &x;

    cout << "byte sequence = ";

    for(i = 7 ; i >= 0 ; i--)
        cout << hex << uppercase << (int)((unsigned char *)p)[i] << " ";

    return 0;
}