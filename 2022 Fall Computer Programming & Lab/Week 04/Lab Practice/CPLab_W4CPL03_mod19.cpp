// 2022 Fall Computer Programming & Lab
// Week 4 - Computer Programming Homework
// Problem 3 - Print a N*N matrix that print pow(a, 0~N-1) % N


#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
using namespace std;

int main(void)
{
    int a[49][49] = {0}, n, row, column;

    cin >> n;

    for(row = 0 ; row < n - 1 ; row++)
    {
        a[row][0] = row + 1;
        for(column = 0 ; column < n - 1 ; column++)
        {
            if(column >= 1)
            {
                a[row][column] = ((a[row][column - 1] % n) * (a[row][0])) % n;
            }

            cout << setw(3) << a[row][column];
        }

        cout << endl;
    }

    return 0;
}
