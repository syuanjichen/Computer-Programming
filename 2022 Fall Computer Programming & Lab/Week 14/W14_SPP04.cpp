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

    virtual void getType() = 0;
};
//PREPEND END
//TEMPLATE BEGIN
class MyVector2D: public MyVector {
public:
    MyVector2D(int *v): MyVector(2, v) {}

    friend ostream& operator<< (ostream& os, const MyVector2D& v) {
        return os << "2D: " << static_cast<const MyVector&>(v); 
    }

    void getType()
    {
        cout << "Hello, I'm a 2D vector." << endl;
    }
};
class MyVectorNN: public MyVector {
    int _nnDim;
public:
    MyVectorNN(int dim, int nnDim, int *v) {
        _dim = dim;
        _nnDim = nnDim;
        _vec = new int[_dim];

        for(int i = 0; i < _dim; ++i) {
            if (i < _nnDim)
                _vec[i] = (v[i] < 0 ? 0 : v[i]);
            else
                _vec[i] = v[i];
        }
    }

    friend ostream& operator<< (ostream& os, const MyVectorNN& v) {
        return os << "NN: " << static_cast<const MyVector&>(v);
    }

    void getType()
    {
        cout << "Hello, I'm an NN vector." << endl;
    }
};

// todo: getVectorType(MyVector *v)，裡面要呼叫 v 的 getType()
void getVectorType(MyVector *v)
{
    v->getType();
}

//TEMPLATE END
//APPEND BEGIN
int main () {
    int *v1 = new int[2];
    cin >> v1[0] >> v1[1];

    int d, nnd;
    cin >> d >> nnd;

    int *v2 = new int[d];
    for (int i = 0; i < d; ++i)
        cin >> v2[i];

    MyVector2D a(v1);
    MyVectorNN b(d, nnd, v2);

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    getVectorType(&a);
    getVectorType(&b);

    delete[] v1;
    delete[] v2;

    return 0;
}
//APPEND END