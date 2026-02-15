#include <stdio.h>
int sum(int *arr,int size) {
    int sum=0;
    for(int i=0;i<size;i++) {
        sum=sum+arr[i];
    }
    return sum;
}
int main() {
    int size;
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++) {
        scanf("%d",&arr[i]);
    }
    int total=sum(arr,size);
    printf("%d",total);
    return 0;
}