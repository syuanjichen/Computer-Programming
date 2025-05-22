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
};

//TEMPLATE END
//APPEND BEGIN
int main() {
	
    Complex a,b;
    
    cin >> a;
    cin >> b;
	
    Complex d = a + b + Complex(5, 6);
	
    cout << d << endl;

    return 0;
}

//APPEND END