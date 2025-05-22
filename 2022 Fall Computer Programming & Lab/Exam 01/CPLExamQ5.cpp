#include <iostream>
#include <iomanip>
#include <cstdio>

using namespace std;

int main(void)
{
    int W[300][300], B[300][300], i, j, row, column, min_sum = 0, sum_final = 0, max_sum = 0, temp = 0, add = 0, subt = 0;

    cin >> row >> column;

    for(i = 0 ; i < row ; i++)
    {
        for(j = 0 ; j < column ; j++)
        {
            cin >> B[i][j];
        }
    }

    for(i = 0 ; i < row ; i++)
    {
        for(j = 0 ; j < column ; j++)
        {
            cin >> W[i][j];
        }
    }


    for(i = 0 ; i < row ; i++)
    {
        for(j = 0 ; j < column ; j++)
        {
            sum_final += W[i][j] * B[i][j];

            temp = W[i][j] * (!B[i][j]) - W[i][j] * B[i][j];
            if(temp > add)
            {
                add = temp;
            }

            if(temp < subt)
            {
                subt = temp;
            }
        }
    }

    min_sum = sum_final + subt;
    max_sum = sum_final + add;

    if(sum_final >= 0)
    {
        cout << "sum = " << sum_final << ", it's a dog." << endl;
        if(min_sum < 0)
            cout << "Minimum value = " << min_sum << ", SUCCESS!" << endl;
        else
            cout << "Minimum value = " << min_sum << ", FAIL!" << endl;
    }
    else
    {
        cout << "sum = " << sum_final << ", it's a cat." << endl;
        if(min_sum >= 0)
            cout << "Maximum value = " << max_sum << ", SUCCESS!" << endl;
        else
            cout << "Maximum value = " << max_sum << ", FAIL!" << endl;

    }

    return 0;
}
