#include <iostream>

using namespace std;

void printArray(const int[][3], int size);

int main(void)
{
    int a[2][3] = {{1, 2, 3}, {4, 5, 6}};
    int b[2][3] = {1, 2, 3, 4, 5};
    int c[2][3] = {{1, 2}, {4}};
    cout << "Values in array a by row are:" << endl;
    printArray(a, 2);
    cout << "Values in array b by row are:" << endl;
    printArray(b, 2);
    cout << "Values in array c by row are:" << endl;
    printArray(c, 2);

    return 0;
}

void printArray(const int arr[][3], int size)
{
    int i, j;

    for(i = 0 ; i < size ; i++)
    {
        for(j = 0 ; j < 3 ; j++)
        {
            cout << arr[i][j] << ' ';
        }
    }

    cout << endl;
}