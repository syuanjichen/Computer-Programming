//PREPEND BEGIN
#include <iostream>
using namespace std;
//PREPEND END

//TEMPLATE BEGIN
void add_matrix(int** A, int** B, int** C) 
{
    int i, j;
    for(i = 0 ; i < 3 ; i++)
    {
        for(j = 0 ; j < 3 ; j++)
        {
            C[i][j] = A[i][j] + B[i][j];
        }
    }
}
//TEMPLATE END

//APPEND BEGIN
int main() {
    int **A, **B, **C;

    A = new int*[3];
    B = new int*[3];
    C = new int*[3];

    for(int i = 0; i < 3; ++i) A[i] = new int[3];
    for(int i = 0; i < 3; ++i) B[i] = new int[3];
    for(int i = 0; i < 3; ++i) C[i] = new int[3];

    for(int i = 0; i < 3; ++i) {
        for(int j = 0; j < 3; ++j) {
            cin >> A[i][j];
        }
    }
    for(int i = 0; i < 3; ++i) {
        for(int j = 0; j < 3; ++j) {
            cin >> B[i][j];
        }
    }

    add_matrix(A, B, C);

    for(int i = 0; i < 3; ++i) {
        for(int j = 0; j < 3; ++j) {
            cout << C[i][j] << " ";
        }
        cout << endl;
    }

    for(int i = 0; i < 3; ++i) {
        delete[] A[i];
        delete[] B[i];
        delete[] C[i];
    }
    delete[] A;
    delete[] B;
    delete[] C;

    return 0;
}
//APPEND END