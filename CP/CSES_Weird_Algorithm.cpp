#include <iostream>
#include <cstdio>

using namespace std;

long long int m3p1(unsigned long long int n)
{
    if(n == 1)
        return 1;
    else if(n % 2 == 0)
        return (n/2);
    else
        return 3*n + 1;
}

int main(void)
{
    unsigned long long int n;
    cin >> n;
    
    cout << n << " "; 

    while(n != 1)
    {
        n = m3p1(n);
        cout << n << " ";
    }

    return 0;
}