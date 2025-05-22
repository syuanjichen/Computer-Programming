#include <iostream>

using namespace std;

int main(void)
{
    int x, y, z, w;
    int p[500][500];
    int *q, **r;
    int i, j;

    cin >> x >> y >> z >> w;

    for (i = 0; i < x; ++i)
        for (j = 0; j < y; ++j)
            cin >> p[i][j];
//PREPEND END

//TEMPLATE BEGIN
	// TODO

    q = new int [x * y];
    for(i = 0 ; i < x ; i++)
    {
        for(j = 0 ; j < y ; j++)
        {
            q[y * i + j] = p[i][j];
        }
    }

    r = new int* [z];
    for(i = 0 ; i < z ; i++)
    {
        *(r + i) = new int [w];
    }

    for(i = 0 ; i < z ; i++)
    {
        for(j = 0 ; j < w ; j++)
        {
            r[i][j] = q[(w * i) + j];
        }
    }
	// write your code here.
//TEMPLATE END

//APPEND BEGIN
    cout << "1D Array(q): " << endl;
    for (i = 0; i < x*y; ++i)
        cout << q[i] << " ";
    cout << endl;

    cout << "2D Array(r): " << endl;
    for (i = 0; i < z; ++i)
    {
        for (int j = 0; j < w; ++j)
            cout << r[i][j] << " ";
        cout << endl;
    }

    return 0;
}