#include <iostream>
using namespace std;
//PREPEND END

//TEMPLATE BEGIN
void take(unsigned int* box, int value)
{
    int temp_num = *box, number[8] = {0}, divide[8] = {1}, i, j, sum = 0;
    
    for(i = 0 ; i < 8 ; i++)
    {
    	number[i] = temp_num & 15;
    	temp_num = temp_num >> 4;
	}
	
	/*for(i = 0 ; i < 8 ; i++)
	{
		cout << number[i] << " ";
	}*/
	
	for(i = 0 ; i < 8 ; i++)
	{
		if(number[i] == value)
			number[i] = 0;
	}
	
	for(i = 0 ; i < 8 ; i++)
	{
		divide[i] = 1;
		
		for(j = 0 ; j < i ; j++)
		{
			divide[i] *= 16;
		}
	}
	
	for(i = 0 ; i < 8 ; i++)
	{
		sum += number[i] * divide[i];
	}
	
	//cout << sum << endl;
	
	*box = sum; 
}
void push(unsigned int* box, int value)
{
	int temp_num = *box, number[8] = {0}, divide[8] = {1}, i, j, sum = 0, temp, pos = -1;
    
    for(i = 0 ; i < 8 ; i++)
    {
    	number[i] = temp_num & 15;
    	temp_num = temp_num >> 4;
	}
	
	/*for(i = 0 ; i < 8 ; i++)
	{
		cout << number[i] << " ";
	}
	
	cout << endl;*/
	
	if(number[0] == 0)
		number[0] = value;
	else
	{
		for(i = 7 ; i >= 0 ; i--)
		{
			if(number[i] == 0)
			{
				pos = i;
				break;
			}
		}
		
		if(pos != -1)
		{
			for(i = pos ; i > 0 ; i--)
			{
				temp = number[i];
				number[i] = number[i - 1];
				number[i - 1] = temp;
			}
			
			number[0] = value;
		}
		else
		{
			for(i = 7 ; i > 0 ; i--)
			{
				temp = number[i];
				number[i] = number[i - 1];
				number[i - 1] = temp;
			}
			
			number[0] = value;
		}
	}

	for(i = 0 ; i < 8 ; i++)
	{
		divide[i] = 1;
		
		for(j = 0 ; j < i ; j++)
		{
			divide[i] *= 16;
		}
	}
	
	/*cout << endl;

	for(i = 0 ; i < 8 ; i++)
		cout << divide[i] << " ";
		
	cout << endl;*/
	
	for(i = 0 ; i < 8 ; i++)
	{
		sum += number[i] * divide[i];
	}
	
	*box = sum;
}
//TEMPLATE END

//APPEND BEGIN
int main()
{
    unsigned int box;
    cin >> box;

    int N;
    cin >> N;

    for( int i = 0; i < N; i++ )
	{
        char command;
        int value;
        cin >> command >> value;

        if (command == 't')
            take(&box, value);
        if (command == 'p')
            push(&box, value);
    } 

    for( int i = 0; i < 8; i++)
	{
        cout << (box & 15) << " ";
        box = box >> 4;
    }
    cout << endl;
    return 0;
} 
//APPEND END
