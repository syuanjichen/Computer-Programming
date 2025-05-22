// Computer Programming Week 2 Example 5
// Use preprocessor to define a number first

#include <iostream>
using namespace std;
#define pi 3.14

int main(void)
{
    double axis_major, axis_minor, area;
    cout << "The major axis of the ellipse = ";
    cin >> axis_major;
    cout << "The minor axis of the ellipse = ";
    cin >> axis_minor;

    area = pi * axis_major * axis_minor;

    cout << "The area of the ellipse = " << area << endl;
    
    return 0;
}