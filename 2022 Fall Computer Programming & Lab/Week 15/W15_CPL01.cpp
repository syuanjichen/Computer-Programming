//PREPEND BEGIN
#include <iostream>

using namespace std;

class Complex{
protected:
    double re;
    double im;
public:
    Complex():re(0), im(0){}
    Complex(double a,double b):re(a), im(b){}
    Complex operator+(const Complex&);
    Complex operator||(const Complex&);
    friend istream& operator>>(istream &input,Complex &c);
    friend ostream& operator<<(ostream &output,Complex &c);
};

class Resistor: public Complex{
public:
    Resistor(){ re = 0; im = 0; }
    Resistor(double r){ re = r; im = 0; }
    friend istream& operator>>(istream &,Resistor &);
};

class Capacitor: public Resistor{
private:
    double C;
    double w;
public:
    Capacitor():C(0), w(0){}
    Capacitor(double Cin, double win):C(Cin), w(win){ compute(); }
    void compute();
    friend istream& operator>>(istream &,Capacitor &);
};

class Inductor: public Resistor{
private:
    double L;
    double w;
public:
    Inductor():L(0), w(0){}
    Inductor(double Lin,double win):L(Lin), w(win){ compute(); }
    void compute();
    friend istream& operator>>(istream &,Inductor &);
};

//PREPEND END

//TEMPLATE BEGIN
Complex Complex::operator+(const Complex &C)
{
    Complex ANS;

    ANS.re = this->re + C.re;
    ANS.im = this->im + C.im;

    return ANS;
}

Complex Complex::operator||(const Complex &C)
{
    Complex ANS;
    double denominator = (this->re + C.re) * (this->re + C.re) + (this->im + C.im) * (this->im + C.im);
    double real = (this->re * C.re - this->im * C.im) * (this->re + C.re) + (this->re * C.im + this->im * C.re) * (this->im + C.im);
    double imaginary = (this->re * C.im + this->im * C.re) * (this->re + C.re) - (this->re * C.re - this->im * C.im) * (this->im + C.im);

    ANS.re = real / denominator;
    ANS.im = imaginary / denominator;

    return ANS;
}

istream & operator>>(istream &input, Complex &C)
{
    input >> C.re >> C.im;
    return input;
}

ostream & operator<<(ostream &output, Complex &c)
{
    if(c.im == 0)
        output << c.re << endl;
    else if(c.re == 0 && c.im != 0)
        output << c.im << "i" << endl;
    else
        output << c.re << (c.im > 0 ? "+" : "") << c.im << "i" << endl;

    return output;
}

istream & operator>>(istream &input, Resistor &R)
{
    input >> R.re;

    return input;
}

void Capacitor::compute()
{
    this->re = 0;
    this->im = -1.00 / (this->C * this->w);
}

istream & operator>>(istream &input, Capacitor &Cap)
{
    input >> Cap.C >> Cap.w;
    Cap.compute();

    return input;
}

void Inductor::compute()
{
    this->re = 0;
    this->im = this->w * this->L;
}

istream & operator>>(istream &input, Inductor &I)
{
    input >> I.L >> I.w;
    I.compute();

    return input;
}

//TEMPLATE END

//APPEND BEGIN
int main(){
    Complex Zeq, Zeq2, Zeq3, Zeq4;
    Resistor r1(3), r2(4), r3(5), r4, r5;
    Capacitor zC(0.00003,10000), zC2;
    Inductor zL(0.1,10000), zL2;
    
    Zeq = (r1||r2||r3);
    Zeq2 = (zC+zL);
    cout << Zeq << Zeq2;
    

    cin >> r4 >> zC2;
    Zeq3 = r4 + zC2;
    cout << Zeq3;

    
    cin >> r5 >> zL2;
    Zeq4 = r5 || zL2;
    cout << Zeq4;
    

    return 0;
}
//APPEND END