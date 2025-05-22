// 2022 Computer Programming & Lab
// Week 3 Online Judge Session Practice Problems
// Problem 5 : factorial

#include <iostream>
using namespace std;

int factorial(int n)
{
    if(n == 1 || n == 0)
        return 1;
    else
        return n * factorial(n-1);
}

int main(void)
{
    int n;
    
    cin >> n;
    cout << n << "! = " << factorial(n) << endl;

    return 0;
}