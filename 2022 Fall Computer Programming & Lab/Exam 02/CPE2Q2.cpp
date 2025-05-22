//PREPEND BEGIN
#include <iostream>
using namespace std;

int N;
int circle[1000] = {0};
//PREPEND END

//TEMPLATE BEGIN
void pop_one()
{
    static int pos = 0, times = 0;
    
    int i, temp;
    
    times++;
    
    pos = ((pos % N) + circle[(pos % N)]) % N;
    
    if(circle[pos] != 0)
    	cout << "step " << times << ": pop " << circle[pos] << endl;
    	
    circle[pos] = 0;
    
    for(i = pos ; i < N - 1 ; i++)
    {
    	temp = circle[i];
    	circle[i] = circle[i + 1];
    	circle[i + 1] = temp;
	}
	
	if(circle[pos] == 0)
		pos = 0;
    
    N--;
}
//TEMPLATE END

//APPEND BEGIN
int main()
{
    cin >> N;

    for(int i = 0; i < N; ++i)
	{
        cin >> circle[i];
    }

    int temp_N = N;
    for(int i = 0; i < temp_N; ++i)
	{
        pop_one();
    }

    return 0;
}
//APPEND END
