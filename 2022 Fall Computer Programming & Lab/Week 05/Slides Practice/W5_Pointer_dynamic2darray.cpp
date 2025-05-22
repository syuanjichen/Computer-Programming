#include <iostream>

using namespace std;

int main(void)
{
    int i, j;
    int nums[2][3] = {4, 1, 7, 8, 0, 3};
    int **p = NULL;

    p = new int* [2];

    for(i = 0 ; i < 2 ; i++)
    {
        *(p + i) = new int [3];
    }

    for(i = 0 ; i < 2 ; i++)
    {
        for(j = 0 ; j < 3 ; j++)
        {
            *(*(p + i) + j) = nums[i][j] + 1;
            cout << "(" << i << ", " << j << ") -> " << *(*(p + i) + j) << endl;
        }
    }

    for(i = 0 ; i < 2 ; i++)
        delete [] *p;

    delete [] p;

    return 0;
}