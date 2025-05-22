#include <iostream>

using namespace std;

int main(void)
{
    int re1, im1, re2, im2;
    char u;

    cin >> re1 >> im1;
    cin >> u;
    cin >> re2 >> im2;

    struct complex
    {
        int real;
        int imaginary;
    };

    complex sum, diff;

    sum.real = re1 + re2;
    sum.imaginary = im1 + im2;

    diff.real = re1 - re2;
    diff.imaginary = im1 - im2;

    if(u == '+')
    {
        cout << "sum of two complex values is (" << sum.real << ") + j(" << sum.imaginary << ")"<< endl;
    }
    else if(u == '-')
    {
		cout << "difference of two complex values is (" << diff.real << ") + j(" << diff.imaginary << ")"<< endl;
	}

    return 0;
}