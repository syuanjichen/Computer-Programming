#include <iostream>

using namespace std;

unsigned int fibonacci(int n)
{
    if(n == 0 || n == 1)
        return 1;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}

int main(void)
{
    int i;

    for(i = 0 ; i < 100 ; i++)
    {
        cout << "fibonacci(" << i << ")" << " = " << fibonacci(i) << endl;
    }

    return 0;
}