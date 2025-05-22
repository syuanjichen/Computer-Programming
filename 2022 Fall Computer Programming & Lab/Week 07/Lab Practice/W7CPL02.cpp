#include <iostream>

using namespace std;

void move(int*[], int, int ,int);
void reversal(int*[], int, int, int);

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
        char command;
        int start, end;
        cin >> command >> start >> end;
        
        if(command == 'm' )
            move(arr, len, start, end);
        if(command == 'r')
            reversal(arr, len, start, end);
    }
    
    for(int i = 0; i < len; i++)
    {
        cout << *arr[i] << " ";
    }

    return 0;
}

void move(int *arr[], int len ,int start , int end)
{
    int *num, i, j, ineq = 0, pos = 0;
    num = new int [len];

    for(i = start ; i <= end ; i++)
    {
        (num[i - start]) = *(arr[i]);
    }

    for(i = 0 ; i < len ; i++)
    {
        ineq = 0;

        for(j = 0 ; j <= end - start ; j++)
        {
            if(*(arr[i]) != (num[j]))
                ineq++;
        }

        if(ineq == end - start + 1)
        {
            pos++;
            (num[end - start + pos]) = *(arr[i]);
        }
    }

    for(i = 0 ; i < len ; i++)
    {
        *(arr[i]) = (num[i]);
    }

    delete [] num;
}

void reversal(int *arr[], int len ,int start , int end)
{
    int i, temp;

    for(i = 0 ; i <= (end - start) / 2 ; i++)
    {
        temp = *(arr[start + i]);
        *(arr[start + i]) = *(arr[end - i]);
        *(arr[end - i]) = temp;
    }
}

    /* finish this two function and pend the code of these two functions only
    void move(int *arr[], int len, int start, int end){

    }
    void reversal(int *arr[], int len, int start, int end){

    }
    */