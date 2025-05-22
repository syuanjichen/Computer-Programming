#include <stdio.h>
#include <stdlib.h>

int f1(int a[], int value){
    int r_value=-1;
    int i=0;
    while(i<100){
        if(a[i]==value){
            r_value=i;
            break;
        }
        i++;
    }
    return i+1;
}

int f2(int a[],int value){
    int r_value=-1;
    int low=0,high=99;
    int i=0,mid;
    while(low<=high){
        mid=(low+high)/2;
        i++;
        if(a[mid]==value){
            r_value=mid;
            break;
        }
        else if(a[mid]<value){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }return i;
}

int main(){
    int a[100],k;
    for(k=0;k<100;k++)
        a[k]=3*k+1;

    printf("%d\n",f1(a,100));
    printf("%d\n",f2(a,100));
    return 0;
}
