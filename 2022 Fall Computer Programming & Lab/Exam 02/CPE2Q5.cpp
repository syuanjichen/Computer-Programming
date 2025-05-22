#include <iostream>

using namespace std;

void encrypt(char *arr, int ini, int end)
{
	int index;
	
	if(ini == end)
	{
		index = (64 + ini);
		cout << (char)index;
	}
	else if(ini = end - 1 && (10 * ini + end) < 27)
	{
		index = 64 + 10 * ini + end;
		cout << (char)index;
	}
	else
	{
		encrypt(arr, ini + 1, end);
		encrypt(arr, ini, end - 1);
	}
		
}

int main(void)
{
	char *numbers;
	
	int n;
	
	cin >> n;
	
	numbers = new char [n + 1];
	
	cin >> numbers;
	
	encrypt(numbers, 0, n - 1);
	
	return 0;
}
