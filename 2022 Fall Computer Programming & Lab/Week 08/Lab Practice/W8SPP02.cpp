#include <iostream>

using namespace std;

void gcd(int b)
{
    static int count = 0, prev_gcd;
    if(count == 0)
        prev_gcd = b;
    else
    {
        while(prev_gcd != 0 && b != 0)
        {
            if(prev_gcd >= b)
                prev_gcd %= b;
            else
                b %= prev_gcd;
        }
    }

    if(prev_gcd == 0)
        prev_gcd = b;

    if(count > 0)
        cout << prev_gcd << endl;

    count++;
}

int main(void)
{
	int n, i, *a;
	cin >> n;
	a = new int[n];
	for(i = 0 ; i < n ; i++)
    {
		cin >> a[i];
	}
	for(i = 0 ; i < n ; i++)
    {
		gcd(a[i]);		
	}
	delete [] a;
    return 0;
}