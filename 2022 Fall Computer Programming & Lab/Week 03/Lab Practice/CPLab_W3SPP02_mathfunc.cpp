// 2022 Computer Programming & Lab
// Week 3 Online Judge Session Practice Problems
// Problem 2 : Math functions

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(void)
{
    double x;

    cin >> x;

    cout << "ceil(x) = " << fixed << setprecision(3) << ceil(x) << ".\n";
    cout << "floor(x) = " << fixed << setprecision(3) << floor(x) << ".\n";
    cout << "round(x) = " << fixed << setprecision(3) << round(x) << ".\n";
    cout << "trunc(x) = " << fixed << setprecision(3) << trunc(x) << ".\n";
    cout << "ln(1+x) = " << fixed << setprecision(3) << log(1.0+x) << ".\n"; 
    cout << "x - (1/2)*x^2 + (1/3)*x^3 - (1/4)*x^4 = " << fixed << setprecision(3) << x - (1.0/2.0) * pow(x,2) + (1.0/3.0) * pow(x,3) - (1.0/4.0) * pow(x,4) << ".\n";
    cout << "sin(x) = " << fixed << setprecision(3) << sin(x) << ", cos(x) = " << fixed << setprecision(3) << cos(x) << ".\n";
    cout << "sin(x)^2 + cos(x)^2 = " << fixed << setprecision(3) << pow(sin(x),2) + pow(cos(x),2) << ".\n";
    cout << "(e^x - e^(-x))/2 = " << fixed << setprecision(3) << (exp(x) - exp(-x))/2.0 << ".\n";
    cout << "sinh(x) = " << fixed << setprecision(3) << sinh(x) << ".\n";

    return 0;
}