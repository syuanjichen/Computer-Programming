//PREPEND BEGIN
#include <iostream>
using namespace std;

//PREPEND END

//TEMPLATE BEGIN

void rotatepack(char **A, char **B, int m, int n)
{
	int i, j;
	char temp;
	
	for(i = 0 ; i < m ; i++)
	{
		for(j = 0 ; j < n ; j++)
		{
			B[n - 1 - j][i] = A[i][j];
		}
	}
	
	for(j = 0 ; j < m ; j++)
	{
		for(i = 0 ; i < n - 1 ; i++)
		{
			if(B[i][j] == '$' && B[i + 1][j] == '.' )
			{
				temp = B[i][j];
				B[i][j] = B[i + 1][j];
				B[i + 1][j] = temp;
			}
			else
				continue;
		}
	}
}

void printmatrix(char **B, int m, int n)
{
	int i, j;
	
	for(i = 0 ; i < n ; i++)
	{
		for(j = 0 ; j < m ; j++)
		{
			cout << B[i][j] << ((j == m - 1) ? "" : " ");
		}
		
		cout << endl;
	}
}
//TEMPLATE END

//APPEND BEGIN
int main()
{
    int m, n, i, j;
    cin >> m;
    cin >> n;
    char **A, **B;
    A = new char *[m];
    B = new char *[n];
    for (i = 0; i < m; i++) 
	{
        A[i] = new char[n];
    }
    for (i = 0; i < n; i++) 
	{
        B[i] = new char[m];
    }
    for (i = 0; i < m; ++i) 
	{
        for (j = 0; j < n; ++j) 
		{
            cin >> A[i][j];
        }
    }
    rotatepack(A, B, m, n);
    printmatrix(B, m, n);
    
    for (i = 0; i < m; ++i) 
	{
        delete[] A[i];
    }
    for (i = 0; i < n; ++i) 
	{
        delete[] B[i];
    }
    
    delete[] A;
    delete[] B;
    return 0;

}
//APPEND END

