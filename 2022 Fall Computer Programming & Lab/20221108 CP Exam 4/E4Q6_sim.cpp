#include <iostream>

using namespace std;

int factorial(int n)
{
	if(n == 0)
		return 1;
	else
		return n * factorial(n - 1);
}

int main(void)
{
	int row, column, **map, i, j, pos_x, pos_y, max, deduct;
	
	cin >> row >> column;
	
	map = new int* [row];
	
	for(i = 0 ; i < row ; i++)
		map[i] = new int [column];
		
	for(i = 0 ; i < row ; i++)
	{
		for(j = 0 ; j < column ; j++)
		{
			cin >> map[i][j];
		}
	}
	
	for(i = 0 ; i < row ; i++)
	{
		for(j = 0 ; j < column ; j++)
		{
			if(map[i][j] == -1)
			{
				pos_x = i;
				pos_y = j;
			}
		}
	}
	
	max = factorial(row + column - 2) / (factorial(row - 1) * factorial(column - 1));
	deduct = (factorial(pos_x + pos_y) / (factorial(pos_x) * factorial(pos_y))) * (factorial(row + column - pos_x - pos_y - 2)/(factorial(row - pos_x - 1) * factorial(column - pos_y - 1)));
	
	max = max - deduct;
	
	if(row == 1 && column == 1)
	{
		cout << "Number of shortest pathes = " << 1 << endl;
		cout << "Shortest path length = " << (row + column - 2) << endl;
	}
	else
	{
		cout << "Number of shortest pathes = " << max << endl;
		cout << "Shortest path length = " << (row + column - 2) << endl;
	}	
	
	
	return 0;
}
