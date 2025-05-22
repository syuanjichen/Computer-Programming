//PREPEND BEGIN
#include <iostream>
using namespace std;
//PREPEND END
//TEMPLATE BEGIN

class Complex
{
    private:
	    int _r, _i;

    public:
        Complex(){};
        Complex(int a, int b)
        {
            _r = a;
            _i = b;
        };

        Complex operator-()
        {
            Complex B;
            B._r = -_r;
            B._i = -_i;

            return B;
        }

        Complex operator+(const Complex &B)
        {
            Complex C;
            C._r = _r + B._r;
            C._i = _i + B._i;

            return C;
        }

        void print()
        {
            cout << _r << (_i < 0 ? "" : "+") << _i << "i" << endl;
        }
};


//TEMPLATE END
//APPEND BEGIN
int main(void)
{
    Complex a(1, 2);
    Complex b(3, 4);
    Complex d = a + b + Complex(5, 6);
	
	d.print();
	Complex e = -d;
	e.print();

    return 0;
}

//APPEND END