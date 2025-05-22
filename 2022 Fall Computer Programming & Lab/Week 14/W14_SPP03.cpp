//PREPEND BEGIN
#include <iostream>
using namespace std;

class MyVector {
protected:
    int _dim;
    int *_vec;

public:
    MyVector(): _dim(0), _vec(NULL) {}
    MyVector(int dim, int *v) {
        _dim = dim;
        _vec = new int[_dim];
        for (int i = 0; i < _dim; i++) {
            _vec[i] = v[i];
        }
    }
    ~MyVector() {
        if (_vec != NULL)
            delete[] _vec;
        _vec = NULL;
    }

    friend ostream& operator<< (ostream& os, const MyVector& v) {
        for (int i = 0; i < v._dim - 1; i++) {
            os << v._vec[i] << " ";
        }
        os << v._vec[v._dim - 1];
        return os;
    }
};

class Counter
{
    private:
        static int _n;
    public:
        Counter() {}
        ~Counter() {}

        void add_one() { _n++; }
        static int get_n() { return _n; }
};
int Counter::_n = 0;
//PREPEND END

//TEMPLATE BEGIN
class MyVector2D : public Counter, public MyVector
{
    public:
        MyVector2D()
        {
            _dim = 2;
            _vec = new int[2]();
            add_one();
        }
        MyVector2D(int *v): MyVector(2, v)
        {
            add_one();
        }

    friend ostream& operator<< (ostream& os, const MyVector2D& v) 
    {
        return os << "2D: " << static_cast<const MyVector&>(v); 
    }
};
//TEMPLATE END

//APPEND BEGIN
int main() {
    int *v1 = new int[2];

    cin >> v1[0] >> v1[1];

    MyVector2D a(v1);
    int n;
    cin >> n;
    MyVector2D *v = new MyVector2D[n];

    cout << "a = " << a << endl;
    cout << "Number of MyVector2D = " << MyVector2D::get_n() << "." << endl;

    delete[] v1;
    delete[] v;

    return 0;
}
//APPEND END