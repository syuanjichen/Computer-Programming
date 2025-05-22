#include <stdio.h>
#include <stdlib.h>

int recur(int n,int m)
{
    if(n<10)
    {
        if(m<10)
            return n+m;
        else
            return recur(n,m-2)+m;
    }
    else
    {
        return recur(n-1,m)+n;
    }
}

int main()
{
    printf("%d\n",recur(13,15));
    system("pause");
    return 0;
}