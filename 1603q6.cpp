#include <stdio.h>
#include <stdlib.h>

struct element
{
    char data;
    int next;
};

void RemoveNextElement(element list [], int current)
{
    int i;
    current--;
    if(list[current].next!=-1)
        list[current].next=list[list[current].next-1].next;
    for(i=0;i<=2;i++)
        printf("%c-%d\n",list[i].data,list[i].next);
}

int main()
{
    struct element list[]={{'a',2},{'b',-1},{'c',1}};
    int i;
    for(i=0;i<=2;i++)
        printf("%c-%d\n",list[i].data,list[i].next);
    RemoveNextElement(list,3);

    printf("\n");
    system("pause");
    return 0;
}