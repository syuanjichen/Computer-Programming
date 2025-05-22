//PREPEND BEGIN
#include <iostream>
using namespace std;

class Complex
{
    public:
        Complex(double r = 0, double i = 0): _r(r), _theta(i) {}
        ~Complex() {}
//PREPEND END

//TEMPLATE BEGIN
        Complex& rotate(double deg)
        {
            _theta += deg;
            return (*this);
        }
//TEMPLATE END

//APPEND BEGIN
    // 這裡是魔法 XDD，別管
        friend istream& operator>> (istream& is, Complex& c) {
            return is >> c._r >> c._theta;
        }
        friend ostream& operator<< (ostream& os, const Complex& c) {
            return os << c._r << "deg(" << c._theta << ")";
        }

    private:
        double _r, _theta;
};

int main() {
    Complex a;
    cin >> a;

    cout << "Before rotate: a = " << a << endl;
    double deg1, deg2;
    cin >> deg1 >> deg2;
    a.rotate(deg1).rotate(deg2);
    cout << "After rotate: a = " << a << endl;

    return 0;
}
//APPEND END