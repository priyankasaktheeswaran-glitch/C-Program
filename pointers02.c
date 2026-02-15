#include<stdio.h>
int maximum(int *arr,int size) {
    int max=*arr;
    for(int i=1;i<size;i++) {
        if(*(arr+i)>max) {
            max=*(arr+i);
        }
    }
    return max;
}
int main() {
    int size;
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++) {
        scanf("%d",&arr[i]);
    }
    int max=maximum(arr,size);
    printf("%d",max);
    return 0;
}