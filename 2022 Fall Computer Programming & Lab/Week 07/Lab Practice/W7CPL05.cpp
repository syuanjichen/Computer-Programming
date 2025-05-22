//PREPEND BEGIN
#include <iostream>
#define MOD 1000000007
using namespace std;
//PREPEND END

//TEMPLATE BEGIN
long long int cell(long long int R, long long int N)
{
    long long int times;

	if (N == 0)
		return 1;
	if (N == 1)
		return R;
    
    if(N >= 2)
    {
        if(N % 2 != 0)
        {
            times = (R * (cell(R, N - 1) % MOD) % MOD);
        }
        else
        {
            times = ((cell(R, N / 2) % MOD) * (cell(R, N / 2))) % MOD;
        }
    }

    // I * times % MOD = I * times

    return times;
}
//TEMPLATE END

//APPEND BEGIN
int main(){
	long long int I, R, N;
	cin >> I >> R >> N;

	long long int ans = I;
	ans *= cell(R, N);

	cout << ans % MOD << endl;
	return 0;
}
//APPEND END