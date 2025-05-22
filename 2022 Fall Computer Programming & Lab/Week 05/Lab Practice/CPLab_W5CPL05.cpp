#include <iostream>

using namespace std;

int main(void)
{
    int array[100];
	int *arr[100];
	int len;
	cin >> len;
	for(int i = 0; i < len; i++ )
    {
		cin >> array[i];
		arr[i] = &array[i];
	}
		
	int N;
	cin >> N;
	for(int i = 0; i < N; i++)
    {
		char command;
		int start, end;
		cin >> command >> start >> end;
		//PREPEND END
		
        	//TEMPLATE BEGIN
		/*To do*/
        int temp, count, pos;
        int **arraycopy;
        if(command == 'm')
        {
            arraycopy = new int* [len];
            pos = 0;
            for(int k = start ; k <= end ; k++)
                arraycopy[k - start] = arr[k];
            
            for(int j = 0 ; j < len ; j++)
            {
                count = 0;
                for(int k = 0 ; k <= end - start ; k++)
                {
                    if(arr[j] != arraycopy[k])
                        count++;
                }

                if(count == end - start + 1)
                {
                    pos++;
                    arraycopy[end - start + pos] = arr[j];
                }
            }

            for(int j = 0 ; j < len ; j++)
                arr[j] = arraycopy[j];

            delete [] arraycopy;
        }
        if(command == 'r')
        {
            for(int k = start ; k <= (start + end) / 2 ; k++)
            {
                temp = *(arr[k]);
                *(arr[k]) = *(arr[(start + end) - k]);
                *(arr[(start + end) - k]) = temp;
            }
        }

		//TEMPLATE END   
  
	//APPEND BEGIN
    }
	for(int i = 0; i < len; i++)
		cout << *arr[i] << " ";
}