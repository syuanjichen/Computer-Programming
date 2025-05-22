#include <iostream>
#include <iomanip>
#include <cstdio>

using namespace std;

int main(void)
{
	int d, m1, m2, i, j;
    int **a=NULL;
    int **b=NULL;
//PREPEND END
//TEMPLATE BEGIN
	cin >> m1;
	a = new int* [m1];
	for(i = 0 ; i < m1 ; i++)
		*(a + i) = new int[m1];
		
	for(i = 0 ; i < m1 ; i++)
	{
		for(j = 0 ; j < m1 ; j++)
		{
			cin >> a[i][j];
		}
	}
	
	cin >> m2;
	b = new int*[m2];
	for(i = 0 ; i < m2 ; i++)
		*(b + i) = new int[m2];
		
	for(i = 0 ; i < m2 ; i++)
	{
		for(j = 0 ; j < m2 ; j++)
		{
			cin >> b[i][j];
		}
	}
	
	cin >> d;
	
	if(d == 1)
	{
		for(i = 0 ; i < m2 ; i++)
		{
			for(j = 0 ; j < m2 ; j++)
				a[i][j] += b[i][j];
		}
	}
	else
	{
		for(i = m2 ; i > 0 ; i--)
		{
			for(j = m2 ; j > 0 ; j--)
				a[m1 - i][m1 - j] += b[m2 - i][m2 - j];
		}
	}
    //To do
//TEMPLATE END
//APPEND BEGIN
    for(i=0;i<m1;i++)
	{
        for(j=0;j<m1;j++)
		{
            cout << a[i][j] <<" ";
        }
        cout << "\n";
    }
    for(i=0;i<m1;i++) delete [] a[i];
    for(i=0;i<m2;i++) delete [] b[i];
    delete [] a;
    delete [] b;
        return 0;
}
