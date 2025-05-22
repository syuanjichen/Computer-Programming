//PREPEND BEGIN
#include <iostream>
using namespace std;
//PREPEND END

//TEMPLATE BEGIN
template <typename T, typename U>
void add_matrix(T A, U B, double** C)
{
    int i, j;
    for(i = 0 ; i < 3 ; i++)
    {
        for(j = 0 ; j < 3 ; j++)
        {
            C[i][j] = (double)A[i][j] + (double)B[i][j];
        }
    }
}
//TEMPLATE END

//APPEND BEGIN
int main() {
    // Matrix A, B, C
    int **A = new int*[3];
    for(int i = 0; i < 3; ++i) A[i] = new int[3];
    float **B = new float*[3];
    for(int i = 0; i < 3; ++i) B[i] = new float[3];
    double **C = new double*[3];
    for(int i = 0; i < 3; ++i) C[i] = new double[3];

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
    cout << endl;

    for(int i = 0; i < 3; ++i) {
        delete[] A[i];
        delete[] B[i];
        delete[] C[i];
    }
    delete[] A;
    delete[] B;
    delete[] C;

    // Matrix D, E, F
    float **D = new float*[3];
    for(int i = 0; i < 3; ++i) D[i] = new float[3];
    double **E = new double*[3];
    for(int i = 0; i < 3; ++i) E[i] = new double[3];
    double **F = new double*[3];
    for(int i = 0; i < 3; ++i) F[i] = new double[3];

    for(int i = 0; i < 3; ++i) {
        for(int j = 0; j < 3; ++j) {
            cin >> D[i][j];
        }
    }
    for(int i = 0; i < 3; ++i) {
        for(int j = 0; j < 3; ++j) {
            cin >> E[i][j];
        }
    }

    add_matrix(D, E, F);

    for(int i = 0; i < 3; ++i) {
        for(int j = 0; j < 3; ++j) {
            cout << F[i][j] << " ";
        }
        cout << endl;
    }

    for(int i = 0; i < 3; ++i) {
        delete[] D[i];
        delete[] E[i];
        delete[] F[i];
    }
    delete[] D;
    delete[] E;
    delete[] F;

    return 0;
}
//APPEND END