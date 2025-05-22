#include <iostream>

using namespace std;

int main(void)
{
	int row, column, center_x, center_y, row_dif, column_dif, i, j, bigger;
	int **nums = NULL;
	
	cin >> row >> column;
	cin >> center_x >> center_y;
	
	nums = new int* [row];
	
	for(i = 0 ; i < row ; i++)
	{
		*(nums + i) = new int [column];
	}
	
	for(i = 0 ; i < row ; i++)
	{
		for(j = 0 ; j < column ; j++)
		{
			row_dif = (i > center_x) ? (i - center_x) : (center_x - i);
			column_dif = (j > center_y) ? (j - center_y) : (center_y - j);
			bigger = (row_dif > column_dif) ? (row_dif) : (column_dif);
			
			nums[i][j] = (bigger % 10);
		}
	}
	
	for(i = 0 ; i < row ; i++)
	{
		for(j = 0 ; j < column ; j++)
		{
			cout << nums[i][j] << ((j < column - 1) ? " " : "");
		}
		
		cout << endl;
	}
	
	for(i = 0 ; i < row ; i++)
		delete [] *(nums + i);
		
	delete [] nums;
	
	return 0;
}
