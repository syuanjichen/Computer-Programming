// 2022 Fall Computer Programming
// Week 3 - Operators
// Using math functions <cmath>

#include <iostream>
#include <cmath>
#include <iomanip>
#define PI 3.14159265
using namespace std;

int main(void)
{
    int a = 1, b = 3;
    double c = 3.0, theta = PI/2, phi = PI/3, gamma = PI/4;

    cout << "log10(3) = " << log10(3) << endl;
    cout << "log10(11.0) = " << log10(11.0) << endl;

    cout << "sin(PI/2) = " << sin(PI/2) << endl;
    cout << "cos(PI/3) = " << cos(PI/3) << endl;
    cout << "tan(PI/4) = " << tan(PI/4) << endl;

    cout << "ln(e) = " << log(2.718281828) << endl;
    cout << "exp(10) = " << exp(10) << endl;

    cout << "sqrt(5) = " << sqrt(5) << endl;
    cout << "2^10 = " << pow(2,10) << endl;

    cout << "arctan(1) = " << setprecision(4) << atan(1) << endl;
    cout << "sinh(0) = " << sinh(0) << endl;
    cout << "cosh(0) = " << cosh(0) << endl;
    cout << "tanh(0) = " << tanh(0) << endl;

    cout << "sinh(1) = " << setprecision(4) << sinh(1) << endl;
    cout << "cosh(1) = " << setprecision(4) << cosh(1) << endl;
    cout << "tanh(1) = " << setprecision(4) << tanh(1) << endl;

    cout << "round(2.4) = " << round(2.4) << endl;
    cout << "round(2.5) = " << round(2.5) << endl;

    cout << "floor(2.9) = " << floor(2.9) << endl;
    cout << "floor(3.1) = " << floor(3.1) << endl;
    cout << "floor(-1.1) = " << floor(-1.1) << endl;
    cout << "floor(2.0) = " << floor(2.0) << endl;

    return 0; 

}