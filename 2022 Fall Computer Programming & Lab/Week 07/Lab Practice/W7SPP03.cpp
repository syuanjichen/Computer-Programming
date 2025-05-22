//PREPEND BEGIN
#include <iostream>
using namespace std;
//PREPEND END
//TEMPLATE BEGIN
int gcd(int a, int b)
{
    int gcd_ab;
    
    while(a != 0 && b != 0)
    {
        if(a >= b)
            a = a % b;
        else
            b = b % a;
    }

    gcd_ab = (b == 0) ? a : b;

    return gcd_ab;
}

void gcd_r(int& a, int& b)
{
    int common;
    common = gcd(a, b);
    a = a / common;
    b = b / common;
    cout << a << " " << b << endl;
}

void gcd_p(int* a, int* b)
{
    int common;
    common = gcd(*a, *b);
    *a = *a / common;
    *b = *b / common;
    cout << *a << " " << *b << endl;
}
//TEMPLATE END
//APPEND BEGIN
int main()
{
    int a,b,c;
    cin >> a >> b >> c;
    if(c==1)
    {
        gcd_r(a,b);
    }
    else if(c==2)
    {
        gcd_p(&a,&b);
    }
      return 0;
}
//APPEND END