#include <stdio.h>
int main() {
    int size;
    scanf("%d",&size);
    int arr[size],min=1000000;
    for (int i=0;i<size;i++) {
        scanf("%d",&arr[i]);
        if (arr[i]>0 && arr[i]<min) {
            min=arr[i];
        }
    }
    if (min==1000000)
        printf("no positive");
    else
        printf("%d",min);
}

