#include <stdio.h>
#include <stdlib.h>

int main(){
    int i,a[101],b[101];
    for(i=1;i<=100;i++){
        b[i]=i;
    }
    a[0]=0;
    for(i=1;i<=100;i++){
        a[i]=b[i]+a[i-1];
    }
    printf("%d\n",a[50]-a[30]);
    return 0;
}