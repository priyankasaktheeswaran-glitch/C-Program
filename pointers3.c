#include <stdio.h>
int main() {
    int size;
    printf("enter the size of array:");
    scanf("%d",&size);
    int arr[size];
    printf("enter the elements of array:");
    for(int i=0;i<size;i++) {
        scanf("%d",&arr[i]);
    }
    int sum=0;
    int *p=arr;
    for(int i=0;i<size;i++) {
        if (*(p+i)>=50) {
            break;
        }
        sum+=*(p+i);
    }
    printf("ouput: %d",sum);
    return 0;
}