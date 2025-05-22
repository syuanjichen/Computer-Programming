#include <iostream>

using namespace std;

inline int digitssum(int n)
{
    int sum = 0;
    while(n != 0)
    {
        sum = sum + n % 10;
        n = n / 10;
    }

    return sum;
}

int main(void)
{
    int n, sum;

    cin >> n;

    sum = digitssum(n);

    cout << "n = " << n << ", sum of digits = " << sum << endl;

    return 0;
}