//PREPEND BEGIN
#include <iostream>
using namespace std;

class Circle
{
    private:
        double _r;
        const double PI;

    public:
        Circle(double r) : PI(3.14)
        {
            _r = r;
        }
        
        double area() const
        {
            return PI * _r * _r;
        }

        double get_radius() const
        {
            return _r;
        }

        void set_radius(double r)
        {
            _r = r;
        }

        ~Circle() {}
    // todo: area()
    // todo: get_radius()
    // todo: set_radius(double r)
//TEMPLATE END

//APPEND BEGIN
};

int main(void)
{
    double r;
    cin >> r;

    const Circle c_c(r);
    cout << "const Circle:" << endl;
    cout << "radius = " << c_c.get_radius() << endl;
    cout << "Area = " << c_c.area() << endl << endl;

    cin >> r;

    Circle c(r);
    cout << "non const Circle:" << endl;
    cout << "Before setting radius" << endl;
    cout << "radius = " << c.get_radius() << endl;
    cout << "Area = " << c.area() << endl;

    cin >> r;
    c.set_radius(r);
    cout << "After setting radius" << endl;
    cout << "radius = " << c.get_radius() << endl;
    cout << "Area = " << c.area() << endl;

    return 0;
}
//APPEND END