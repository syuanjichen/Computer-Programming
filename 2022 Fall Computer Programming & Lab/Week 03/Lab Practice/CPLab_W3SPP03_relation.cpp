// 2022 Computer Programming & Lab
// Week 3 Online Judge Session Practice Problems
// Problem 3 : Relations

#include <iostream>
using namespace std;

int main(void)
{
    int x, y;
    
    cin >> x >> y;

    if (x > y)
        cout << "x > y" << endl;
    else if (x < y)
        cout << "x < y" << endl;
    else
        cout << "x = y" << endl;

    if (abs(x) > 10)
        cout << "|x| > 10" << endl;
    else
        cout << "|x| <= 10" << endl;

    if (abs(x) < abs(y))
        cout << "|x| < |y|" << endl;
    else
        cout << "|x| >= |y|" << endl;

    return 0;
}