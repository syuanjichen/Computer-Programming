#include <iostream>
#include <cstdio>
#include <iomanip>

using namespace std;

int main(void)
{
    int *a, *b, *c, num1, num2, i, j, temp;

    cin >> num1 >> num2;

    a = new int [num1];
    b = new int [num2];
    c = new int [num1 + num2];

    for(i = 0 ; i < num1 ; i++)
    {
        cin >> a[i];
    }

    for(i = 0 ; i < num2 ; i++)
    {
        cin >> b[i];
    }

    for(i = 0 ; i < num1 ; i++)
    {
        c[i] = a[i];
    }

    for(i = num1 ; i < num1 + num2 ; i++)
    {
        c[i] = b[i - num1];
    }

    for(i = 0 ; i < num1 + num2 ; i++)
    {
        for(j = i + 1 ; j < num1 + num2 ; j++)
        {
            if(c[j] < c[i])
            {
                temp = c[i];
                c[i] = c[j];
                c[j] = temp;
            }
        }
    }

    for(i = 0 ; i < num1 + num2 ; i++)
    {
        if(i != num1 + num2 - 1)
            cout << c[i] << " ";
        else
            cout << c[i];
    }

    delete [] a;
    delete [] b;
    delete [] c;

    return 0;
}
