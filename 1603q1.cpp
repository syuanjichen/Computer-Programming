#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,k=4,m=1;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=k;j++)
            printf(" ");
        for(j=1;j<=m;j++)
            printf("*");
        printf("\n");
        k=k-1;
        m=m+2;
    }

    system("pause");
    return 0;
}