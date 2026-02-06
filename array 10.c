#include<stdio.h>
int main() {
    int size;
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++) {
        scanf("%d",&arr[i]);
    }
    int max=-1;
    for(int i=size-1;i>=0;i--) {
        int current=arr[i];
        arr[i]=max;
        if (current>max) {
            max=current;
        }
    }
    for (int i=0;i<size;i++) {
        printf("%d ",arr[i]);
    }
    return 0;
}