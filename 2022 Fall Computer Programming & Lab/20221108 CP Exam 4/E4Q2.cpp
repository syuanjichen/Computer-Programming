#include <iostream>

using namespace std;

int main(void)
{
	char *arr;
	int n, i, j, *del, count, pos = 0, index;
	
	cin >> n;
	
	arr = new char[n + 1];
	del = new int [n];
	
	for(i = 0 ; i < n ; i++)
		cin >> arr[i];
		
	for(i = 0 ; i < n - 1 ; i++)
	{
		count = 0;
		
		if(arr[i] == arr[i + 1])
		{
			count = 1;
			j = i;
			while(arr[j] == arr[j + 1])
			{
				count++;
				j++;
			}
		}
		
		if(count == 3)
		{
			pos++;
			del[pos - 1] = i;
		}
		
		i = i + count;
	}
	
	for(i = 0 ; i < pos ; i++)
	{
		for(j = del[i] ; j < del[i] + 3 ; j++)
		{
			arr[j] = '-';
		}
	}
	
	for(i = n - 1 ; i >= 0 ; i--)
	{
		if(arr[i] != '-')
		{
			index = i;
			break;
		}	
	}
	
	for(i = 0 ; i <= index ; i++)
	{
		if(arr[i] != '-')
			cout << arr[i] << ((i < index) ? " " : "");
	}
	
	cout << endl;
	
	return 0;
}
