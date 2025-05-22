#include <iostream>
#include <iomanip>
#include <cstdio>

using namespace std;

int main(void)
{
	int length, *num, i, j, dist[5] = {0}, temp_dist = 0, addr1 = -1, addr2 = -1, md_num = 0, max_dist, temp, node0 = -1, node1 = -1;
	
	cin >> length;
	
	num = new int[length];
	
	for(i = 0 ; i < length ; i++)
	{
		cin >> num[i];
	}
	
	for(j = 0 ; j <= 4 ; j++)
	{
		addr1 = -1;
		addr2 = -1;
		
		for(i = 0 ; i < length ; i++)
		{
			if(num[i] == j)
			{
				if(addr1 == -1)
					addr1 = i;
				else
					addr2 = i;

				dist[j] = addr2 - addr1;
			}
			else
				continue;
		}
			
	}
	
	max_dist = dist[0];
	for(i = 0 ; i <= 4 ; i++)
	{
		if(dist[i] > max_dist)
		{
			max_dist = dist[i];
		}
	}
	
	for(j = 0 ; j <= 4 ; j++)
	{		
		node0 = -1;
		node1 = -1;
		
		for(i = 0 ; i < length ; i++)
		{
			if(num[0] == j && num[length - 1] == j)
			{
				printf("Number %d at index %d and index %d has max length = %d.\n", md_num, 0, length - 1, length - 1);
				break;
			}
		
			if(num[i] == j)
			{
				if(node0 == -1)
					node0 = i;
				else
					node1 = i;
				
				if(node1 - node0 == max_dist)
					printf("Number %d at index %d and index %d has max length = %d.\n", j, node0, node1, max_dist);
				
			}
		}
	}
	
	return 0;
}
