#include <iostream>
#include <cstdio>
#include <iomanip>

using namespace std;

int main(void)
{
    int arr[100], num, i, max;

    cin >> num;

    for(i = 0 ; i < num ; i++)
    {
        cin >> arr[i];
    }

    max = arr[0];

    for(i = 1 ; i < num ; i++)
    {
        if(arr[i] > max)
        {
            max = arr[i];
        }
    }

    cout << max << endl;

    for(i = 0 ; i < num ; i++)
    {
        if(arr[i] == max)
        {
            cout << i + 1 << " ";
        }
    }

    return 0;
}
