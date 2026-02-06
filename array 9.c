#include<stdio.h>
int main() {
    int size;
    scanf("%d",&size);
    int arr[size],leaders[size];
    for(int i=0;i<size;i++) {
        scanf("%d",&arr[i]);
    }
    int max=arr[size-1],k=0;
    leaders[k++]=max;
    for(int i=size-2;i>=0;i--) {
        if(arr[i]>max) {
            max=arr[i];
            leaders[k++]=max;
        }
    }
    for (int i=k-1;i>=0;i--) {
        printf("%d ",leaders[i]);
    }
    return 0;
}