#include <stdio.h>
#include <stdlib.h>

int f(int n){
    static int iCount=0;
    int i,sum=0;
    if(n<2){
        return 0;
    }
    for(i=1;i<=n;i++){
        sum+=i;
    }
    printf("%d\n",i-1);
    iCount+=i-1;

    sum=sum+f(2*n/3);
    return iCount;
}

int main(){
    printf("f(1000)=%d\n",f(1000));
    return 0;
}