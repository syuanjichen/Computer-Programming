#include <iostream>

using namespace std;

int main(void)
{
    int *x = NULL, *y = NULL, *z = NULL;
	int a, b, m, f;

	cin >> a >> b;

	if(a >= b)
	{
        f = a;
        m = b;
    }
    else
    {
        f = b;
        m = a;
    }

    x = new int [f];
    y = new int [f];
    z = new int [f];

    for(int i = 0 ; i < f ; i++)
    {
        *(x + i) = 0;
        *(y + i) = 0;
    }

    for(int i = 0; i < a ; i++)
    {
        cin >> x[i];
    }

    for(int i = 0 ; i < b ; i++)
    {
       cin >> y[i];
    }

    for(int i = 0 ; i < f ; i++)
    {
        z[i] = x[i] + y[i];
    }


	for(int i = 0 ; i < f ; i++)
	{
		cout << z[i] << " ";
	}
	cout << "\n";


	delete [] x;
	delete [] y;
	delete [] z;

    return 0;
}
