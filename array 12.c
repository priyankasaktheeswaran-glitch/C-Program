#include <stdio.h>
int main() {
    int size;
    scanf("%d",&size);
    int arr[size],store;
    for (int i=0;i<size;i++) {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&store);
    for (int i=0;i<size;i++) {
        for (int j=i+1;j<size;j++) {
            if (arr[i]+arr[j]==store) {
                printf("pair found:%d %d\n",arr[i],arr[j]);
            }
        }
    }
    if (!store) {
        printf("no pair");
    }
    return 0;
}
