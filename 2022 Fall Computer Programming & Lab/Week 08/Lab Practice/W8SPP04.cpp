//PREPEND BEGIN
#include <iostream>
using namespace std;

struct Complex
{
    int r, i;
};//PREPEND END

//TEMPLATE BEGIN
void complex_mat_add(Complex **A, Complex **B, Complex **C)
{
    int i, j;

    for(i = 0 ; i < 2 ; i++)
    {
        for(j = 0 ; j < 2 ; j++)
        {
            C[i][j].r = A[i][j].r + B[i][j].r;
            C[i][j].i = A[i][j].i + B[i][j].i;
        }
    }
}

//TEMPLATE END

//APPEND BEGIN
int main() {
    Complex **A, **B, **C;
    A = new Complex*[2];
    B = new Complex*[2];
    C = new Complex*[2];
    for(int i = 0; i < 2; ++i) {
        A[i] = new Complex[2];
        B[i] = new Complex[2];
        C[i] = new Complex[2];
    }

    for(int i = 0; i < 2; ++i) {
        for(int j = 0; j < 2; ++j) {
            cin >> A[i][j].r >> A[i][j].i;
        }
    }
    for(int i = 0; i < 2; ++i) {
        for(int j = 0; j < 2; ++j) {
            cin >> B[i][j].r >> B[i][j].i;
        }
    }

    complex_mat_add(A, B, C);

    for(int i = 0; i < 2; ++i) {
        for(int j = 0; j < 2; ++j) {
            cout << C[i][j].r << (C[i][j].i < 0 ? "" : "+") << C[i][j].i << "i ";
        }
        cout << endl;
    }

    return 0;
}
//APPEND END