//APCS Final Test: Switch and Spin Matrices//
#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Input Part
    int i,j,k,temp,Row,Column,ActionCount;
    int A[10][10],C[10],TEMP[10][10];
    scanf("%d %d %d",&Row,&Column,&ActionCount);
    for(i=0;i<Row;i++)
    {
        for(j=0;j<Column;j++)
        {
            printf("The element of A[%d][%d]=",i,j);
            scanf("%d",&A[i][j]);
        }
    }

    for(i=0;i<ActionCount;i++)
    {
        printf("The activity %d = ",i);
        scanf("%d",C[i]);
    }
    //End of Input Part

    //Switch and Spin//
    for(i=0;i<ActionCount;i++)
    {
        if(C[i]==1)
        {
            for(j=0;j<Row;j++)
            {
                for(k=0;k<Column;j++)
                {
                    TEMP[j][k]=A[j][k];
                    A[j][k]=A[Row-j-1][Column-k-1];
                    A[Row-j-1][Column-k-1]=TEMP[j][k];
                }
            }
        }

        if(C[i]==0)
        {
            for(j=0;j<Row;j++)
            {
                for(k=0;k<Column;k++)
                {
                    TEMP[j][k]=A[j][k];
                    A[k][Column-j]=TEMP[j][k];
                }
            }

            temp=Row;
            Row=Column;
            Column=temp;
        }
    }
    //End of Switch and Spin

    //Output
    printf("%d %d\n",Row,Column);
    for(i=0;i<Row;i++)
    {
        for(j=0;j<Row;j++)
        {
            printf("%d ",A[i][j]);
        }
        printf("\n");
    }
    //End of Output

    return 0;
}