#include <stdio.h>
int main() {
    int size;
    printf("enter the size of array:");
    scanf("%d",&size);
    int array[size];
    printf("enter the element:");
    for(int i=0;i<size;i++) {
        scanf("%d",&array[i]);
    }
    int *p=array;
    for(int i=0;i<size;i++) {
        if(i%2==0) {
            *(p+i)*=2;
        }
    }
    printf("output:");
    for(int i=0;i<size;i++) {
        printf("%d ",*(p+i));
    }
    return 0;
}