// 2022 Fall Computer Programming & Lab
// Week 4 - Computer Programming Homework
// Problem 2 - Print prime numbers that are less than N

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
            break;
        }
    }

    if(prime == true)
    {
        return true;
    }
    else
        return false;
}

int main(void)
{
    int n, i, j, last_prime, temp_prime;
    bool prime, comma;

    while(scanf("%d", &n) != EOF)
    {
        last_prime = 0;
        temp_prime = 0;

        if(n == -1)
        {
            printf("\n");
            break;
        }

        if(n == 1 || n == 0)
            printf("\n");

        for(i = 2 ; i <= n ; i++)
        {
            comma = false;
            prime = is_prime(i);
            if(prime == true)
            {
                if(last_prime != 0)
                    printf("%d", last_prime);
                
                temp_prime = last_prime;
                last_prime = i;
                comma = true;
            }

            if(comma == true && temp_prime != 0)
                printf(", ");
        }
        
        if(last_prime != 0)
        printf("%d.\n", last_prime);
    }

    return 0;
}