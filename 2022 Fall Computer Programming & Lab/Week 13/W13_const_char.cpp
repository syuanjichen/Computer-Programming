#include <iostream>

using namespace std;

const double sum(int x, float y)
{
    const double x1 = x;
    const double y1 = y;
    const double res = x1 + y1;

    return res;
}

const char* func(int x)
{
    const char* str = "Watanabe You";

    return str;
}

int main(void)
{
    int n, i;
    
    cout << "Enter a number n: ";
    cin >> n;

    /*for(i = 1 ; i <= n ; i++)
        cout << func(i) << endl;*/

    cout << sum(6, 3.14);
    
    return 0;
}