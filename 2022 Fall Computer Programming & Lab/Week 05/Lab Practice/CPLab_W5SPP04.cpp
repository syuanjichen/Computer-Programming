#include <iostream>
#include <iomanip>

using namespace std;

int main(void)
{
    unsigned char a[4] = {0}, b[8] = {0}, c[16] = {0};
    void *f = a, *d = b, *ld = c;
    int i;

    cin >> *(float *)f;
    cin >> *(double *)d;
    cin >> *(long double *)ld;


    cout << "byte sequence(float) = 0x";
    for(i = 3 ; i >= 0 ; i--)
    {
        cout << setw(2) << setfill('0') << hex << uppercase << (int )((unsigned char *)f)[i];
    }

    cout << endl;

    cout << "byte sequence(double) = 0x";
    for(i = 7 ; i >= 0 ; i--)
    {
        cout << setw(2) << setfill('0') << hex << uppercase << (int )((unsigned char *)d)[i];
    }

    cout << endl;

    cout << "byte sequence(long double) = 0x";
    for(i = 15 ; i >= 0 ; i--)
    {
        cout << setw(2) << setfill('0') << hex << uppercase << (int )((unsigned char *)ld)[i];
    }

    cout << endl;

    return 0;
}