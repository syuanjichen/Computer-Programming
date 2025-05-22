#include <iostream>

using namespace std;

int main(void)
{
    int **p, row, column, x, y;

    cin >> row >> column;

    p = new int* [row];

    for(x = 0 ; x < row ; x++)
    {
        *(p + x) = new int [column];
    }

    for(x = 0 ; x < row ; x++)
    {
        for(y = 0 ; y < column ; y++)
        {
            cin >> p[x][y];
        }
    }

    cout << "The array is : " << endl;

    for(x = 0 ; x < row ; x++)
    {
        for(y = 0 ; y < column ; y++)
        {
            cout << p[x][y] << " ";
        }

        cout << endl;
    }

    for(x = 0 ; x < row ; x++)
    {
        delete [] *(p + x);
    }

    delete [] p;

    return 0;
}
