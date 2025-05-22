#include <iostream>

using namespace std;

int main(void)
{
    int N, K, row, col, ans;
    int** arr;
//PREPEND END
    cin >> N;
    arr = new int* [N];
    for(int i = 0 ; i < N ; i++)
    {
        cin >> col;
        *(arr + i) = new int [col];
        for(int j = 0 ; j < col ; j++)
            cin >> arr[i][j];
    }

    cin >> row >> col;
    ans = arr[row][col];
//TEMPLATE BEGIN
//TEMPLATE END

//APPEND BEGIN
    cout << ans;
    for (int i = 0; i < N; i++)
    {
        delete[] arr[i];
    }
    
    delete[] arr;
    return 0;
}
//APPEND END