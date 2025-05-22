#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a=0,b=1,i,temp,N=11;
    for(i=2;i<=N;i++)
    {
        temp=b;
        b=a+b;
        a=temp;
        printf("%d\n",b);
    }

    printf("\n");
    system("pause");
    return 0;
}