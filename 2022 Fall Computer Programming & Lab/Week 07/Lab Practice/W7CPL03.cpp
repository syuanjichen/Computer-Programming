#include <iostream>

using namespace std;

void push(int[], int*, int*, int);
void pop(int[], int*, int*);
void print(int[], int*, int*);

int main()
{
    int N;
    int input;
    cin >> N;
    int stack[10];
    int head = 0;
    int len = 0;
    for(int i = 0; i < N; i++ )
    {
        char command;
        cin >> command;
        if( command == 'p')
        {
            cin >> input;
            push(stack, &len, &head, input);
        }
        if( command == 'd')
        {
            pop(stack, &len, &head);
        }
    }

    print(stack, &head, &len);

    return 0;
}

void push(int stack[], int *len, int *head, int input)
{
    stack[(*head)] = input;
    (*head)++;
    *len = *head;
}

void pop(int stack[], int *len, int *head)
{
    (*head)--;
    *len = *head;
}

void print(int stack[], int *head, int *len)
{
    int i;
    for(i = *(len) - 1 ; i >= 0 ; i--)
        printf("%d ", stack[i]);

    printf("\n");
}
/*finish the following three functions and upload the code of these functions
void push(int stack[], int *len, int *head, int input){

}
void pop(int stack[], int *len, int *head){

}
void print(int stack[], int *head, int *len){
}
*/