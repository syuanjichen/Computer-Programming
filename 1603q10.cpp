#include <stdio.h>
#include <stdlib.h>

int g(int a)
{
    if(a>1)
        return g(a-2)+3;
    return a;
}

int main()
{
    printf("g(13)=%d\n",g(13));
    system("pause");
    return 0;
}