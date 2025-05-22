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
//PREPEND END

//TEMPLATE BEGIN
    // todo: 將 destructor 定義為 virtual，並 cout << "~MyVector() called" << endl
    virtual ~MyVector()
    {
        if (_vec != NULL)
            delete[] _vec;
        _vec = NULL;

        cout << "~MyVector() called" << endl;
    }
};

class MyVector2D: public MyVector {
public:
    MyVector2D() {
        _dim = 2;
        _vec = new int[2]();
    }
    MyVector2D(int *v): MyVector(2, v) {}

    ~MyVector2D()
    {
        cout << "~MyVector2D() called" << endl;
    }
    // todo: 定義 ~MyVector2D()，並 cout << "~MyVector2D() called" << endl
};
//TEMPLATE END

//APPEND BEGIN

int main() {
    MyVector2D *v = new MyVector2D;
    MyVector *mv = v;

    delete mv;

    return 0;
}
//APPEND END