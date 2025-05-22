// 2022 Fall Computer Programming & Lab
// Week 4 Online Judge Session Practice Problems
// Problem 3 - Matrix subtraction

#include <iostream>
using namespace std;

int main(void)
{
    int matrix1[2][2] = {0}, matrix2[2][2] = {0}, result[2][2] = {0}, row, column, address_x, address_y;

    for(address_x = 0 ; address_x < 2 ; address_x++)
    {
        for(address_y = 0 ; address_y < 2; address_y++)
        {
            cin >> matrix1[address_x][address_y];
        }
    }

    for(address_x = 0 ; address_x < 2 ; address_x++)
    {
        for(address_y = 0 ; address_y < 2 ; address_y++)
        {
            cin >> matrix2[address_x][address_y];
            /* 
                C[0][0] = A[0][0] * B[0][0] + A[0][1] * B[1][0]
                C[0][1] = A[0][0] * B[0][1] + A[0][1] * B[1][1]
                C[1][0] = A[1][0] * B[0][0] + A[1][1] * B[1][0]
                C[1][1] = A[1][0] * B[1][0] + A[1][1] * B[1][1]

                C[i][j] = A[i][0] * B[0][j] + A[i][1] * B[1][j]

                C[i][j] = A[i][0] * B[0][j] + A[i][1] * B[1][j] + A[i][2] * B[2][j]
            */
        }
    }

    for(address_x = 0 ; address_x < 2 ; address_x++)
    {
        for(address_y = 0 ; address_y < 2; address_y++)
        {
            result[address_x][address_y] = matrix1[address_x][0] * matrix2[0][address_y] + matrix1[address_x][1] * matrix2[1][address_y];
            cout << result[address_x][address_y];

            if(address_y != column - 1)
                cout << " ";
        }

        cout << endl;
    }
    
    return 0;
}