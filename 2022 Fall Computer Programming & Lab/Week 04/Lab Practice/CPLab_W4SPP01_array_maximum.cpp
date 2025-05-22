// 2022 Fall Computer Programming & Lab
// Week 4 Online Judge Session Practice Problems
// Problem 1 - Maximum in an Array and its Position

#include <iostream>
using namespace std;

int main(void)
{
    int a[100], max, max_position = 1, n, i;

    cin >> n;

    for(i = 0 ; i < n ; i++)
        cin >> a[i];

    max = a[0];

    for(i = 1 ; i < n ; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
            max_position = i + 1;
        }
    }

    cout << max << " " << max_position << endl;

    return 0;
}