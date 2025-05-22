#include <iostream>

using namespace std;

void cube_vol_area(int, double, double, double, double, double);

int main(void)
{
    int id = 5;
    double s = 3.0, v = 10.0, x = 6.3, y = 7.2, z = 1.5;

    cout << "cube surface area = " << s << " cube volume = " << v << endl;

    cube_vol_area(id, x, y, z, s, v);

    cout << "cube surface area = " << s << " cube volume = " << v << endl;

    return 0;
}

void cube_vol_area(int id, double width, double length, double height, double surface, double volume)
{
    surface = 2 * (width * length + width * height + length * height);
    volume = width * length * height;
    cout << "cube surface area = " << surface << " cube volume = " << volume << endl;
}