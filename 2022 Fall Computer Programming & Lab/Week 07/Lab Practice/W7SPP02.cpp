#include <iostream>

using namespace std;

int gcd(int a, int b);

int main(void)
{
    int a, b;

    cin >> a >> b;

    cout << gcd(a, b) << endl;

    return 0;
}

int gcd(int a, int b)
{
    int gcd_ab;
    
    while(a != 0 && b != 0)
    {
        if(a >= b)
            a = a % b;
        else
            b = b % a;
    }

    gcd_ab = (b == 0) ? a : b;

    return gcd_ab;
}
