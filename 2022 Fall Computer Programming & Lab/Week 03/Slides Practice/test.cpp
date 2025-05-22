#include <iostream>
#include <cstdio>
using namespace std;

int main(void)
{
    int c = 5;

    cout << c-- << "\n";
    
    c = 5;
    cout << --c << "\n";

    c = 5;
    cout << c << " ";
    cout << c-- << "\n";

    c = 5;
    cout << c << " ";
    cout << --c << "\n";

    c = 5;
    printf("%d\n",c--);
    
    c = 5;
    printf("%d\n",--c);

    c = 5;
    printf("%d %d\n",c ,c--);

    c = 5;
    printf("%d %d\n",c, --c);

    return 0;
}