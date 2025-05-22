//PREPEND BEGIN
#include <iostream>
using namespace std;
#define MAX_DIGIT 1000

struct BigNum
{
	int length;
	int digit[MAX_DIGIT];
};
//PREPEND END

//TEMPLATE BEGIN
BigNum BN_init(char* S, int L)
{
    int i;
    BigNum number;
    number.length = L;
    for(i = 0 ; i < MAX_DIGIT ; i++)
    {
    	if(i < MAX_DIGIT - L)
    		number.digit[i] = 0;
    	else
    		number.digit[i] = (S[i - (MAX_DIGIT - L)] - 48);
	}
	
	return number;
}

BigNum BN_add(BigNum BN_1, BigNum BN_2)
{
    int i, digit;
    BigNum add;
    
    digit = (BN_1.length > BN_2.length) ? BN_1.length : BN_2.length;
    
    for(i = 999 ; i >= 0 ; i--)
    {
    	if(i > 999 - digit)
    		add.digit[i] = BN_1.digit[i] + BN_2.digit[i];
    	else
    		add.digit[i] = 0;
	}

    for(i = 999 ; i > 999 - digit ; i--)
    {
    	while(add.digit[i] >= 10)
    	{
    		add.digit[i] -= 10;
    		add.digit[i - 1]++;
		}
	}
	
	return add;
}

BigNum BN_mul(BigNum BN_1, BigNum BN_2)
{
    int i, j, digit, times = -1;
    BigNum mul;
    
    digit = BN_1.length + BN_2.length;
    
    for(j = 999 ; j >= 0 ; j--)
    	mul.digit[j] = 0;
    
    for(j = 999 ; j > 999 - BN_2.length ; j--)
    {
    	times++;
    	for(i = 999 ; i > 999 - BN_1.length ; i--)
    	{
    		mul.digit[i - times] += BN_1.digit[i] * BN_2.digit[j];
		}
	}

    for(i = 999 ; i > 999 - digit ; i--)
    {
    	while(mul.digit[i] >= 10)
    	{
    		mul.digit[i] -= 10;
    		mul.digit[i - 1]++;
		}
	}
	
	return mul;
}

void BN_print(BigNum BN)
{
    int i, pos;
    
    for(i = 0 ; i < MAX_DIGIT ; i++)
    {
    	if(BN.digit[i] != 0)
    	{
    		pos = i;
    		break;
		}
	}
	
	for(i = pos ; i < MAX_DIGIT ; i++)
		cout << BN.digit[i];
		
	cout << endl;
}
//TEMPLATE END

//APPEND BEGIN
int main()
{
    int L_1, L_2;
    cin >> L_1 >> L_2;

    char S_1[1000] = {};
    char S_2[1000] = {};
    cin >> S_1 >> S_2;

    BigNum BN_1 = BN_init(S_1, L_1);
    BigNum BN_2 = BN_init(S_2, L_2);
    BigNum BN_3 = BN_add(BN_1, BN_2);
    BigNum BN_4 = BN_mul(BN_1, BN_2);
    BN_print(BN_1);
    BN_print(BN_2);
    BN_print(BN_3);
    BN_print(BN_4);

    return 0;
}
//APPEND END
