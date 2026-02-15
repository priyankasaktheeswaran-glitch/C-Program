#include <stdio.h>
int rev(int *arr,int size) {
    for(int i=size-1;i>=0;i--) {
       printf("%d ",arr[i];
    }
    return rev;
}
int main() {
    int size;
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++) {
        scanf("%d",&arr[i]);
    }
    rev(arr,size);
    return 0;
}