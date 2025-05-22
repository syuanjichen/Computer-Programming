#include<iostream>
using namespace std;
//PREPEND END

//TEMPLATE BEGIN
int ways(int a, int b)
{
    int i, j, **num;

    num = new int* [a];
    
    for(i = 0 ; i < a ; i++)
        *(num + i) = new int [b];

    for(i = 0 ; i < a ; i++)
        num[i][0] = 1;
    
    for(j = 0 ; j < b ; j++)
        num[a - 1][j] = 1;

    
    for(j = 1 ; j < b ; j++)
    {
        for(i = a - 2 ; i >= 0 ; i--)
            num[i][j] = num[i][j - 1] + num[i + 1][j];
    }
    
    return num[0][b - 1];
}
//TEMPLATE END

//APPEND BEGIN
int main()
{	
	int a, b;
	cin >> a >> b;
	cout << ways(a,b);
    return 0;
}
//APPEND END