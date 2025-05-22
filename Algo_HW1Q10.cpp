#include <cstdio>
#include <iostream>
#include <cmath>

using namespace std;

int sqrt_recur(int i)
{
    if(i == 1)
        return 1;
    else
        return ceil(sqrt(i)*sqrt_recur(floor(sqrt(i))) + i);
}

int main(void)
{
    for(int i = 1000000 ; i <= 400000000 ; i = i + 1000000)
        cout << "n = " << i << ", T(n) = " << sqrt_recur(i) << endl;

    return 0;
}
