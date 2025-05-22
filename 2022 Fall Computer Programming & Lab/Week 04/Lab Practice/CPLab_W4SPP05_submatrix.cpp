// 2022 Computer Programming & Lab
// Week 4 Online Judge Session Practice Problems
// Problem 5 - Submatrix

#include <iostream>
using namespace std;

int main(void)
{
    int A[10][10];

    for (int i = 0; i < 10; ++i) 
    {
        for (int j = 0; j < 10; ++j) 
        {
            cin >> A[i][j];
        }
    }

    int i, j, m, n;
    cin >> i >> j >> m >> n;

    int row, column;
    for(row = i ; row < i + m ; row++)
    {
        for(column = j; column < j + n ; column++)
        {
            cout << A[row][column] << " ";
        }

        cout << endl;
    }

    return 0;
}