//PREPEND BEGIN
#include <iostream>
using namespace std;

int constructor_calls = 0;

class Rectangular
{
    public:
        Rectangular(int l = 0)
        {
            _height = l;
            _width = l;
            constructor_calls++;
        }

        Rectangular(int h, int w)
        {
            _height = h;
            _width = w;
            constructor_calls++;
        }

        Rectangular(const Rectangular& r)
        {
            constructor_calls++;
        }

//APPEND BEGIN
    ~Rectangular() {}
    private:
        int _height, _width;
};

void call_by_value(Rectangular a)
{
    cout << "call_by_value(Rectangular a) called" << endl;
}
void call_by_reference(Rectangular &a)
{
    cout << "call_by_reference(Rectangular &a) called" << endl;
}

int main()
{
    Rectangular a;
    Rectangular b(5);
    Rectangular c(2, 3);
    Rectangular d = c;
    Rectangular *p = new Rectangular[5];
    Rectangular &e = c;
    Rectangular f(c);

    call_by_value(a);
    call_by_reference(a);

    cout << endl << "totally " << constructor_calls << " constructors called" << endl;

    delete[] p;
    return 0;
}
//APPEND END