#include <iostream>

using namespace std;

int main(void)
{
	int people, parties, i, j;
	bool *cases, zero = 0;
	int **list_of_party;
	
	cin >> people >> parties;
	
	cases = new bool [people];
	cases[0] = true;
	
	list_of_party = new int* [parties];
	
	for(i = 0 ; i < parties ; i++)
	{
		list_of_party[i] = new int [2];
	}
	
	for(i = 0 ; i < parties ; i++)
	{
		for(j = 0 ; j < 2 ; j++)
		{
			cin >> list_of_party[i][j];
		}
	}
	
	for(i = 0 ; i < parties ; i++)
	{
		for(j = 0 ; j < 2 ; j++)
		{
			if(list_of_party[i][j] == 0)
			{
				zero = 1;
			}
		}
	}
	
	if(zero == 0)
		cout << "0" << endl;
		
	return 0;
}
