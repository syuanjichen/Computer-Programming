//PREPEND BEGIN
#include <iostream>
#include <iomanip>

using namespace std;
//PREPEND END

//TEMPLATE BEGIN
class Matrix
{
    private:
        double **A;
        static const int dim;

    public:
        Matrix()
        {
            int i, j;
            A = new double* [dim];

            for(i = 0 ; i < dim ; i++)
                A[i] = new double [dim];

            for(i = 0 ; i < dim ; i++)
            {
                for(j = 0 ; j < dim ; j++)
                {
                    if(i == j)
                        A[i][j] = 0;
                }
            }
        }
        Matrix(double n)
        {
            int i, j;
            A = new double* [dim];

            for(i = 0 ; i < dim ; i++)
                A[i] = new double [dim];

            for(i = 0 ; i < dim ; i++)
            {
                for(j = 0 ; j < dim ; j++)
                {
                    if(i == j)
                        A[i][j] = n;
                }
            }
        }

        Matrix operator+(const Matrix &B)
        {
            Matrix S;
            int i, j;

            for(i = 0 ; i < 3 ; i++)
            {
                for(j = 0 ; j < 3 ; j++)
                {
                    S.A[i][j] = A[i][j] + B.A[i][j];
                }
            }

            return S;
        }

        Matrix operator*(double n)
        {
            Matrix S;
            int i, j;

            for(i = 0 ; i < dim ; i++)
            {
                for(j = 0 ; j < dim ; j++)
                {
                    S.A[i][j] = n * A[i][j];
                }
            }

            return S;
        }

    friend ostream & operator<<(ostream &output, const Matrix &M)
    {
        int i, j;

        for(i = 0 ; i < dim ; i++)
        {
            for(j = 0 ; j < dim ; j++)
                output << fixed << setprecision(2) << M.A[i][j] << " ";

            output << endl;
        }

        return output;
    }

    friend Matrix operator*(double, const Matrix&);

};

Matrix operator*(double n, const Matrix& M)
{
    Matrix S;
    int i, j;

    for(i = 0 ; i < Matrix::dim ; i++)
    {
        for(j = 0 ; j < Matrix::dim ; j++)
        {
            S.A[i][j] = n * M.A[i][j];
        }
    }

    return S;
}
//TEMPLATE END

//APPEND BEGIN
const int Matrix::dim = 3;

int main()
{
    Matrix a(0); // Zero matrix
    Matrix b(1); // Identity matrix
    Matrix c; // Null constructor
    
    cout << a << endl;
    cout << b << endl;
    cout << c << endl;
    
    Matrix d(1);
    cout << d * 2.0 << endl;
    
    Matrix e(1);
    cout << 2.0 * e << endl;

    Matrix f(1);
    Matrix g(1);

    cout << f + g << endl;
    cout << f << endl;
    
    return 0;
}
//APPEND END