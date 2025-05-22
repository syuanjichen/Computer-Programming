#include <iostream>

using namespace std;

int main(void)
{
    int n = 7;
    char ch = 'u';
    float e = 2.71828f;
    void *p;

    p = &n;
    cout << "The value of n is " << *(int *)p << ", address = " << (int *)p << endl;

    p = &ch;
    cout << "The value of ch is " << *(char *)p << ", address = " << (char *)p << endl;

    cout << p << endl;
    cout << &ch << endl;
    cout << (void *)&n << endl;
    cout << (void *)&e << endl;

    return 0;
}