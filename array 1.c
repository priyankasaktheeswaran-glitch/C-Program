#include <stdio.h>
int main () {
    int size;
    scanf("%d", &size);
    int arr[size];
    for (int i=0;i<size;i++) {
        scanf("%d", &arr[i]);
    }
    int max1=0,max2=0;
    for (int k=0;k<size;k++) {
        if (arr[k]>max1) {
            max2=max1;
            max1=arr[k];
        }
        else if (arr[k]<max1 && arr[k]>max2) {
            max2=arr[k];
        }
    }
    printf("%d",max2);
    return 0;
}

