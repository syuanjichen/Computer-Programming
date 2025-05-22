#include <stdio.h>
#include <stdlib.h>

int f(int a[],int n)
{
    int index=0,i;
    for(i=1;i<n;i++)
        if(a[i]>=a[index])
            index=i;
    return index;
}

int main()
{
    int a[10]={1,3,9,2,5,8,4,9,6,7};
    printf("%d\n",f(a,10));
    system("pause");
    return 0;
}