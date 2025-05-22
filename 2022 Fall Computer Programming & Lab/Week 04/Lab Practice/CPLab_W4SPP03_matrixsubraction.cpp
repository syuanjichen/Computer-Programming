// 2022 Fall Computer Programming & Lab
// Week 4 Online Judge Session Practice Problems
// Problem 3 - Matrix subtraction

#include <iostream>
using namespace std;

int main(void)
{
    int matrix1[4][4] = {0}, matrix2[4][4] = {0}, result[4][4] = {0}, row, column, address_x, address_y;

    cin >> row >> column;

    for(address_x = 0 ; address_x < row ; address_x++)
    {
        for(address_y = 0 ; address_y < column; address_y++)
        {
            cin >> matrix1[address_x][address_y];
        }
    }

    for(address_x = 0 ; address_x < row ; address_x++)
    {
        for(address_y = 0 ; address_y < column; address_y++)
        {
            cin >> matrix2[address_x][address_y];
            result[address_x][address_y] = matrix1[address_x][address_y] - matrix2[address_x][address_y];
        }
    }

    for(address_x = 0 ; address_x < row ; address_x++)
    {
        for(address_y = 0 ; address_y < column; address_y++)
        {
            cout << result[address_x][address_y];

            if(address_y != column - 1)
                cout << " ";
        }

        cout << endl;
    }
    
    return 0;
}