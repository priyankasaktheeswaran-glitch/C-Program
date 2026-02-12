#include<stdio.h>
int main() {
    int size;
    printf("Enter the size of array:");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the elements:");
    for(int i=0;i<size;i++) {
        scanf("%d",&arr[i]);
    }
    int index;
    printf("Enter the starting pointer index:");
    scanf("%d",&index);
    int *p=arr;
    printf("output:");
    for(int i=index;i<size;i++) {
        printf("%d ",*(p+i));
    }
    return 0;
}