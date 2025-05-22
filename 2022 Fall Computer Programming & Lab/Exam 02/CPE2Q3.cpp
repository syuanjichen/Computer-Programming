#include <iostream>

using namespace std;

int power(int x, int n)
{
	if(n == 0)
		return 1;
	else
		return x * power(x, n - 1);
}

int main(void)
{
	int n, i, j, times, *num1, *num2;
	
	cin >> n;
	
	num1 = new int [power(2, n - 1)];
	num2 = new int [power(2, n - 1)];
	
	for(i = 0 ; i < 2 ; i++)
	{
		cin >> num1[i];
	}
	
	times = 2;
	
	if(n >= 3)
	{
		for(times = 2 ; times <= n - 1 ; times++)
		{
			for(i = 0 ; i < power(2, times) ; i++)
			{
				cin >> num2[i];
				
				num2[i] = num2[i] + num1[i / 2];
			}
			
			for(i = 0 ; i < power(2, times) ; i++)
				num1[i] = num2[i];
		}
	}
	
	for(i = 0 ; i < power(2, n - 1) ; i++)
	{
		cout << num1[i] << " ";
	}
	
	cout << endl;
	
	return 0;
	
}
