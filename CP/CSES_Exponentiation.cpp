#include <iostream>
#include <cmath>

using namespace std;

int main(void)
{
    const int MODULO = 1000000007;
    int n;

    cin >> n;
    for(int i = 1 ; i <= n ; i++)
    {
        int base, exponent;
        cin >> base >> exponent;

        if(base == 0 && exponent == 0)
            cout << 1 << endl;
        else if(base == 0 && exponent > 0)
            cout << 0 << endl;
        else if(exponent == 0 || base == 1)
            cout << base % MODULO << endl;
        else
        {
            unsigned long long int remainder = 1;
            for(int j = 1 ; j <= exponent ; j++)
            {
                remainder = (remainder * base) % MODULO;
            }
            cout << remainder << endl;
        }
    }

    return 0;
}