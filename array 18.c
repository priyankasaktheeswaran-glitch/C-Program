#include<stdio.h>
int main() {
    int size;
    scanf("%d",&size);
    int arr[size];
    for (int i=0;i<size;i++) {
        scanf("%d",&arr[i]);
    }
    int count=1,max=1;
    for (int i=0;i<size;i++) {
        if (arr[i]>arr[i-1])
            count++;
        else
            count=1;
    }
    if (count>max) {
        max=count;
    }
    printf("%d",max);
    return 0;
}