#include <iostream>
#define PI 3.14159265

using namespace std;

double circle_circum_area(double radius, double& area, double& circum);

int main(void)
{
    double radius, area, circum;

    cin >> radius;

    circle_circum_area(radius, area, circum);

    return 0;
}

double circle_circum_area(double radius, double& area, double& circum)
{
    area = PI * radius * radius;
    circum = 2.0 * PI * radius;
    cout << "Area = " << area << endl;
    cout << "Circumferance = " << circum << endl;
}