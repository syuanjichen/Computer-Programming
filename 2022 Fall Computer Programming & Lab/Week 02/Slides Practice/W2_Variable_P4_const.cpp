// Computer Programming Week 2 Example 4
// Use constant to initialize numbers

#include <iostream>
using namespace std;

const double pi = 3.14;

int main(void)
{
    double radius,area,circum;
    cout << "The radius of circle = ";
    cin >> radius;

    area = pi * radius * radius;
    circum = 2.0 * pi * radius;

    cout << "The area of the circle is " << area << endl;
    cout << "The circumference of the circle is " << circum << endl;

    return 0;
}
