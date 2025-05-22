#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>

using namespace std;

int main(void)
{
	int a, b, num1[10] = {0}, num2[10] = {0}, result[11][10] = {0}, i, j, digits, temp_a, temp_b, flag, times = 0;
	cin >> a >> b;
	
	temp_a = a;
	temp_b = b;
	
	digits = (int)log10(a) + (int)log10(b) + 2;
	cout << setw(digits) << setfill(' ') << a << endl;
	cout << setw(digits) << setfill(' ') << b << endl;
	
	for(i = 1 ; i <= digits ; i++)
		cout << '-';
	
	cout << endl;
	
	for(i = 0 ; i < 10 ; i++)
	{
		num1[9 - i] = temp_a % 10;
		if(0 < temp_a)
			flag = 1;
		else
			flag = 0;
		temp_a = temp_a / 10;
		/*if(flag == 0)
		{
			num1[9 - i] = -1;
		}*/
	}
	
	for(i = 0 ; i < 10 ; i++)
	{
		num2[9 - i] = temp_b % 10;
		if(0 < temp_b)
			flag = 1;
		else
			flag = 0;
		temp_b = temp_b / 10;
		/*if(flag == 0)
		{
			num2[9 - i] = -1;
		}*/
	}
	
	for(i = 9 ; i > 0 ; i--)
	{
		/*if(num2[9 - i] == -1)
			break;
		cout << setw(digits - i) << setfill(' ') << a * num2[9 - i] << endl;*/
		for(j = 9 ; j > 0 ; j--)
		{
			result[i][j - times] += num1[j] * num2[i];
			if(result[i][j - times] >= 10)
			{
				result[i - 1][j - times - 1] += result[i][j - times] / 10;
				result[i][j - times] = result[i][j - times] % 10;
			}
		}
		times++;
		cout << endl;
	}
	
	for(i = 9 ; i > 0 ; i--)
	{
		for(j = 9 ; j > 0 ; j--)
		{
			result[10][j] += result[i][j];
			if(result[i][j] > 10)
			{
				result[i - 1][j - 1] = result[i][j] / 10;
				result[i][j] = result[i][j] % 10;
			}
		}
	}
	
	for(i = 9 - digits ; i <= 9 ; i++)
	{
		
	}
	
	for(i = 0 ; i < 10 ; i++)
	{
		for(j = 0 ; j < 10 ; j++)
			cout << result[i][j];
		
		cout << endl;
	}
	
	
	for(i = 1 ; i <= digits ; i++)
		cout << '-';
	cout << endl;
	
	cout << setw(digits) << setfill(' ') << a * b << endl;
	
	return 0;
}
