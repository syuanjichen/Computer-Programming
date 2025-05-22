//PREPEND BEGIN
#include <iostream>
#include <iomanip>
using namespace std;
int product(int a, int b);
double divide(int a, int b);
void sum(int a, int b);
int main()
{
	int a,b;
	cin >>a>>b;
	int p,c;
	double d;
	p = product(a, b);
	d = divide(a, b);	
        cout << p <<endl;
        cout << fixed << setprecision(2) << d <<endl;
        sum(a, b);
	return 0;
}
//PREPEND END
//TEMPLATE BEGIN
int product(int a, int b)
{
    int p;
    p = a * b;
    return p;
}

double divide(int a, int b)
{
    double d;
    d = (double)a / b;
    return d;
}

void sum(int a, int b)
{
    cout << a + b << endl;
}
//TEMPLATE END
//APPEND BEGIN
//APPEND END