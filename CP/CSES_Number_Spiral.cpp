#include <iostream>

using namespace std;

long long int number(long long int y, long long int x)
{
    if(y == x)
        return y * y - y + 1;
    else
    {
        if(y > x)
        {
            if(y % 2 == 0)
                return number(y, y) + (y - x);
            else
                return number(y, y) - (y - x);
        }
        else // y < x
        {
            if(x % 2 == 0)
                return number(x, x) - (x - y);
            else
                return number(x, x) + (x - y); 
        }
    }
}

int main(void)
{
    int t; // Number of tests;
    long long int y, x;

    cin >> t;

    for(int i = 1 ; i <= t ; i++)
    {
        cin >> y >> x;
        cout << number(y, x) << "\n";
    }

    return 0;
}