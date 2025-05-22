#include<iostream>
using namespace std;
//PREPEND END

//TEMPLATE BEGIN
int my_max_index(double a[], int length = 3)
{
    int pos = 1, i;
    double max = a[0];

    for(i = 1 ; i < length ; i++)
    {
        if(a[i] >= max)
        {
            max = a[i];
            pos = i + 1;
        }

    }

    return pos;
}

int my_max_index(double a[], double b[], int length_a, int length_b)
{
    int i, pos = 1;
    double max = a[0];

    for(i = 1 ; i < length_a ; i++)
    {
        if(a[i] >= max)
        {
            max = a[i];
            pos = i + 1;
        }
    }

    for(i = length_a ; i < length_a + length_b ; i++)
    {
        if(b[i - length_a] >= max)
        {
            max = b[i - length_a];
            pos = i + 1;
        }
    }

    return pos;
}

//TEMPLATE END

//APPEND BEGIN
int main(void)
{
    int N_a, N_b;

    cin >> N_a >> N_b;

    double *a = new double[N_a];
    double *b = new double[N_b];

    for(int i = 0; i < N_a ; i++)
        cin >> a[i];
    for(int i = 0; i < N_b ; i++)
        cin >> b[i];
    cout << "Maximum in array [a1,a2,a3] is at position: ";
    cout << my_max_index(a) << endl;
    cout << "Maximum in array [b1,b2,b3] is at position: ";
    cout << my_max_index(b) << endl;
    cout << "Maximum in array a is at position: ";
    cout << my_max_index(a, N_a) << endl;
    cout << "Maximum in array b is at position: ";
    cout << my_max_index(b, N_b) << endl;
    cout << "Maximum in array (a + b) is at position: ";
    cout << my_max_index(a, b, N_a, N_b) << endl;

    delete [] a;
    delete [] b;

    return 0;
}
//APPEND END