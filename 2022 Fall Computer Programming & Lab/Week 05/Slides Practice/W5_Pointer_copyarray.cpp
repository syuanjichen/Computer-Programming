#include <iostream>

using namespace std;

int main(void)
{
    int *p = NULL, *q = NULL, osize = 10, nsize = 20, i, sum = 0;

    p = new int[osize];

    for(i = 0 ; i < osize ; i++)
    {
        //cout << "Element " << i << " : ";
        //cin >> *(p + i); 
        //cout << "p[" << i << "] = " << *(p + i) << endl;
        *(p + i) = i * i;
        sum = sum + *(p + i);
    }

    q = new int[nsize];

    for(i = 0 ; i < nsize ; i++)
    {
        *(q + i) = *(p + i);
    }

    delete [] p;
    p = q;

    for(i = osize ; i < nsize ; i++)
    {
        //cout << "Element " << i << " : ";
        //cin >> *(p + i);
        //cout << "p[" << i << "] = " << *(p + i) << endl;
        *(p + i) = i + 1;
        sum = sum + *(p + i);
    }

    cout << "sum = " << sum << endl;

    delete [] p;

    return 0;
}