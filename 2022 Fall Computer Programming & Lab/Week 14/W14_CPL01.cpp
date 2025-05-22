//PREPEND BEGIN
#include <iostream>
#include <iomanip>

using namespace std;
//PREPEND END

//TEMPLATE BEGIN
class Matrix
{
    private:
        static const int dim;
        double **M;
    public:
        Matrix()
        {
            int i, j;
            for(i = 0 ; i < 3 ; i++)
            {
                M = new double* [3];
            }
            
            for(j = 0 ; j < 3 ; j++)
            {
                M[j] = new double [3];
            }

            for(i = 0 ; i < 3 ; i++)
            {
                for(j = 0 ; j < 3 ; j++)
                {
                    M[i][j] = 0.0;
                }
            }

        }
        Matrix(double a)
        {
            int i, j;
            for(i = 0 ; i < 3 ; i++)
            {
                M = new double* [3];
            }
            
            for(j = 0 ; j < 3 ; j++)
            {
                M[j] = new double [3];
            }

            for(i = 0 ; i < 3 ; i++)
            {
                for(j = 0 ; j < 3 ; j++)
                {
                    if(i == j)
                        M[i][j] = a;
                    else
                        M[i][j] = 0.0;
                }
            }
        }

    Matrix operator*(const double k)
    {
        Matrix S;
        int i, j;

        for(i = 0 ; i < 3 ; i++)
        {
            for(j = 0 ; j < 3 ; j++)
            {
                S.M[i][j] = k * M[i][j];
            }
        }

        return S;
    }

    friend Matrix operator*(const double k, const Matrix&);

    Matrix operator+(const Matrix B)
    {
        Matrix S;
        int i, j;

        for(i = 0 ; i < 3 ; i++)
        {
            for(j = 0 ; j < 3 ; j++)
            {
                S.M[i][j] = M[i][j] + B.M[i][j];
            }
        }

        return S;
    }

    Matrix operator*(const Matrix& B)
    {
        Matrix S;
        int i, j, k;

        /*for(i = 0 ; i < 3 ; i++)
        {
            for(j = 0 ; j < 3 ; j++)
            {
                cout << M[i][j] << " ";
            }

            cout << endl;
        }*/

        for(i = 0 ; i < 3 ; i++)
        {
            for(j = 0 ; j < 3 ; j++)
            {
                for(k = 0 ; k < 3 ; k++)
                {
                    S.M[i][j] += M[i][k] * B.M[k][j];
                }
            }
        }

        return S;
    }

    Matrix operator+=(const Matrix B)
    {
        Matrix S;
        int i, j;

        for(i = 0 ; i < 3 ; i++)
        {
            for(j = 0 ; j < 3 ; j++)
            {
                S.M[i][j] = M[i][j];
            }
        }

        for(i = 0 ; i < 3 ; i++)
        {
            for(j = 0 ; j < 3 ; j++)
            {
                M[i][j] = (S.M[i][j] + B.M[i][j]);
            }
        }

        return *this;
    }

    Matrix operator*=(const Matrix B)
    {
        Matrix S;
        int i, j, k;

        for(i = 0 ; i < 3 ; i++)
        {
            for(j = 0 ; j < 3 ; j++)
            {
                for(k = 0 ; k < 3 ; k++)
                {
                    S.M[i][j] += M[i][k] * B.M[k][j];
                }
            }
        }

        for(i = 0 ; i < 3 ; i++)
        {
            for(j = 0 ; j < 3 ; j++)
                M[i][j] = S.M[i][j];
        }

        return *this;
    }

    double& operator()(const int m, const int n)
    {
        return M[m][n];
    }

    Matrix operator=(const Matrix& A)
    {
        int i, j;

        for(i = 0 ; i < 3 ; i++)
        {
            for(j = 0 ; j < 3 ; j++)
                M[i][j] = A.M[i][j];
        }

        return *this;
    }


    friend ostream & operator<<(ostream &output, const Matrix &N)
    {
        int i, j;
        for(i = 0 ; i < 3 ; i++)
        {
            for(j = 0 ; j < 3 ; j++)
            {
                output << fixed << setprecision(2) << N.M[i][j] << " ";
            }

            output << endl;
        }

        return output;
    }

    friend Matrix transpose(const Matrix& A);
};

Matrix operator*(const double k, const Matrix& C)
{
    Matrix S;

    int i, j;

    for(i = 0 ; i < 3 ; i++)
    {
        for(j = 0 ; j < 3 ; j++)
        {
            S.M[i][j] = k * C.M[i][j];
        }
    }

    return S;
}

Matrix transpose(const Matrix& A)
{
    Matrix AT;

    int i, j;

    for(i = 0 ; i < 3 ; i++)
    {
        for(j = 0 ; j < 3 ; j++)
        {
            AT.M[j][i] = A.M[i][j];
        }
    }

    return AT;
}
//TEMPLATE END

//APPEND BEGIN
const int Matrix::dim = 3;

int main()
{
    Matrix a(0); // Zero matrix
    Matrix b(1); // Identity matrix
    Matrix c; // Null constructor
    
    //cout << a << endl;
    //cout << b << endl;
    //cout << c << endl;
    
    Matrix d(1);
    //cout << d * 2.0 << endl;
    
    Matrix e(1);
    //cout << 3.0 * e << endl;

    Matrix f(1);
    Matrix g(1);

    //cout << f + g << endl;
    //cout << f << endl;
    
    Matrix h(1);
    h(1, 0) = 2;

    //cout << h << endl;

    Matrix i(1);
    i(0, 1) = 2;
    i(0, 2) = 3;

    //cout << i * i << endl;
    //cout << i << endl;

    Matrix j(1);
    j(0, 1) = 2;
    j(0, 2) = 3;

    j += j;
    //cout << j << endl;

    j *= j;
    //cout << j << endl;

    Matrix x(1);
    Matrix y(x * 2.0);  // Copy constructor
    Matrix z = (x + x); // Copy constructor
    Matrix w;

    y += y; // Matrix a will not be modified, thanks to deep copy
    w = z;  // Copier
    z += z; // Matrix d will not be modified, thanks to deep copy

    //cout << x << endl;
    //cout << y << endl;
    //cout << z << endl;
    cout << w << endl;

    Matrix v(1);
    v(0, 1) = 2;
    v(0, 2) = 3;

    //cout << v << endl;
    //cout << transpose(v) << endl;
    
    return 0;
}
//APPEND END