#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A[5],B[5],i,c;
    for(i=1;i<5;i++)
    {
        A[i]=2+4*i;
        B[i]=5*i;
    }
    c=0;
    for(i=1;i<5;i++)
    {
        if(B[i]>A[i])
            c=c+(B[i]%A[i]);
        else
            c=1;
    }
    printf("%d\n",c);
    system("pause");
    return 0;
}