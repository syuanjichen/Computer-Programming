#include <iostream>

using namespace std;

int main(void)
{
    int elements;
    long double *p;

    cin >> elements;

    p = new long double [elements];

    cout << sizeof(long double) * elements << endl;

    delete [] p;

    return 0;
}
