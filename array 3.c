#include<stdio.h>
int main() {
    int size;
    scanf("%d",&size);
    int arr[size];
    for (int i=0;i<size;i++) {
        scanf("%d",&arr[i]);
    }
    int sorted=1;
    for (int j=0;j<size-1;j++) {
        if (arr[j]>arr[j+1]) {
            sorted=0;
            break;
        }
    }
    if (sorted==1) {
        printf("Yes");
    }
    else {
        printf("No");
    }
    return 0;
}