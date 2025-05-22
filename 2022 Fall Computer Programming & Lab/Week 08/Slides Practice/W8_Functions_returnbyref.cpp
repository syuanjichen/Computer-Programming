#include <iostream>
using namespace std;

int& max(int& n1, int& n2);

int main(void)
{
    int x = 3, y = 2;

    max(x, y) = 5;

    cout << "x = " << x << ", y = " << y << endl;

    return 0;
}

int& max(int& n1, int& n2)
{
    if(n1 > n2)
        return n1;
    else
        return n2;
}