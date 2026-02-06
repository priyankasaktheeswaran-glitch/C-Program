#include<stdio.h>
int main() {
    int size;
    scanf("%d",&size);
    int arr[size];
    for (int i=0;i<size;i++) {
        scanf("%d",&arr[i]);
    }
    int X,count=0;
    scanf("%d",&X);
    for (int i=0;i<size;i++) {
        if (arr[i]==X) {
            count++;
        }
    }
    printf("%d",count);
    return 0;
}
