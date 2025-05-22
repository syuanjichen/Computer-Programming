#include <stdio.h>
#include <stdlib.h>

int sumpro(int a,int b)
{
    if(a>1)
        return a*b+sumpro(a-1,b);
    else
        return b;
}

int main()
{
    long long int sum=0;
    int m,n,i=0;
    scanf("%d %d",&m,&n);
    printf("%d(1+2+...+%d)=%d\n",n,m,sumpro(m,n));
    return 0;
}
