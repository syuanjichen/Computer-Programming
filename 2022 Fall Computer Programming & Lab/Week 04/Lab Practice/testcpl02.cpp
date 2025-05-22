#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

bool is_prime(int n)
{
    int j;
    bool prime = true;
    for(j = 2 ; j <= (int)sqrt(n) ; j++)
    {
        if(n % j == 0)
        {
            prime = false;
            return false;
            break;
        }
    }

    if(prime == true)
    {
        printf("%d",n);
        return true;
    }
}


int main(void)
{
    int n, i, j;
    bool prime;

    do
    {
        cin >> n;

        if(n == -1)
        {
            printf("\n");
            break;
        }

        if(n == 1 || n == 0)
            printf("\n");

        for(i = 2 ; i <= n ; i++)
        {
            prime = is_prime(i);
            if(prime == true)
            {
                printf(", ");
            }

        }

        if(n > 1)
        {
            printf("\b\b");
            printf(".\n");
        }

    } while(n != -1);

    return 0;
}