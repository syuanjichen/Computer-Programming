#include <iostream>

using namespace std;

int x = 1;
int main(void)
{
    int x = 5;
    cout << "x = " << x << endl;

    cout << "Global x = " << ::x << endl;

    return 0;
}