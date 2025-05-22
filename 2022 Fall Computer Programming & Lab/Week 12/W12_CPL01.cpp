//PREPEND BEGIN
#include <cstring>
#include <iostream>

using namespace std;

void move(int *arr[], int len, int start, int end)
{
	int *move_segment[end - start+1];
	int *front[start];
	int *behind[len-end-1];
	for( int i = 0; i < end - start + 1; i++ )
    {
		move_segment[i] = arr[start + i];
	}
	for( int i = 0; i < start; i++)
    {
		front[i] = arr[i];
	}
	for( int i = 0; i < len - end - 1; i++)
    {
		behind[i] = arr[end + 1 + i];
	}
	for( int i = 0; i < end - start + 1; i++ )
    {
		arr[i] = move_segment[i];
	}
	for( int i = 0; i < start; i++)
    {
		arr[end - start + 1 + i] = front[i];
	}
	for( int i = 0; i < len - end - 1; i++)
    {
		arr[end + 1 + i] = behind[i];
	}
}

void reversal(int *arr[], int len, int start, int end)
{
	for( int i = 0; i < (end - start + 1) / 2; i++ )
    {
		int *temp = arr[start+i];
		arr[start+i] = arr[end-i];
		arr[end-i] = temp;
	}
}

int main()
{
	int array[100];
	int *arr[100];
	int len;
	cin >> len;
	for( int i = 0; i < len; i++ )
    {
		cin >> array[i];
		arr[i] = &array[i];
	}
		
	int N;
	cin >> N;
	for( int i = 0; i < N; i++)
    {
		char command[10];
		int start, end;
		cin >> command >> start >> end;
        
        void (*p)(int**, int, int, int);

        if(strlen(command) == 4)
        {
            p = move;
        }
        else if(strlen(command) == 8)
        {
            p = reversal;
        }
//PREPEND END

//TEMPLATE BEGIN
                // To Do: declare a function pointer p and point to the assigned function according to the command
//TEMPLATE END

//APPEND BEGIN
	        p(arr, len, start, end);
	}
	
	for( int i = 0; i < len; i++)
		cout << *arr[i] << " ";
}
//APPEND END