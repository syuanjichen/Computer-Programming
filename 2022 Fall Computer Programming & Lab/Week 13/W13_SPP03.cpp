//PREPEND BEGIN
#include <iostream>
using namespace std;

class Complex
{
    public:
        Complex(double r = 0, double i = 0): _r(r), _i(i) {}
        ~Complex() {}
//PREPEND END

//TEMPLATE BEGIN
    friend ostream & operator<<(ostream &output, const Complex &Z)
    {
        output << Z._r << (Z._i < 0 ? "" : "+") << Z._i << "i";
        return output;
    }

    friend istream & operator>>(istream &input, Complex &Z)
    {
        input >> Z._r >> Z._i;

        return input;
    }

    Complex& operator++()
    {
        ++_r;

        return *this;
    }

    Complex operator++(int)
    {
        Complex result(_r, _i);
        ++(*this);
        return result;
    }
//TEMPLATE END

//APPEND BEGIN
    private:
        double _r, _i;
};

int main() {
    Complex a;
    cin >> a;

    Complex b = a++;
    Complex c = ++a;
    Complex d = ++(++a);

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "c = " << c << endl;
    cout << "d = " << d << endl;

    return 0;
}
//APPEND END
