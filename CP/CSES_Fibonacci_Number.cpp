#include <iostream>
#include <vector>
#define MODULO 1000000007

using namespace std;

long long int fibonacci(unsigned long long int n)
{
    vector<unsigned long long int> fib(INT64_MAX, 0);
    fib[0] = 0;
    fib[1] = 1;
    for(int i = 2 ; i <= n ; i++)
        fib[i] = (fib[i - 1] + fib[i - 2]) % MODULO;
    
    return fib[n];
}

int main(void)
{
    int n;
    cin >> n;
    cout << fibonacci(n) << endl;
    return 0;
}